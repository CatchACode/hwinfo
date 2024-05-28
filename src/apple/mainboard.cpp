// Copyright (c) Leon Freist <freist@informatik.uni-freiburg.de>
// This software is part of HWBenchmark

#include "hwinfo/platform.h"

#ifdef HWINFO_APPLE

#include "hwinfo/mainboard.h"

namespace hwinfo {

MainBoard::MainBoard() {
  _vendor = "<unknown>";
  _name = "<unknown>";
  _serialNumber = "<unknown>";
  _version = "<unknown>";
}

}  // namespace hwinfo

#endif  // HWINFO_APPLE