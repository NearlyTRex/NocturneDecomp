// Name: core_box.cpp_CBox_processPhysics_FUN_0041e350
// Address: 0041e350
// Address Range: [[0041e350, 0041effe]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_processPhysics_FUN_0041e350(CBox * this_ptr, float delta_time)
// Cross-references:
//   core_box.cpp_CBox_process_FUN_0041e2f0 (0041e2f0) at 0041e33e [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_process_FUN_004c0210 (004c0210) at 004c0229 [UNCONDITIONAL_CALL]
// Globals:
//   float g_BoxGroundPlaneY = -100
//   double g_BoxGravityAcceleration = 32
//   double g_BoxMaxAngularVelocity = 25.1327412280000
//   double g_BoxCollisionRestitution = 1.01000000000000
//   float g_BoxTorqueMultiplier = 2
//   float g_BoxAngularDampingNegative = -1
//   float g_BoxAngularDampingScale = 0.5
//   float g_BoxLinearDampingFactor = 0.1000000
//   double g_BoxCollisionEpsilon = 0.5
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70

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
  undefined1 local_78 [8];
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
    local_344.position.y = local_344.position.y + g_BoxGroundPlaneY;
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
    local_344.rotation_matrix.m[1].z = -(float)this_ptr->mass * (float)g_BoxGravityAcceleration;
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
    if ((float)g_BoxMaxAngularVelocity < fVar19) {
      local_50 = (float)g_BoxMaxAngularVelocity / fVar19;
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
          if ((float)g_BoxMinimumVelocityThreshold <
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
               this_ptr[1].position.x + (float)g_BoxCollisionEpsilon;
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
                 (float)g_BoxCollisionRestitution;
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
                 (this_ptr->linear_velocity_local).y) * g_BoxTorqueMultiplier;
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
           local_344.scrape_points[6].raytrace_normal.y * g_BoxAngularDampingNegative *
           g_BoxAngularDampingScale;
      local_344.scrape_points[6].raytrace_normal.z =
           local_344.scrape_points[6].raytrace_normal.z * g_BoxAngularDampingNegative *
           g_BoxAngularDampingScale;
      local_344.scrape_points[7].local_position.x =
           local_344.scrape_points[7].local_position.x * g_BoxAngularDampingNegative *
           g_BoxAngularDampingScale;
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
      local_9c = local_344.scrape_points[7].previous_position.y * g_BoxLinearDampingFactor;
      local_344.scrape_points[7].raytrace_intersection =
           (pSVar18->local_position).x * local_344.linear_velocity_local.z -
           (pSVar18->local_position).y * local_344.linear_velocity_local.y;
      local_98 = local_344.scrape_points[7].previous_position.z * g_BoxLinearDampingFactor;
      local_94 = local_344.scrape_points[7].raytrace_intersection * g_BoxLinearDampingFactor;
      (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).x + local_9c;
      (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_98;
      (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_94;
      local_378 = (pSVar18->local_position).x;
      local_374 = (pSVar18->local_position).y;
      local_370 = (pSVar18->local_position).z;
      local_78._0_4_ = 0.0;
      fStack_70 = 0.0;
      local_78._4_4_ = (float)this_ptr->mass * (float)g_BoxGravityAcceleration;
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
                 (float)g_BoxNegativeRestitution;
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
                 (float)g_BoxNegativeRestitution;
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
                 g_BoxTorqueMultiplier;
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
           local_344.scrape_points[4].local_position.y * g_BoxAngularDampingNegative *
           g_BoxFrictionThreshold;
      local_344.scrape_points[4].local_position.z =
           local_344.scrape_points[4].local_position.z * g_BoxAngularDampingNegative *
           g_BoxFrictionThreshold;
      local_344.scrape_points[4].transformed_position.x =
           local_344.scrape_points[4].transformed_position.x * g_BoxAngularDampingNegative *
           g_BoxFrictionThreshold;
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
      local_390 = local_344.scrape_points[3].local_position.z * g_BoxLinearDampingFactor;
      local_38c = local_344.scrape_points[3].transformed_position.x * g_BoxLinearDampingFactor;
      local_344.scrape_points[3].transformed_position.y =
           (pSVar18->local_position).x * local_344.scrape_points[7].local_position.z -
           (pSVar18->local_position).y * local_344.scrape_points[7].local_position.y;
      local_388 = local_344.scrape_points[3].transformed_position.y * g_BoxLinearDampingFactor;
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
      local_39c = local_348 * g_BoxLinearDampingFactor;
      local_398 = local_344.position.x * g_BoxLinearDampingFactor;
      local_394 = local_344.position.y * g_BoxLinearDampingFactor;
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
      local_344.linear_momentum.z = (float)this_ptr->mass * (float)g_BoxGravityAcceleration;
      pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&this_ptr->rotation_matrix,(CVector3f *)&local_344.angular_momentum.y,
                          (CVector3f *)&local_344.linear_momentum.y);
      local_344.scrape_points[1].raytrace_normal.x = g_BoxAngularDampingScale;
      if ((CVector3f *)&local_344.linear_momentum.z != pCVar9) {
        local_344.linear_momentum.z = pCVar9->x;
        local_344.angular_velocity.x = pCVar9->y;
        local_344.angular_velocity.y = pCVar9->z;
      }
      local_80 = local_344.linear_momentum.z * g_BoxAngularDampingScale;
      local_7c = local_344.angular_velocity.x * g_BoxAngularDampingScale;
      local_78._0_4_ = local_344.angular_velocity.y * g_BoxAngularDampingScale;
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
               (float)g_BoxNegativeRestitution;
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
               g_BoxTorqueMultiplier;
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
      fVar7 = local_344.scrape_points[0].local_position.y * g_BoxAngularDampingNegative *
              g_BoxCollisionDamping;
      fVar6 = local_344.scrape_points[0].local_position.z * g_BoxAngularDampingNegative *
              g_BoxCollisionDamping;
      piVar1 = &this_ptr->mass;
      fVar19 = (this_ptr->linear_velocity_local).y;
      fVar10 = (this_ptr->linear_velocity_local).z;
      fVar2 = (float)*piVar1;
      fVar3 = (float)*piVar1;
      fVar4 = 1.0 / delta_time;
      (this_ptr->linear_momentum).x =
           (this_ptr->linear_momentum).x +
           (local_344.scrape_points[0].local_position.x * g_BoxAngularDampingNegative *
            g_BoxCollisionDamping - (this_ptr->linear_velocity_local).x) * (float)*piVar1 * fVar4;
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
              (float)g_BoxCollisionNormalDotThreshold) {
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


// Assembly code:
// 0041e350: PUSH EBX
//   Label: core_box.cpp_CBox_processPhysics_FUN_0041e350
// 0041e351: PUSH ESI
// 0041e352: PUSH EDI
// 0041e353: PUSH EBP
// 0041e354: MOV EBP,ESP
// 0041e356: SUB ESP,0x42c
// 0041e35c: AND ESP,0xfffffff8
// 0041e35f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0041e362: CMP dword ptr [EBX + 0x254],0x0
// 0041e369: JZ 0x0041fd0d
//   XREF to: 0041fd0d (CONDITIONAL_JUMP)
// 0041e36f: LEA EAX,[ESP + 0x330]
//   XREF to: Stack[-0x110] (DATA)
// 0041e376: CMP EAX,EBX
// 0041e378: JNZ 0x0041fd14
//   XREF to: 0041fd14 (CONDITIONAL_JUMP)
// 0041e37e: LEA EAX,[ESP + 0xfc]
//   Label: LAB_0041e37e
//   XREF to: Stack[-0x344] (DATA)
// 0041e385: CMP EAX,EBX
// 0041e387: JZ 0x0041e3a6
//   XREF to: 0041e3a6 (CONDITIONAL_JUMP)
// 0041e389: MOV EAX,dword ptr [EBX]
// 0041e38b: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x344] (WRITE)
// 0041e392: MOV EAX,dword ptr [EBX + 0x4]
// 0041e395: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x340] (WRITE)
// 0041e39c: MOV EAX,dword ptr [EBX + 0x8]
// 0041e39f: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x33c] (WRITE)
// 0041e3a6: FLD1
//   Label: LAB_0041e3a6
// 0041e3a8: PUSH 0x0
// 0041e3aa: LEA EAX,[ESP + 0x250]
//   XREF to: Stack[-0x1f4] (DATA)
// 0041e3b1: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x340] (READ)
// 0041e3b8: PUSH EAX
// 0041e3b9: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x344] (DATA)
// 0041e3c0: FXCH
// 0041e3c2: FADD float ptr [ESP + 0x33c]
//   XREF to: Stack[-0x10c] (READ)
// 0041e3c9: PUSH EAX
// 0041e3ca: LEA EAX,[ESP + 0x33c]
//   XREF to: Stack[-0x110] (DATA)
// 0041e3d1: FXCH
// 0041e3d3: FADD float ptr [0x006164cf]
//   XREF to: 006164cf (READ)
// 0041e3d9: PUSH EAX
// 0041e3da: FXCH
// 0041e3dc: FSTP float ptr [ESP + 0x344]
//   XREF to: Stack[-0x10c] (WRITE)
// 0041e3e3: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0041e3e8: FSTP float ptr [ESP + 0x114]
//   XREF to: Stack[-0x340] (WRITE)
// 0041e3ef: CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   XREF to: 00495b70 (UNCONDITIONAL_CALL)
// 0041e3f4: MOV dword ptr [ESP + 0x43c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041e3fb: FLD float ptr [ESP + 0x43c]
//   XREF to: Stack[-0x18] (READ)
// 0041e402: ADD ESP,0x14
// 0041e405: FLDZ
// 0041e407: FXCH
// 0041e409: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x424] (WRITE)
// 0041e40d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x440] (DATA)
// 0041e410: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x440] (DATA)
// 0041e413: FNSTSW AX
// 0041e415: SAHF
// 0041e416: JNC 0x0041fd36
//   XREF to: 0041fd36 (CONDITIONAL_JUMP)
// 0041e41c: FLD1
// 0041e41e: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x440] (DATA)
// 0041e421: FNSTSW AX
// 0041e423: SAHF
// 0041e424: JBE 0x0041fd36
//   XREF to: 0041fd36 (CONDITIONAL_JUMP)
// 0041e42a: FLD float ptr [ESP + 0x100]
//   XREF to: Stack[-0x340] (READ)
// 0041e431: FSUB float ptr [ESP + 0x334]
//   XREF to: Stack[-0x10c] (READ)
// 0041e438: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x424] (READ)
// 0041e43c: FADD float ptr [ESP + 0x334]
//   XREF to: Stack[-0x10c] (READ)
// 0041e443: FSTP float ptr [EBX + 0x258]
// 0041e449: LEA EAX,[EBX + 0xc0]
//   Label: LAB_0041e449
// 0041e44f: LEA ESI,[EBX + 0xcc]
// 0041e455: LEA EDX,[EBX + 0x260]
// 0041e45b: CMP ESI,EAX
//   Label: LAB_0041e45b
// 0041e45d: JZ 0x0041e46f
//   XREF to: 0041e46f (CONDITIONAL_JUMP)
// 0041e45f: MOV ECX,dword ptr [EAX]
// 0041e461: MOV dword ptr [ESI],ECX
// 0041e463: MOV ECX,dword ptr [EAX + 0x4]
// 0041e466: MOV dword ptr [ESI + 0x4],ECX
// 0041e469: MOV ECX,dword ptr [EAX + 0x8]
// 0041e46c: MOV dword ptr [ESI + 0x8],ECX
// 0041e46f: ADD EAX,0x34
//   Label: LAB_0041e46f
// 0041e472: ADD ESI,0x34
// 0041e475: CMP EAX,EDX
// 0041e477: JNZ 0x0041e45b
//   XREF to: 0041e45b (CONDITIONAL_JUMP)
// 0041e479: XOR ECX,ECX
// 0041e47b: LEA EAX,[ESP + 0x120]
//   XREF to: Stack[-0x320] (DATA)
// 0041e482: MOV dword ptr [ESP + 0x128],ECX
//   XREF to: Stack[-0x318] (WRITE)
// 0041e489: MOV dword ptr [ESP + 0x124],ECX
//   XREF to: Stack[-0x31c] (WRITE)
// 0041e490: MOV dword ptr [ESP + 0x120],ECX
//   XREF to: Stack[-0x320] (WRITE)
// 0041e497: PUSH EAX
// 0041e498: FLD float ptr [EBX + 0x94]
// 0041e49e: LEA EAX,[ESP + 0x148]
//   XREF to: Stack[-0x2fc] (DATA)
// 0041e4a5: FCHS
// 0041e4a7: FMUL double ptr [0x006164d7]
//   XREF to: 006164d7 (READ)
// 0041e4ad: PUSH EAX
// 0041e4ae: LEA EAX,[EBX + 0x18]
// 0041e4b1: PUSH EAX
// 0041e4b2: FSTP float ptr [ESP + 0x130]
//   XREF to: Stack[-0x31c] (WRITE)
// 0041e4b9: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0041e4be: MOV EDX,EAX
// 0041e4c0: LEA EAX,[EBX + 0x64]
// 0041e4c3: FLD float ptr [EDX]
// 0041e4c5: FADD float ptr [EAX]
// 0041e4c7: FSTP float ptr [EAX]
// 0041e4c9: FLD float ptr [EDX + 0x4]
// 0041e4cc: FADD float ptr [EAX + 0x4]
// 0041e4cf: FLD float ptr [EAX]
// 0041e4d1: FXCH
// 0041e4d3: FSTP float ptr [EAX + 0x4]
// 0041e4d6: FLD float ptr [EDX + 0x8]
// 0041e4d9: FADD float ptr [EAX + 0x8]
// 0041e4dc: LEA EDX,[EBX + 0x94]
// 0041e4e2: FSTP float ptr [EAX + 0x8]
// 0041e4e5: FDIV float ptr [EDX]
// 0041e4e7: ADD ESP,0xc
// 0041e4ea: FSTP float ptr [ESP + 0x15c]
//   XREF to: Stack[-0x2e4] (WRITE)
// 0041e4f1: FLD float ptr [EAX + 0x4]
// 0041e4f4: FDIV float ptr [EDX]
// 0041e4f6: FSTP float ptr [ESP + 0x160]
//   XREF to: Stack[-0x2e0] (WRITE)
// 0041e4fd: FLD float ptr [EAX + 0x8]
// 0041e500: FDIV float ptr [EDX]
// 0041e502: LEA EAX,[ESP + 0x15c]
//   XREF to: Stack[-0x2e4] (DATA)
// 0041e509: LEA EDX,[EBX + 0x58]
// 0041e50c: FSTP float ptr [ESP + 0x164]
//   XREF to: Stack[-0x2dc] (WRITE)
// 0041e513: CMP EDX,EAX
// 0041e515: JZ 0x0041e534
//   XREF to: 0041e534 (CONDITIONAL_JUMP)
// 0041e517: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x2e4] (DATA)
// 0041e51e: MOV dword ptr [EDX],EAX
// 0041e520: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x2e0] (READ)
// 0041e527: MOV dword ptr [EDX + 0x4],EAX
// 0041e52a: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[-0x2dc] (READ)
// 0041e531: MOV dword ptr [EDX + 0x8],EAX
// 0041e534: FLD float ptr [EBX + 0x88]
//   Label: LAB_0041e534
// 0041e53a: FDIV float ptr [EBX + 0x98]
// 0041e540: FLD float ptr [EBX + 0x8c]
// 0041e546: FDIV float ptr [EBX + 0x9c]
// 0041e54c: FLD float ptr [EBX + 0x90]
// 0041e552: FDIV float ptr [EBX + 0xa0]
// 0041e558: LEA EAX,[EBX + 0x64]
// 0041e55b: FXCH ST2
// 0041e55d: FSTP float ptr [EBX + 0x7c]
// 0041e560: FSTP float ptr [EBX + 0x80]
// 0041e566: FSTP float ptr [EBX + 0x84]
// 0041e56c: MOV dword ptr [EAX + 0x8],0x0
// 0041e573: MOV EDX,dword ptr [EAX + 0x8]
// 0041e576: MOV dword ptr [EAX + 0x4],EDX
// 0041e579: MOV EDX,dword ptr [EAX + 0x4]
// 0041e57c: MOV dword ptr [EAX],EDX
// 0041e57e: LEA EAX,[EBX + 0x88]
// 0041e584: MOV dword ptr [EAX + 0x8],0x0
// 0041e58b: MOV EDX,dword ptr [EAX + 0x8]
// 0041e58e: MOV dword ptr [EAX + 0x4],EDX
// 0041e591: MOV EDX,dword ptr [EAX + 0x4]
// 0041e594: MOV dword ptr [EAX],EDX
// 0041e596: LEA EAX,[EBX + 0x58]
// 0041e599: PUSH EAX
// 0041e59a: LEA EAX,[ESP + 0x184]
//   XREF to: Stack[-0x2c0] (DATA)
// 0041e5a1: PUSH EAX
// 0041e5a2: LEA ESI,[EBX + 0x18]
// 0041e5a5: PUSH ESI
// 0041e5a6: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0041e5ab: ADD ESP,0xc
// 0041e5ae: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0041e5b1: FLD float ptr [EAX]
// 0041e5b3: FMUL ST1
// 0041e5b5: FSTP float ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x29c] (WRITE)
// 0041e5bc: FLD float ptr [EAX + 0x4]
// 0041e5bf: FMUL ST1
// 0041e5c1: FSTP float ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x298] (WRITE)
// 0041e5c8: FMUL float ptr [EAX + 0x8]
// 0041e5cb: LEA EAX,[EBX + 0x40]
// 0041e5ce: FSTP float ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x294] (WRITE)
// 0041e5d5: FLD float ptr [EAX]
// 0041e5d7: FADD float ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x29c] (READ)
// 0041e5de: FLD float ptr [EAX + 0x4]
// 0041e5e1: FXCH
// 0041e5e3: FSTP float ptr [EAX]
// 0041e5e5: FADD float ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x298] (READ)
// 0041e5ec: FLD float ptr [EAX + 0x8]
// 0041e5ef: FXCH
// 0041e5f1: FSTP float ptr [EAX + 0x4]
// 0041e5f4: FADD float ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x294] (READ)
// 0041e5fb: PUSH EAX
// 0041e5fc: FSTP float ptr [EAX + 0x8]
// 0041e5ff: LEA EAX,[ESP + 0x1c0]
//   XREF to: Stack[-0x284] (DATA)
// 0041e606: PUSH EAX
// 0041e607: PUSH ESI
// 0041e608: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0041e60d: LEA EDX,[EBX + 0x4c]
// 0041e610: ADD ESP,0xc
// 0041e613: CMP EDX,EAX
// 0041e615: JZ 0x0041e627
//   XREF to: 0041e627 (CONDITIONAL_JUMP)
// 0041e617: MOV ECX,dword ptr [EAX]
// 0041e619: MOV dword ptr [EDX],ECX
// 0041e61b: MOV ECX,dword ptr [EAX + 0x4]
// 0041e61e: MOV dword ptr [EDX + 0x4],ECX
// 0041e621: MOV ECX,dword ptr [EAX + 0x8]
// 0041e624: MOV dword ptr [EDX + 0x8],ECX
// 0041e627: LEA EAX,[EBX + 0x7c]
//   Label: LAB_0041e627
// 0041e62a: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0041e62d: FLD float ptr [EAX]
// 0041e62f: FMUL ST1
// 0041e631: FSTP float ptr [ESP + 0x114]
//   XREF to: Stack[-0x32c] (WRITE)
// 0041e638: FLD float ptr [EAX + 0x4]
// 0041e63b: FMUL ST1
// 0041e63d: FSTP float ptr [ESP + 0x118]
//   XREF to: Stack[-0x328] (WRITE)
// 0041e644: FMUL float ptr [EAX + 0x8]
// 0041e647: LEA EDX,[EBX + 0x70]
// 0041e64a: FSTP float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x324] (WRITE)
// 0041e651: FLD float ptr [EDX]
// 0041e653: FADD float ptr [ESP + 0x114]
//   XREF to: Stack[-0x32c] (READ)
// 0041e65a: FLD float ptr [EDX + 0x4]
// 0041e65d: FXCH
// 0041e65f: FSTP float ptr [EDX]
// 0041e661: FADD float ptr [ESP + 0x118]
//   XREF to: Stack[-0x328] (READ)
// 0041e668: FST float ptr [EDX + 0x4]
// 0041e66b: FMUL float ptr [EDX + 0x4]
// 0041e66e: FLD float ptr [EDX]
// 0041e670: FMUL ST0
// 0041e672: FLD float ptr [EDX + 0x8]
// 0041e675: FADD float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x324] (READ)
// 0041e67c: FXCH
// 0041e67e: FADDP ST2,ST0
// 0041e680: FST float ptr [EDX + 0x8]
// 0041e683: FMUL float ptr [EDX + 0x8]
// 0041e686: FADDP
// 0041e688: FSQRT
// 0041e68a: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x438] (WRITE)
// 0041e68e: FCOMP double ptr [0x006164df]
//   XREF to: 006164df (READ)
// 0041e694: FNSTSW AX
// 0041e696: SAHF
// 0041e697: JBE 0x0041e6d3
//   XREF to: 0041e6d3 (CONDITIONAL_JUMP)
// 0041e699: FLD double ptr [0x006164df]
//   XREF to: 006164df (READ)
// 0041e69f: FDIV double ptr [ESP + 0x8]
//   XREF to: Stack[-0x438] (READ)
// 0041e6a3: FLD float ptr [EDX]
// 0041e6a5: FXCH
// 0041e6a7: FSTP float ptr [ESP + 0x3e0]
//   XREF to: Stack[-0x60] (WRITE)
// 0041e6ae: FMUL float ptr [ESP + 0x3e0]
//   XREF to: Stack[-0x60] (READ)
// 0041e6b5: FLD float ptr [EDX + 0x4]
// 0041e6b8: FMUL float ptr [ESP + 0x3e0]
//   XREF to: Stack[-0x60] (READ)
// 0041e6bf: FLD float ptr [EDX + 0x8]
// 0041e6c2: FMUL float ptr [ESP + 0x3e0]
//   XREF to: Stack[-0x60] (READ)
// 0041e6c9: FXCH ST2
// 0041e6cb: FSTP float ptr [EDX]
// 0041e6cd: FSTP float ptr [EDX + 0x4]
// 0041e6d0: FSTP float ptr [EDX + 0x8]
// 0041e6d3: LEA EAX,[EBX + 0x40]
//   Label: LAB_0041e6d3
// 0041e6d6: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0041e6d9: FLD float ptr [EAX]
// 0041e6db: FMUL ST1
// 0041e6dd: FSTP float ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x248] (WRITE)
// 0041e6e4: FLD float ptr [EAX + 0x4]
// 0041e6e7: FMUL ST1
// 0041e6e9: FSTP float ptr [ESP + 0x1fc]
//   XREF to: Stack[-0x244] (WRITE)
// 0041e6f0: FLD float ptr [EAX + 0x8]
// 0041e6f3: FMUL ST1
// 0041e6f5: FSTP float ptr [ESP + 0x200]
//   XREF to: Stack[-0x240] (WRITE)
// 0041e6fc: FLD float ptr [EBX]
// 0041e6fe: FADD float ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x248] (READ)
// 0041e705: FLD float ptr [EBX + 0x4]
// 0041e708: FXCH
// 0041e70a: FSTP float ptr [EBX]
// 0041e70c: FADD float ptr [ESP + 0x1fc]
//   XREF to: Stack[-0x244] (READ)
// 0041e713: FLD float ptr [EBX + 0x8]
// 0041e716: FXCH
// 0041e718: FSTP float ptr [EBX + 0x4]
// 0041e71b: FADD float ptr [ESP + 0x200]
//   XREF to: Stack[-0x240] (READ)
// 0041e722: LEA EAX,[EBX + 0x70]
// 0041e725: FSTP float ptr [EBX + 0x8]
// 0041e728: FLD float ptr [EAX]
// 0041e72a: FMUL ST1
// 0041e72c: FSTP float ptr [ESP + 0x2c4]
//   XREF to: Stack[-0x17c] (WRITE)
// 0041e733: FLD float ptr [EAX + 0x4]
// 0041e736: FMUL ST1
// 0041e738: FSTP float ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x178] (WRITE)
// 0041e73f: FLD float ptr [EAX + 0x8]
// 0041e742: LEA EAX,[ESP + 0x2c4]
//   XREF to: Stack[-0x17c] (DATA)
// 0041e749: FMULP
// 0041e74b: PUSH EAX
// 0041e74c: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x420] (DATA)
// 0041e750: PUSH EAX
// 0041e751: FSTP float ptr [ESP + 0x2d4]
//   XREF to: Stack[-0x174] (WRITE)
// 0041e758: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0041e75d: ADD ESP,0x8
// 0041e760: FLD float ptr [EBX + 0x1c]
// 0041e763: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x414] (READ)
// 0041e767: FLD float ptr [EBX + 0x18]
// 0041e76a: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x41c] (READ)
// 0041e76e: FLD float ptr [EBX + 0x18]
// 0041e771: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x418] (READ)
// 0041e775: FLD float ptr [EBX + 0x28]
// 0041e778: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x414] (READ)
// 0041e77c: FLD float ptr [EBX + 0x18]
// 0041e77f: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x420] (READ)
// 0041e783: FLD float ptr [EBX + 0x24]
// 0041e786: FXCH
// 0041e788: FADDP ST5,ST0
// 0041e78a: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x41c] (READ)
// 0041e78e: FLD float ptr [EBX + 0x20]
// 0041e791: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x408] (READ)
// 0041e795: FLD float ptr [EBX + 0x1c]
// 0041e798: FXCH
// 0041e79a: FADDP ST6,ST0
// 0041e79c: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x410] (READ)
// 0041e7a0: FXCH ST5
// 0041e7a2: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x3f8] (WRITE)
// 0041e7a6: FLD float ptr [EBX + 0x24]
// 0041e7a9: FXCH ST5
// 0041e7ab: FADDP ST4,ST0
// 0041e7ad: FXCH ST4
// 0041e7af: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x418] (READ)
// 0041e7b3: FLD float ptr [EBX + 0x20]
// 0041e7b6: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x404] (READ)
// 0041e7ba: FLD float ptr [EBX + 0x1c]
// 0041e7bd: FXCH
// 0041e7bf: FADDP ST5,ST0
// 0041e7c1: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x40c] (READ)
// 0041e7c5: FXCH ST4
// 0041e7c7: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3f4] (WRITE)
// 0041e7cb: FLD float ptr [EBX + 0x34]
// 0041e7ce: FXCH ST4
// 0041e7d0: FADDP ST3,ST0
// 0041e7d2: FXCH ST3
// 0041e7d4: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x414] (READ)
// 0041e7d8: FLD float ptr [EBX + 0x20]
// 0041e7db: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x400] (READ)
// 0041e7df: FLD float ptr [EBX + 0x24]
// 0041e7e2: FXCH
// 0041e7e4: FADDP ST4,ST0
// 0041e7e6: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x420] (READ)
// 0041e7ea: FXCH ST3
// 0041e7ec: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x3f0] (WRITE)
// 0041e7f0: FLD float ptr [EBX + 0x30]
// 0041e7f3: FXCH ST3
// 0041e7f5: FADDP ST2,ST0
// 0041e7f7: FXCH ST2
// 0041e7f9: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x41c] (READ)
// 0041e7fd: FLD float ptr [EBX + 0x2c]
// 0041e800: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x408] (READ)
// 0041e804: FLD float ptr [EBX + 0x30]
// 0041e807: FXCH
// 0041e809: FADDP ST3,ST0
// 0041e80b: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x418] (READ)
// 0041e80f: FXCH ST2
// 0041e811: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x3ec] (WRITE)
// 0041e815: FLD float ptr [EBX + 0x28]
// 0041e818: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x410] (READ)
// 0041e81c: FLD float ptr [EBX + 0x28]
// 0041e81f: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x40c] (READ)
// 0041e823: FXCH
// 0041e825: FADDP ST6,ST0
// 0041e827: FADDP ST4,ST0
// 0041e829: FLD float ptr [EBX + 0x2c]
// 0041e82c: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x404] (READ)
// 0041e830: FLD float ptr [EBX + 0x2c]
// 0041e833: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x400] (READ)
// 0041e837: FXCH
// 0041e839: FADDP ST6,ST0
// 0041e83b: FLD float ptr [EBX + 0x30]
// 0041e83e: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x420] (READ)
// 0041e842: FXCH
// 0041e844: FADDP ST5,ST0
// 0041e846: FLD float ptr [EBX + 0x34]
// 0041e849: FXCH
// 0041e84b: FADDP ST4,ST0
// 0041e84d: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x410] (READ)
// 0041e851: FLD float ptr [EBX + 0x38]
// 0041e854: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x408] (READ)
// 0041e858: FXCH
// 0041e85a: FADDP ST2,ST0
// 0041e85c: FLD float ptr [EBX + 0x34]
// 0041e85f: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x40c] (READ)
// 0041e863: FADDP ST3,ST0
// 0041e865: FADDP ST3,ST0
// 0041e867: FLD float ptr [EBX + 0x38]
// 0041e86a: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x404] (READ)
// 0041e86e: FLD float ptr [EBX + 0x38]
// 0041e871: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x400] (READ)
// 0041e875: LEA ESI,[ESP + 0x48]
//   XREF to: Stack[-0x3f8] (DATA)
// 0041e879: LEA EAX,[ESP + 0x2d0]
//   XREF to: Stack[-0x170] (DATA)
// 0041e880: MOV ECX,0xa
// 0041e885: PUSH EAX
// 0041e886: LEA EAX,[EBX + 0x18]
// 0041e889: LEA EDI,[EBX + 0x18]
// 0041e88c: PUSH EAX
// 0041e88d: FXCH
// 0041e88f: FADDP ST2,ST0
// 0041e891: FADDP ST2,ST0
// 0041e893: FXCH ST4
// 0041e895: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x3e8] (WRITE)
// 0041e899: FXCH ST2
// 0041e89b: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x3e4] (WRITE)
// 0041e89f: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x3e0] (WRITE)
// 0041e8a3: FXCH
// 0041e8a5: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x3dc] (WRITE)
// 0041e8a9: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x3d8] (WRITE)
// 0041e8ad: MOVSD.REP ES:EDI,ESI
// 0041e8af: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 0041e8b4: LEA EDX,[EBX + 0xc]
// 0041e8b7: ADD ESP,0x8
// 0041e8ba: CMP EDX,EAX
// 0041e8bc: JZ 0x0041e8ce
//   XREF to: 0041e8ce (CONDITIONAL_JUMP)
// 0041e8be: MOV ECX,dword ptr [EAX]
// 0041e8c0: MOV dword ptr [EDX],ECX
// 0041e8c2: MOV ECX,dword ptr [EAX + 0x4]
// 0041e8c5: MOV dword ptr [EDX + 0x4],ECX
// 0041e8c8: MOV ECX,dword ptr [EAX + 0x8]
// 0041e8cb: MOV dword ptr [EDX + 0x8],ECX
// 0041e8ce: MOV EAX,dword ptr [EBX + 0xb0]
//   Label: LAB_0041e8ce
// 0041e8d4: XOR EDI,EDI
// 0041e8d6: TEST EAX,EAX
// 0041e8d8: JLE 0x0041e979
//   XREF to: 0041e979 (CONDITIONAL_JUMP)
// 0041e8de: LEA EAX,[EBX + 0xb4]
// 0041e8e4: MOV dword ptr [ESP + 0x400],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0041e8eb: LEA EAX,[EBX + 0x18]
// 0041e8ee: MOV dword ptr [ESP + 0x3fc],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0041e8f5: LEA ESI,[EBX + 0xc0]
// 0041e8fb: IMUL EAX,EDI,0x34
//   Label: LAB_0041e8fb
// 0041e8fe: ADD EAX,dword ptr [ESP + 0x400]
//   XREF to: Stack[-0x40] (READ)
// 0041e905: PUSH EAX
// 0041e906: LEA EAX,[ESP + 0x238]
//   XREF to: Stack[-0x20c] (DATA)
// 0041e90d: PUSH EAX
// 0041e90e: MOV ECX,dword ptr [ESP + 0x404]
//   XREF to: Stack[-0x44] (READ)
// 0041e915: PUSH ECX
// 0041e916: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0041e91b: FLD float ptr [EBX]
// 0041e91d: FADD float ptr [EAX]
// 0041e91f: ADD ESP,0xc
// 0041e922: FSTP float ptr [ESP + 0x360]
//   XREF to: Stack[-0xe0] (WRITE)
// 0041e929: FLD float ptr [EBX + 0x4]
// 0041e92c: FADD float ptr [EAX + 0x4]
// 0041e92f: FSTP float ptr [ESP + 0x364]
//   XREF to: Stack[-0xdc] (WRITE)
// 0041e936: FLD float ptr [EBX + 0x8]
// 0041e939: FADD float ptr [EAX + 0x8]
// 0041e93c: LEA EAX,[ESP + 0x360]
//   XREF to: Stack[-0xe0] (DATA)
// 0041e943: FSTP float ptr [ESP + 0x368]
//   XREF to: Stack[-0xd8] (WRITE)
// 0041e94a: CMP ESI,EAX
// 0041e94c: JZ 0x0041e96b
//   XREF to: 0041e96b (CONDITIONAL_JUMP)
// 0041e94e: MOV EAX,dword ptr [ESP + 0x360]
//   XREF to: Stack[-0xe0] (DATA)
// 0041e955: MOV dword ptr [ESI],EAX
// 0041e957: MOV EAX,dword ptr [ESP + 0x364]
//   XREF to: Stack[-0xdc] (READ)
// 0041e95e: MOV dword ptr [ESI + 0x4],EAX
// 0041e961: MOV EAX,dword ptr [ESP + 0x368]
//   XREF to: Stack[-0xd8] (READ)
// 0041e968: MOV dword ptr [ESI + 0x8],EAX
// 0041e96b: INC EDI
//   Label: LAB_0041e96b
// 0041e96c: MOV EDX,dword ptr [EBX + 0xb0]
// 0041e972: ADD ESI,0x34
// 0041e975: CMP EDI,EDX
// 0041e977: JL 0x0041e8fb
//   XREF to: 0041e8fb (CONDITIONAL_JUMP)
// 0041e979: XOR ECX,ECX
//   Label: LAB_0041e979
// 0041e97b: LEA EAX,[EBX + 0xb4]
// 0041e981: MOV dword ptr [ESP + 0x420],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0041e988: MOV dword ptr [ESP + 0x3f0],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0041e98f: LEA EAX,[EBX + 0xcc]
// 0041e995: MOV dword ptr [ESP + 0x424],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041e99c: MOV dword ptr [ESP + 0x3d4],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0041e9a3: LEA EDI,[EBX + 0xc0]
// 0041e9a9: MOV EAX,dword ptr [EBX + 0xb0]
// 0041e9af: MOV ESI,EBX
// 0041e9b1: TEST EAX,EAX
// 0041e9b3: JLE 0x0041eaaa
//   XREF to: 0041eaaa (CONDITIONAL_JUMP)
// 0041e9b9: MOV EAX,dword ptr [ESP + 0x3f0]
//   XREF to: Stack[-0x50] (READ)
// 0041e9c0: MOV dword ptr [ESP + 0x418],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0041e9c7: FLD float ptr [ESI + 0xc4]
//   Label: LAB_0041e9c7
// 0041e9cd: FCOMP float ptr [EBX + 0x258]
// 0041e9d3: FNSTSW AX
// 0041e9d5: SAHF
// 0041e9d6: JNC 0x0041fd45
//   XREF to: 0041fd45 (CONDITIONAL_JUMP)
// 0041e9dc: MOV EAX,dword ptr [ESP + 0x3d4]
//   XREF to: Stack[-0x6c] (READ)
// 0041e9e3: CMP EDI,EAX
// 0041e9e5: JZ 0x0041e9f7
//   XREF to: 0041e9f7 (CONDITIONAL_JUMP)
// 0041e9e7: MOV EDX,dword ptr [EDI]
// 0041e9e9: MOV dword ptr [EAX],EDX
// 0041e9eb: MOV EDX,dword ptr [EDI + 0x4]
// 0041e9ee: MOV dword ptr [EAX + 0x4],EDX
// 0041e9f1: MOV EDX,dword ptr [EDI + 0x8]
// 0041e9f4: MOV dword ptr [EAX + 0x8],EDX
// 0041e9f7: FLD float ptr [EBX + 0x258]
//   Label: LAB_0041e9f7
// 0041e9fd: FADD double ptr [0x00616517]
//   XREF to: 00616517 (READ)
// 0041ea03: FLD float ptr [ESI + 0xc4]
// 0041ea09: FXCH
// 0041ea0b: FSTP float ptr [ESI + 0xd0]
// 0041ea11: FSUB float ptr [ESI + 0xd0]
// 0041ea17: FLD float ptr [EBX + 0x258]
// 0041ea1d: FSUB float ptr [ESI + 0xd0]
// 0041ea23: FDIVRP
// 0041ea25: MOV dword ptr [ESI + 0xdc],0x0
// 0041ea2f: MOV dword ptr [ESI + 0xe0],0x3f800000
// 0041ea39: MOV EAX,dword ptr [ESP + 0x424]
//   XREF to: Stack[-0x1c] (READ)
// 0041ea40: MOV dword ptr [ESI + 0xe4],0x0
// 0041ea4a: MOV EDX,dword ptr [ESP + 0x420]
//   XREF to: Stack[-0x20] (READ)
// 0041ea51: FSTP float ptr [ESI + 0xd8]
// 0041ea57: MOV dword ptr [ESP + EAX*0x4 + 0x70],EDX
// 0041ea5b: LEA EDX,[EAX + 0x1]
// 0041ea5e: MOV dword ptr [ESP + 0x424],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041ea65: MOV EAX,dword ptr [ESP + 0x3d4]
//   Label: LAB_0041ea65
//   XREF to: Stack[-0x6c] (READ)
// 0041ea6c: MOV EDX,dword ptr [ESP + 0x418]
//   XREF to: Stack[-0x28] (READ)
// 0041ea73: MOV ECX,dword ptr [ESP + 0x420]
//   XREF to: Stack[-0x20] (READ)
// 0041ea7a: ADD EDI,0x34
// 0041ea7d: ADD ESI,0x34
// 0041ea80: ADD EAX,0x34
// 0041ea83: ADD EDX,0x34
// 0041ea86: INC ECX
// 0041ea87: MOV dword ptr [ESP + 0x3d4],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0041ea8e: MOV dword ptr [ESP + 0x418],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0041ea95: MOV EDX,dword ptr [EBX + 0xb0]
// 0041ea9b: MOV dword ptr [ESP + 0x420],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0041eaa2: CMP ECX,EDX
// 0041eaa4: JL 0x0041e9c7
//   XREF to: 0041e9c7 (CONDITIONAL_JUMP)
// 0041eaaa: CMP dword ptr [ESP + 0x424],0x1
//   Label: LAB_0041eaaa
//   XREF to: Stack[-0x1c] (READ)
// 0041eab2: JNZ 0x0041eff7
//   XREF to: 0041eff7 (CONDITIONAL_JUMP)
// 0041eab8: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x3d0] (READ)
// 0041eabc: LEA ECX,[ESI*0x4 + 0x0]
// 0041eac3: SUB ECX,ESI
// 0041eac5: SHL ECX,0x2
// 0041eac8: ADD ECX,ESI
// 0041eaca: MOV EAX,dword ptr [ESP + 0x3f0]
//   XREF to: Stack[-0x50] (READ)
// 0041ead1: SHL ECX,0x2
// 0041ead4: ADD EAX,ECX
// 0041ead6: LEA EDX,[EAX + 0xc]
// 0041ead9: FLD float ptr [EDX]
// 0041eadb: FSUB float ptr [EAX + 0x18]
// 0041eade: FSTP float ptr [ESP + 0x264]
//   XREF to: Stack[-0x1dc] (WRITE)
// 0041eae5: FLD float ptr [EDX + 0x4]
// 0041eae8: FSUB float ptr [EAX + 0x1c]
// 0041eaeb: FSTP float ptr [ESP + 0x268]
//   XREF to: Stack[-0x1d8] (WRITE)
// 0041eaf2: FLD float ptr [EDX + 0x8]
// 0041eaf5: FSUB float ptr [EAX + 0x20]
// 0041eaf8: FSTP float ptr [ESP + 0x26c]
//   XREF to: Stack[-0x1d4] (WRITE)
// 0041eaff: FLD float ptr [ECX + EBX*0x1 + 0xd8]
// 0041eb06: FLD1
// 0041eb08: FSUBRP
// 0041eb0a: FMUL double ptr [0x006164e7]
//   XREF to: 006164e7 (READ)
// 0041eb10: FLD float ptr [ESP + 0x264]
//   XREF to: Stack[-0x1dc] (READ)
// 0041eb17: FXCH
// 0041eb19: FSTP float ptr [ESP + 0x3e4]
//   XREF to: Stack[-0x5c] (WRITE)
// 0041eb20: FMUL float ptr [ESP + 0x3e4]
//   XREF to: Stack[-0x5c] (READ)
// 0041eb27: LEA EAX,[ESI*0x4 + 0x0]
// 0041eb2e: FLD float ptr [ESP + 0x268]
//   XREF to: Stack[-0x1d8] (READ)
// 0041eb35: SUB EAX,ESI
// 0041eb37: FMUL float ptr [ESP + 0x3e4]
//   XREF to: Stack[-0x5c] (READ)
// 0041eb3e: SHL EAX,0x2
// 0041eb41: MOV EDI,dword ptr [ESP + 0x3f0]
//   XREF to: Stack[-0x50] (READ)
// 0041eb48: ADD EAX,ESI
// 0041eb4a: FLD float ptr [ESP + 0x26c]
//   XREF to: Stack[-0x1d4] (READ)
// 0041eb51: SHL EAX,0x2
// 0041eb54: FMUL float ptr [ESP + 0x3e4]
//   XREF to: Stack[-0x5c] (READ)
// 0041eb5b: ADD EAX,EDI
// 0041eb5d: FXCH ST2
// 0041eb5f: FSTP float ptr [ESP + 0x2a0]
//   XREF to: Stack[-0x1a0] (WRITE)
// 0041eb66: FSTP float ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x19c] (WRITE)
// 0041eb6d: FSTP float ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x198] (WRITE)
// 0041eb74: ADD EAX,0x28
// 0041eb77: FLD float ptr [EBX]
// 0041eb79: FLD float ptr [EBX + 0x4]
// 0041eb7c: FLD float ptr [EBX + 0x8]
// 0041eb7f: PUSH EAX
// 0041eb80: FXCH ST2
// 0041eb82: FSUB float ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x1a0] (READ)
// 0041eb89: LEA EAX,[ESP + 0x2b0]
//   XREF to: Stack[-0x194] (DATA)
// 0041eb90: FSTP float ptr [EBX]
// 0041eb92: PUSH EAX
// 0041eb93: FSUB float ptr [ESP + 0x2ac]
//   XREF to: Stack[-0x19c] (READ)
// 0041eb9a: LEA EAX,[EBX + 0x18]
// 0041eb9d: FSTP float ptr [EBX + 0x4]
// 0041eba0: FSUB float ptr [ESP + 0x2b0]
//   XREF to: Stack[-0x198] (READ)
// 0041eba7: PUSH EAX
// 0041eba8: FSTP float ptr [EBX + 0x8]
// 0041ebab: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0041ebb0: LEA EDX,[EBX + 0x4c]
// 0041ebb3: ADD ESP,0xc
// 0041ebb6: MOV EAX,dword ptr [EDX]
// 0041ebb8: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x374] (WRITE)
// 0041ebbf: LEA EAX,[EDX + 0x4]
// 0041ebc2: MOV EAX,dword ptr [EAX]
// 0041ebc4: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x370] (WRITE)
// 0041ebcb: LEA EAX,[EDX + 0x8]
// 0041ebce: MOV EAX,dword ptr [EAX]
// 0041ebd0: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x36c] (WRITE)
// 0041ebd7: FLD float ptr [ESP + 0x2b0]
//   XREF to: Stack[-0x190] (READ)
// 0041ebde: FMUL float ptr [EDX + 0x4]
// 0041ebe1: FLD float ptr [ESP + 0x2ac]
//   XREF to: Stack[-0x194] (READ)
// 0041ebe8: FMUL float ptr [EDX]
// 0041ebea: FADDP
// 0041ebec: FLD float ptr [ESP + 0x2b4]
//   XREF to: Stack[-0x18c] (READ)
// 0041ebf3: FMUL float ptr [EDX + 0x8]
// 0041ebf6: FADDP
// 0041ebf8: FMUL float ptr [0x006164ef]
//   XREF to: 006164ef (READ)
// 0041ebfe: FLD float ptr [ESP + 0x2ac]
//   XREF to: Stack[-0x194] (READ)
// 0041ec05: FXCH
// 0041ec07: FSTP float ptr [ESP + 0x3f8]
//   XREF to: Stack[-0x48] (WRITE)
// 0041ec0e: FMUL float ptr [ESP + 0x3f8]
//   XREF to: Stack[-0x48] (READ)
// 0041ec15: FLD float ptr [ESP + 0x2b0]
//   XREF to: Stack[-0x190] (READ)
// 0041ec1c: FMUL float ptr [ESP + 0x3f8]
//   XREF to: Stack[-0x48] (READ)
// 0041ec23: FLD float ptr [ESP + 0x2b4]
//   XREF to: Stack[-0x18c] (READ)
// 0041ec2a: FMUL float ptr [ESP + 0x3f8]
//   XREF to: Stack[-0x48] (READ)
// 0041ec31: LEA EAX,[ESP + 0x258]
//   XREF to: Stack[-0x1e8] (DATA)
// 0041ec38: FXCH ST2
// 0041ec3a: FSTP float ptr [ESP + 0x33c]
//   XREF to: Stack[-0x104] (WRITE)
// 0041ec41: FSTP float ptr [ESP + 0x340]
//   XREF to: Stack[-0x100] (WRITE)
// 0041ec48: FSTP float ptr [ESP + 0x344]
//   XREF to: Stack[-0xfc] (WRITE)
// 0041ec4f: FLD float ptr [ESP + 0x33c]
//   XREF to: Stack[-0x104] (READ)
// 0041ec56: FSUB float ptr [EDX]
// 0041ec58: FLD float ptr [ESP + 0x340]
//   XREF to: Stack[-0x100] (READ)
// 0041ec5f: FXCH
// 0041ec61: FSTP float ptr [ESP + 0x258]
//   XREF to: Stack[-0x1e8] (WRITE)
// 0041ec68: FSUB float ptr [EDX + 0x4]
// 0041ec6b: FLD float ptr [ESP + 0x344]
//   XREF to: Stack[-0xfc] (READ)
// 0041ec72: FXCH
// 0041ec74: FSTP float ptr [ESP + 0x25c]
//   XREF to: Stack[-0x1e4] (WRITE)
// 0041ec7b: FSUB float ptr [EDX + 0x8]
// 0041ec7e: LEA EDX,[ESP + 0x300]
//   XREF to: Stack[-0x140] (DATA)
// 0041ec85: FSTP float ptr [ESP + 0x260]
//   XREF to: Stack[-0x1e0] (WRITE)
// 0041ec8c: CMP EDX,EAX
// 0041ec8e: JZ 0x0041ecba
//   XREF to: 0041ecba (CONDITIONAL_JUMP)
// 0041ec90: MOV EAX,dword ptr [ESP + 0x258]
//   XREF to: Stack[-0x1e8] (DATA)
// 0041ec97: MOV dword ptr [ESP + 0x300],EAX
//   XREF to: Stack[-0x140] (WRITE)
// 0041ec9e: MOV EAX,dword ptr [ESP + 0x25c]
//   XREF to: Stack[-0x1e4] (READ)
// 0041eca5: MOV dword ptr [ESP + 0x304],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 0041ecac: MOV EAX,dword ptr [ESP + 0x260]
//   XREF to: Stack[-0x1e0] (READ)
// 0041ecb3: MOV dword ptr [ESP + 0x308],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 0041ecba: FLD float ptr [0x006164f3]
//   Label: LAB_0041ecba
//   XREF to: 006164f3 (READ)
// 0041ecc0: FLD float ptr [ESP + 0x300]
//   XREF to: Stack[-0x140] (READ)
// 0041ecc7: FMUL ST1
// 0041ecc9: FLD float ptr [ESP + 0x304]
//   XREF to: Stack[-0x13c] (READ)
// 0041ecd0: FMUL ST2
// 0041ecd2: FLD float ptr [ESP + 0x308]
//   XREF to: Stack[-0x138] (READ)
// 0041ecd9: FMULP ST3
// 0041ecdb: FXCH
// 0041ecdd: FLD float ptr [0x006164f7]
//   XREF to: 006164f7 (READ)
// 0041ece3: FXCH
// 0041ece5: FMUL ST1
// 0041ece7: FXCH ST2
// 0041ece9: FMUL ST1
// 0041eceb: LEA EAX,[EBX + 0x4c]
// 0041ecee: FXCH ST3
// 0041ecf0: FMULP
// 0041ecf2: LEA EDX,[EBX + 0x94]
// 0041ecf8: FXCH
// 0041ecfa: FSTP float ptr [ESP + 0x300]
//   XREF to: Stack[-0x140] (WRITE)
// 0041ed01: FXCH
// 0041ed03: FSTP float ptr [ESP + 0x304]
//   XREF to: Stack[-0x13c] (WRITE)
// 0041ed0a: FSTP float ptr [ESP + 0x308]
//   XREF to: Stack[-0x138] (WRITE)
// 0041ed11: FLD float ptr [ESP + 0x300]
//   XREF to: Stack[-0x140] (READ)
// 0041ed18: FSUB float ptr [EAX]
// 0041ed1a: FLD float ptr [ESP + 0x304]
//   XREF to: Stack[-0x13c] (READ)
// 0041ed21: FXCH
// 0041ed23: FSTP float ptr [ESP + 0x384]
//   XREF to: Stack[-0xbc] (WRITE)
// 0041ed2a: FSUB float ptr [EAX + 0x4]
// 0041ed2d: FLD float ptr [ESP + 0x308]
//   XREF to: Stack[-0x138] (READ)
// 0041ed34: FXCH
// 0041ed36: FSTP float ptr [ESP + 0x388]
//   XREF to: Stack[-0xb8] (WRITE)
// 0041ed3d: FSUB float ptr [EAX + 0x8]
// 0041ed40: FLD float ptr [ESP + 0x384]
//   XREF to: Stack[-0xbc] (READ)
// 0041ed47: FXCH
// 0041ed49: FSTP float ptr [ESP + 0x38c]
//   XREF to: Stack[-0xb4] (WRITE)
// 0041ed50: FMUL float ptr [EDX]
// 0041ed52: FLD float ptr [ESP + 0x388]
//   XREF to: Stack[-0xb8] (READ)
// 0041ed59: FXCH
// 0041ed5b: FSTP float ptr [ESP + 0x2f4]
//   XREF to: Stack[-0x14c] (WRITE)
// 0041ed62: FMUL float ptr [EDX]
// 0041ed64: FLD1
// 0041ed66: FLD float ptr [ESP + 0x38c]
//   XREF to: Stack[-0xb4] (READ)
// 0041ed6d: FLD float ptr [ESP + 0x2f4]
//   XREF to: Stack[-0x14c] (READ)
// 0041ed74: FXCH ST3
// 0041ed76: FSTP float ptr [ESP + 0x2f8]
//   XREF to: Stack[-0x148] (WRITE)
// 0041ed7d: FMUL float ptr [EDX]
// 0041ed7f: FXCH
// 0041ed81: FDIV float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0041ed84: FXCH ST2
// 0041ed86: FMUL ST2
// 0041ed88: FLD float ptr [ESP + 0x2f8]
//   XREF to: Stack[-0x148] (READ)
// 0041ed8f: FMUL ST3
// 0041ed91: FXCH ST2
// 0041ed93: FST float ptr [ESP + 0x2fc]
//   XREF to: Stack[-0x144] (WRITE)
// 0041ed9a: FMULP ST3
// 0041ed9c: LEA EAX,[EBX + 0x64]
// 0041ed9f: FSTP float ptr [ESP + 0x138]
//   XREF to: Stack[-0x308] (WRITE)
// 0041eda6: FSTP float ptr [ESP + 0x13c]
//   XREF to: Stack[-0x304] (WRITE)
// 0041edad: FSTP float ptr [ESP + 0x140]
//   XREF to: Stack[-0x300] (WRITE)
// 0041edb4: FLD float ptr [EAX]
// 0041edb6: FADD float ptr [ESP + 0x138]
//   XREF to: Stack[-0x308] (READ)
// 0041edbd: FLD float ptr [EAX + 0x4]
// 0041edc0: FXCH
// 0041edc2: FSTP float ptr [EAX]
// 0041edc4: FADD float ptr [ESP + 0x13c]
//   XREF to: Stack[-0x304] (READ)
// 0041edcb: FLD float ptr [EAX + 0x8]
// 0041edce: FXCH
// 0041edd0: FSTP float ptr [EAX + 0x4]
// 0041edd3: FADD float ptr [ESP + 0x140]
//   XREF to: Stack[-0x300] (READ)
// 0041edda: FSTP float ptr [EAX + 0x8]
// 0041eddd: LEA EAX,[EBX + 0x70]
// 0041ede0: MOV dword ptr [EAX + 0x8],0x0
// 0041ede7: MOV EDX,dword ptr [EAX + 0x8]
// 0041edea: MOV dword ptr [EAX + 0x4],EDX
// 0041eded: MOV EDX,dword ptr [EAX + 0x4]
// 0041edf0: MOV dword ptr [EAX],EDX
// 0041edf2: LEA EAX,[ESI*0x4 + 0x0]
// 0041edf9: SUB EAX,ESI
// 0041edfb: SHL EAX,0x2
// 0041edfe: ADD EAX,ESI
// 0041ee00: LEA EDX,[EBX + 0xb4]
// 0041ee06: SHL EAX,0x2
// 0041ee09: ADD EDX,EAX
// 0041ee0b: FLD float ptr [EDX + 0x4]
// 0041ee0e: FMUL float ptr [ESP + 0x140]
//   XREF to: Stack[-0x300] (READ)
// 0041ee15: FLD float ptr [EDX + 0x8]
// 0041ee18: FMUL float ptr [ESP + 0x13c]
//   XREF to: Stack[-0x304] (READ)
// 0041ee1f: FSUBP
// 0041ee21: FSTP float ptr [ESP + 0x324]
//   XREF to: Stack[-0x11c] (WRITE)
// 0041ee28: FLD float ptr [EDX + 0x8]
// 0041ee2b: FMUL float ptr [ESP + 0x138]
//   XREF to: Stack[-0x308] (READ)
// 0041ee32: FLD float ptr [EDX]
// 0041ee34: FMUL float ptr [ESP + 0x140]
//   XREF to: Stack[-0x300] (READ)
// 0041ee3b: FSUBP
// 0041ee3d: FSTP float ptr [ESP + 0x328]
//   XREF to: Stack[-0x118] (WRITE)
// 0041ee44: FLD float ptr [EDX]
// 0041ee46: FMUL float ptr [ESP + 0x13c]
//   XREF to: Stack[-0x304] (READ)
// 0041ee4d: FLD float ptr [0x006164fb]
//   XREF to: 006164fb (READ)
// 0041ee53: FLD float ptr [ESP + 0x324]
//   XREF to: Stack[-0x11c] (READ)
// 0041ee5a: FMUL ST1
// 0041ee5c: FLD float ptr [EDX + 0x4]
// 0041ee5f: FMUL float ptr [ESP + 0x138]
//   XREF to: Stack[-0x308] (READ)
// 0041ee66: FLD float ptr [ESP + 0x328]
//   XREF to: Stack[-0x118] (READ)
// 0041ee6d: FXCH
// 0041ee6f: FSUBP ST4,ST0
// 0041ee71: FMUL ST2
// 0041ee73: FXCH ST3
// 0041ee75: FST float ptr [ESP + 0x32c]
//   XREF to: Stack[-0x114] (WRITE)
// 0041ee7c: FMULP ST2
// 0041ee7e: LEA EAX,[EBX + 0x88]
// 0041ee84: FSTP float ptr [ESP + 0x390]
//   XREF to: Stack[-0xb0] (WRITE)
// 0041ee8b: FXCH
// 0041ee8d: FSTP float ptr [ESP + 0x394]
//   XREF to: Stack[-0xac] (WRITE)
// 0041ee94: FSTP float ptr [ESP + 0x398]
//   XREF to: Stack[-0xa8] (WRITE)
// 0041ee9b: FLD float ptr [EAX]
// 0041ee9d: FADD float ptr [ESP + 0x390]
//   XREF to: Stack[-0xb0] (READ)
// 0041eea4: FLD float ptr [EAX + 0x4]
// 0041eea7: FXCH
// 0041eea9: FSTP float ptr [EAX]
// 0041eeab: FADD float ptr [ESP + 0x394]
//   XREF to: Stack[-0xac] (READ)
// 0041eeb2: FLD float ptr [EAX + 0x8]
// 0041eeb5: FXCH
// 0041eeb7: FSTP float ptr [EAX + 0x4]
// 0041eeba: FADD float ptr [ESP + 0x398]
//   XREF to: Stack[-0xa8] (READ)
// 0041eec1: FSTP float ptr [EAX + 0x8]
// 0041eec4: MOV EAX,dword ptr [EDX]
// 0041eec6: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x38c] (WRITE)
// 0041eecd: LEA EAX,[EDX + 0x4]
// 0041eed0: MOV EAX,dword ptr [EAX]
// 0041eed2: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x388] (WRITE)
// 0041eed9: LEA EAX,[EDX + 0x8]
// 0041eedc: MOV EAX,dword ptr [EAX]
// 0041eede: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x384] (WRITE)
// 0041eee5: XOR EAX,EAX
// 0041eee7: MOV dword ptr [ESP + 0x3b4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0041eeee: MOV dword ptr [ESP + 0x3b8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0041eef5: MOV dword ptr [ESP + 0x3bc],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0041eefc: FLD float ptr [EBX + 0x94]
// 0041ef02: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x8c] (DATA)
// 0041ef09: FMUL double ptr [0x006164d7]
//   XREF to: 006164d7 (READ)
// 0041ef0f: PUSH EAX
// 0041ef10: LEA EAX,[ESP + 0x2bc]
//   XREF to: Stack[-0x188] (DATA)
// 0041ef17: PUSH EAX
// 0041ef18: LEA EAX,[EBX + 0x18]
// 0041ef1b: PUSH EAX
// 0041ef1c: FSTP float ptr [ESP + 0x3c4]
//   XREF to: Stack[-0x88] (WRITE)
// 0041ef23: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0041ef28: MOV EDX,EAX
// 0041ef2a: LEA EAX,[ESP + 0x3c0]
//   XREF to: Stack[-0x8c] (DATA)
// 0041ef31: ADD ESP,0xc
// 0041ef34: CMP EAX,EDX
// 0041ef36: JZ 0x0041ef55
//   XREF to: 0041ef55 (CONDITIONAL_JUMP)
// 0041ef38: MOV EAX,dword ptr [EDX]
// 0041ef3a: MOV dword ptr [ESP + 0x3b4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0041ef41: MOV EAX,dword ptr [EDX + 0x4]
// 0041ef44: MOV dword ptr [ESP + 0x3b8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0041ef4b: MOV EAX,dword ptr [EDX + 0x8]
// 0041ef4e: MOV dword ptr [ESP + 0x3bc],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0041ef55: FLD float ptr [ESP + 0xb8]
//   Label: LAB_0041ef55
//   XREF to: Stack[-0x388] (READ)
// 0041ef5c: FMUL float ptr [ESP + 0x3bc]
//   XREF to: Stack[-0x84] (READ)
// 0041ef63: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x384] (READ)
// 0041ef6a: FMUL float ptr [ESP + 0x3b4]
//   XREF to: Stack[-0x8c] (READ)
// 0041ef71: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x38c] (READ)
// 0041ef78: FMUL float ptr [ESP + 0x3b8]
//   XREF to: Stack[-0x88] (READ)
// 0041ef7f: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x384] (READ)
// 0041ef86: FMUL float ptr [ESP + 0x3b8]
//   XREF to: Stack[-0x88] (READ)
// 0041ef8d: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x38c] (READ)
// 0041ef94: FMUL float ptr [ESP + 0x3bc]
//   XREF to: Stack[-0x84] (READ)
// 0041ef9b: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x388] (READ)
// 0041efa2: FMUL float ptr [ESP + 0x3b4]
//   XREF to: Stack[-0x8c] (READ)
// 0041efa9: LEA EAX,[EBX + 0x88]
// 0041efaf: FXCH ST2
// 0041efb1: FSUBP ST5,ST0
// 0041efb3: FSUBP ST3,ST0
// 0041efb5: FSUBP
// 0041efb7: FXCH ST2
// 0041efb9: FSTP float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x350] (WRITE)
// 0041efc0: FSTP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x34c] (WRITE)
// 0041efc7: FSTP float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x348] (WRITE)
// 0041efce: FLD float ptr [EAX]
// 0041efd0: FADD float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x350] (READ)
// 0041efd7: FLD float ptr [EAX + 0x4]
// 0041efda: FXCH
// 0041efdc: FSTP float ptr [EAX]
// 0041efde: FADD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x34c] (READ)
// 0041efe5: FLD float ptr [EAX + 0x8]
// 0041efe8: FXCH
// 0041efea: FSTP float ptr [EAX + 0x4]
// 0041efed: FADD float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x348] (READ)
// 0041eff4: FSTP float ptr [EAX + 0x8]
// 0041eff7: CMP dword ptr [ESP + 0x424],0x2
//   Label: LAB_0041eff7
//   XREF to: Stack[-0x1c] (READ)
