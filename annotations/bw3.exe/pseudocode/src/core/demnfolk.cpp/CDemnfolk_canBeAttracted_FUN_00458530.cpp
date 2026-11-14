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
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  byte bVar2;
  float afStackY_106c [1014];
  float *pfVar3;
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
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  UOrientationVector UStack_30;
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [3];
  
  bVar2 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  afStack_14[2] = (float)core_motion_cpp_FUN_004fc350(this_ptr_00,0xd);
  if (afStack_14[2] <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
            (this_ptr_00,this_ptr->bone_indices[1],&CStack_24);
  fStack_84 = CStack_24.x;
  *(uint *)((int)&stack0xffffff80 + (uint)bVar2 * -8) =
       *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
            (this_ptr_00,this_ptr->bone_indices[2],&CStack_54);
  fVar1 = fStack_84;
  afStack_44[2] = CStack_54.x;
  afStack_44[(uint)bVar2 * -2 + 3] = *(float *)((int)&CStack_54 + (uint)bVar2 * -8 + 4);
  afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       *(float *)((int)&CStack_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  fStack_18 = fVar1 + afStack_44[2];
  afStack_14[0] = fStack_80 + afStack_44[3];
  afStack_14[1] = fStack_7c + fStack_34;
  fStack_48 = fVar1 + afStack_44[2];
  afStack_44[(uint)bVar2 * -2] = afStack_14[(uint)bVar2 * -2];
  afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       afStack_14[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  pfVar3 = &stack0xffffff94;
  fStack_78 = fStack_48 * _DAT_005ba8de;
  fStack_74 = afStack_44[0] * _DAT_005ba8de;
  fStack_70 = afStack_44[1] * _DAT_005ba8de;
  fStack_6c = fStack_48 * _DAT_005ba8de;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffff8c + (uint)bVar2 * -8);
  afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -8] =
       *(float *)((int)&stack0xffffff90 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar3);
  fStack_60 = UStack_30.vec.x;
  *(uint *)(acStack_5c + (uint)bVar2 * -8) =
       *(uint *)((int)&UStack_30 + (uint)bVar2 * -8 + 4);
  *(uint *)(acStack_58 + ((uint)bVar2 * -2 + (uint)bVar2 * -2) * 4) =
       *(uint *)((int)&UStack_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if ((CDemonActor *)&fStack_60 != grabber) {
    *(float *)grabber->actor_name = fStack_60;
    *(char (*) [4])(grabber->actor_name + 4) = acStack_5c;
    *(char (*) [4])(grabber->actor_name + 8) = acStack_58;
  }
  return 1;
}
