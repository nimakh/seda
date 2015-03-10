//
//  ADSharedMacros.h
//  AppLibrary
//  @author Nima

#ifdef ADUseLogs
#define ADLog(format, ...) NSLog(format, ## __VA_ARGS__)
#else
#define ADLog(format, ...)
#endif

#ifdef ADUseAsserts
#define ADAssert(format, ...) NSAssert(format, ## __VA_ARGS__)
#else
#define ADAssert(format, ...)
#endif

#ifdef ADUseIgnoreUnusedParameters
#define ADIgnoreUnusedParameter(parameter) (void)parameter;
#else
#define ADIgnoreUnusedParameter(parameter)
#endif
