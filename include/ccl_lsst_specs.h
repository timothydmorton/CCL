#pragma once
#include "ccl_core.h"
double dNdz_clustering(double z);
double dNdz_sources_k1(double z, void* params);
double dNdz_sources_k2(double z, void* params);
double dNdz_sources_k0pt5(double z, void* params);
double sigmaz_clustering(double z);
double sigmaz_sources(double z);
double bias_clustering(ccl_cosmology * cosmo, double a); 
double dNdz_sources_basic(double z, void* params);
double dNdz_sources_unnormed(double z, void *params);
double dNdz_sources_tomog(double z, void * dNdz_params, double bin_zmin, double bin_zmax);
double photoz(double z_ph, void * params);
static double norm_integrand(double z, void* params);
double dNdz_clustering_tomog(double z, double bin_zmin, double bin_zmax);
static double norm_integrand_clustering(double z, void* params);
double photoz_clustering(double z_ph, void *params);

// Structures for the parameters of integrands related to the WL source redshift distribution
struct dNdz_sources_params{
        int type_; // Sets which Chang et al. 2013 dNdz you are using; pick 1 for k=5, 2 for k=1, and 3 for k=2.
};
struct pz_params{
	double z_true; // Gives the true redshift at which to evaluate 
};
struct norm_params{
	double bin_zmin_;
	double bin_zmax_;
	double type_;
};
