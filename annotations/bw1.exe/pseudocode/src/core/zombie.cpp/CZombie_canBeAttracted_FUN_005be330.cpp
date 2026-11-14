// Name: core_zombie.cpp_CZombie_canBeAttracted_FUN_005be330
// Address: 005be330
// Address Range: [[005be330, 005be462]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_005be330(CZombie *this_ptr,CVector3f *out_attract_position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_005be330(CZombie *this_ptr,CVector3f *out_attract_position)

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
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [3];
  
  bVar2 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  afStack_14[2] = (float)core_motion_cpp_FUN_00524a40(this_ptr_00,3);
  if (afStack_14[2] <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,this_ptr->bone_indices[1],&CStack_24);
  fStack_84 = CStack_24.x;
  *(uint *)((int)&stack0xffffff80 + (uint)bVar2 * -8) =
       *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
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
  fStack_78 = fStack_48 * _DAT_005fa92c;
  fStack_74 = afStack_44[0] * _DAT_005fa92c;
  fStack_70 = afStack_44[1] * _DAT_005fa92c;
  fStack_6c = fStack_48 * _DAT_005fa92c;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffff8c + (uint)bVar2 * -8);
  afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -8] =
       *(float *)((int)&stack0xffffff90 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar3);
  CStack_60.x = fStack_30;
  *(float *)((int)&CStack_60 + (uint)bVar2 * -8 + 4) = afStack_44[(uint)bVar2 * -2 + 6];
  *(float *)((int)&CStack_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  if (&CStack_60 != out_attract_position) {
    out_attract_position->x = CStack_60.x;
    out_attract_position->y = CStack_60.y;
    out_attract_position->z = CStack_60.z;
  }
  return 1;
}
