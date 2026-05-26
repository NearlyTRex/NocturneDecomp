// Name: core_mimic.cpp_CMimic_getCollisionType_FUN_00520a00
// Address: 00520a00
// MANUAL RECONSTRUCTION
// Address Range: [[00520a00, 00520a79]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_00520a00(CMimic *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_00520a00(CMimic *this_ptr,SCollisionInfo *collision_info)

{
  float fVar1;
  SMotion *pSVar2;
  
  collision_info->cylinder_top_y = (this_ptr->base).base.model.bounding_box.max.y;
  collision_info->cylinder_radius = 1.0;
  if (collision_info->ray_query.ray_type == 1) {
    collision_info->cylinder_bottom_y = -0.1;
    fVar1 = (float)1.3;
    collision_info->cylinder_top_y = collision_info->cylinder_top_y + 0.5f;
    collision_info->cylinder_radius = collision_info->cylinder_radius * fVar1;
  }
  else {
    collision_info->cylinder_bottom_y = 2.0;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
  if (pSVar2->state_index == 0xc) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_CYLINDER;
}
