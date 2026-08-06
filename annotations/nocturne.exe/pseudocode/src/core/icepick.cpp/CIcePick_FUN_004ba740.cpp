// Name: core_icepick.cpp_CIcePick_FUN_004ba740
// Address: 004ba740
// Address Range: [[004ba740, 004ba897]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_FUN_004ba740(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_CIcePick_FUN_004ba740(CIcePick *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CMotionList *this_ptr_01;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_180c [1519];
  char *motion_name;
  int iVar5;
  code *blend_callback;
  CQuaternion4f local_30;
  CQuaternion4f local_20;
  
  bVar4 = 0;
  if (this_ptr->is_armed != 0) {
    if (this_ptr->guns_drawn == 0) {
      fVar1 = this_ptr->shoot_blend_weight - delta_time * (float)2;
      this_ptr->shoot_blend_weight = fVar1;
      if (fVar1 < 0.0) {
        this_ptr->shoot_blend_weight = 0.0;
      }
    }
    else {
      fVar1 = delta_time * (float)2 + this_ptr->shoot_blend_weight;
      this_ptr->shoot_blend_weight = fVar1;
      if (1.0 < fVar1) {
        this_ptr->shoot_blend_weight = 1.0;
      }
    }
    iVar5 = 1;
    motion_name = "shoot";
    this_ptr_00 = &(this_ptr->base).base.model;
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                            (&this_ptr_00->motion_controller);
    iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(this_ptr_01,motion_name,iVar5);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (this_ptr_00,iVar5,0.0,this_ptr->shoot_blend_weight,_DAT_01cae2c8,
               core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
    fVar1 = (this_ptr->base).player_input.look_up_down_speed * (float)3.1415926535000001 *
            (float)2 * delta_time + this_ptr->aim_pitch;
    this_ptr->aim_pitch = fVar1;
    if ((float)0.78539816337500001 < fVar1) {
      this_ptr->aim_pitch = 0.7853982;
    }
    if (this_ptr->aim_pitch < (float)-0.78539816337500001) {
      this_ptr->aim_pitch = -0.7853982;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(this_ptr->aim_pitch,&local_30);
    blend_callback = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
    local_20.w = local_30.w;
    puVar3 = (uint *)((int)&local_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    puVar2 = (uint *)((int)&local_30 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_20 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_30 + (uint)bVar4 * -8 + 4);
    iVar5 = _DAT_01cae2c8;
    *puVar3 = *puVar2;
    puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (&(this_ptr->base).base.model,&local_20,this_ptr->shoot_blend_weight,iVar5,
               blend_callback);
  }
  return;
}
