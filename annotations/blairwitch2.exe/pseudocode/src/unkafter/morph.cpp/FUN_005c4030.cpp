// Name: unkafter_morph.cpp_FUN_005c4030
// Address: 005c4030
// Address Range: [[005c4030, 005c4066]]
// Convention: unknown
// Signature: undefined4 unkafter_morph_cpp_FUN_005c4030(undefined4 *param_1)

#include "nocturne.h"

uint unkafter_morph_cpp_FUN_005c4030(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int aiStack_28 [9];
  
  iVar1 = unkafter_2d_cpp_FUN_005c5880(aiStack_28);
  if (499 < iVar1) {
    aiStack_28[0] = aiStack_28[0] + 1;
  }
  uVar2 = unkafter_morph_cpp_FUN_005c43e0(aiStack_28);
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar2;
  }
  return uVar2;
}
