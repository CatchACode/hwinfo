// Copyright (c) Leon Freist <freist@informatik.uni-freiburg.de>
// This software is part of HWBenchmark

#include "hwinfo/platform.h"

#ifdef HWINFO_APPLE

#include <sys/sysctl.h>

#include <sstream>
#include <string>

#include "hwinfo/os.h"

namespace hwinfo {

OS::OS() {
  _name = "<unknown>";
  _version = "<unknown>";
  _kernel = "<unknown>";
  {
    char16_t dummy = 0x0102;
    _bigEndian = ((char*)&dummy)[0] == 0x01;
    _littleEndian = ((char*)&dummy)[0] == 0x02;
  }

}
}  // namespace hwinfo

#endif  // HWINFO_APPLE
