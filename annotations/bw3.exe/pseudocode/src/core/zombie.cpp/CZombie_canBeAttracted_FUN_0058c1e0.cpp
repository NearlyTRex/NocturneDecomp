// Name: core_zombie.cpp_CZombie_canBeAttracted_FUN_0058c1e0
// Address: 0058c1e0
// Address Range: [[0058c1e0, 0058c312]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_0058c1e0(CZombie *this_ptr,CVector3f *out_attract_position)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_0058c1e0(CZombie *this_ptr,CVector3f *out_attract_position)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  byte bVar2;
  float afStackY_106c [1014];
  CVector3f *input_local_point;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  CVector3f CStack_30;
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [3];
  
  bVar2 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  afStack_14[2] =
       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,5);
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
  input_local_point = &CStack_6c;
  fStack_78 = fStack_48 * 0.5f;
  fStack_74 = afStack_44[0] * 0.5f;
  fStack_70 = afStack_44[1] * 0.5f;
  CStack_6c.x = fStack_48 * 0.5f;
  *(uint *)((int)&CStack_6c + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&stack0xffffff8c + (uint)bVar2 * -8);
  *(uint *)((int)&CStack_6c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&stack0xffffff90 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,input_local_point,&CStack_30);
  CStack_60.x = CStack_30.x;
  *(uint *)((int)&CStack_60 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_30 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (&CStack_60 != out_attract_position) {
    out_attract_position->x = CStack_60.x;
    out_attract_position->y = CStack_60.y;
    out_attract_position->z = CStack_60.z;
  }
  return 1;
}
