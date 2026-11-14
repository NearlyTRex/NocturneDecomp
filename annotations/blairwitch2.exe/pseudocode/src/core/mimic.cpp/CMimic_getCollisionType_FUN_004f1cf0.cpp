// Name: core_mimic.cpp_CMimic_getCollisionType_FUN_004f1cf0
// Address: 004f1cf0
// Address Range: [[004f1cf0, 004f1d69]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_004f1cf0(CMimic *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_004f1cf0(CMimic *this_ptr,SCollisionInfo *collision_info)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (collision_info->ray_query).ray_type;
  collision_info->cylinder_top_y = (this_ptr->base).base.model.bounding_box.max.y;
  collision_info->cylinder_radius = 1.0;
  if (iVar2 == 1) {
    collision_info->cylinder_bottom_y = -0.1;
    fVar1 = (float)_DAT_005dd9f9;
    collision_info->cylinder_top_y = collision_info->cylinder_top_y + _DAT_005dda01;
    collision_info->cylinder_radius = collision_info->cylinder_radius * fVar1;
  }
  else {
    collision_info->cylinder_bottom_y = 2.0;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  if (*(int *)(iVar2 + 0x24) == 0xc) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_CYLINDER;
}
