// Name: core_xform.cpp_FUN_00592720
// Address: 00592720
// Address Range: [[00592720, 00592759]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_00592720(int param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_00592720(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x2c);
  *unaff_ESI = *(uint *)(param_1 + 0xc);
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
