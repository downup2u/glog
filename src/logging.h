#if defined(__APPLE__)
#include "mac/glog/logging.h"
#elif defined(__linux__)
#include "linux/glog/logging.h"
#else
#include "windows/glog/logging.h"
//#error generate config.h for your platform
#endif