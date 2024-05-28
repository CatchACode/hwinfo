// Copyright (c) Leon Freist <freist@informatik.uni-freiburg.de>
// This software is part of HWBenchmark

#include "hwinfo/platform.h"

#ifdef HWINFO_APPLE

#include <mach/mach.h>
#include <mach/mach_time.h>
#include <math.h>
#include <pthread.h>
#include <sys/sysctl.h>

#include <algorithm>
#include <string>
#include <vector>

#include "hwinfo/cpu.h"
#include "hwinfo/cpuid.h"
#include "hwinfo/utils/stringutils.h"
#include "hwinfo/utils/filesystem.h"

namespace hwinfo {

std::vector<CPU> getAllCPUs() {
  return {};
}

std::vector<int64_t> CPU::currentClockSpeed_MHz() const {
  std::vector<int64_t> freqs {};
  return std::move(freqs);
}

std::vector<double> CPU::threadsUtilisation() const {
#if defined(HWINFO_X86)
  return {};
#else
  return {};
#endif
}
}  // namespace hwinfo

#endif  // HWINFO_APPLE