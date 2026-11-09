// Name: unkafter_asgaya.cpp_FUN_005aff40
// Address: 005aff40
// Address Range: [[005aff40, 005aff9e]]
// Convention: unknown
// Signature: undefined4 unkafter_asgaya_cpp_FUN_005aff40(int param_1)

#include "nocturne.h"

uint unkafter_asgaya_cpp_FUN_005aff40(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = unkafter_asgaya_cpp_FUN_005afed4(4);
    if (iVar1 == 0) {
      return 0;
    }
    unkafter_2d_cpp_FUN_005b0148(4);
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    iVar1 = unkafter_asgaya_cpp_FUN_005afed4(7);
    if (iVar1 == 0) {
      return 0;
    }
    unkafter_2d_cpp_FUN_005b0148(7);
  }
  if ((iVar1 != 2) && (iVar1 != 3)) {
    return 1;
  }
  return 0;
}
