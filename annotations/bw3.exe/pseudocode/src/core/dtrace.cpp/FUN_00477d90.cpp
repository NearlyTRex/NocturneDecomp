// Name: core_dtrace.cpp_FUN_00477d90
// Address: 00477d90
// Address Range: [[00477d90, 00477dad]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_00477d90(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_FUN_00477d90(int param_1)

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
