//
//  Seda.h
//  Seda
//  @author Nima

// CPP magic to include the file named "Seda_$(CONFIGURATION).h"
#define str_(x) #x
#define str2_(x) str_(x)
#define cat_(x,y) x ## y
#define cat2_(x,y) cat_(x,y)
#define ENVIRONMENT_HEADER str2_(cat2_(Seda_, CONFIGURATION.h))
#include ENVIRONMENT_HEADER

#define kNumberBuffers 3

#define SR 44100
#define FREQ (SR*8/18)
#define BIT_RATE (SR/36)
#define SAMPLE_PER_BIT (SR/BIT_RATE)
#define SAMPLE_PER_BYTE (8 * SAMPLE_PER_BIT)
#define BARKER_LEN 13
#define CORR_MAX_COEFF 0.9

//#define SHOW_FRSedaES
//#define SHOW_CORR
//#define SHOW_BASEBAND
//#define SHOW_ENCODED
