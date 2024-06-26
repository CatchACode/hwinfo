// Copyright (c) Leon Freist <freist@informatik.uni-freiburg.de>
// This software is part of HWBenchmark

#include "hwinfo/platform.h"

#ifdef HWINFO_APPLE

#include <sys/sysctl.h>

#include <string>
#include <vector>

#include "hwinfo/ram.h"

namespace hwinfo {

// _____________________________________________________________________________________________________________________
Memory::Memory() {
  // TODO: get information for actual memory modules (DIMM)
  Module module;
  module.vendor = "<unknown>";
  module.name = "<unknown>";
  module.serial_number = "<unknown>";
  module.model = "<unknown>";
  module.id = 0;
  module.total_Bytes = 0;
  module.frequency_Hz = -1;
  _modules.push_back(module);
}

int64_t Memory::available_Bytes() const {
  return -1;
}

int64_t Memory::free_Bytes() const {
  return -1;
}

}  // namespace hwinfo

#endif  // HWINFO_APPLE