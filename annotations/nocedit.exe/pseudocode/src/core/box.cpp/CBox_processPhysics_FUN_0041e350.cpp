// Name: core_box.cpp_CBox_processPhysics_FUN_0041e350
// Address: 0041e350
// Address Range: [[0041e350, 0041effe]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_processPhysics_FUN_0041e350(CBox * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041e350(CBox *this_ptr,float delta_time)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  float fVar10;
  int iVar11;
  SScrape *pSVar12;
  CBox *pCVar13;
  BADSPACEBASE *in_ESP;
  float *pfVar14;
  CMatrix3x3f *pCVar15;
  int iVar16;
  byte bVar17;
  CMatrix3x3f local_410;
  float local_3ec;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float fStack_3d4;
  float local_3d0;
  float local_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float afStack_3b8 [7];
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
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
  CVector3f local_e0;
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
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  byte local_78 [8];
  float fStack_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  CVector3f *local_54;
  float local_50;
  float local_4c;
  float local_44;
  SScrape *local_38;
  float local_34;
  CMatrix3x3f *local_2c;
  SScrape *local_28;
  int local_24;
  SScrape *local_20;
  int local_1c;
  float local_18;
  float fStack_14;
  SScrape *pSVar18;
  float fVar19;
  
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
    local_344.position.y = local_344.position.y + -100f;
    fStack_14 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                          (&g_CDemonRaytraceInstance,
                           (CVector3f *)&local_344.scrape_points[7].transformed_position.z,
                           &local_344.position,&local_344.scrape_points[3].local_position,(int *)0x0
                          );
    if ((fStack_14 <= 0.0) || (1.0 <= fStack_14)) {
      this_ptr[1].position.x = -9999.0;
    }
    else {
      this_ptr[1].position.x =
           (local_344.position.z - local_344.scrape_points[7].previous_position.y) * fStack_14 +
           local_344.scrape_points[7].previous_position.y;
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
    local_344.rotation_matrix.m[2].x = 0.0;
    local_344.rotation_matrix.m[1].y = 0.0;
    local_344.rotation_matrix.m[1].z = -(float)this_ptr->mass * (float)32;
    pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&this_ptr->rotation_matrix,&local_344.linear_velocity_local,
                        (CVector3f *)&local_344.rotation_matrix.m[1].y);
    pCVar9 = &this_ptr->linear_momentum;
    pCVar9->x = pCVar8->x + pCVar9->x;
    (this_ptr->linear_momentum).y = pCVar8->y + (this_ptr->linear_momentum).y;
    piVar1 = &this_ptr->mass;
    (this_ptr->linear_momentum).z = pCVar8->z + (this_ptr->linear_momentum).z;
    local_344.linear_momentum.y = pCVar9->x / (float)*piVar1;
    local_344.linear_momentum.z = (this_ptr->linear_momentum).y / (float)*piVar1;
    local_344.angular_velocity.x = (this_ptr->linear_momentum).z / (float)*piVar1;
    if (&this_ptr->linear_velocity_temp != (CVector3f *)&local_344.linear_momentum.y) {
      (this_ptr->linear_velocity_temp).x = local_344.linear_momentum.y;
      (this_ptr->linear_velocity_temp).y = local_344.linear_momentum.z;
      (this_ptr->linear_velocity_temp).z = local_344.angular_velocity.x;
    }
    fVar19 = (this_ptr->angular_momentum).y;
    fVar10 = (this_ptr->moment_of_inertia).y;
    fVar2 = (this_ptr->angular_momentum).z;
    fVar3 = (this_ptr->moment_of_inertia).z;
    (this_ptr->angular_velocity_temp).x =
         (this_ptr->angular_momentum).x / (this_ptr->moment_of_inertia).x;
    (this_ptr->angular_velocity_temp).y = fVar19 / fVar10;
    (this_ptr->angular_velocity_temp).z = fVar2 / fVar3;
    (this_ptr->linear_momentum).z = 0.0;
    (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).z;
    (this_ptr->linear_momentum).x = (this_ptr->linear_momentum).y;
    (this_ptr->angular_momentum).z = 0.0;
    (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).z;
    (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).y;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&this_ptr->rotation_matrix,(CVector3f *)&local_344.angular_momentum.y,
                        &this_ptr->linear_velocity_temp);
    local_344.scrape_points[0].local_position.x = pCVar9->x * delta_time;
    local_344.scrape_points[0].local_position.y = pCVar9->y * delta_time;
    local_344.scrape_points[0].local_position.z = delta_time * pCVar9->z;
    pCVar9 = &this_ptr->linear_velocity;
    pCVar9->x = pCVar9->x + local_344.scrape_points[0].local_position.x;
    (this_ptr->linear_velocity).y =
         (this_ptr->linear_velocity).y + local_344.scrape_points[0].local_position.y;
    (this_ptr->linear_velocity).z =
         (this_ptr->linear_velocity).z + local_344.scrape_points[0].local_position.z;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&this_ptr->rotation_matrix,&local_344.scrape_points[0].previous_position,
                        pCVar9);
    if (&this_ptr->linear_velocity_local != pCVar9) {
      (this_ptr->linear_velocity_local).x = pCVar9->x;
      (this_ptr->linear_velocity_local).y = pCVar9->y;
      (this_ptr->linear_velocity_local).z = pCVar9->z;
    }
    local_344.rotation_matrix.m[1].y = (this_ptr->angular_velocity_temp).x * delta_time;
    local_344.rotation_matrix.m[1].z = (this_ptr->angular_velocity_temp).y * delta_time;
    local_344.rotation_matrix.m[2].x = delta_time * (this_ptr->angular_velocity_temp).z;
    pCVar9 = &this_ptr->angular_velocity;
    pCVar9->x = pCVar9->x + local_344.rotation_matrix.m[1].y;
    fVar19 = (this_ptr->angular_velocity).y + local_344.rotation_matrix.m[1].z;
    (this_ptr->angular_velocity).y = fVar19;
    fVar10 = (this_ptr->angular_velocity).z + local_344.rotation_matrix.m[2].x;
    (this_ptr->angular_velocity).z = fVar10;
    fVar19 = SQRT(fVar10 * (this_ptr->angular_velocity).z +
                  pCVar9->x * pCVar9->x + fVar19 * (this_ptr->angular_velocity).y);
    if ((float)25.132741228 < fVar19) {
      local_50 = (float)25.132741228 / fVar19;
      pCVar9->x = pCVar9->x * local_50;
      (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).y * local_50;
      (this_ptr->angular_velocity).z = (this_ptr->angular_velocity).z * local_50;
    }
    local_344.scrape_points[1].raytrace_intersection = (this_ptr->linear_velocity).x * delta_time;
    local_344.scrape_points[1].raytrace_normal.x = (this_ptr->linear_velocity).y * delta_time;
    local_344.scrape_points[1].raytrace_normal.y = (this_ptr->linear_velocity).z * delta_time;
    (this_ptr->position).x =
         (this_ptr->position).x + local_344.scrape_points[1].raytrace_intersection;
    (this_ptr->position).y = (this_ptr->position).y + local_344.scrape_points[1].raytrace_normal.x;
    (this_ptr->position).z = (this_ptr->position).z + local_344.scrape_points[1].raytrace_normal.y;
    local_344.scrape_points[5].previous_position.z = (this_ptr->angular_velocity).x * delta_time;
    local_344.scrape_points[5].raytrace_intersection = (this_ptr->angular_velocity).y * delta_time;
    local_344.scrape_points[5].raytrace_normal.x = (this_ptr->angular_velocity).z * delta_time;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&local_410,(CVector3f *)&local_344.scrape_points[5].previous_position.z);
    local_3e4 = (this_ptr->rotation_matrix).m[0].z * local_410.m[2].y +
                (this_ptr->rotation_matrix).m[0].x * local_410.m[0].y +
                (this_ptr->rotation_matrix).m[0].y * local_410.m[1].y;
    local_3e0 = (this_ptr->rotation_matrix).m[0].z * local_410.m[2].z +
                (this_ptr->rotation_matrix).m[0].y * local_410.m[1].z +
                (this_ptr->rotation_matrix).m[0].x * local_410.m[0].z;
    local_3dc = (this_ptr->rotation_matrix).m[0].z * local_3ec +
                (this_ptr->rotation_matrix).m[0].y * local_410.m[2].x +
                (this_ptr->rotation_matrix).m[0].x * local_410.m[1].x;
    local_3d8 = (this_ptr->rotation_matrix).m[1].z * local_410.m[2].y +
                (this_ptr->rotation_matrix).m[1].x * local_410.m[0].y +
                (this_ptr->rotation_matrix).m[1].y * local_410.m[1].y;
    fStack_3d4 = (this_ptr->rotation_matrix).m[1].z * local_410.m[2].z +
                 (this_ptr->rotation_matrix).m[1].y * local_410.m[1].z +
                 (this_ptr->rotation_matrix).m[1].x * local_410.m[0].z;
    local_3d0 = (this_ptr->rotation_matrix).m[1].z * local_3ec +
                (this_ptr->rotation_matrix).m[1].y * local_410.m[2].x +
                (this_ptr->rotation_matrix).m[1].x * local_410.m[1].x;
    local_3cc = (this_ptr->rotation_matrix).m[2].z * local_410.m[2].y +
                (this_ptr->rotation_matrix).m[2].x * local_410.m[0].y +
                (this_ptr->rotation_matrix).m[2].y * local_410.m[1].y;
    fStack_3c8 = (this_ptr->rotation_matrix).m[2].z * local_410.m[2].z +
                 (this_ptr->rotation_matrix).m[2].y * local_410.m[1].z +
                 (this_ptr->rotation_matrix).m[2].x * local_410.m[0].z;
    fStack_3c4 = (this_ptr->rotation_matrix).m[2].z * local_3ec +
                 (this_ptr->rotation_matrix).m[2].y * local_410.m[2].x +
                 (this_ptr->rotation_matrix).m[2].x * local_410.m[1].x;
    pfVar14 = &local_3e4;
    pCVar15 = &this_ptr->rotation_matrix;
    for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
      pCVar15->m[0].x = *pfVar14;
      pfVar14 = pfVar14 + (uint)bVar17 * -2 + 1;
      pCVar15 = (CMatrix3x3f *)((int)pCVar15 + (uint)bVar17 * -8 + 4);
    }
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                       (&this_ptr->rotation_matrix,
                        (CVector3f *)&local_344.scrape_points[5].raytrace_normal.z);
    if (&this_ptr->orientation != pCVar9) {
      (this_ptr->orientation).x = pCVar9->x;
      (this_ptr->orientation).y = pCVar9->y;
      (this_ptr->orientation).z = pCVar9->z;
    }
    iVar11 = 0;
    if (0 < this_ptr->scrape_point_count) {
      local_28 = this_ptr->scrape_points;
      local_2c = &this_ptr->rotation_matrix;
      pCVar9 = &this_ptr->scrape_points[0].transformed_position;
      do {
        pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (local_2c,&local_344.scrape_points[3].local_position,
                            &local_28[iVar11].local_position);
        local_c8 = (this_ptr->position).x + pCVar8->x;
        local_c4 = (this_ptr->position).y + pCVar8->y;
        local_c0 = (this_ptr->position).z + pCVar8->z;
        if (pCVar9 != (CVector3f *)&local_c8) {
          pCVar9->x = local_c8;
          pCVar9->y = local_c4;
          pCVar9->z = local_c0;
        }
        iVar11 = iVar11 + 1;
        pCVar9 = (CVector3f *)((int)(pCVar9 + 4) + 4);
      } while (iVar11 < this_ptr->scrape_point_count);
    }
    pSVar18 = this_ptr->scrape_points;
    fVar19 = 0.0;
    local_38 = pSVar18;
    iVar11 = 0;
    local_54 = &this_ptr->scrape_points[0].previous_position;
    pCVar9 = &this_ptr->scrape_points[0].transformed_position;
    pCVar13 = this_ptr;
    iVar16 = iVar11;
    if (0 < this_ptr->scrape_point_count) {
      do {
        if (this_ptr[1].position.x <= pCVar13->scrape_points[0].transformed_position.y) {
          local_68 = pCVar9->x - local_54->x;
          local_64 = pCVar9->y - local_54->y;
          local_60 = pCVar9->z - local_54->z;
          iVar11 = iVar16;
          if ((float)0.01 <
              SQRT(local_60 * local_60 + local_68 * local_68 + local_64 * local_64)) {
            fVar10 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                               (&g_CDemonRaytraceInstance,local_54,pCVar9,&pSVar18->raytrace_normal,
                                (int *)0x0);
            pCVar13->scrape_points[0].raytrace_intersection = fVar10;
            local_410.m[0].x = pCVar13->scrape_points[0].raytrace_intersection;
            if ((0.0 < local_410.m[0].x) && (local_410.m[0].x < 1.0)) {
              iVar11 = iVar16 + 1;
              afStack_3b8[iVar16] = fVar19;
            }
          }
        }
        else {
          if (pCVar9 != local_54) {
            local_54->x = pCVar9->x;
            local_54->y = pCVar9->y;
            local_54->z = pCVar9->z;
          }
          fVar10 = pCVar13->scrape_points[0].transformed_position.y;
          pCVar13->scrape_points[0].previous_position.y =
               this_ptr[1].position.x + (float)0.5;
          fVar2 = pCVar13->scrape_points[0].previous_position.y;
          fVar3 = this_ptr[1].position.x;
          fVar4 = pCVar13->scrape_points[0].previous_position.y;
          pCVar13->scrape_points[0].raytrace_normal.x = 0.0;
          pCVar13->scrape_points[0].raytrace_normal.y = 1.0;
          pCVar13->scrape_points[0].raytrace_normal.z = 0.0;
          pCVar13->scrape_points[0].raytrace_intersection = (fVar3 - fVar4) / (fVar10 - fVar2);
          afStack_3b8[iVar16] = fVar19;
          iVar11 = iVar16 + 1;
        }
        pCVar9 = (CVector3f *)&pCVar9[4].y;
        pSVar18 = pSVar18 + 1;
        fVar19 = (float)((int)fVar19 + 1);
        local_54 = (CVector3f *)&local_54[4].y;
        pCVar13 = (CBox *)&(pCVar13->rotation_matrix).m[2].y;
        iVar16 = iVar11;
      } while ((int)fVar19 < this_ptr->scrape_point_count);
    }
    fVar19 = afStack_3b8[0];
    if (iVar11 == 1) {
      local_344.scrape_points[3].raytrace_normal.z =
           local_38[(int)afStack_3b8[0]].transformed_position.x -
           local_38[(int)afStack_3b8[0]].previous_position.x;
      local_344.scrape_points[4].local_position.x =
           local_38[(int)afStack_3b8[0]].transformed_position.y -
           local_38[(int)afStack_3b8[0]].previous_position.y;
      local_344.scrape_points[4].local_position.y =
           local_38[(int)afStack_3b8[0]].transformed_position.z -
           local_38[(int)afStack_3b8[0]].previous_position.z;
      local_44 = (1.0 - this_ptr->scrape_points[(int)afStack_3b8[0]].raytrace_intersection) *
                 (float)1.01;
      local_344.scrape_points[5].local_position.y =
           local_344.scrape_points[3].raytrace_normal.z * local_44;
      local_344.scrape_points[5].local_position.z =
           local_344.scrape_points[4].local_position.x * local_44;
      local_344.scrape_points[5].transformed_position.x =
           local_344.scrape_points[4].local_position.y * local_44;
      (this_ptr->position).x = (this_ptr->position).x - local_344.scrape_points[5].local_position.y;
      (this_ptr->position).y = (this_ptr->position).y - local_344.scrape_points[5].local_position.z;
      (this_ptr->position).z =
           (this_ptr->position).z - local_344.scrape_points[5].transformed_position.x;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (&this_ptr->rotation_matrix,
                 (CVector3f *)&local_344.scrape_points[5].transformed_position.y,
                 &local_38[(int)afStack_3b8[0]].raytrace_normal);
      pCVar9 = &this_ptr->linear_velocity_local;
      local_360 = pCVar9->x;
      local_35c = (this_ptr->linear_velocity_local).y;
      local_358 = (this_ptr->linear_velocity_local).z;
      local_34 = (local_344.scrape_points[5].transformed_position.z *
                  (this_ptr->linear_velocity_local).z +
                 local_344.scrape_points[5].transformed_position.x * pCVar9->x +
                 local_344.scrape_points[5].transformed_position.y *
                 (this_ptr->linear_velocity_local).y) * 2f;
      local_344.is_valid = (int)(local_344.scrape_points[5].transformed_position.x * local_34);
      local_ec = local_344.scrape_points[5].transformed_position.y * local_34;
      local_e8 = local_344.scrape_points[5].transformed_position.z * local_34;
      local_344.scrape_points[3].previous_position.z = (float)local_344.is_valid - pCVar9->x;
      local_344.scrape_points[3].raytrace_intersection =
           local_ec - (this_ptr->linear_velocity_local).y;
      local_344.scrape_points[3].raytrace_normal.x = local_e8 - (this_ptr->linear_velocity_local).z;
      if (&local_344.scrape_points[6].raytrace_normal.y !=
          &local_344.scrape_points[3].previous_position.z) {
        local_344.scrape_points[6].raytrace_normal.y =
             local_344.scrape_points[3].previous_position.z;
        local_344.scrape_points[6].raytrace_normal.z =
             local_344.scrape_points[3].raytrace_intersection;
        local_344.scrape_points[7].local_position.x = local_344.scrape_points[3].raytrace_normal.x;
      }
      local_344.scrape_points[6].raytrace_normal.y =
           local_344.scrape_points[6].raytrace_normal.y * -1f *
           0.5f;
      local_344.scrape_points[6].raytrace_normal.z =
           local_344.scrape_points[6].raytrace_normal.z * -1f *
           0.5f;
      local_344.scrape_points[7].local_position.x =
           local_344.scrape_points[7].local_position.x * -1f *
           0.5f;
      piVar1 = &this_ptr->mass;
      local_a8 = local_344.scrape_points[6].raytrace_normal.y - (this_ptr->linear_velocity_local).x;
      local_a4 = local_344.scrape_points[6].raytrace_normal.z - (this_ptr->linear_velocity_local).y;
      local_a0 = local_344.scrape_points[7].local_position.x - (this_ptr->linear_velocity_local).z;
      local_344.scrape_points[6].previous_position.z = local_a8 * (float)*piVar1;
      local_344.scrape_points[6].raytrace_intersection = local_a4 * (float)*piVar1;
      local_344.scrape_points[6].raytrace_normal.x = local_a0 * (float)*piVar1;
      local_344.linear_velocity_temp.x = 1.0 / delta_time;
      local_344.linear_velocity_local.y =
           local_344.scrape_points[6].previous_position.z * local_344.linear_velocity_temp.x;
      local_344.linear_velocity_local.z =
           local_344.scrape_points[6].raytrace_intersection * local_344.linear_velocity_temp.x;
      local_344.linear_velocity_temp.x =
           local_344.scrape_points[6].raytrace_normal.x * local_344.linear_velocity_temp.x;
      (this_ptr->linear_momentum).x =
           (this_ptr->linear_momentum).x + local_344.linear_velocity_local.y;
      (this_ptr->linear_momentum).y =
           (this_ptr->linear_momentum).y + local_344.linear_velocity_local.z;
      (this_ptr->linear_momentum).z =
           (this_ptr->linear_momentum).z + local_344.linear_velocity_temp.x;
      (this_ptr->angular_velocity).z = 0.0;
      (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
      (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
      pSVar18 = this_ptr->scrape_points + (int)fVar19;
      local_344.scrape_points[7].previous_position.y =
           (pSVar18->local_position).y * local_344.linear_velocity_temp.x -
           (pSVar18->local_position).z * local_344.linear_velocity_local.z;
      local_344.scrape_points[7].previous_position.z =
           (pSVar18->local_position).z * local_344.linear_velocity_local.y -
           (pSVar18->local_position).x * local_344.linear_velocity_temp.x;
      local_9c = local_344.scrape_points[7].previous_position.y * 0.1f;
      local_344.scrape_points[7].raytrace_intersection =
           (pSVar18->local_position).x * local_344.linear_velocity_local.z -
           (pSVar18->local_position).y * local_344.linear_velocity_local.y;
      local_98 = local_344.scrape_points[7].previous_position.z * 0.1f;
      local_94 = local_344.scrape_points[7].raytrace_intersection * 0.1f;
      (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).x + local_9c;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_98;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_94;
      local_378 = (pSVar18->local_position).x;
      local_374 = (pSVar18->local_position).y;
      local_370 = (pSVar18->local_position).z;
      local_78._0_4_ = 0.0;
      fStack_70 = 0.0;
      local_78._4_4_ = (float)this_ptr->mass * (float)32;
      pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&this_ptr->rotation_matrix,&local_344.scrape_points[5].previous_position,
                          (CVector3f *)local_78);
      if ((CVector3f *)(local_78 + 4) != pCVar9) {
        local_78._4_4_ = pCVar9->x;
        fStack_70 = pCVar9->y;
        local_6c = pCVar9->z;
      }
      local_344.orientation.x = local_370 * local_6c - local_36c * fStack_70;
      local_344.orientation.y = local_36c * (float)local_78._4_4_ - local_374 * local_6c;
      local_344.orientation.z = local_374 * fStack_70 - local_370 * (float)local_78._4_4_;
      (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).x + local_344.orientation.x;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_344.orientation.y;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_344.orientation.z;
    }
    if (iVar11 == 2) {
      local_344.scrape_points[2].local_position.y =
           this_ptr->scrape_points[(int)afStack_3b8[0]].transformed_position.x -
           this_ptr->scrape_points[(int)afStack_3b8[0]].previous_position.x;
      local_344.scrape_points[2].local_position.z =
           this_ptr->scrape_points[(int)afStack_3b8[0]].transformed_position.y -
           this_ptr->scrape_points[(int)afStack_3b8[0]].previous_position.y;
      local_344.scrape_points[2].transformed_position.x =
           this_ptr->scrape_points[(int)afStack_3b8[0]].transformed_position.z -
           this_ptr->scrape_points[(int)afStack_3b8[0]].previous_position.z;
      local_34 = (1.0 - this_ptr->scrape_points[(int)afStack_3b8[0]].raytrace_intersection) *
                 (float)-1.01;
      local_344.scrape_points[4].raytrace_normal.y =
           local_344.scrape_points[2].local_position.y * local_34;
      local_50 = afStack_3b8[1];
      local_344.scrape_points[4].raytrace_normal.z =
           local_344.scrape_points[2].local_position.z * local_34;
      local_344.scrape_points[5].local_position.x =
           local_344.scrape_points[2].transformed_position.x * local_34;
      local_344.scrape_points[1].local_position.z =
           this_ptr->scrape_points[(int)afStack_3b8[1]].transformed_position.x -
           this_ptr->scrape_points[(int)afStack_3b8[1]].previous_position.x;
      local_344.scrape_points[1].transformed_position.x =
           this_ptr->scrape_points[(int)afStack_3b8[1]].transformed_position.y -
           this_ptr->scrape_points[(int)afStack_3b8[1]].previous_position.y;
      local_344.scrape_points[1].transformed_position.y =
           this_ptr->scrape_points[(int)afStack_3b8[1]].transformed_position.z -
           this_ptr->scrape_points[(int)afStack_3b8[1]].previous_position.z;
      local_4c = (1.0 - this_ptr->scrape_points[(int)afStack_3b8[1]].raytrace_intersection) *
                 (float)-1.01;
      local_88 = local_344.scrape_points[1].transformed_position.x * local_4c;
      local_8c = local_344.scrape_points[1].local_position.z * local_4c;
      local_84 = local_344.scrape_points[1].transformed_position.y * local_4c;
      if (SQRT(local_344.scrape_points[5].local_position.x *
               local_344.scrape_points[5].local_position.x +
               local_344.scrape_points[4].raytrace_normal.y *
               local_344.scrape_points[4].raytrace_normal.y +
               local_344.scrape_points[4].raytrace_normal.z *
               local_344.scrape_points[4].raytrace_normal.z) <=
          SQRT(local_84 * local_84 + local_8c * local_8c + local_88 * local_88)) {
        (this_ptr->position).x = (this_ptr->position).x + local_8c;
        pCVar9 = &local_e0;
        (this_ptr->position).y = (this_ptr->position).y + local_88;
        fVar19 = (this_ptr->position).z + local_84;
      }
      else {
        (this_ptr->position).x =
             (this_ptr->position).x + local_344.scrape_points[4].raytrace_normal.y;
        pCVar9 = (CVector3f *)&local_344.scrape_points[4].transformed_position.z;
        (this_ptr->position).y =
             (this_ptr->position).y + local_344.scrape_points[4].raytrace_normal.z;
        fVar19 = (this_ptr->position).z + local_344.scrape_points[5].local_position.x;
        afStack_3b8[1] = afStack_3b8[0];
      }
      (this_ptr->position).z = fVar19;
      pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&this_ptr->rotation_matrix,pCVar9,
                          &this_ptr->scrape_points[(int)afStack_3b8[1]].raytrace_normal);
      if ((CVector3f *)&local_344.rotation_matrix.m[0].z != pCVar9) {
        local_344.rotation_matrix.m[0].z = pCVar9->x;
        local_344.rotation_matrix.m[1].x = pCVar9->y;
        local_344.rotation_matrix.m[1].y = pCVar9->z;
      }
      pCVar9 = &this_ptr->linear_velocity_local;
      local_354 = pCVar9->x;
      local_350 = (this_ptr->linear_velocity_local).y;
      local_34c = (this_ptr->linear_velocity_local).z;
      local_44 = (local_344.rotation_matrix.m[1].y * (this_ptr->linear_velocity_local).z +
                 local_344.rotation_matrix.m[0].z * pCVar9->x +
                 local_344.rotation_matrix.m[1].x * (this_ptr->linear_velocity_local).y) *
                 2f;
      local_344.angular_velocity_temp.y = local_344.rotation_matrix.m[0].z * local_44;
      local_344.angular_velocity_temp.z = local_344.rotation_matrix.m[1].x * local_44;
      local_344.angular_momentum.x = local_344.rotation_matrix.m[1].y * local_44;
      local_c0 = local_344.angular_velocity_temp.y - pCVar9->x;
      local_bc = local_344.angular_velocity_temp.z - (this_ptr->linear_velocity_local).y;
      local_b8 = local_344.angular_momentum.x - (this_ptr->linear_velocity_local).z;
      if (&local_344.scrape_points[4].local_position.y != &local_c0) {
        local_344.scrape_points[4].local_position.y = local_c0;
        local_344.scrape_points[4].local_position.z = local_bc;
        local_344.scrape_points[4].transformed_position.x = local_b8;
      }
      local_344.scrape_points[4].local_position.y =
           local_344.scrape_points[4].local_position.y * -1f *
           0.25f;
      local_344.scrape_points[4].local_position.z =
           local_344.scrape_points[4].local_position.z * -1f *
           0.25f;
      local_344.scrape_points[4].transformed_position.x =
           local_344.scrape_points[4].transformed_position.x * -1f *
           0.25f;
      piVar1 = &this_ptr->mass;
      local_344.scrape_points[1].transformed_position.y =
           local_344.scrape_points[4].local_position.y - (this_ptr->linear_velocity_local).x;
      local_344.scrape_points[1].transformed_position.z =
           local_344.scrape_points[4].local_position.z - (this_ptr->linear_velocity_local).y;
      local_344.scrape_points[1].previous_position.x =
           local_344.scrape_points[4].transformed_position.x - (this_ptr->linear_velocity_local).z;
      local_b4 = local_344.scrape_points[1].transformed_position.y * (float)*piVar1;
      local_b0 = local_344.scrape_points[1].transformed_position.z * (float)*piVar1;
      local_ac = local_344.scrape_points[1].previous_position.x * (float)*piVar1;
      local_344.scrape_points[7].transformed_position.x = 1.0 / delta_time;
      local_344.scrape_points[7].local_position.y =
           local_b4 * local_344.scrape_points[7].transformed_position.x;
      local_344.scrape_points[7].local_position.z =
           local_b0 * local_344.scrape_points[7].transformed_position.x;
      local_344.scrape_points[7].transformed_position.x =
           local_ac * local_344.scrape_points[7].transformed_position.x;
      (this_ptr->linear_momentum).x =
           (this_ptr->linear_momentum).x + local_344.scrape_points[7].local_position.y;
      (this_ptr->linear_momentum).y =
           (this_ptr->linear_momentum).y + local_344.scrape_points[7].local_position.z;
      (this_ptr->linear_momentum).z =
           (this_ptr->linear_momentum).z + local_344.scrape_points[7].transformed_position.x;
      (this_ptr->angular_velocity).z = 0.0;
      (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
      (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
      pSVar18 = this_ptr->scrape_points + (int)afStack_3b8[0];
      local_344.scrape_points[3].local_position.z =
           (pSVar18->local_position).y * local_344.scrape_points[7].transformed_position.x -
           (pSVar18->local_position).z * local_344.scrape_points[7].local_position.z;
      local_344.scrape_points[3].transformed_position.x =
           (pSVar18->local_position).z * local_344.scrape_points[7].local_position.y -
           (pSVar18->local_position).x * local_344.scrape_points[7].transformed_position.x;
      local_390 = local_344.scrape_points[3].local_position.z * 0.1f;
      local_38c = local_344.scrape_points[3].transformed_position.x * 0.1f;
      local_344.scrape_points[3].transformed_position.y =
           (pSVar18->local_position).x * local_344.scrape_points[7].local_position.z -
           (pSVar18->local_position).y * local_344.scrape_points[7].local_position.y;
      local_388 = local_344.scrape_points[3].transformed_position.y * 0.1f;
      pCVar9 = &this_ptr->angular_momentum;
      pCVar9->x = pCVar9->x + local_390;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_38c;
      pSVar12 = this_ptr->scrape_points + (int)local_54;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_388;
      local_348 = (pSVar12->local_position).y * local_344.scrape_points[7].transformed_position.x -
                  (pSVar12->local_position).z * local_344.scrape_points[7].local_position.z;
      local_344.position.x =
           (pSVar12->local_position).z * local_344.scrape_points[7].local_position.y -
           (pSVar12->local_position).x * local_344.scrape_points[7].transformed_position.x;
      local_344.position.y =
           (pSVar12->local_position).x * local_344.scrape_points[7].local_position.z -
           (pSVar12->local_position).y * local_344.scrape_points[7].local_position.y;
      local_39c = local_348 * 0.1f;
      local_398 = local_344.position.x * 0.1f;
      local_394 = local_344.position.y * 0.1f;
      pCVar9->x = pCVar9->x + local_39c;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_398;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_394;
      local_344.scrape_points[0].transformed_position.z = (pSVar18->local_position).x;
      local_344.scrape_points[0].previous_position.x = (pSVar18->local_position).y;
      local_344.scrape_points[0].previous_position.y = (pSVar18->local_position).z;
      local_e0.z = (pSVar12->local_position).x;
      local_d4 = (pSVar12->local_position).y;
      local_d0 = (pSVar12->local_position).z;
      local_344.linear_momentum.y = 0.0;
      local_344.angular_velocity.x = 0.0;
      local_344.linear_momentum.z = (float)this_ptr->mass * (float)32;
      pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&this_ptr->rotation_matrix,(CVector3f *)&local_344.angular_momentum.y,
                          (CVector3f *)&local_344.linear_momentum.y);
      local_344.scrape_points[1].raytrace_normal.x = 0.5f;
      if ((CVector3f *)&local_344.linear_momentum.z != pCVar9) {
        local_344.linear_momentum.z = pCVar9->x;
        local_344.angular_velocity.x = pCVar9->y;
        local_344.angular_velocity.y = pCVar9->z;
      }
      local_80 = local_344.linear_momentum.z * 0.5f;
      local_7c = local_344.angular_velocity.x * 0.5f;
      local_78._0_4_ = local_344.angular_velocity.y * 0.5f;
      pCVar9 = &this_ptr->angular_momentum;
      local_344.scrape_points[7].transformed_position.z =
           local_344.scrape_points[0].previous_position.y * (float)local_78._0_4_ -
           local_344.scrape_points[0].previous_position.z * local_7c;
      local_344.scrape_points[7].previous_position.x =
           local_344.scrape_points[0].previous_position.z * local_80 -
           local_344.scrape_points[0].previous_position.x * (float)local_78._0_4_;
      local_344.scrape_points[7].previous_position.y =
           local_344.scrape_points[0].previous_position.x * local_7c -
           local_344.scrape_points[0].previous_position.y * local_80;
      pCVar9->x = pCVar9->x + local_344.scrape_points[7].transformed_position.z;
      (this_ptr->angular_momentum).y =
           (this_ptr->angular_momentum).y + local_344.scrape_points[7].previous_position.x;
      (this_ptr->angular_momentum).z =
           (this_ptr->angular_momentum).z + local_344.scrape_points[7].previous_position.y;
      local_344.scrape_points[1].previous_position.z =
           local_344.linear_momentum.z * local_344.scrape_points[1].raytrace_normal.x;
      local_344.scrape_points[1].raytrace_intersection =
           local_344.angular_velocity.x * local_344.scrape_points[1].raytrace_normal.x;
      local_344.scrape_points[1].raytrace_normal.x =
           local_344.angular_velocity.y * local_344.scrape_points[1].raytrace_normal.x;
      local_344.scrape_points[2].previous_position.y =
           local_d0 * local_344.scrape_points[1].raytrace_normal.x -
           local_cc * local_344.scrape_points[1].raytrace_intersection;
      local_344.scrape_points[2].previous_position.z =
           local_cc * local_344.scrape_points[1].previous_position.z -
           local_d4 * local_344.scrape_points[1].raytrace_normal.x;
      local_344.scrape_points[2].raytrace_intersection =
           local_d4 * local_344.scrape_points[1].raytrace_intersection -
           local_d0 * local_344.scrape_points[1].previous_position.z;
      pCVar9->x = pCVar9->x + local_344.scrape_points[2].previous_position.y;
      (this_ptr->angular_momentum).y =
           (this_ptr->angular_momentum).y + local_344.scrape_points[2].previous_position.z;
      (this_ptr->angular_momentum).z =
           (this_ptr->angular_momentum).z + local_344.scrape_points[2].raytrace_intersection;
    }
    if (2 < iVar11) {
      local_20 = this_ptr->scrape_points;
      iVar16 = 0;
      local_24 = 0;
      local_1c = iVar11 * 4;
      local_18 = 0.0;
      if (0 < local_1c) {
        do {
          iVar5 = *(int *)((int)afStack_3b8 + iVar16);
          local_380 = local_20[iVar5].transformed_position.x - local_20[iVar5].previous_position.x;
          local_37c = local_20[iVar5].transformed_position.y - local_20[iVar5].previous_position.y;
          local_378 = local_20[iVar5].transformed_position.z - local_20[iVar5].previous_position.z;
          local_344.scrape_points[6].previous_position.z =
               (1.0 - this_ptr->scrape_points[iVar5].raytrace_intersection) *
               (float)-1.01;
          local_344.scrape_points[6].previous_position.y =
               local_37c * local_344.scrape_points[6].previous_position.z;
          local_344.scrape_points[6].previous_position.x =
               local_380 * local_344.scrape_points[6].previous_position.z;
          local_344.scrape_points[6].previous_position.z =
               local_378 * local_344.scrape_points[6].previous_position.z;
          fStack_14 = SQRT(local_344.scrape_points[6].previous_position.z *
                           local_344.scrape_points[6].previous_position.z +
                           local_344.scrape_points[6].previous_position.x *
                           local_344.scrape_points[6].previous_position.x +
                           local_344.scrape_points[6].previous_position.y *
                           local_344.scrape_points[6].previous_position.y);
          if (local_18 < fStack_14) {
            local_24 = iVar5;
            local_18 = fStack_14;
            if ((CVector3f *)&local_368 != &local_344.scrape_points[6].previous_position) {
              local_368 = local_344.scrape_points[6].previous_position.x;
              local_364 = local_344.scrape_points[6].previous_position.y;
              local_360 = local_344.scrape_points[6].previous_position.z;
            }
          }
          iVar16 = iVar16 + 4;
        } while (iVar16 < local_1c);
      }
      (this_ptr->position).x = (this_ptr->position).x + local_368;
      (this_ptr->position).y = (this_ptr->position).y + local_364;
      pCVar9 = &this_ptr->linear_velocity_local;
      (this_ptr->position).z = (this_ptr->position).z + local_360;
      local_344.extents.y = pCVar9->x;
      local_344.extents.z = (this_ptr->linear_velocity_local).y;
      local_344.scrape_point_count = (int)(this_ptr->linear_velocity_local).z;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (&this_ptr->rotation_matrix,
                 (CVector3f *)&local_344.scrape_points[0].raytrace_normal.z,
                 &local_20[local_24].raytrace_normal);
      fVar19 = (local_344.scrape_points[1].local_position.y * (this_ptr->linear_velocity_local).z +
               local_344.scrape_points[0].raytrace_normal.z * pCVar9->x +
               local_344.scrape_points[1].local_position.x * (this_ptr->linear_velocity_local).y) *
               2f;
      if (local_344.scrape_points != (SScrape *)&local_344.scrape_points[2].raytrace_normal) {
        local_344.scrape_points[0].local_position.x =
             local_344.scrape_points[0].raytrace_normal.z * fVar19 - pCVar9->x;
        local_344.scrape_points[0].local_position.y =
             local_344.scrape_points[1].local_position.x * fVar19 -
             (this_ptr->linear_velocity_local).y;
        local_344.scrape_points[0].local_position.z =
             local_344.scrape_points[1].local_position.y * fVar19 -
             (this_ptr->linear_velocity_local).z;
      }
      fVar7 = local_344.scrape_points[0].local_position.y * -1f *
              0.2f;
      fVar6 = local_344.scrape_points[0].local_position.z * -1f *
              0.2f;
      piVar1 = &this_ptr->mass;
      fVar19 = (this_ptr->linear_velocity_local).y;
      fVar10 = (this_ptr->linear_velocity_local).z;
      fVar2 = (float)*piVar1;
      fVar3 = (float)*piVar1;
      fVar4 = 1.0 / delta_time;
      (this_ptr->linear_momentum).x =
           (this_ptr->linear_momentum).x +
           (local_344.scrape_points[0].local_position.x * -1f *
            0.2f - (this_ptr->linear_velocity_local).x) * (float)*piVar1 * fVar4;
      (this_ptr->linear_momentum).y =
           (this_ptr->linear_momentum).y + (fVar7 - fVar19) * fVar2 * fVar4;
      (this_ptr->linear_momentum).z =
           (this_ptr->linear_momentum).z + (fVar6 - fVar10) * fVar3 * fVar4;
      (this_ptr->angular_velocity).z = 0.0;
      (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
      (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
    }
    if ((0 < iVar11) &&
       (fVar19 = (this_ptr->linear_velocity_local).y, fVar10 = (this_ptr->linear_velocity_local).x,
       fVar2 = (this_ptr->linear_velocity_local).z,
       SQRT(fVar2 * fVar2 + fVar10 * fVar10 + fVar19 * fVar19) < 1.0)) {
      iVar11 = 0;
      iVar16 = 0;
      pCVar13 = this_ptr;
      if (0 < this_ptr->scrape_point_count) {
        do {
          if (ABS(pCVar13->scrape_points[0].transformed_position.y - this_ptr[1].position.x) <
              (float)0.10000000000000001) {
            iVar16 = iVar16 + 1;
          }
          iVar11 = iVar11 + 1;
          pCVar13 = (CBox *)&(pCVar13->rotation_matrix).m[2].y;
        } while (iVar11 < this_ptr->scrape_point_count);
      }
      if (this_ptr->scrape_point_count / 2 <= iVar16) {
        this_ptr->is_valid = 0;
        return;
      }
    }
  }
  return;
}
