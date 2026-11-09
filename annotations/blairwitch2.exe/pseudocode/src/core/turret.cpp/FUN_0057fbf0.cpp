// Name: core_turret.cpp_FUN_0057fbf0
// Address: 0057fbf0
// Address Range: [[0057fbf0, 0057fc10]]
// Convention: unknown
// Signature: void core_turret_cpp_FUN_0057fbf0(int param_1)

#include "nocturne.h"

void core_turret_cpp_FUN_0057fbf0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar1 = *(uint *)(param_1 + 0x9c0);
  uVar2 = *(uint *)(param_1 + 0x9c4);
  *unaff_ESI = *(uint *)(param_1 + 0x9bc);
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
