#ifndef __accelsearch_cmd__
#define __accelsearch_cmd__
/*****
  command line parser interface -- generated by clig 
  (http://wsd.iitb.fhg.de/~geg/clighome/)

  The command line parser `clig':
  (C) 1995-2004 Harald Kirsch (clig@geggus.net)
*****/

typedef struct s_Cmdline {
  /***** -lobin: The first Fourier frequency in the data file */
  char lobinP;
  int lobin;
  int lobinC;
  /***** -numharm: The number of harmonics to sum (power-of-two) */
  char numharmP;
  int numharm;
  int numharmC;
  /***** -zmax: The max (+ and -) Fourier freq deriv to search */
  char zmaxP;
  int zmax;
  int zmaxC;
  /***** -sigma: Cutoff sigma for choosing candidates */
  char sigmaP;
  float sigma;
  int sigmaC;
  /***** -rlo: The lowest Fourier frequency to search */
  char rloP;
  double rlo;
  int rloC;
  /***** -rhi: The highest Fourier frequency to search */
  char rhiP;
  double rhi;
  int rhiC;
  /***** -flo: The lowest frequency (Hz) (of the highest harmonic!) to search */
  char floP;
  double flo;
  int floC;
  /***** -fhi: The highest frequency (Hz) (of the highest harmonic!) to search */
  char fhiP;
  double fhi;
  int fhiC;
  /***** -inmem: Make full f-fdot plane in memory.  Very fast, but only for short time series. */
  char inmemP;
  /***** -photon: Data is poissonian so use freq 0 as power normalization */
  char photonP;
  /***** -median: Use block-median power normalization (default) */
  char medianP;
  /***** -locpow: Use double-tophat local-power normalization (not usually recommended) */
  char locpowP;
  /***** -zaplist: A file of freqs+widths to zap from the FFT (only if the input file is a *.[s]dat file) */
  char zaplistP;
  char* zaplist;
  int zaplistC;
  /***** -baryv: The radial velocity component (v/c) towards the target during the obs */
  char baryvP;
  double baryv;
  int baryvC;
  /***** -harmpolish: Constrain harmonics to be harmonically related during polishing (on by default) */
  char harmpolishP;
  /***** -noharmpolish: Do not use 'harmpolish' by default */
  char noharmpolishP;
  /***** -noharmremove: Do not remove harmonically related candidates (never removed for numharm = 1) */
  char noharmremoveP;
  /***** uninterpreted command line parameters */
  int argc;
  /*@null*/char **argv;
  /***** the whole command line concatenated */
  char *full_cmd_line;
} Cmdline;


extern char *Program;
extern void usage(void);
extern /*@shared*/Cmdline *parseCmdline(int argc, char **argv);

extern void showOptionValues(void);

#endif

