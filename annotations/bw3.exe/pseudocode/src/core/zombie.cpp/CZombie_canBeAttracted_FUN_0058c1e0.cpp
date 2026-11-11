// Name: core_zombie.cpp_CZombie_canBeAttracted_FUN_0058c1e0
// Address: 0058c1e0
// Address Range: [[0058c1e0, 0058c312]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_0058c1e0(CZombie *this_ptr,CVector3f *out_attract_position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_0058c1e0(CZombie *this_ptr,CVector3f *out_attract_position)

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
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar3 = 0;
  pCVar1 = &(this_ptr->base).base.model;
  fStack_c = (float)core_motion_cpp_FUN_004fc350(pCVar1,5);
  if (fStack_c <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_FUN_0054dcc0(pCVar1,this_ptr->bone_indices[1]);
  fStack_84 = fStack_24;
  *(float *)((int)&stack0xffffff80 + (uint)bVar3 * -8) = afStack_50[(uint)bVar3 * -2 + 0xc];
  *(float *)((int)&stack0xffffff84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
  core_skeleton_cpp_FUN_0054dcc0(pCVar1,this_ptr->bone_indices[2]);
  fVar2 = fStack_84;
  fStack_3c = fStack_54;
  afStack_50[(uint)bVar3 * -2 + 6] = afStack_50[(uint)bVar3 * -2];
  afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  fStack_18 = fVar2 + fStack_3c;
  fStack_14 = fStack_80 + fStack_38;
  fStack_10 = fStack_7c + fStack_34;
  afStack_50[2] = fVar2 + fStack_3c;
  afStack_50[(uint)bVar3 * -2 + 3] = afStack_50[(uint)bVar3 * -2 + 0xf];
  afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10];
  pfVar4 = &stack0xffffff94;
  fStack_78 = afStack_50[2] * _DAT_005d88f3;
  fStack_74 = afStack_50[3] * _DAT_005d88f3;
  fStack_70 = fStack_40 * _DAT_005d88f3;
  fStack_6c = afStack_50[2] * _DAT_005d88f3;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffff8c + (uint)bVar3 * -8);
  afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -5] =
       *(float *)((int)&stack0xffffff90 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar4);
  CStack_60.x = fStack_30;
  *(float *)((int)&CStack_60 + (uint)bVar3 * -8 + 4) = afStack_50[(uint)bVar3 * -2 + 9];
  *(float *)((int)&CStack_60 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
  if (&CStack_60 != out_attract_position) {
    out_attract_position->x = CStack_60.x;
    out_attract_position->y = CStack_60.y;
    out_attract_position->z = CStack_60.z;
  }
  return 1;
}
