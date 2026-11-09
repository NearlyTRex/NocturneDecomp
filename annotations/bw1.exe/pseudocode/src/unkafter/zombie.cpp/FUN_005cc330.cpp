// Name: unkafter_zombie.cpp_FUN_005cc330
// Address: 005cc330
// Address Range: [[005cc330, 005cc366]]
// Convention: unknown
// Signature: undefined4 unkafter_zombie_cpp_FUN_005cc330(undefined4 *param_1)

#include "nocturne.h"

uint unkafter_zombie_cpp_FUN_005cc330(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int aiStack_28 [9];
  
  iVar1 = unkafter_2d_cpp_FUN_005cdb80(aiStack_28);
  if (499 < iVar1) {
    aiStack_28[0] = aiStack_28[0] + 1;
  }
  uVar2 = unkafter_zombie_cpp_FUN_005cc6e0(aiStack_28);
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar2;
  }
  return uVar2;
}
