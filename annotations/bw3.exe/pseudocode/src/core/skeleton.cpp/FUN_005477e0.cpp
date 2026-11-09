// Name: core_skeleton.cpp_FUN_005477e0
// Address: 005477e0
// Address Range: [[005477e0, 005477f8]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_005477e0(undefined4 param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_005477e0(uint param_1)

{
  int iVar1;
  
  do {
    iVar1 = _fgetc(param_1);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
