// Name: core_bodypart.cpp_FUN_004178c0
// Address: 004178c0
// Address Range: [[004178c0, 00417a66]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_004178c0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_FUN_004178c0(int param_1)

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
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  byte auStack_28 [8];
  float afStack_20 [4];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar4 = 0;
  if ((2 < *(int *)(param_1 + 0x2d0)) && (0 < *(int *)(param_1 + 0x2dc))) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
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
    afStack_54[2] = local_7c + fStack_70;
    afStack_54[(uint)bVar4 * -2 + 3] = afStack_30[(uint)bVar4 * -2];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar5 = &fStack_58;
    fStack_10 = afStack_54[2] * _DAT_005cbfb6;
    fStack_c = afStack_54[3] * _DAT_005cbfb6;
    fStack_8 = fStack_44 * _DAT_005cbfb6;
    fStack_58 = afStack_54[2] * _DAT_005cbfb6;
    afStack_54[(uint)bVar4 * -2] = afStack_20[(uint)bVar4 * -2 + 5];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 6];
    core_actor_cpp_FUN_00408d70(param_1,pfVar5);
    extents = (CVector3f *)auStack_28;
    volume = 5.0;
    CStack_40._0_4_ = CStack_64._0_4_;
    *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_64 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    afStack_20[1] = fStack_70 - local_7c;
    orientation = (CVector3f *)(param_1 + 0x30);
    afStack_20[2] = fStack_6c - fStack_78;
    position = &CStack_40;
    this_ptr = (CBox *)(param_1 + 0x10e0);
    afStack_20[3] = fStack_68 - fStack_74;
    auStack_28._0_4_ = fStack_70 - local_7c;
    *(float *)((int)auStack_28 + (uint)bVar4 * -8 + 4) = afStack_20[(uint)bVar4 * 0xfffffffe + 2];
    *(float *)((int)auStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 3];
    core_box_cpp_CBox_setupCorners_FUN_005b1c80(this_ptr,position,orientation,extents,volume);
    return;
  }
  *(uint *)(param_1 + 0x70) = 2;
  core_bodypart_cpp_FUN_00415890(param_1,0,0);
  puVar2 = (uint *)(param_1 + 0x2c4);
  if (puVar2 != (uint *)&DAT_0265370c) {
    *puVar2 = _DAT_0265370c;
    *(uint *)(param_1 + 0x2c8) = _DAT_02653710;
    *(uint *)(param_1 + 0x2cc) = _DAT_02653714;
  }
  if ((uint *)(param_1 + 0x2b8) != puVar2) {
    *(uint *)(param_1 + 0x2b8) = *puVar2;
    *(uint *)(param_1 + 700) = *(uint *)(param_1 + 0x2c8);
    *(uint *)(param_1 + 0x2c0) = *(uint *)(param_1 + 0x2cc);
  }
  return;
}
