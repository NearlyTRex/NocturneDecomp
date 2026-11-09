// Name: core_smiley.cpp_FUN_0056ccc0
// Address: 0056ccc0
// Address Range: [[0056ccc0, 0056cd8e]]
// Convention: unknown
// Signature: undefined4 core_smiley_cpp_FUN_0056ccc0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_smiley_cpp_FUN_0056ccc0(int param_1,int param_2)

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
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_2 + 0x154) + 0xf0))(param_2);
    return 1;
  }
  core_xform_cpp_FUN_005b5080(&DAT_02c8af28,_DAT_02c5fce0 * 0x30 + param_1 + 0xfd8);
  puVar3 = &stack0xffffffd4;
  uStack_2c = uStack_14;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_actor_cpp_FUN_00408b40(param_1,puVar3);
  iVar1 = param_2 + 0x30;
  uStack_20 = uStack_38;
  (&stack0xffffffe4)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffcc + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fStack_1c = fStack_1c + _DAT_005f29ff;
  (**(code **)(*(int *)(param_2 + 0x154) + 0x68))(param_2,&stack0xffffffe0,iVar1);
  return 1;
}
