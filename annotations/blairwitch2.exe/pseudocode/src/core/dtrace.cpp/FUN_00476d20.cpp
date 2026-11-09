// Name: core_dtrace.cpp_FUN_00476d20
// Address: 00476d20
// Address Range: [[00476d20, 00476d3d]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_00476d20(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_00476d20(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x18);
  *unaff_ESI = *(uint *)(param_1 + 0x10);
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
