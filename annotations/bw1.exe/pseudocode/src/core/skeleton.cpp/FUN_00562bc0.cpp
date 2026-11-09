// Name: core_skeleton.cpp_FUN_00562bc0
// Address: 00562bc0
// Address Range: [[00562bc0, 00562bd8]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00562bc0(undefined4 param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00562bc0(uint param_1)

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
