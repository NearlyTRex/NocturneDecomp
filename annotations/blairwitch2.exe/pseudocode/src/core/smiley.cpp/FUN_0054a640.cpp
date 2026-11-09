// Name: core_smiley.cpp_FUN_0054a640
// Address: 0054a640
// Address Range: [[0054a640, 0054a70e]]
// Convention: unknown
// Signature: undefined4 core_smiley_cpp_FUN_0054a640(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_smiley_cpp_FUN_0054a640(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  float afStackY_1020 [1013];
  uint *puVar3;
  uint uStack_38;
  uint uStack_2c;
  uint uStack_20;
  float fStack_1c;
  uint uStack_14;
  
  bVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_2 + 0x2b0) + 0xf8))(param_2);
    return 1;
  }
  core_xform_cpp_FUN_00591530(&DAT_0265370c,_DAT_02628618 * 0x30 + param_1 + 0x1134);
  puVar3 = &stack0xffffffd4;
  uStack_2c = uStack_14;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_actor_cpp_FUN_00408d70(param_1,puVar3);
  iVar1 = param_2 + 0x30;
  uStack_20 = uStack_38;
  (&stack0xffffffe4)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffcc + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fStack_1c = fStack_1c + _DAT_005e7805;
  (**(code **)(*(int *)(param_2 + 0x2b0) + 0x70))(param_2,&stack0xffffffe0,iVar1);
  return 1;
}
