// Name: core_dtrace.cpp_FUN_0048a960
// Address: 0048a960
// Address Range: [[0048a960, 0048a9ad]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_0048a960(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_0048a960(int param_1)

{
  int iVar1;
  
  iVar1 = calloc
                    (0x58,*(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44) *
                          *(int *)(param_1 + 0x48));
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dtrace.cpp";
  _DAT_01d1d404 = 0x88;
  core_main_c_FUN_005030e0("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
