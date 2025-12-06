// Name: core_box.cpp_CBox_updateTransform_FUN_0041e0e0
// Address: 0041e0e0
// Address Range: [[0041e0e0, 0041e2e2]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_updateTransform_FUN_0041e0e0(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)

#include "nocturne.h"

void __cdecl
core_box_cpp_CBox_updateTransform_FUN_0041e0e0
          (CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed)

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
  CVector3f *pCVar13;
  BADSPACEBASE *in_ESP;
  int iVar14;
  float in_stack_00000014;
  CVector3f CStack_28;
  float local_18;
  float local_14;
  SScrape *pSVar15;
  
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
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&this_ptr->rotation_matrix,&this_ptr->orientation);
  fVar1 = (this_ptr->extents).y;
  fVar2 = (this_ptr->extents).x;
  fVar3 = (this_ptr->extents).x;
  fVar4 = (this_ptr->extents).x;
  fVar11 = (float)0.03125;
  fVar5 = (this_ptr->extents).z;
  fVar6 = (this_ptr->extents).z;
  fVar7 = (this_ptr->extents).y;
  this_ptr->mass = (int)(in_stack_00000014 * fVar11);
  fVar10 = (float)0.083333333333333301;
  fVar8 = (float)this_ptr->mass;
  fVar9 = (float)this_ptr->mass;
  (this_ptr->moment_of_inertia).x =
       in_stack_00000014 * fVar11 * fVar10 * (fVar5 * fVar5 + fVar1 * fVar1);
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
  iVar14 = 0;
  if (0 < this_ptr->scrape_point_count) {
    pSVar15 = this_ptr->scrape_points;
    pCVar13 = &this_ptr->scrape_points[0].transformed_position;
    do {
      pCVar12 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                          (&this_ptr->rotation_matrix,&CStack_28,&pSVar15[iVar14].local_position);
      local_18 = (this_ptr->position).x + pCVar12->x;
      local_14 = (this_ptr->position).y + pCVar12->y;
      pSVar15 = (SScrape *)((this_ptr->position).z + pCVar12->z);
      if (pCVar13 != (CVector3f *)&local_18) {
        pCVar13->x = local_18;
        pCVar13->y = local_14;
        pCVar13->z = (float)pSVar15;
      }
      iVar14 = iVar14 + 1;
      pCVar13 = (CVector3f *)((int)(pCVar13 + 4) + 4);
    } while (iVar14 < this_ptr->scrape_point_count);
  }
  this_ptr->is_valid = 1;
  return;
}
