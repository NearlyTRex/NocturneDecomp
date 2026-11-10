// Name: core_icepick.cpp_FUN_004d5470
// Address: 004d5470
// Address Range: [[004d5470, 004d55d2]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_FUN_004d5470(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_FUN_004d5470(CIcePick *this_ptr,float delta_time)

{
  float fVar1;
  CMotionList *this_ptr_00;
  uint *puVar2;
  byte bVar3;
  float afStackY_1808 [1519];
  char *motion_name;
  int iVar4;
  code *blend_callback;
  float local_2c;
  CQuaternion4f local_1c;
  
  bVar3 = 0;
  if (this_ptr->is_armed != 0) {
    if (this_ptr->guns_drawn == 0) {
      fVar1 = this_ptr->shoot_blend_weight - delta_time * (float)_DAT_005da856;
      this_ptr->shoot_blend_weight = fVar1;
      if (fVar1 < 0.0) {
        this_ptr->shoot_blend_weight = 0.0;
      }
    }
    else {
      fVar1 = delta_time * (float)_DAT_005da856 + this_ptr->shoot_blend_weight;
      this_ptr->shoot_blend_weight = fVar1;
      if (1.0 < fVar1) {
        this_ptr->shoot_blend_weight = 1.0;
      }
    }
    iVar4 = 1;
    motion_name = "shoot";
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                            ((CMotionController *)&this_ptr->field_0x2b4);
    iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(this_ptr_00,motion_name,iVar4);
    core_skeleton_cpp_FUN_00545a60
              (&this_ptr->field_0x2b4,iVar4,0,this_ptr->shoot_blend_weight,_DAT_01cee0f4,
               core_skeleton_cpp_FUN_00544cc0);
    this_ptr->aim_pitch =
         *(float *)&this_ptr->field_0x10a94 * _DAT_005da85e * (float)_DAT_005da856 * delta_time +
         this_ptr->aim_pitch;
    if ((int)this_ptr->aim_pitch < 0x3f490fdc) {
      if (this_ptr->aim_pitch < _DAT_005da862) {
        this_ptr->aim_pitch = -0.7853982;
      }
    }
    else {
      this_ptr->aim_pitch = 0.7853982;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(this_ptr->aim_pitch);
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    local_1c.w = local_2c;
    puVar2 = (uint *)((int)&local_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    *(uint *)((int)&local_1c + (uint)bVar3 * -8 + 4) =
         *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
    iVar4 = _DAT_01cee0f4;
    *puVar2 = *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    puVar2[(uint)bVar3 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              ((CDeformableModelInstance *)&this_ptr->field_0x2b4,&local_1c,
               this_ptr->shoot_blend_weight,iVar4,blend_callback);
  }
  return;
}
