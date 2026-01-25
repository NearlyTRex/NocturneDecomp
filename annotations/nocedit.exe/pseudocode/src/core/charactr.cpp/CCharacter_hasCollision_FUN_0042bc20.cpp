// Name: core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
// Address: 0042bc20
// Address Range: [[0042bc20, 0042bcb0]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20(CCharacter * this_ptr, SCollisionInfo * collision_info)

#include "nocturne.h"

int __cdecl
core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20
          (CCharacter *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  if (collision_info->ray_type != 2) {
    iVar1 = (*(((this_ptr->base_actor).vtable._uc)->_uc).isDamageable)(this_ptr);
    if (iVar1 < 2) {
      if ((collision_info->ray_type != 1) && (collision_info->ray_type != 3)) {
        collision_info->cylinder_top_y =
             *(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale;
        collision_info->cylinder_bottom_y =
             *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
        if (collision_info->cylinder_top_y < collision_info->cylinder_bottom_y) {
          collision_info->cylinder_top_y = (this_ptr->model).bounding_box.max.y;
        }
        collision_info->cylinder_radius =
             *(float *)(this_ptr->cloth_data + 0x348) * this_ptr->size_scale;
        return 2;
      }
      collision_info->result_ptr = &this_ptr->model;
      return 1;
    }
  }
  return 0;
}
