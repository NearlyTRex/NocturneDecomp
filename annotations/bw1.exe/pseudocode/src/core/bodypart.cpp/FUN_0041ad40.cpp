// Name: core_bodypart.cpp_FUN_0041ad40
// Address: 0041ad40
// Address Range: [[0041ad40, 0041aee6]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_0041ad40(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_FUN_0041ad40(int param_1)

{
  int iVar1;
  CBox *this_ptr;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_104c [999];
  CVector3f *position;
  CVector3f *orientation;
  CVector3f *extents;
  float *pfVar5;
  float volume;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  float fStack_1c;
  float afStack_18 [4];
  float fStack_8;
  
  bVar4 = 0;
  if ((2 < *(int *)(param_1 + 0x174)) && (0 < *(int *)(param_1 + 0x180))) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    puVar2 = (uint *)&stack0xffffff6c;
    puVar3 = &stack0xffffff84;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_34 = local_7c + fStack_70;
    afStack_30[0] = fStack_78 + fStack_6c;
    afStack_30[1] = fStack_74 + fStack_68;
    fStack_4c = local_7c + fStack_70;
    *(float *)((int)&stack0xffffffb8 + (uint)bVar4 * -8) = afStack_30[(uint)bVar4 * -2];
    *(float *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar5 = &stack0xffffffa8;
    afStack_18[2] = fStack_4c * _DAT_005d452d;
    afStack_18[3] = fStack_48 * _DAT_005d452d;
    fStack_8 = fStack_44 * _DAT_005d452d;
    fStack_58 = fStack_4c * _DAT_005d452d;
    *(float *)((int)&stack0xffffffac + (uint)bVar4 * 0xfffffffe * 4) =
         afStack_18[(uint)bVar4 * -2 + 3];
    afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
         afStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    core_actor_cpp_FUN_00408b40(param_1,pfVar5);
    extents = &CStack_28;
    volume = 5.0;
    CStack_40.x = fStack_64;
    *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8);
    *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_1c = fStack_70 - local_7c;
    orientation = (CVector3f *)(param_1 + 0x30);
    afStack_18[0] = fStack_6c - fStack_78;
    position = &CStack_40;
    this_ptr = (CBox *)(param_1 + 0xcd0);
    afStack_18[1] = fStack_68 - fStack_74;
    CStack_28.x = fStack_70 - local_7c;
    *(float *)((int)&CStack_28 + (uint)bVar4 * -8 + 4) = afStack_18[(uint)bVar4 * -2];
    *(float *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_box_cpp_CBox_setupCorners_FUN_0041dac0(this_ptr,position,orientation,extents,volume);
    return;
  }
  *(uint *)(param_1 + 0x70) = 2;
  core_bodypart_cpp_FUN_00418d00(param_1,0,0);
  puVar2 = (uint *)(param_1 + 0x168);
  if (puVar2 != (uint *)&DAT_02c8af28) {
    *puVar2 = _DAT_02c8af28;
    *(uint *)(param_1 + 0x16c) = _DAT_02c8af2c;
    *(uint *)(param_1 + 0x170) = _DAT_02c8af30;
  }
  if ((uint *)(param_1 + 0x15c) != puVar2) {
    *(uint *)(param_1 + 0x15c) = *puVar2;
    *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x16c);
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x170);
  }
  return;
}
