// Name: core_ground.cpp_FUN_004ca7c0
// Address: 004ca7c0
// Address Range: [[004ca7c0, 004ca7f9]]
// Convention: unknown
// Signature: char * core_ground_cpp_FUN_004ca7c0(uint param_1)

#include "nocturne.h"

char * core_ground_cpp_FUN_004ca7c0(uint param_1)

{
  if (param_1 < 2) {
    if (param_1 == 1) {
      return &DAT_005d9665;
    }
  }
  else {
    if (param_1 < 3) {
      return &DAT_005d9671;
    }
    if (6 < param_1) {
      if (param_1 < 8) {
        return &DAT_005d9676;
      }
      if (param_1 == 0xe) {
        return "leaves";
      }
    }
  }
  return &DAT_005d967b;
}
