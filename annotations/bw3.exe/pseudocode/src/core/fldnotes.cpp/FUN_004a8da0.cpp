// Name: core_fldnotes.cpp_FUN_004a8da0
// Address: 004a8da0
// Address Range: [[004a8da0, 004a8dcb]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a8da0(int *param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004a8da0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      (**(code **)(*(int *)(piVar2[1] + 0x14) + 4))(piVar2[1]);
      piVar2 = piVar2 + 1;
    } while (iVar1 < *param_1);
  }
  return;
}
