// Name: core_dtrace.cpp_FUN_004734e0
// Address: 004734e0
// Address Range: [[004734e0, 0047352d]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_004734e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_004734e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a4b20
                    (0x58,*(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44) *
                          *(int *)(param_1 + 0x48));
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dtrace.cpp";
  _DAT_01d71de4 = 0x88;
  core_main_c_FUN_004e4330("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
