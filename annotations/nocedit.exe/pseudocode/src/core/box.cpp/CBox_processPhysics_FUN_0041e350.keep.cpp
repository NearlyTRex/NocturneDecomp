// Name: core_box.cpp_CBox_processPhysics_FUN_0041e350
// Address: 0041e350
// MANUAL RECONSTRUCTION
// Address Range: [[0041e350, 0041fe86]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041e350(CBox *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041e350(CBox *this_ptr,float delta_time)

{
  float *pfVar1;
  SScrape *pSVar2;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar14;
  CVector3f *pCVar16;
  SScrape *pSVar11;
  SScrape *pSVar12;
  int iVar18;
  int iVar16;
  CMatrix3x3f local_420;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  int local_3d0 [8] = {};
  float local_380 = 0.0f;
  float local_37c = 0.0f;
  float local_378 = 0.0f;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  CBox local_344;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  CVector3f *local_6c;
  int local_3c;
  float local_30;
  SScrape *local_28;
  int local_20;
  int local_1c;
  float fVar1;
  float fVar3;
  float fVar2;
  float fVar5;
  float fVar4;
  float fVar7;
  float fVar6;
  byte bVar17;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;

  bVar17 = 0;
  if (this_ptr->is_valid != 0) {
    if ((CBox *)&local_344.scrape_points[7].transformed_position.z != this_ptr) {
      local_344.scrape_points[7].transformed_position.z = (this_ptr->position).x;
      local_344.scrape_points[7].previous_position.x = (this_ptr->position).y;
      local_344.scrape_points[7].previous_position.y = (this_ptr->position).z;
    }
    if (&local_344 != this_ptr) {
      local_344.position = this_ptr->position;
    }
    local_344.scrape_points[7].previous_position.x =
         local_344.scrape_points[7].previous_position.x + 1.0;
    local_344.position.y = local_344.position.y + -100.0f;
    fVar12 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                       (&g_CDemonRaytraceInstance,
                        (CVector3f *)&local_344.scrape_points[7].transformed_position.z,
                        &local_344.position,&local_344.scrape_points[3].local_position,(int *)0x0);
    if ((fVar12 <= 0.0) || (1.0 <= fVar12)) {
      this_ptr[1].position.x = -9999.0;
    }
    else {
      this_ptr[1].position.x =
           (local_344.position.y - local_344.scrape_points[7].previous_position.x) * fVar12 +
           local_344.scrape_points[7].previous_position.x;
    }
    pCVar14 = &this_ptr->scrape_points[0].transformed_position;
    pCVar16 = &this_ptr->scrape_points[0].previous_position;
    do {
      if (pCVar16 != pCVar14) {
        *pCVar16 = *pCVar14;
      }
      pCVar14 = (CVector3f *)((int)(pCVar14 + 4) + 4);
      pCVar16 = (CVector3f *)((int)(pCVar16 + 4) + 4);
    } while (pCVar14 != (CVector3f *)&this_ptr[1].position.z);
    local_344.rotation_matrix.m[1].z = 0.0;
    local_344.rotation_matrix.m[1].x = 0.0;
    local_344.rotation_matrix.m[1].y = -this_ptr->mass * (float)32;
    pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&this_ptr->rotation_matrix,(CVector3f *)&local_344.linear_velocity.z,
                        local_344.rotation_matrix.m + 1);
    pCVar14 = &this_ptr->linear_momentum;
    pCVar14->x = pCVar8->x + pCVar14->x;
    (this_ptr->linear_momentum).y = pCVar8->y + (this_ptr->linear_momentum).y;
    pfVar1 = &this_ptr->mass;
    (this_ptr->linear_momentum).z = pCVar8->z + (this_ptr->linear_momentum).z;
    local_344.linear_velocity_temp.z = pCVar14->x / *pfVar1;
    local_344.linear_momentum.x = (this_ptr->linear_momentum).y / *pfVar1;
    local_344.linear_momentum.y = (this_ptr->linear_momentum).z / *pfVar1;
    if (&this_ptr->linear_velocity_temp != (CVector3f *)&local_344.linear_velocity_temp.z) {
      (this_ptr->linear_velocity_temp).x = local_344.linear_velocity_temp.z;
      (this_ptr->linear_velocity_temp).y = local_344.linear_momentum.x;
      (this_ptr->linear_velocity_temp).z = local_344.linear_momentum.y;
    }
    fVar1 = (this_ptr->angular_momentum).y;
    fVar2 = (this_ptr->moment_of_inertia).y;
    fVar3 = (this_ptr->angular_momentum).z;
    fVar4 = (this_ptr->moment_of_inertia).z;
    (this_ptr->angular_velocity_temp).x =
         (this_ptr->angular_momentum).x / (this_ptr->moment_of_inertia).x;
    (this_ptr->angular_velocity_temp).y = fVar1 / fVar2;
    (this_ptr->angular_velocity_temp).z = fVar3 / fVar4;
    (this_ptr->linear_momentum).x = 0.0;
    (this_ptr->linear_momentum).y = 0.0;
    (this_ptr->linear_momentum).z = 0.0;
    (this_ptr->angular_momentum).x = 0.0;
    (this_ptr->angular_momentum).y = 0.0;
    (this_ptr->angular_momentum).z = 0.0;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&this_ptr->rotation_matrix,(CVector3f *)&local_344.angular_velocity_temp.z,
                        &this_ptr->linear_velocity_temp);
    local_344.extents.y = pCVar9->x * delta_time;
    local_344.extents.z = pCVar9->y * delta_time;
    local_344.scrape_point_count = (int)(delta_time * pCVar9->z);
    pCVar14 = &this_ptr->linear_velocity;
    pCVar14->x = pCVar14->x + local_344.extents.y;
    (this_ptr->linear_velocity).y = (this_ptr->linear_velocity).y + local_344.extents.z;
    (this_ptr->linear_velocity).z =
         (this_ptr->linear_velocity).z + (float)local_344.scrape_point_count;
    pCVar14 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                        (&this_ptr->rotation_matrix,&local_344.scrape_points[0].transformed_position
                         ,pCVar14);
    if (&this_ptr->linear_velocity_local != pCVar14) {
      this_ptr->linear_velocity_local = *pCVar14;
    }
    local_344.rotation_matrix.m[0].x = (this_ptr->angular_velocity_temp).x * delta_time;
    local_344.rotation_matrix.m[0].y = (this_ptr->angular_velocity_temp).y * delta_time;
    local_344.rotation_matrix.m[0].z = delta_time * (this_ptr->angular_velocity_temp).z;
    pCVar14 = &this_ptr->angular_velocity;
    pCVar14->x = pCVar14->x + local_344.rotation_matrix.m[0].x;
    fVar12 = (this_ptr->angular_velocity).y + local_344.rotation_matrix.m[0].y;
    (this_ptr->angular_velocity).y = fVar12;
    fVar8 = (this_ptr->angular_velocity).z + local_344.rotation_matrix.m[0].z;
    (this_ptr->angular_velocity).z = fVar8;
    fVar12 = SQRT(fVar8 * (this_ptr->angular_velocity).z +
                  pCVar14->x * pCVar14->x + fVar12 * (this_ptr->angular_velocity).y);
    if ((float)25.132741228 < fVar12) {
      fVar12 = (float)25.132741228 / fVar12;
      pCVar14->x = pCVar14->x * fVar12;
      (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).y * fVar12;
      (this_ptr->angular_velocity).z = (this_ptr->angular_velocity).z * fVar12;
    }
    local_344.scrape_points[1].transformed_position.z = (this_ptr->linear_velocity).x * delta_time;
    local_344.scrape_points[1].previous_position.x = (this_ptr->linear_velocity).y * delta_time;
    local_344.scrape_points[1].previous_position.y = (this_ptr->linear_velocity).z * delta_time;
    (this_ptr->position).x =
         (this_ptr->position).x + local_344.scrape_points[1].transformed_position.z;
    (this_ptr->position).y = (this_ptr->position).y + local_344.scrape_points[1].previous_position.x
    ;
    (this_ptr->position).z = (this_ptr->position).z + local_344.scrape_points[1].previous_position.y
    ;
    local_344.scrape_points[5].transformed_position.y = (this_ptr->angular_velocity).x * delta_time;
    local_344.scrape_points[5].transformed_position.z = (this_ptr->angular_velocity).y * delta_time;
    local_344.scrape_points[5].previous_position.x = (this_ptr->angular_velocity).z * delta_time;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&local_420,(CVector3f *)&local_344.scrape_points[5].transformed_position.y);
    local_3f8 = (this_ptr->rotation_matrix).m[0].z * local_420.m[2].x +
                (this_ptr->rotation_matrix).m[0].x * local_420.m[0].x +
                (this_ptr->rotation_matrix).m[0].y * local_420.m[1].x;
    local_3f4 = (this_ptr->rotation_matrix).m[0].z * local_420.m[2].y +
                (this_ptr->rotation_matrix).m[0].y * local_420.m[1].y +
                (this_ptr->rotation_matrix).m[0].x * local_420.m[0].y;
    local_3f0 = (this_ptr->rotation_matrix).m[0].z * local_420.m[2].z +
                (this_ptr->rotation_matrix).m[0].y * local_420.m[1].z +
                (this_ptr->rotation_matrix).m[0].x * local_420.m[0].z;
    local_3ec = (this_ptr->rotation_matrix).m[1].z * local_420.m[2].x +
                (this_ptr->rotation_matrix).m[1].x * local_420.m[0].x +
                (this_ptr->rotation_matrix).m[1].y * local_420.m[1].x;
    local_3e8 = (this_ptr->rotation_matrix).m[1].z * local_420.m[2].y +
                (this_ptr->rotation_matrix).m[1].y * local_420.m[1].y +
                (this_ptr->rotation_matrix).m[1].x * local_420.m[0].y;
    local_3e4 = (this_ptr->rotation_matrix).m[1].z * local_420.m[2].z +
                (this_ptr->rotation_matrix).m[1].y * local_420.m[1].z +
                (this_ptr->rotation_matrix).m[1].x * local_420.m[0].z;
    local_3e0 = (this_ptr->rotation_matrix).m[2].z * local_420.m[2].x +
                (this_ptr->rotation_matrix).m[2].x * local_420.m[0].x +
                (this_ptr->rotation_matrix).m[2].y * local_420.m[1].x;
    local_3dc = (this_ptr->rotation_matrix).m[2].z * local_420.m[2].y +
                (this_ptr->rotation_matrix).m[2].y * local_420.m[1].y +
                (this_ptr->rotation_matrix).m[2].x * local_420.m[0].y;
    local_3d8 = (this_ptr->rotation_matrix).m[2].z * local_420.m[2].z +
                (this_ptr->rotation_matrix).m[2].y * local_420.m[1].z +
                (this_ptr->rotation_matrix).m[2].x * local_420.m[0].z;
    this_ptr->rotation_matrix.m[0].x = local_3f8;
    this_ptr->rotation_matrix.m[0].y = local_3f4;
    this_ptr->rotation_matrix.m[0].z = local_3f0;
    this_ptr->rotation_matrix.m[1].x = local_3ec;
    this_ptr->rotation_matrix.m[1].y = local_3e8;
    this_ptr->rotation_matrix.m[1].z = local_3e4;
    this_ptr->rotation_matrix.m[2].x = local_3e0;
    this_ptr->rotation_matrix.m[2].y = local_3dc;
    this_ptr->rotation_matrix.m[2].z = local_3d8;
    pCVar14 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                        (&this_ptr->rotation_matrix,
                         (CVector3f *)&local_344.scrape_points[5].previous_position.y);
    if (&this_ptr->orientation != pCVar14) {
      this_ptr->orientation = *pCVar14;
    }
    iVar18 = 0;
    if (0 < this_ptr->scrape_point_count) {
      pCVar14 = &this_ptr->scrape_points[0].transformed_position;
      do {
        pCVar16 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                            (&this_ptr->rotation_matrix,
                             (CVector3f *)&local_344.scrape_points[2].previous_position.y,
                             &this_ptr->scrape_points[iVar18].local_position);
        local_e0 = (this_ptr->position).x + pCVar16->x;
        local_dc = (this_ptr->position).y + pCVar16->y;
        local_d8 = (this_ptr->position).z + pCVar16->z;
        if (pCVar14 != (CVector3f *)&local_e0) {
          pCVar14->x = local_e0;
          pCVar14->y = local_dc;
          pCVar14->z = local_d8;
        }
        iVar18 = iVar18 + 1;
        pCVar14 = (CVector3f *)((int)(pCVar14 + 4) + 4);
      } while (iVar18 < this_ptr->scrape_point_count);
    }
    pSVar2 = this_ptr->scrape_points;
    local_20 = 0;
    local_6c = &this_ptr->scrape_points[0].previous_position;
    local_1c = 0;
    pCVar14 = &this_ptr->scrape_points[0].transformed_position;
    local_28 = pSVar2;
    if (0 < this_ptr->scrape_point_count) {
      do {
        if (this_ptr[1].position.x <= this_ptr->scrape_points[local_20].transformed_position.y) {
          fVar12 = pCVar14->x - local_6c->x;
          fVar8 = pCVar14->y - local_6c->y;
          fVar9 = pCVar14->z - local_6c->z;
          if ((float)0.01 <
              SQRT(fVar9 * fVar9 + fVar12 * fVar12 + fVar8 * fVar8)) {
            fVar12 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                               (&g_CDemonRaytraceInstance,local_6c,pCVar14,
                                &local_28->raytrace_normal,(int *)0x0);
            this_ptr->scrape_points[local_20].raytrace_intersection = fVar12;
            fVar12 = this_ptr->scrape_points[local_20].raytrace_intersection;
            if ((0.0 < fVar12) && (fVar12 < 1.0)) {
              local_3d0[local_1c] = local_20;
              local_1c = local_1c + 1;
            }
          }
        }
        else {
          if (pCVar14 != local_6c) {
            *local_6c = *pCVar14;
          }
          fVar12 = this_ptr->scrape_points[local_20].transformed_position.y;
          this_ptr->scrape_points[local_20].previous_position.y =
               this_ptr[1].position.x + (float)0.5;
          fVar8 = this_ptr->scrape_points[local_20].previous_position.y;
          fVar9 = this_ptr[1].position.x;
          fVar10 = this_ptr->scrape_points[local_20].previous_position.y;
          this_ptr->scrape_points[local_20].raytrace_normal.x = 0.0;
          this_ptr->scrape_points[local_20].raytrace_normal.y = 1.0;
          this_ptr->scrape_points[local_20].raytrace_normal.z = 0.0;
          this_ptr->scrape_points[local_20].raytrace_intersection = (fVar9 - fVar10) / (fVar12 - fVar8);
          local_3d0[local_1c] = local_20;
          local_1c = local_1c + 1;
        }
        pCVar14 = (CVector3f *)&pCVar14[4].y;
        local_6c = (CVector3f *)&local_6c[4].y;
        local_20 = local_20 + 1;
        local_28 = local_28 + 1;
      } while (local_20 < this_ptr->scrape_point_count);
    }
    fVar12 = local_3d0[0];
    if (local_1c == 1) {
      local_344.scrape_points[3].previous_position.x =
           pSVar2[local_3d0[0]].transformed_position.x -
           pSVar2[local_3d0[0]].previous_position.x;
      local_344.scrape_points[3].previous_position.y =
           pSVar2[local_3d0[0]].transformed_position.y -
           pSVar2[local_3d0[0]].previous_position.y;
      local_344.scrape_points[3].previous_position.z =
           pSVar2[local_3d0[0]].transformed_position.z -
           pSVar2[local_3d0[0]].previous_position.z;
      fVar8 = (1.0 - this_ptr->scrape_points[local_3d0[0]].raytrace_intersection) *
              (float)1.01;
      local_344.scrape_points[4].previous_position.z =
           local_344.scrape_points[3].previous_position.x * fVar8;
      local_344.scrape_points[4].raytrace_intersection =
           local_344.scrape_points[3].previous_position.y * fVar8;
      local_344.scrape_points[4].raytrace_normal.x =
           local_344.scrape_points[3].previous_position.z * fVar8;
      (this_ptr->position).x =
           (this_ptr->position).x - local_344.scrape_points[4].previous_position.z;
      (this_ptr->position).y =
           (this_ptr->position).y - local_344.scrape_points[4].raytrace_intersection;
      (this_ptr->position).z = (this_ptr->position).z - local_344.scrape_points[4].raytrace_normal.x
      ;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (&this_ptr->rotation_matrix,
                 (CVector3f *)&local_344.scrape_points[4].raytrace_normal.y,
                 &pSVar2[local_3d0[0]].raytrace_normal);
      pCVar14 = &this_ptr->linear_velocity_local;
      local_374 = pCVar14->x;
      local_370 = (this_ptr->linear_velocity_local).y;
      local_36c = (this_ptr->linear_velocity_local).z;
      fVar8 = (local_344.scrape_points[5].local_position.x * (this_ptr->linear_velocity_local).z +
              local_344.scrape_points[4].raytrace_normal.y * pCVar14->x +
              local_344.scrape_points[4].raytrace_normal.z * (this_ptr->linear_velocity_local).y) *
              2.0f;
      local_344.scrape_points[7].previous_position.z =
           local_344.scrape_points[4].raytrace_normal.y * fVar8;
      local_344.scrape_points[7].raytrace_intersection =
           local_344.scrape_points[4].raytrace_normal.z * fVar8;
      local_344.scrape_points[7].raytrace_normal.x =
           local_344.scrape_points[5].local_position.x * fVar8;
      local_344.scrape_points[3].transformed_position.x =
           local_344.scrape_points[7].previous_position.z - pCVar14->x;
      local_344.scrape_points[3].transformed_position.y =
           local_344.scrape_points[7].raytrace_intersection - (this_ptr->linear_velocity_local).y;
      local_344.scrape_points[3].transformed_position.z =
           local_344.scrape_points[7].raytrace_normal.x - (this_ptr->linear_velocity_local).z;
      if (&local_344.scrape_points[6].previous_position !=
          &local_344.scrape_points[3].transformed_position) {
        local_344.scrape_points[6].previous_position.x =
             local_344.scrape_points[3].transformed_position.x;
        local_344.scrape_points[6].previous_position.y =
             local_344.scrape_points[3].transformed_position.y;
        local_344.scrape_points[6].previous_position.z =
             local_344.scrape_points[3].transformed_position.z;
      }
      local_344.scrape_points[6].previous_position.x =
           local_344.scrape_points[6].previous_position.x * -1.0f *
           0.5f;
      local_344.scrape_points[6].previous_position.y =
           local_344.scrape_points[6].previous_position.y * -1.0f *
           0.5f;
      local_344.scrape_points[6].previous_position.z =
           local_344.scrape_points[6].previous_position.z * -1.0f *
           0.5f;
      pfVar1 = &this_ptr->mass;
      local_bc = local_344.scrape_points[6].previous_position.x -
                 (this_ptr->linear_velocity_local).x;
      local_b8 = local_344.scrape_points[6].previous_position.y -
                 (this_ptr->linear_velocity_local).y;
      local_b4 = local_344.scrape_points[6].previous_position.z -
                 (this_ptr->linear_velocity_local).z;
      local_344.scrape_points[6].transformed_position.x = local_bc * *pfVar1;
      local_344.scrape_points[6].transformed_position.y = local_b8 * *pfVar1;
      local_344.scrape_points[6].transformed_position.z = local_b4 * *pfVar1;
      fVar8 = 1.0 / delta_time;
      local_344.dead = (int)(local_344.scrape_points[6].transformed_position.x * fVar8);
      local_344.linear_velocity.x = local_344.scrape_points[6].transformed_position.y * fVar8;
      local_344.linear_velocity.y = local_344.scrape_points[6].transformed_position.z * fVar8;
      (this_ptr->linear_momentum).x = (this_ptr->linear_momentum).x + (float)local_344.dead;
      (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).y + local_344.linear_velocity.x;
      (this_ptr->linear_momentum).z = (this_ptr->linear_momentum).z + local_344.linear_velocity.y;
      (this_ptr->angular_velocity).x = 0.0;
      (this_ptr->angular_velocity).y = 0.0;
      (this_ptr->angular_velocity).z = 0.0;
      pSVar11 = this_ptr->scrape_points + (int)fVar12;
      local_344.scrape_points[7].local_position.z =
           (pSVar11->local_position).y * local_344.linear_velocity.y -
           (pSVar11->local_position).z * local_344.linear_velocity.x;
      local_344.scrape_points[7].transformed_position.x =
           (pSVar11->local_position).z * (float)local_344.dead -
           (pSVar11->local_position).x * local_344.linear_velocity.y;
      local_b0 = local_344.scrape_points[7].local_position.z * 0.1f;
      local_344.scrape_points[7].transformed_position.y =
           (pSVar11->local_position).x * local_344.linear_velocity.x -
           (pSVar11->local_position).y * (float)local_344.dead;
      local_ac = local_344.scrape_points[7].transformed_position.x * 0.1f;
      local_a8 = local_344.scrape_points[7].transformed_position.y * 0.1f;
      (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).x + local_b0;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_ac;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_a8;
      fVar12 = (pSVar11->local_position).x;
      fVar8 = (pSVar11->local_position).y;
      fVar9 = (pSVar11->local_position).z;
      local_8c.x = 0.0;
      local_8c.z = 0.0;
      local_8c.y = this_ptr->mass * (float)32;
      pCVar14 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                          (&this_ptr->rotation_matrix,
                           (CVector3f *)&local_344.scrape_points[5].local_position.y,&local_8c);
      if (&local_8c != pCVar14) {
        local_8c = *pCVar14;
      }
      local_350 = fVar8 * local_8c.z - fVar9 * local_8c.y;
      local_34c = fVar9 * local_8c.x - fVar12 * local_8c.z;
      local_348 = fVar12 * local_8c.y - fVar8 * local_8c.x;
      (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).x + local_350;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_34c;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_348;
    }
    if (local_1c == 2) {
      local_344.scrape_points[1].previous_position.z =
           this_ptr->scrape_points[local_3d0[0]].transformed_position.x -
           this_ptr->scrape_points[local_3d0[0]].previous_position.x;
      local_344.scrape_points[1].raytrace_intersection =
           this_ptr->scrape_points[local_3d0[0]].transformed_position.y -
           this_ptr->scrape_points[local_3d0[0]].previous_position.y;
      local_344.scrape_points[1].raytrace_normal.x =
           this_ptr->scrape_points[local_3d0[0]].transformed_position.z -
           this_ptr->scrape_points[local_3d0[0]].previous_position.z;
      fVar12 = (1.0 - this_ptr->scrape_points[local_3d0[0]].raytrace_intersection) *
               (float)-1.01;
      local_344.scrape_points[4].transformed_position.z =
           local_344.scrape_points[1].previous_position.z * fVar12;
      local_344.scrape_points[4].previous_position.x =
           local_344.scrape_points[1].raytrace_intersection * fVar12;
      local_344.scrape_points[4].previous_position.y =
           local_344.scrape_points[1].raytrace_normal.x * fVar12;
      local_344.scrape_points[0].raytrace_intersection =
           this_ptr->scrape_points[local_3d0[1]].transformed_position.x -
           this_ptr->scrape_points[local_3d0[1]].previous_position.x;
      local_344.scrape_points[0].raytrace_normal.x =
           this_ptr->scrape_points[local_3d0[1]].transformed_position.y -
           this_ptr->scrape_points[local_3d0[1]].previous_position.y;
      local_344.scrape_points[0].raytrace_normal.y =
           this_ptr->scrape_points[local_3d0[1]].transformed_position.z -
           this_ptr->scrape_points[local_3d0[1]].previous_position.z;
      fVar12 = (1.0 - this_ptr->scrape_points[local_3d0[1]].raytrace_intersection) *
               (float)-1.01;
      local_a0 = local_344.scrape_points[0].raytrace_normal.x * fVar12;
      local_a4 = local_344.scrape_points[0].raytrace_intersection * fVar12;
      local_9c = local_344.scrape_points[0].raytrace_normal.y * fVar12;
      if (SQRT(local_344.scrape_points[4].previous_position.y *
               local_344.scrape_points[4].previous_position.y +
               local_344.scrape_points[4].transformed_position.z *
               local_344.scrape_points[4].transformed_position.z +
               local_344.scrape_points[4].previous_position.x *
               local_344.scrape_points[4].previous_position.x) <=
          SQRT(local_9c * local_9c + local_a4 * local_a4 + local_a0 * local_a0)) {
        (this_ptr->position).x = (this_ptr->position).x + local_a4;
        pCVar14 = (CVector3f *)&local_344.scrape_points[7].raytrace_normal.y;
        (this_ptr->position).y = (this_ptr->position).y + local_a0;
        fVar12 = (this_ptr->position).z + local_9c;
        fVar8 = local_3d0[1];
      }
      else {
        (this_ptr->position).x =
             (this_ptr->position).x + local_344.scrape_points[4].transformed_position.z;
        pCVar14 = (CVector3f *)&local_344.scrape_points[3].raytrace_normal.z;
        (this_ptr->position).y =
             (this_ptr->position).y + local_344.scrape_points[4].previous_position.x;
        fVar12 = (this_ptr->position).z + local_344.scrape_points[4].previous_position.y;
        fVar8 = local_3d0[0];
      }
      (this_ptr->position).z = fVar12;
      pCVar14 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                          (&this_ptr->rotation_matrix,pCVar14,
                           &this_ptr->scrape_points[(int)fVar8].raytrace_normal);
      if (&local_344.orientation != pCVar14) {
        local_344.orientation = *pCVar14;
      }
      pCVar14 = &this_ptr->linear_velocity_local;
      local_368 = pCVar14->x;
      local_364 = (this_ptr->linear_velocity_local).y;
      local_360 = (this_ptr->linear_velocity_local).z;
      fVar12 = (local_344.orientation.z * (this_ptr->linear_velocity_local).z +
               local_344.orientation.x * pCVar14->x +
               local_344.orientation.y * (this_ptr->linear_velocity_local).y) *
               2.0f;
      local_344.linear_momentum.z = local_344.orientation.x * fVar12;
      local_344.angular_velocity.x = local_344.orientation.y * fVar12;
      local_344.angular_velocity.y = local_344.orientation.z * fVar12;
      local_d4 = local_344.linear_momentum.z - pCVar14->x;
      local_d0 = local_344.angular_velocity.x - (this_ptr->linear_velocity_local).y;
      local_cc = local_344.angular_velocity.y - (this_ptr->linear_velocity_local).z;
      if (&local_344.scrape_points[3].raytrace_intersection != &local_d4) {
        local_344.scrape_points[3].raytrace_intersection = local_d4;
        local_344.scrape_points[3].raytrace_normal.x = local_d0;
        local_344.scrape_points[3].raytrace_normal.y = local_cc;
      }
      local_344.scrape_points[3].raytrace_intersection =
           local_344.scrape_points[3].raytrace_intersection * -1.0f *
           0.25f;
      local_344.scrape_points[3].raytrace_normal.x =
           local_344.scrape_points[3].raytrace_normal.x * -1.0f *
           0.25f;
      local_344.scrape_points[3].raytrace_normal.y =
           local_344.scrape_points[3].raytrace_normal.y * -1.0f *
           0.25f;
      pfVar1 = &this_ptr->mass;
      local_344.scrape_points[0].raytrace_normal.z =
           local_344.scrape_points[3].raytrace_intersection - (this_ptr->linear_velocity_local).x;
      local_344.scrape_points[1].local_position.x =
           local_344.scrape_points[3].raytrace_normal.x - (this_ptr->linear_velocity_local).y;
      local_344.scrape_points[1].local_position.y =
           local_344.scrape_points[3].raytrace_normal.y - (this_ptr->linear_velocity_local).z;
      local_c8 = local_344.scrape_points[0].raytrace_normal.z * *pfVar1;
      local_c4 = local_344.scrape_points[1].local_position.x * *pfVar1;
      local_c0 = local_344.scrape_points[1].local_position.y * *pfVar1;
      fVar12 = 1.0 / delta_time;
      local_344.scrape_points[6].raytrace_intersection = local_c8 * fVar12;
      local_344.scrape_points[6].raytrace_normal.x = local_c4 * fVar12;
      local_344.scrape_points[6].raytrace_normal.y = local_c0 * fVar12;
      (this_ptr->linear_momentum).x =
           (this_ptr->linear_momentum).x + local_344.scrape_points[6].raytrace_intersection;
      (this_ptr->linear_momentum).y =
           (this_ptr->linear_momentum).y + local_344.scrape_points[6].raytrace_normal.x;
      (this_ptr->linear_momentum).z =
           (this_ptr->linear_momentum).z + local_344.scrape_points[6].raytrace_normal.y;
      (this_ptr->angular_velocity).x = 0.0;
      (this_ptr->angular_velocity).y = 0.0;
      (this_ptr->angular_velocity).z = 0.0;
      pSVar2 = this_ptr->scrape_points + local_3d0[0];
      local_344.scrape_points[2].raytrace_normal.x =
           (pSVar2->local_position).y * local_344.scrape_points[6].raytrace_normal.y -
           (pSVar2->local_position).z * local_344.scrape_points[6].raytrace_normal.x;
      local_344.scrape_points[2].raytrace_normal.y =
           (pSVar2->local_position).z * local_344.scrape_points[6].raytrace_intersection -
           (pSVar2->local_position).x * local_344.scrape_points[6].raytrace_normal.y;
      fVar12 = local_344.scrape_points[2].raytrace_normal.y * 0.1f;
      local_344.scrape_points[2].raytrace_normal.z =
           (pSVar2->local_position).x * local_344.scrape_points[6].raytrace_normal.x -
           (pSVar2->local_position).y * local_344.scrape_points[6].raytrace_intersection;
      fVar8 = local_344.scrape_points[2].raytrace_normal.z * 0.1f;
      pCVar14 = &this_ptr->angular_momentum;
      pCVar14->x = pCVar14->x +
                   local_344.scrape_points[2].raytrace_normal.x * 0.1f;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + fVar12;
      pSVar12 = this_ptr->scrape_points + local_3d0[1];
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + fVar8;
      local_35c = (pSVar12->local_position).y * local_344.scrape_points[6].raytrace_normal.y -
                  (pSVar12->local_position).z * local_344.scrape_points[6].raytrace_normal.x;
      local_358 = (pSVar12->local_position).z * local_344.scrape_points[6].raytrace_intersection -
                  (pSVar12->local_position).x * local_344.scrape_points[6].raytrace_normal.y;
      local_354 = (pSVar12->local_position).x * local_344.scrape_points[6].raytrace_normal.x -
                  (pSVar12->local_position).y * local_344.scrape_points[6].raytrace_intersection;
      fVar12 = local_358 * 0.1f;
      fVar8 = local_354 * 0.1f;
      pCVar14->x = pCVar14->x + local_35c * 0.1f;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + fVar12;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + fVar8;
      local_344.scrape_points[0].local_position = pSVar2->local_position;
      fVar12 = (pSVar12->local_position).x;
      fVar8 = (pSVar12->local_position).y;
      fVar9 = (pSVar12->local_position).z;
      local_344.linear_velocity_local.z = 0.0;
      local_344.linear_velocity_temp.y = 0.0;
      local_344.linear_velocity_temp.x = this_ptr->mass * (float)32;
      pCVar14 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                          (&this_ptr->rotation_matrix,(CVector3f *)&local_344.angular_velocity.z,
                           (CVector3f *)&local_344.linear_velocity_local.z);
      fVar10 = 0.5f;
      if ((CVector3f *)&local_344.linear_velocity_local.z != pCVar14) {
        local_344.linear_velocity_local.z = pCVar14->x;
        local_344.linear_velocity_temp.x = pCVar14->y;
        local_344.linear_velocity_temp.y = pCVar14->z;
      }
      local_98 = local_344.linear_velocity_local.z * 0.5f;
      local_94 = local_344.linear_velocity_temp.x * 0.5f;
      local_90 = local_344.linear_velocity_temp.y * 0.5f;
      pCVar14 = &this_ptr->angular_momentum;
      local_344.scrape_points[6].raytrace_normal.z =
           local_344.scrape_points[0].local_position.y * local_90 -
           local_344.scrape_points[0].local_position.z * local_94;
      local_344.scrape_points[7].local_position.x =
           local_344.scrape_points[0].local_position.z * local_98 -
           local_344.scrape_points[0].local_position.x * local_90;
      local_344.scrape_points[7].local_position.y =
           local_344.scrape_points[0].local_position.x * local_94 -
           local_344.scrape_points[0].local_position.y * local_98;
      pCVar14->x = pCVar14->x + local_344.scrape_points[6].raytrace_normal.z;
      (this_ptr->angular_momentum).y =
           (this_ptr->angular_momentum).y + local_344.scrape_points[7].local_position.x;
      (this_ptr->angular_momentum).z =
           (this_ptr->angular_momentum).z + local_344.scrape_points[7].local_position.y;
      local_344.scrape_points[1].local_position.z = local_344.linear_velocity_local.z * fVar10;
      local_344.scrape_points[1].transformed_position.x = local_344.linear_velocity_temp.x * fVar10;
      local_344.scrape_points[1].transformed_position.y = local_344.linear_velocity_temp.y * fVar10;
      local_344.scrape_points[2].local_position.y =
           fVar8 * local_344.scrape_points[1].transformed_position.y -
           fVar9 * local_344.scrape_points[1].transformed_position.x;
      local_344.scrape_points[2].local_position.z =
           fVar9 * local_344.scrape_points[1].local_position.z -
           fVar12 * local_344.scrape_points[1].transformed_position.y;
      local_344.scrape_points[2].transformed_position.x =
           fVar12 * local_344.scrape_points[1].transformed_position.x -
           fVar8 * local_344.scrape_points[1].local_position.z;
      pCVar14->x = pCVar14->x + local_344.scrape_points[2].local_position.y;
      (this_ptr->angular_momentum).y =
           (this_ptr->angular_momentum).y + local_344.scrape_points[2].local_position.z;
      (this_ptr->angular_momentum).z =
           (this_ptr->angular_momentum).z + local_344.scrape_points[2].transformed_position.x;
    }
    if (2 < local_1c) {
      iVar18 = 0;
      local_3c = 0;
      local_30 = 0.0;
      if (0 < local_1c * 4) {
        do {
          iVar11 = local_3d0[iVar18 / 4];
          fVar12 = (1.0 - this_ptr->scrape_points[iVar11].raytrace_intersection) *
                   (float)-1.01;
          local_344.scrape_points[6].local_position.y =
               (this_ptr->scrape_points[iVar11].transformed_position.y -
               this_ptr->scrape_points[iVar11].previous_position.y) * fVar12;
          local_344.scrape_points[6].local_position.x =
               (this_ptr->scrape_points[iVar11].transformed_position.x -
               this_ptr->scrape_points[iVar11].previous_position.x) * fVar12;
          local_344.scrape_points[6].local_position.z =
               (this_ptr->scrape_points[iVar11].transformed_position.z -
               this_ptr->scrape_points[iVar11].previous_position.z) * fVar12;
          fVar12 = SQRT(local_344.scrape_points[6].local_position.z *
                        local_344.scrape_points[6].local_position.z +
                        local_344.scrape_points[6].local_position.x *
                        local_344.scrape_points[6].local_position.x +
                        local_344.scrape_points[6].local_position.y *
                        local_344.scrape_points[6].local_position.y);
          if ((local_30 < fVar12) &&
             (local_3c = iVar11, local_30 = fVar12,
             (SScrape *)&local_380 != local_344.scrape_points + 6)) {
            local_380 = local_344.scrape_points[6].local_position.x;
            local_37c = local_344.scrape_points[6].local_position.y;
            local_378 = local_344.scrape_points[6].local_position.z;
          }
          iVar18 = iVar18 + 4;
        } while (iVar18 < local_1c * 4);
      }
      (this_ptr->position).x = (this_ptr->position).x + local_380;
      (this_ptr->position).y = (this_ptr->position).y + local_37c;
      pCVar14 = &this_ptr->linear_velocity_local;
      (this_ptr->position).z = (this_ptr->position).z + local_378;
      local_344.angular_momentum.z = pCVar14->x;
      local_344.mass = (this_ptr->linear_velocity_local).y;
      local_344.moment_of_inertia.x = (this_ptr->linear_velocity_local).z;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (&this_ptr->rotation_matrix,&local_344.scrape_points[0].previous_position,
                 &this_ptr->scrape_points[local_3c].raytrace_normal);
      fVar12 = (local_344.scrape_points[0].previous_position.z * (this_ptr->linear_velocity_local).z
               + local_344.scrape_points[0].previous_position.x * pCVar14->x +
                 local_344.scrape_points[0].previous_position.y *
                 (this_ptr->linear_velocity_local).y) * 2.0f;
      if (&local_344.moment_of_inertia.y != &local_344.scrape_points[2].transformed_position.y) {
        local_344.moment_of_inertia.y =
             local_344.scrape_points[0].previous_position.x * fVar12 - pCVar14->x;
        local_344.moment_of_inertia.z =
             local_344.scrape_points[0].previous_position.y * fVar12 -
             (this_ptr->linear_velocity_local).y;
        local_344.extents.x =
             local_344.scrape_points[0].previous_position.z * fVar12 -
             (this_ptr->linear_velocity_local).z;
      }
      fVar7 = local_344.moment_of_inertia.z * -1.0f * 0.2f;
      fVar6 = local_344.extents.x * -1.0f * 0.2f;
      pfVar1 = &this_ptr->mass;
      fVar12 = (this_ptr->linear_velocity_local).y;
      fVar8 = (this_ptr->linear_velocity_local).z;
      fVar9 = *pfVar1;
      fVar10 = *pfVar1;
      fVar5 = 1.0 / delta_time;
      (this_ptr->linear_momentum).x =
           (this_ptr->linear_momentum).x +
           (local_344.moment_of_inertia.y * -1.0f * 0.2f -
           (this_ptr->linear_velocity_local).x) * *pfVar1 * fVar5;
      (this_ptr->linear_momentum).y =
           (this_ptr->linear_momentum).y + (fVar7 - fVar12) * fVar9 * fVar5;
      (this_ptr->linear_momentum).z =
           (this_ptr->linear_momentum).z + (fVar6 - fVar8) * fVar10 * fVar5;
      (this_ptr->angular_velocity).x = 0.0;
      (this_ptr->angular_velocity).y = 0.0;
      (this_ptr->angular_velocity).z = 0.0;
    }
    if ((0 < local_1c) &&
       (fVar12 = (this_ptr->linear_velocity_local).y, fVar8 = (this_ptr->linear_velocity_local).x,
       fVar9 = (this_ptr->linear_velocity_local).z,
       SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar12 * fVar12) < 1.0)) {
      iVar18 = 0;
      iVar16 = 0;
      if (0 < this_ptr->scrape_point_count) {
        do {
          if (ABS(this_ptr->scrape_points[iVar18].transformed_position.y - this_ptr[1].position.x) <
              (float)0.10000000000000001) {
            iVar16 = iVar16 + 1;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < this_ptr->scrape_point_count);
      }
      if (this_ptr->scrape_point_count / 2 <= iVar16) {
        this_ptr->is_valid = 0;
        return;
      }
    }
  }
  return;
}
