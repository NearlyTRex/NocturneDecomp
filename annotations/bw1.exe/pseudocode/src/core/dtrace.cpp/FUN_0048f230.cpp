// Name: core_dtrace.cpp_FUN_0048f230
// Address: 0048f230
// Address Range: [[0048f230, 0048f24d]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_0048f230(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_0048f230(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x24);
  *unaff_ESI = *(uint *)(param_1 + 0x1c);
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
