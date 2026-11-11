// Name: core_dtrace.cpp_FUN_00472470
// Address: 00472470
// Address Range: [[00472470, 004724bd]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_00472470(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_00472470(int param_1)

{
  int iVar1;
  
  iVar1 = calloc
                    (0x58,*(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44) *
                          *(int *)(param_1 + 0x48));
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dtrace.cpp";
  _DAT_01d046a4 = 0x88;
  core_main_c_FUN_004e4500("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
