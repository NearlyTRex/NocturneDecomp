// Name: core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
// Address: 004310b0
// Address Range: [[004310b0, 00431159]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  EDeathState EVar2;
  
  iVar1 = (collision_info->ray_query).ray_type;
  if (iVar1 == 2) {
    return COLLISION_TYPE_NONE;
  }
  if (this_ptr->is_spectral == 0) {
    EVar2 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (1 < (int)EVar2) {
      return COLLISION_TYPE_NONE;
    }
  }
  else if (iVar1 != 4) {
    if (iVar1 != 3) {
      return COLLISION_TYPE_NONE;
    }
    goto LAB_004310db;
  }
  iVar1 = (collision_info->ray_query).ray_type;
  if ((iVar1 != 1) && (iVar1 != 3)) {
    collision_info->cylinder_top_y = this_ptr->collision_cylinder_top * this_ptr->size_scale;
    collision_info->cylinder_bottom_y = this_ptr->collision_cylinder_bottom * this_ptr->size_scale;
    if (collision_info->cylinder_top_y < collision_info->cylinder_bottom_y) {
      collision_info->cylinder_top_y = (this_ptr->model).bounding_box.max.y;
    }
    collision_info->cylinder_radius = this_ptr->collision_cylinder_radius * this_ptr->size_scale;
    return COLLISION_TYPE_CYLINDER;
  }
LAB_004310db:
  collision_info->deformable_model = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
