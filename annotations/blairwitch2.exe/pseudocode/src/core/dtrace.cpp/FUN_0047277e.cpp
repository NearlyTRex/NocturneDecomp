// Name: core_dtrace.cpp_FUN_0047277e
// Address: 0047277e
// Address Range: [[0047277e, 0047277f]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_0047277e(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_0047277e(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_005b8df8(*(int *)(param_1 + 4) * 0x38);
  *(uint *)(param_1 + 8) = uVar1;
  iVar2 = FUN_005b8df8(*(uint *)(param_1 + 4));
  *(int *)(param_1 + 0xc) = iVar2;
  if ((*(int *)(param_1 + 8) != 0) && (iVar2 != 0)) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dtrace.cpp";
  _DAT_01d046a4 = 0xf9;
  core_main_c_FUN_004e4500("CDemonRaytrace::allocTriList - Out of memory!");
  return;
}
