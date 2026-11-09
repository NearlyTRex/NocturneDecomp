// Name: core_set.cpp_FUN_005326b0
// Address: 005326b0
// Address Range: [[005326b0, 005327b7]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_005326b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_005326b0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  uStack_1c = *(int *)(param_1 + 0x108);
  uStack_18 = *(int *)(param_1 + 0x10c);
  uStack_20 = *(int *)(param_1 + 0x110);
  if (param_1 == _DAT_0207bab8) {
    uStack_1c = (uStack_1c * 3) / 2;
    uStack_18 = (uStack_18 * 3) / 2;
    uStack_20 = (uStack_20 * 3) / 2;
  }
  if (param_1 == _DAT_0207babc) {
    fVar1 = (float10)1 / (float10)_DAT_0207bac0;
    fVar3 = (float10)uStack_1c * (float10)_DAT_0207bac0;
    fVar2 = (float10)uStack_18 * fVar1;
    fVar1 = (float10)uStack_20 * fVar1;
    round();
    uStack_1c = (int)ROUND(fVar3);
    round();
    round();
    uStack_18 = (int)ROUND(fVar2);
    uStack_20 = (int)ROUND(fVar1);
  }
  core_set_cpp_FUN_0053b100(g_CDemonSetPtr,uStack_1c,uStack_18,uStack_20);
  return;
}
