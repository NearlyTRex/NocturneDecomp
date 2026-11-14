// Name: core_box.cpp_FUN_0041b1d0
// Address: 0041b1d0
// Address Range: [[0041b1d0, 0041b40c]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_FUN_0041b1d0(CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_FUN_0041b1d0(CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  CVector3f *pCVar12;
  byte bVar13;
  float afStackY_1034 [1016];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  SScrape *local_1c;
  CMatrix3x3f *local_18;
  int local_14;
  
  bVar13 = 0;
  if (this_ptr != (CBox *)new_position) {
    (this_ptr->position).x = new_position->x;
    (this_ptr->position).y = new_position->y;
    (this_ptr->position).z = new_position->z;
  }
  if (&this_ptr->orientation != new_orientation) {
    (this_ptr->orientation).x = new_orientation->x;
    (this_ptr->orientation).y = new_orientation->y;
    (this_ptr->orientation).z = new_orientation->z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
            (&this_ptr->rotation_matrix,&this_ptr->orientation);
  fVar1 = (this_ptr->extents).y;
  fVar2 = (this_ptr->extents).x;
  fVar3 = (this_ptr->extents).x;
  fVar4 = (this_ptr->extents).x;
  fVar11 = (float)_DAT_005b7371;
  fVar5 = (this_ptr->extents).z;
  fVar6 = (this_ptr->extents).z;
  fVar7 = (this_ptr->extents).y;
  this_ptr->mass = speed * fVar11;
  fVar10 = (float)_DAT_005b7379;
  fVar8 = this_ptr->mass;
  fVar9 = this_ptr->mass;
  (this_ptr->moment_of_inertia).x = speed * fVar11 * fVar10 * (fVar5 * fVar5 + fVar1 * fVar1);
  (this_ptr->moment_of_inertia).y = fVar8 * fVar10 * (fVar6 * fVar6 + fVar2 * fVar2);
  (this_ptr->moment_of_inertia).z = fVar9 * fVar10 * (fVar7 * fVar7 + fVar3 * fVar4);
  (this_ptr->linear_momentum).z = 0.0;
  (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).z;
  (this_ptr->linear_momentum).x = (this_ptr->linear_momentum).y;
  (this_ptr->angular_momentum).z = 0.0;
  (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).z;
  (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).y;
  (this_ptr->linear_velocity_local).z = 0.0;
  (this_ptr->linear_velocity_local).y = (this_ptr->linear_velocity_local).z;
  (this_ptr->linear_velocity_local).x = (this_ptr->linear_velocity_local).y;
  (this_ptr->angular_velocity).z = 0.0;
  (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
  (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
  (this_ptr->linear_velocity_temp).z = 0.0;
  (this_ptr->linear_velocity_temp).y = (this_ptr->linear_velocity_temp).z;
  (this_ptr->linear_velocity_temp).x = (this_ptr->linear_velocity_temp).y;
  (this_ptr->angular_velocity_temp).z = 0.0;
  (this_ptr->angular_velocity_temp).y = (this_ptr->angular_velocity_temp).z;
  (this_ptr->angular_velocity_temp).x = (this_ptr->angular_velocity_temp).y;
  (this_ptr->linear_velocity).z = 0.0;
  (this_ptr->linear_velocity).y = (this_ptr->linear_velocity).z;
  (this_ptr->linear_velocity).x = (this_ptr->linear_velocity).y;
  local_14 = 0;
  if (0 < this_ptr->scrape_point_count) {
    local_1c = this_ptr->scrape_points;
    pCVar12 = &this_ptr->scrape_points[0].transformed_position;
    local_18 = &this_ptr->rotation_matrix;
    do {
      core_dirmat_cpp_FUN_0045b800(local_18,local_1c + local_14);
      local_34 = local_28;
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar13 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar13 * -8);
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
      local_40 = (this_ptr->position).x + local_34;
      local_3c = (this_ptr->position).y + local_30;
      local_38 = (this_ptr->position).z + local_2c;
      local_4c = local_40;
      (&stack0xffffffb8)[(uint)bVar13 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffc4 + (uint)bVar13 * -8);
      *(uint *)((int)&stack0xffffffbc + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
           *(uint *)((int)&stack0xffffffc8 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
      if (pCVar12 != (CVector3f *)&stack0xffffffb4) {
        pCVar12->x = local_4c;
        pCVar12->y = local_48;
        pCVar12->z = local_44;
      }
      pCVar12 = (CVector3f *)((int)(pCVar12 + 4) + 4);
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->scrape_point_count);
  }
  this_ptr->is_valid = 1;
  return;
}
