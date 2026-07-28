// Name: core_skeleton.cpp_FUN_00517190
// Address: 00517190
// Address Range: [[00517190, 005171a8]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00517190(_FILE *param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00517190(_FILE *param_1)

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
