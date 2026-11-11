// Name: core_mimic.cpp_CMimic_getCollisionType_FUN_00510a80
// Address: 00510a80
// Address Range: [[00510a80, 00510af9]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_00510a80(CMimic *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_00510a80(CMimic *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  
  iVar1 = (collision_info->ray_query).ray_type;
  collision_info->cylinder_top_y = (this_ptr->base).base.model.bounding_box.max.y;
  collision_info->cylinder_radius = 1.0;
  if (iVar1 == 1) {
    collision_info->cylinder_bottom_y = -0.1;
    fVar2 = (float)_DAT_005e8a80;
    collision_info->cylinder_top_y = collision_info->cylinder_top_y + _DAT_005e8a88;
    collision_info->cylinder_radius = collision_info->cylinder_radius * fVar2;
  }
  else {
    collision_info->cylinder_bottom_y = 2.0;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  if (pSVar3->state_index == 0xc) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_CYLINDER;
}
