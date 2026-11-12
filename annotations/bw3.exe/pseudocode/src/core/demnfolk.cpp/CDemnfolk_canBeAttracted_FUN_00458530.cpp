// Name: core_demnfolk.cpp_CDemnfolk_canBeAttracted_FUN_00458530
// Address: 00458530
// Address Range: [[00458530, 00458662]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_canBeAttracted_FUN_00458530(CDemnfolk *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_demnfolk_cpp_CDemnfolk_canBeAttracted_FUN_00458530(CDemnfolk *this_ptr,CDemonActor *grabber)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  byte bVar3;
  float afStackY_106c [1014];
  float *pfVar4;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  char acStack_5c [4];
  char acStack_58 [4];
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  UOrientationVector UStack_30;
  float fStack_24;
  float afStack_20 [4];
  float fStack_10;
  float fStack_c;
  
  bVar3 = 0;
  pCVar1 = &(this_ptr->base).base.model;
  fStack_c = (float)core_motion_cpp_FUN_004fc350(pCVar1,0xd);
  if (fStack_c <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_FUN_0054dcc0(pCVar1,this_ptr->bone_indices[1]);
  fStack_84 = fStack_24;
  *(float *)((int)&stack0xffffff80 + (uint)bVar3 * -8) = afStack_20[(uint)bVar3 * -2];
  *(float *)((int)&stack0xffffff84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  core_skeleton_cpp_FUN_0054dcc0(pCVar1,this_ptr->bone_indices[2]);
  fVar2 = fStack_84;
  fStack_3c = fStack_54;
  afStack_50[(uint)bVar3 * -2 + 6] = afStack_50[(uint)bVar3 * -2];
  afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  afStack_20[2] = fVar2 + fStack_3c;
  afStack_20[3] = fStack_80 + fStack_38;
  fStack_10 = fStack_7c + fStack_34;
  afStack_50[2] = fVar2 + fStack_3c;
  afStack_50[(uint)bVar3 * -2 + 3] = afStack_20[(uint)bVar3 * -2 + 3];
  afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  pfVar4 = &stack0xffffff94;
  fStack_78 = afStack_50[2] * _DAT_005ba8de;
  fStack_74 = afStack_50[3] * _DAT_005ba8de;
  fStack_70 = fStack_40 * _DAT_005ba8de;
  fStack_6c = afStack_50[2] * _DAT_005ba8de;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffff8c + (uint)bVar3 * -8);
  afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -5] =
       *(float *)((int)&stack0xffffff90 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar4);
  fStack_60 = UStack_30.vec.x;
  *(uint *)(acStack_5c + (uint)bVar3 * -8) =
       *(uint *)((int)&UStack_30 + (uint)bVar3 * -8 + 4);
  *(uint *)(acStack_58 + ((uint)bVar3 * -2 + (uint)bVar3 * -2) * 4) =
       *(uint *)((int)&UStack_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if ((CDemonActor *)&fStack_60 != grabber) {
    *(float *)grabber->actor_name = fStack_60;
    *(char (*) [4])(grabber->actor_name + 4) = acStack_5c;
    *(char (*) [4])(grabber->actor_name + 8) = acStack_58;
  }
  return 1;
}
