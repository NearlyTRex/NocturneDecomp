// Name: core_box.cpp_CBox_processPhysics_FUN_0041ad10
// Address: 0041ad10
// Address Range: [[0041ad10, 0041c846]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041ad10(CBox *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041ad10(CBox *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  int iVar10;
  SScrape *pSVar11;
  SScrape *pSVar12;
  CBox *pCVar13;
  float *pfVar14;
  CMatrix3x3f *pCVar15;
  int iVar16;
  byte bVar17;
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
  float local_3d0 [8];
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  CBox local_344;
  float local_ec;
  float local_e8;
  float local_e4;
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
  float local_80;
  float local_7c;
  float local_78;
  CVector3f *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  SScrape *local_50;
  float local_4c;
  float local_48;
  CMatrix3x3f *local_44;
  SScrape *local_40;
  int local_3c;
  SScrape *local_38;
  int local_34;
  float local_30;
  float local_2c;
  SScrape *local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  bVar17 = 0;
  if (this_ptr->is_valid != 0) {
    if ((CBox *)&local_344.scrape_points[7].transformed_position.z != this_ptr) {
      local_344.scrape_points[7].transformed_position.z = (this_ptr->position).x;
      local_344.scrape_points[7].previous_position.x = (this_ptr->position).y;
      local_344.scrape_points[7].previous_position.y = (this_ptr->position).z;
    }
    if (&local_344 != this_ptr) {
      local_344.position.x = (this_ptr->position).x;
      local_344.position.y = (this_ptr->position).y;
      local_344.position.z = (this_ptr->position).z;
    }
    local_344.scrape_points[7].previous_position.x =
         local_344.scrape_points[7].previous_position.x + 1.0;
    local_344.position.y = local_344.position.y + 1.6145507525740408e-314._0_4_;
    local_18 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
                         (&g_CDemonRaytrace_01fba938,
                          (CVector3f *)&local_344.scrape_points[7].transformed_position.z,
                          &local_344.position,&local_344.scrape_points[3].local_position,(int *)0x0)
    ;
    if ((local_18 <= 0.0) || (1.0 <= local_18)) {
      this_ptr[1].position.x = -9999.0;
    }
    else {
      this_ptr[1].position.x =
           (local_344.position.y - local_344.scrape_points[7].previous_position.x) * local_18 +
           local_344.scrape_points[7].previous_position.x;
    }
    pCVar9 = &this_ptr->scrape_points[0].transformed_position;
    pCVar8 = &this_ptr->scrape_points[0].previous_position;
    do {
      if (pCVar8 != pCVar9) {
        pCVar8->x = pCVar9->x;
        pCVar8->y = pCVar9->y;
        pCVar8->z = pCVar9->z;
      }
      pCVar9 = (CVector3f *)((int)(pCVar9 + 4) + 4);
      pCVar8 = (CVector3f *)((int)(pCVar8 + 4) + 4);
    } while (pCVar9 != (CVector3f *)&this_ptr[1].position.z);
    local_344.rotation_matrix.m[1].z = 0.0;
    local_344.rotation_matrix.m[1].x = 0.0;
    local_344.rotation_matrix.m[1].y = -this_ptr->mass * (float)32;
    pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                       (&this_ptr->rotation_matrix,(CVector3f *)&local_344.linear_velocity.z,
                        local_344.rotation_matrix.m + 1);
    pCVar9 = &this_ptr->linear_momentum;
    pCVar9->x = pCVar8->x + pCVar9->x;
    (this_ptr->linear_momentum).y = pCVar8->y + (this_ptr->linear_momentum).y;
    pfVar14 = &this_ptr->mass;
    (this_ptr->linear_momentum).z = pCVar8->z + (this_ptr->linear_momentum).z;
    local_344.linear_velocity_temp.z = pCVar9->x / *pfVar14;
    local_344.linear_momentum.x = (this_ptr->linear_momentum).y / *pfVar14;
    local_344.linear_momentum.y = (this_ptr->linear_momentum).z / *pfVar14;
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
    (this_ptr->linear_momentum).z = 0.0;
    (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).z;
    (this_ptr->linear_momentum).x = (this_ptr->linear_momentum).y;
    (this_ptr->angular_momentum).z = 0.0;
    (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).z;
    (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).y;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       (&this_ptr->rotation_matrix,(CVector3f *)&local_344.angular_velocity_temp.z,
                        &this_ptr->linear_velocity_temp);
    local_344.extents.y = pCVar9->x * delta_time;
    local_344.extents.z = pCVar9->y * delta_time;
    local_344.scrape_point_count = (int)(delta_time * pCVar9->z);
    pCVar9 = &this_ptr->linear_velocity;
    pCVar9->x = pCVar9->x + local_344.extents.y;
    (this_ptr->linear_velocity).y = (this_ptr->linear_velocity).y + local_344.extents.z;
    (this_ptr->linear_velocity).z =
         (this_ptr->linear_velocity).z + (float)local_344.scrape_point_count;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                       (&this_ptr->rotation_matrix,&local_344.scrape_points[0].transformed_position,
                        pCVar9);
    if (&this_ptr->linear_velocity_local != pCVar9) {
      (this_ptr->linear_velocity_local).x = pCVar9->x;
      (this_ptr->linear_velocity_local).y = pCVar9->y;
      (this_ptr->linear_velocity_local).z = pCVar9->z;
    }
    local_344.rotation_matrix.m[0].x = (this_ptr->angular_velocity_temp).x * delta_time;
    local_344.rotation_matrix.m[0].y = (this_ptr->angular_velocity_temp).y * delta_time;
    local_344.rotation_matrix.m[0].z = delta_time * (this_ptr->angular_velocity_temp).z;
    pCVar9 = &this_ptr->angular_velocity;
    pCVar9->x = pCVar9->x + local_344.rotation_matrix.m[0].x;
    fVar1 = (this_ptr->angular_velocity).y + local_344.rotation_matrix.m[0].y;
    (this_ptr->angular_velocity).y = fVar1;
    fVar2 = (this_ptr->angular_velocity).z + local_344.rotation_matrix.m[0].z;
    (this_ptr->angular_velocity).z = fVar2;
    fVar1 = SQRT(fVar2 * (this_ptr->angular_velocity).z +
                 pCVar9->x * pCVar9->x + fVar1 * (this_ptr->angular_velocity).y);
    if ((float)25.132741228 < fVar1) {
      local_60 = (float)25.132741228 / fVar1;
      pCVar9->x = pCVar9->x * local_60;
      (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).y * local_60;
      (this_ptr->angular_velocity).z = (this_ptr->angular_velocity).z * local_60;
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
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
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
    pfVar14 = &local_3f8;
    pCVar15 = &this_ptr->rotation_matrix;
    for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
      pCVar15->m[0].x = *pfVar14;
      pfVar14 = pfVar14 + (uint)bVar17 * -2 + 1;
      pCVar15 = (CMatrix3x3f *)((int)pCVar15 + (uint)bVar17 * -8 + 4);
    }
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
                       (&this_ptr->rotation_matrix,
                        (CVector3f *)&local_344.scrape_points[5].previous_position.y);
    if (&this_ptr->orientation != pCVar9) {
      (this_ptr->orientation).x = pCVar9->x;
      (this_ptr->orientation).y = pCVar9->y;
      (this_ptr->orientation).z = pCVar9->z;
    }
    iVar10 = 0;
    if (0 < this_ptr->scrape_point_count) {
      local_40 = this_ptr->scrape_points;
      local_44 = &this_ptr->rotation_matrix;
      pCVar9 = &this_ptr->scrape_points[0].transformed_position;
      do {
        pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                           (local_44,(CVector3f *)&local_344.scrape_points[2].previous_position.y,
                            &local_40[iVar10].local_position);
        local_e0 = (this_ptr->position).x + pCVar8->x;
        local_dc = (this_ptr->position).y + pCVar8->y;
        local_d8 = (this_ptr->position).z + pCVar8->z;
        if (pCVar9 != (CVector3f *)&local_e0) {
          pCVar9->x = local_e0;
          pCVar9->y = local_dc;
          pCVar9->z = local_d8;
        }
        iVar10 = iVar10 + 1;
        pCVar9 = (CVector3f *)((int)(pCVar9 + 4) + 4);
      } while (iVar10 < this_ptr->scrape_point_count);
    }
    local_20 = 0.0;
    local_50 = this_ptr->scrape_points;
    local_1c = 0;
    local_6c = &this_ptr->scrape_points[0].previous_position;
    pCVar9 = &this_ptr->scrape_points[0].transformed_position;
    pCVar13 = this_ptr;
    pSVar11 = this_ptr->scrape_points;
    if (0 < this_ptr->scrape_point_count) {
      do {
        local_28 = pSVar11;
        if (this_ptr[1].position.x <= pCVar13->scrape_points[0].transformed_position.y) {
          local_80 = pCVar9->x - local_6c->x;
          local_7c = pCVar9->y - local_6c->y;
          local_78 = pCVar9->z - local_6c->z;
          if ((float)0.01 <
              SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c)) {
            local_18 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
                                 (&g_CDemonRaytrace_01fba938,local_6c,pCVar9,
                                  &local_28->raytrace_normal,(int *)0x0);
            pCVar13->scrape_points[0].raytrace_intersection = local_18;
            fVar1 = pCVar13->scrape_points[0].raytrace_intersection;
            if ((0.0 < fVar1) && (fVar1 < 1.0)) {
              local_3d0[local_1c] = local_20;
              local_1c = local_1c + 1;
            }
          }
        }
        else {
          if (pCVar9 != local_6c) {
            local_6c->x = pCVar9->x;
            local_6c->y = pCVar9->y;
            local_6c->z = pCVar9->z;
          }
          fVar1 = pCVar13->scrape_points[0].transformed_position.y;
          pCVar13->scrape_points[0].previous_position.y =
               this_ptr[1].position.x + (float)0.5;
          fVar2 = pCVar13->scrape_points[0].previous_position.y;
          fVar3 = this_ptr[1].position.x;
          fVar4 = pCVar13->scrape_points[0].previous_position.y;
          pCVar13->scrape_points[0].raytrace_normal.x = 0.0;
          pCVar13->scrape_points[0].raytrace_normal.y = 1.0;
          pCVar13->scrape_points[0].raytrace_normal.z = 0.0;
          pCVar13->scrape_points[0].raytrace_intersection = (fVar3 - fVar4) / (fVar1 - fVar2);
          local_3d0[local_1c] = local_20;
          local_1c = local_1c + 1;
        }
        pCVar9 = (CVector3f *)&pCVar9[4].y;
        local_20 = (float)((int)local_20 + 1);
        local_6c = (CVector3f *)&local_6c[4].y;
        local_28 = local_28 + 1;
        pCVar13 = (CBox *)&(pCVar13->rotation_matrix).m[2].y;
        pSVar11 = local_28;
      } while ((int)local_20 < this_ptr->scrape_point_count);
    }
    fVar1 = local_3d0[0];
    if (local_1c == 1) {
      local_344.scrape_points[3].previous_position.x =
           local_50[(int)local_3d0[0]].transformed_position.x -
           local_50[(int)local_3d0[0]].previous_position.x;
      local_344.scrape_points[3].previous_position.y =
           local_50[(int)local_3d0[0]].transformed_position.y -
           local_50[(int)local_3d0[0]].previous_position.y;
      local_344.scrape_points[3].previous_position.z =
           local_50[(int)local_3d0[0]].transformed_position.z -
           local_50[(int)local_3d0[0]].previous_position.z;
      local_5c = (1.0 - this_ptr->scrape_points[(int)local_3d0[0]].raytrace_intersection) *
                 (float)1.01;
      local_344.scrape_points[4].previous_position.z =
           local_344.scrape_points[3].previous_position.x * local_5c;
      local_344.scrape_points[4].raytrace_intersection =
           local_344.scrape_points[3].previous_position.y * local_5c;
      local_344.scrape_points[4].raytrace_normal.x =
           local_344.scrape_points[3].previous_position.z * local_5c;
      (this_ptr->position).x =
           (this_ptr->position).x - local_344.scrape_points[4].previous_position.z;
      (this_ptr->position).y =
           (this_ptr->position).y - local_344.scrape_points[4].raytrace_intersection;
      (this_ptr->position).z = (this_ptr->position).z - local_344.scrape_points[4].raytrace_normal.x
      ;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                (&this_ptr->rotation_matrix,
                 (CVector3f *)&local_344.scrape_points[4].raytrace_normal.y,
                 &local_50[(int)local_3d0[0]].raytrace_normal);
      pCVar9 = &this_ptr->linear_velocity_local;
      local_374 = pCVar9->x;
      local_370 = (this_ptr->linear_velocity_local).y;
      local_36c = (this_ptr->linear_velocity_local).z;
      local_48 = (local_344.scrape_points[5].local_position.x * (this_ptr->linear_velocity_local).z
                 + local_344.scrape_points[4].raytrace_normal.y * pCVar9->x +
                   local_344.scrape_points[4].raytrace_normal.z *
                   (this_ptr->linear_velocity_local).y) * 2.0f;
      local_344.scrape_points[7].previous_position.z =
           local_344.scrape_points[4].raytrace_normal.y * local_48;
      local_344.scrape_points[7].raytrace_intersection =
           local_344.scrape_points[4].raytrace_normal.z * local_48;
      local_344.scrape_points[7].raytrace_normal.x =
           local_344.scrape_points[5].local_position.x * local_48;
      local_344.scrape_points[3].transformed_position.x =
           local_344.scrape_points[7].previous_position.z - pCVar9->x;
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
           local_344.scrape_points[6].previous_position.x * -1.0f * 0.5f;
      local_344.scrape_points[6].previous_position.y =
           local_344.scrape_points[6].previous_position.y * -1.0f * 0.5f;
      local_344.scrape_points[6].previous_position.z =
           local_344.scrape_points[6].previous_position.z * -1.0f * 0.5f;
      pfVar14 = &this_ptr->mass;
      local_bc = local_344.scrape_points[6].previous_position.x -
                 (this_ptr->linear_velocity_local).x;
      local_b8 = local_344.scrape_points[6].previous_position.y -
                 (this_ptr->linear_velocity_local).y;
      local_b4 = local_344.scrape_points[6].previous_position.z -
                 (this_ptr->linear_velocity_local).z;
      local_344.scrape_points[6].transformed_position.x = local_bc * *pfVar14;
      local_344.scrape_points[6].transformed_position.y = local_b8 * *pfVar14;
      local_344.scrape_points[6].transformed_position.z = local_b4 * *pfVar14;
      local_344.linear_velocity.y = 1.0 / delta_time;
      local_344.dead =
           (int)(local_344.scrape_points[6].transformed_position.x * local_344.linear_velocity.y);
      local_344.linear_velocity.x =
           local_344.scrape_points[6].transformed_position.y * local_344.linear_velocity.y;
      local_344.linear_velocity.y =
           local_344.scrape_points[6].transformed_position.z * local_344.linear_velocity.y;
      (this_ptr->linear_momentum).x = (this_ptr->linear_momentum).x + (float)local_344.dead;
      (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).y + local_344.linear_velocity.x;
      (this_ptr->linear_momentum).z = (this_ptr->linear_momentum).z + local_344.linear_velocity.y;
      (this_ptr->angular_velocity).z = 0.0;
      (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
      (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
      pSVar11 = this_ptr->scrape_points + (int)fVar1;
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
      local_38c = (pSVar11->local_position).x;
      local_388 = (pSVar11->local_position).y;
      local_384 = (pSVar11->local_position).z;
      local_8c.x = 0.0;
      local_8c.z = 0.0;
      local_8c.y = this_ptr->mass * (float)32;
      pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (&this_ptr->rotation_matrix,
                          (CVector3f *)&local_344.scrape_points[5].local_position.y,&local_8c);
      if (&local_8c != pCVar9) {
        local_8c.x = pCVar9->x;
        local_8c.y = pCVar9->y;
        local_8c.z = pCVar9->z;
      }
      local_350 = local_388 * local_8c.z - local_384 * local_8c.y;
      local_34c = local_384 * local_8c.x - local_38c * local_8c.z;
      local_348 = local_38c * local_8c.y - local_388 * local_8c.x;
      (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).x + local_350;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_34c;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_348;
    }
    if (local_1c == 2) {
      local_344.scrape_points[1].previous_position.z =
           this_ptr->scrape_points[(int)local_3d0[0]].transformed_position.x -
           this_ptr->scrape_points[(int)local_3d0[0]].previous_position.x;
      local_344.scrape_points[1].raytrace_intersection =
           this_ptr->scrape_points[(int)local_3d0[0]].transformed_position.y -
           this_ptr->scrape_points[(int)local_3d0[0]].previous_position.y;
      local_344.scrape_points[1].raytrace_normal.x =
           this_ptr->scrape_points[(int)local_3d0[0]].transformed_position.z -
           this_ptr->scrape_points[(int)local_3d0[0]].previous_position.z;
      local_4c = (1.0 - this_ptr->scrape_points[(int)local_3d0[0]].raytrace_intersection) *
                 (float)-1.01;
      local_344.scrape_points[4].transformed_position.z =
           local_344.scrape_points[1].previous_position.z * local_4c;
      local_68 = local_3d0[1];
      local_344.scrape_points[4].previous_position.x =
           local_344.scrape_points[1].raytrace_intersection * local_4c;
      local_344.scrape_points[4].previous_position.y =
           local_344.scrape_points[1].raytrace_normal.x * local_4c;
      local_344.scrape_points[0].raytrace_intersection =
           this_ptr->scrape_points[(int)local_3d0[1]].transformed_position.x -
           this_ptr->scrape_points[(int)local_3d0[1]].previous_position.x;
      local_344.scrape_points[0].raytrace_normal.x =
           this_ptr->scrape_points[(int)local_3d0[1]].transformed_position.y -
           this_ptr->scrape_points[(int)local_3d0[1]].previous_position.y;
      local_344.scrape_points[0].raytrace_normal.y =
           this_ptr->scrape_points[(int)local_3d0[1]].transformed_position.z -
           this_ptr->scrape_points[(int)local_3d0[1]].previous_position.z;
      local_64 = (1.0 - this_ptr->scrape_points[(int)local_3d0[1]].raytrace_intersection) *
                 (float)-1.01;
      local_a0 = local_344.scrape_points[0].raytrace_normal.x * local_64;
      local_a4 = local_344.scrape_points[0].raytrace_intersection * local_64;
      local_9c = local_344.scrape_points[0].raytrace_normal.y * local_64;
      if (SQRT(local_344.scrape_points[4].previous_position.y *
               local_344.scrape_points[4].previous_position.y +
               local_344.scrape_points[4].transformed_position.z *
               local_344.scrape_points[4].transformed_position.z +
               local_344.scrape_points[4].previous_position.x *
               local_344.scrape_points[4].previous_position.x) <=
          SQRT(local_9c * local_9c + local_a4 * local_a4 + local_a0 * local_a0)) {
        (this_ptr->position).x = (this_ptr->position).x + local_a4;
        pCVar9 = (CVector3f *)&local_344.scrape_points[7].raytrace_normal.y;
        (this_ptr->position).y = (this_ptr->position).y + local_a0;
        fVar1 = (this_ptr->position).z + local_9c;
      }
      else {
        (this_ptr->position).x =
             (this_ptr->position).x + local_344.scrape_points[4].transformed_position.z;
        pCVar9 = (CVector3f *)&local_344.scrape_points[3].raytrace_normal.z;
        (this_ptr->position).y =
             (this_ptr->position).y + local_344.scrape_points[4].previous_position.x;
        fVar1 = (this_ptr->position).z + local_344.scrape_points[4].previous_position.y;
        local_3d0[1] = local_3d0[0];
      }
      (this_ptr->position).z = fVar1;
      pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (&this_ptr->rotation_matrix,pCVar9,
                          &this_ptr->scrape_points[(int)local_3d0[1]].raytrace_normal);
      if (&local_344.orientation != pCVar9) {
        local_344.orientation.x = pCVar9->x;
        local_344.orientation.y = pCVar9->y;
        local_344.orientation.z = pCVar9->z;
      }
      pCVar9 = &this_ptr->linear_velocity_local;
      local_368 = pCVar9->x;
      local_364 = (this_ptr->linear_velocity_local).y;
      local_360 = (this_ptr->linear_velocity_local).z;
      local_58 = (local_344.orientation.z * (this_ptr->linear_velocity_local).z +
                 local_344.orientation.x * pCVar9->x +
                 local_344.orientation.y * (this_ptr->linear_velocity_local).y) * 2.0f;
      local_344.linear_momentum.z = local_344.orientation.x * local_58;
      local_344.angular_velocity.x = local_344.orientation.y * local_58;
      local_344.angular_velocity.y = local_344.orientation.z * local_58;
      local_d4 = local_344.linear_momentum.z - pCVar9->x;
      local_d0 = local_344.angular_velocity.x - (this_ptr->linear_velocity_local).y;
      local_cc = local_344.angular_velocity.y - (this_ptr->linear_velocity_local).z;
      if (&local_344.scrape_points[3].raytrace_intersection != &local_d4) {
        local_344.scrape_points[3].raytrace_intersection = local_d4;
        local_344.scrape_points[3].raytrace_normal.x = local_d0;
        local_344.scrape_points[3].raytrace_normal.y = local_cc;
      }
      local_344.scrape_points[3].raytrace_intersection =
           local_344.scrape_points[3].raytrace_intersection * -1.0f * 0.25f;
      local_344.scrape_points[3].raytrace_normal.x =
           local_344.scrape_points[3].raytrace_normal.x * -1.0f * 0.25f;
      local_344.scrape_points[3].raytrace_normal.y =
           local_344.scrape_points[3].raytrace_normal.y * -1.0f * 0.25f;
      pfVar14 = &this_ptr->mass;
      local_344.scrape_points[0].raytrace_normal.z =
           local_344.scrape_points[3].raytrace_intersection - (this_ptr->linear_velocity_local).x;
      local_344.scrape_points[1].local_position.x =
           local_344.scrape_points[3].raytrace_normal.x - (this_ptr->linear_velocity_local).y;
      local_344.scrape_points[1].local_position.y =
           local_344.scrape_points[3].raytrace_normal.y - (this_ptr->linear_velocity_local).z;
      local_c8 = local_344.scrape_points[0].raytrace_normal.z * *pfVar14;
      local_c4 = local_344.scrape_points[1].local_position.x * *pfVar14;
      local_c0 = local_344.scrape_points[1].local_position.y * *pfVar14;
      local_344.scrape_points[6].raytrace_normal.y = 1.0 / delta_time;
      local_344.scrape_points[6].raytrace_intersection =
           local_c8 * local_344.scrape_points[6].raytrace_normal.y;
      local_344.scrape_points[6].raytrace_normal.x =
           local_c4 * local_344.scrape_points[6].raytrace_normal.y;
      local_344.scrape_points[6].raytrace_normal.y =
           local_c0 * local_344.scrape_points[6].raytrace_normal.y;
      (this_ptr->linear_momentum).x =
           (this_ptr->linear_momentum).x + local_344.scrape_points[6].raytrace_intersection;
      (this_ptr->linear_momentum).y =
           (this_ptr->linear_momentum).y + local_344.scrape_points[6].raytrace_normal.x;
      (this_ptr->linear_momentum).z =
           (this_ptr->linear_momentum).z + local_344.scrape_points[6].raytrace_normal.y;
      (this_ptr->angular_velocity).z = 0.0;
      (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
      (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
      pSVar11 = this_ptr->scrape_points + (int)local_3d0[0];
      local_344.scrape_points[2].raytrace_normal.x =
           (pSVar11->local_position).y * local_344.scrape_points[6].raytrace_normal.y -
           (pSVar11->local_position).z * local_344.scrape_points[6].raytrace_normal.x;
      local_344.scrape_points[2].raytrace_normal.y =
           (pSVar11->local_position).z * local_344.scrape_points[6].raytrace_intersection -
           (pSVar11->local_position).x * local_344.scrape_points[6].raytrace_normal.y;
      local_3a4 = local_344.scrape_points[2].raytrace_normal.x * 0.1f;
      local_3a0 = local_344.scrape_points[2].raytrace_normal.y * 0.1f;
      local_344.scrape_points[2].raytrace_normal.z =
           (pSVar11->local_position).x * local_344.scrape_points[6].raytrace_normal.x -
           (pSVar11->local_position).y * local_344.scrape_points[6].raytrace_intersection;
      local_39c = local_344.scrape_points[2].raytrace_normal.z * 0.1f;
      pCVar9 = &this_ptr->angular_momentum;
      pCVar9->x = pCVar9->x + local_3a4;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_3a0;
      pSVar12 = this_ptr->scrape_points + (int)local_68;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_39c;
      local_35c = (pSVar12->local_position).y * local_344.scrape_points[6].raytrace_normal.y -
                  (pSVar12->local_position).z * local_344.scrape_points[6].raytrace_normal.x;
      local_358 = (pSVar12->local_position).z * local_344.scrape_points[6].raytrace_intersection -
                  (pSVar12->local_position).x * local_344.scrape_points[6].raytrace_normal.y;
      local_354 = (pSVar12->local_position).x * local_344.scrape_points[6].raytrace_normal.x -
                  (pSVar12->local_position).y * local_344.scrape_points[6].raytrace_intersection;
      local_3b0 = local_35c * 0.1f;
      local_3ac = local_358 * 0.1f;
      local_3a8 = local_354 * 0.1f;
      pCVar9->x = pCVar9->x + local_3b0;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_3ac;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_3a8;
      local_344.scrape_points[0].local_position.x = (pSVar11->local_position).x;
      local_344.scrape_points[0].local_position.y = (pSVar11->local_position).y;
      local_344.scrape_points[0].local_position.z = (pSVar11->local_position).z;
      local_ec = (pSVar12->local_position).x;
      local_e8 = (pSVar12->local_position).y;
      local_e4 = (pSVar12->local_position).z;
      local_344.linear_velocity_local.z = 0.0;
      local_344.linear_velocity_temp.y = 0.0;
      local_344.linear_velocity_temp.x = this_ptr->mass * (float)32;
      pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (&this_ptr->rotation_matrix,(CVector3f *)&local_344.angular_velocity.z,
                          (CVector3f *)&local_344.linear_velocity_local.z);
      local_344.scrape_points[1].transformed_position.y = 0.5f;
      if ((CVector3f *)&local_344.linear_velocity_local.z != pCVar9) {
        local_344.linear_velocity_local.z = pCVar9->x;
        local_344.linear_velocity_temp.x = pCVar9->y;
        local_344.linear_velocity_temp.y = pCVar9->z;
      }
      local_98 = local_344.linear_velocity_local.z * 0.5f;
      local_94 = local_344.linear_velocity_temp.x * 0.5f;
      local_90 = local_344.linear_velocity_temp.y * 0.5f;
      pCVar9 = &this_ptr->angular_momentum;
      local_344.scrape_points[6].raytrace_normal.z =
           local_344.scrape_points[0].local_position.y * local_90 -
           local_344.scrape_points[0].local_position.z * local_94;
      local_344.scrape_points[7].local_position.x =
           local_344.scrape_points[0].local_position.z * local_98 -
           local_344.scrape_points[0].local_position.x * local_90;
      local_344.scrape_points[7].local_position.y =
           local_344.scrape_points[0].local_position.x * local_94 -
           local_344.scrape_points[0].local_position.y * local_98;
      pCVar9->x = pCVar9->x + local_344.scrape_points[6].raytrace_normal.z;
      (this_ptr->angular_momentum).y =
           (this_ptr->angular_momentum).y + local_344.scrape_points[7].local_position.x;
      (this_ptr->angular_momentum).z =
           (this_ptr->angular_momentum).z + local_344.scrape_points[7].local_position.y;
      local_344.scrape_points[1].local_position.z =
           local_344.linear_velocity_local.z * local_344.scrape_points[1].transformed_position.y;
      local_344.scrape_points[1].transformed_position.x =
           local_344.linear_velocity_temp.x * local_344.scrape_points[1].transformed_position.y;
      local_344.scrape_points[1].transformed_position.y =
           local_344.linear_velocity_temp.y * local_344.scrape_points[1].transformed_position.y;
      local_344.scrape_points[2].local_position.y =
           local_e8 * local_344.scrape_points[1].transformed_position.y -
           local_e4 * local_344.scrape_points[1].transformed_position.x;
      local_344.scrape_points[2].local_position.z =
           local_e4 * local_344.scrape_points[1].local_position.z -
           local_ec * local_344.scrape_points[1].transformed_position.y;
      local_344.scrape_points[2].transformed_position.x =
           local_ec * local_344.scrape_points[1].transformed_position.x -
           local_e8 * local_344.scrape_points[1].local_position.z;
      pCVar9->x = pCVar9->x + local_344.scrape_points[2].local_position.y;
      (this_ptr->angular_momentum).y =
           (this_ptr->angular_momentum).y + local_344.scrape_points[2].local_position.z;
      (this_ptr->angular_momentum).z =
           (this_ptr->angular_momentum).z + local_344.scrape_points[2].transformed_position.x;
    }
    if (2 < local_1c) {
      local_38 = this_ptr->scrape_points;
      iVar10 = 0;
      local_3c = 0;
      local_34 = local_1c * 4;
      local_30 = 0.0;
      if (0 < local_34) {
        do {
          iVar16 = *(int *)((int)local_3d0 + iVar10);
          local_18 = (float)(iVar16 * 0x34);
          local_398 = local_38[iVar16].transformed_position.x - local_38[iVar16].previous_position.x
          ;
          local_394 = local_38[iVar16].transformed_position.y - local_38[iVar16].previous_position.y
          ;
          local_390 = local_38[iVar16].transformed_position.z - local_38[iVar16].previous_position.z
          ;
          local_24 = (1.0 - this_ptr->scrape_points[iVar16].raytrace_intersection) *
                     (float)-1.01;
          local_344.scrape_points[6].local_position.y = local_394 * local_24;
          local_344.scrape_points[6].local_position.x = local_398 * local_24;
          local_344.scrape_points[6].local_position.z = local_390 * local_24;
          local_2c = SQRT(local_344.scrape_points[6].local_position.z *
                          local_344.scrape_points[6].local_position.z +
                          local_344.scrape_points[6].local_position.x *
                          local_344.scrape_points[6].local_position.x +
                          local_344.scrape_points[6].local_position.y *
                          local_344.scrape_points[6].local_position.y);
          if (local_30 < local_2c) {
            local_3c = iVar16;
            local_30 = local_2c;
            if ((SScrape *)&local_380 != local_344.scrape_points + 6) {
              local_380 = local_344.scrape_points[6].local_position.x;
              local_37c = local_344.scrape_points[6].local_position.y;
              local_378 = local_344.scrape_points[6].local_position.z;
            }
          }
          iVar10 = iVar10 + 4;
        } while (iVar10 < local_34);
      }
      (this_ptr->position).x = (this_ptr->position).x + local_380;
      (this_ptr->position).y = (this_ptr->position).y + local_37c;
      pCVar9 = &this_ptr->linear_velocity_local;
      (this_ptr->position).z = (this_ptr->position).z + local_378;
      local_344.angular_momentum.z = pCVar9->x;
      local_344.mass = (this_ptr->linear_velocity_local).y;
      local_344.moment_of_inertia.x = (this_ptr->linear_velocity_local).z;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                (&this_ptr->rotation_matrix,&local_344.scrape_points[0].previous_position,
                 &local_38[local_3c].raytrace_normal);
      fVar1 = (local_344.scrape_points[0].previous_position.z * (this_ptr->linear_velocity_local).z
              + local_344.scrape_points[0].previous_position.x * pCVar9->x +
                local_344.scrape_points[0].previous_position.y * (this_ptr->linear_velocity_local).y
              ) * 2.0f;
      if (&local_344.moment_of_inertia.y != &local_344.scrape_points[2].transformed_position.y) {
        local_344.moment_of_inertia.y =
             local_344.scrape_points[0].previous_position.x * fVar1 - pCVar9->x;
        local_344.moment_of_inertia.z =
             local_344.scrape_points[0].previous_position.y * fVar1 -
             (this_ptr->linear_velocity_local).y;
        local_344.extents.x =
             local_344.scrape_points[0].previous_position.z * fVar1 -
             (this_ptr->linear_velocity_local).z;
      }
      fVar7 = local_344.moment_of_inertia.z * -1.0f * 0.2f;
      fVar6 = local_344.extents.x * -1.0f * 0.2f;
      pfVar14 = &this_ptr->mass;
      fVar1 = (this_ptr->linear_velocity_local).y;
      fVar2 = (this_ptr->linear_velocity_local).z;
      fVar3 = *pfVar14;
      fVar4 = *pfVar14;
      fVar5 = 1.0 / delta_time;
      (this_ptr->linear_momentum).x =
           (this_ptr->linear_momentum).x +
           (local_344.moment_of_inertia.y * -1.0f * 0.2f -
           (this_ptr->linear_velocity_local).x) * *pfVar14 * fVar5;
      (this_ptr->linear_momentum).y =
           (this_ptr->linear_momentum).y + (fVar7 - fVar1) * fVar3 * fVar5;
      (this_ptr->linear_momentum).z =
           (this_ptr->linear_momentum).z + (fVar6 - fVar2) * fVar4 * fVar5;
      (this_ptr->angular_velocity).z = 0.0;
      (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
      (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
    }
    if ((0 < local_1c) &&
       (fVar1 = (this_ptr->linear_velocity_local).y, fVar2 = (this_ptr->linear_velocity_local).x,
       fVar3 = (this_ptr->linear_velocity_local).z,
       SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 1.0)) {
      iVar10 = 0;
      iVar16 = 0;
      pCVar13 = this_ptr;
      if (0 < this_ptr->scrape_point_count) {
        do {
          if (ABS(pCVar13->scrape_points[0].transformed_position.y - this_ptr[1].position.x) <
              (float)0.10000000000000001) {
            iVar16 = iVar16 + 1;
          }
          iVar10 = iVar10 + 1;
          pCVar13 = (CBox *)&(pCVar13->rotation_matrix).m[2].y;
        } while (iVar10 < this_ptr->scrape_point_count);
      }
      if (this_ptr->scrape_point_count / 2 <= iVar16) {
        this_ptr->is_valid = 0;
        return;
      }
    }
  }
  return;
}
