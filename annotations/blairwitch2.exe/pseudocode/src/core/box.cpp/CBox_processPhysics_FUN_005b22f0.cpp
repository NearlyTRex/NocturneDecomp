// Name: core_box.cpp_CBox_processPhysics_FUN_005b22f0
// Address: 005b22f0
// Address Range: [[005b22f0, 005b42fa]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_processPhysics_FUN_005b22f0(CBox *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_processPhysics_FUN_005b22f0(CBox *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  SScrape *pSVar6;
  int iVar7;
  CBox *pCVar8;
  CVector3f *pCVar9;
  float *pfVar10;
  float *pfVar11;
  uint *puVar12;
  int iVar13;
  CMatrix3x3f *pCVar14;
  byte bVar15;
  float afStackY_1614 [978];
  float local_69c;
  float local_698;
  float local_694;
  float local_690;
  float local_68c;
  float local_688;
  float local_684;
  float local_680;
  float local_67c;
  CMatrix3x3f local_674;
  int aiStack_650 [9];
  float local_62c;
  float afStack_628 [4];
  float local_618;
  float local_614;
  float local_610;
  float local_60c;
  float local_608;
  float local_604;
  float local_600;
  float local_5fc;
  float local_5f8;
  float local_5f4;
  float local_5f0;
  float local_5ec;
  float local_5e8;
  float local_5e4;
  float local_5e0;
  float local_5dc;
  float local_5d8;
  float local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  uint local_5a0;
  float local_59c;
  float local_598 [4];
  float local_588;
  float local_584;
  float local_580;
  float local_57c;
  byte local_578 [12];
  float local_56c;
  float local_568 [4];
  float local_558;
  float local_554;
  float local_550;
  float local_54c;
  byte local_548 [376];
  float afStack_3d0 [4];
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c [5];
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  CBox local_2d8;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  SScrape *local_5c;
  SScrape *local_58;
  CVector3f *local_54;
  CVector3f *local_50;
  CVector3f *local_4c;
  CBox *local_48;
  SScrape *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  SScrape *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  bVar15 = 0;
  if (this_ptr->is_valid == 0) {
    return;
  }
  if ((CBox *)local_548 != this_ptr) {
    local_548._0_4_ = (this_ptr->position).x;
    local_548._4_4_ = (this_ptr->position).y;
    local_548._8_4_ = (this_ptr->position).z;
  }
  if (&local_2d8 != this_ptr) {
    local_2d8.position.x = (this_ptr->position).x;
    local_2d8.position.y = (this_ptr->position).y;
    local_2d8.position.z = (this_ptr->position).z;
  }
  local_548._4_4_ = (float)local_548._4_4_ + 1.0;
  local_2d8.position.y = local_2d8.position.y + _DAT_005f12e8;
  local_2c = (SScrape *)
             core_dtrace_cpp_FUN_00472c60
                       (&g_CDemonRaytraceInstance,local_548,&local_2d8,local_578,0);
  if (((float)local_2c <= 0.0) || (1.0 <= (float)local_2c)) {
    this_ptr[1].position.x = -9999.0;
  }
  else {
    this_ptr[1].position.x =
         (local_2d8.position.y - (float)local_548._4_4_) * (float)local_2c + (float)local_548._4_4_;
  }
  pCVar5 = &this_ptr->scrape_points[0].transformed_position;
  pCVar9 = &this_ptr->scrape_points[0].previous_position;
  do {
    if (pCVar9 != pCVar5) {
      pCVar9->x = pCVar5->x;
      pCVar9->y = pCVar5->y;
      pCVar9->z = pCVar5->z;
    }
    pCVar5 = (CVector3f *)((int)(pCVar5 + 4) + 4);
    pCVar9 = (CVector3f *)((int)(pCVar9 + 4) + 4);
  } while (pCVar5 != (CVector3f *)&this_ptr[1].position.z);
  local_5a0 = 0;
  local_5a8 = 0.0;
  local_5a4 = -this_ptr->mass * (float)_DAT_005f12f0;
  core_dirmat_cpp_FUN_004495a0(&this_ptr->rotation_matrix,afStack_628 + 0x20);
  pCVar5 = &this_ptr->linear_momentum;
  local_548._300_4_ = local_2d8.dead;
  *(uint *)(local_548 + (uint)bVar15 * -8 + 0x130) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x40);
  *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x134) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x44);
  pCVar5->x = pCVar5->x + (float)local_548._300_4_;
  (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).y + (float)local_548._304_4_;
  (this_ptr->linear_momentum).z = (this_ptr->linear_momentum).z + (float)local_548._308_4_;
  fVar1 = 1.0 / this_ptr->mass;
  local_2d8.linear_momentum.z = pCVar5->x * fVar1;
  local_2d8.angular_velocity.x = (this_ptr->linear_momentum).y * fVar1;
  local_2d8.angular_velocity.y = fVar1 * (this_ptr->linear_momentum).z;
  local_56c = local_2d8.linear_momentum.z;
  local_568[(uint)bVar15 * -2] = *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x70);
  local_568[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x74);
  if (&this_ptr->linear_velocity_temp != (CVector3f *)&local_56c) {
    (this_ptr->linear_velocity_temp).x = local_56c;
    (this_ptr->linear_velocity_temp).y = local_568[0];
    (this_ptr->linear_velocity_temp).z = local_568[1];
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
  local_2c = (SScrape *)&this_ptr->rotation_matrix;
  core_dirmat_cpp_FUN_00449530(local_2c,&this_ptr->linear_velocity_temp);
  local_2d8.scrape_points[0].local_position.x = local_2d8.scrape_points[6].local_position.x;
  *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0xb8) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x1f0);
  pSVar6 = local_2c;
  *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xbc) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 500);
  pCVar5 = &this_ptr->linear_velocity;
  local_2d8.scrape_points[1].transformed_position.z =
       local_2d8.scrape_points[0].local_position.x * delta_time;
  local_2d8.scrape_points[1].previous_position.x =
       local_2d8.scrape_points[0].local_position.y * delta_time;
  local_2d8.scrape_points[1].previous_position.y =
       local_2d8.scrape_points[0].local_position.z * delta_time;
  local_548._96_4_ = local_2d8.scrape_points[0].local_position.x * delta_time;
  *(uint *)(local_548 + (uint)bVar15 * -8 + 100) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x100);
  pCVar9 = pCVar5;
  *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x68) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x104);
  pCVar5->x = pCVar5->x + (float)local_548._96_4_;
  (this_ptr->linear_velocity).y = (this_ptr->linear_velocity).y + (float)local_548._100_4_;
  (this_ptr->linear_velocity).z = (this_ptr->linear_velocity).z + (float)local_548._104_4_;
  core_dirmat_cpp_FUN_004495a0(pSVar6,pCVar9);
  local_548._120_4_ = local_34c[2];
  *(float *)(local_548 + (uint)bVar15 * -8 + 0x7c) = local_34c[(uint)bVar15 * -2 + 3];
  *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x80) =
       local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
  if (&this_ptr->linear_velocity_local != (CVector3f *)(local_548 + 0x78)) {
    (this_ptr->linear_velocity_local).x = (float)local_548._120_4_;
    (this_ptr->linear_velocity_local).y = (float)local_548._124_4_;
    (this_ptr->linear_velocity_local).z = (float)local_548._128_4_;
  }
  local_2d8.scrape_points[6].previous_position.x = (this_ptr->angular_velocity_temp).x * delta_time;
  local_2d8.scrape_points[6].previous_position.y = (this_ptr->angular_velocity_temp).y * delta_time;
  pCVar5 = &this_ptr->angular_velocity;
  local_2d8.scrape_points[6].previous_position.z = delta_time * (this_ptr->angular_velocity_temp).z;
  local_548._192_4_ = local_2d8.scrape_points[6].previous_position.x;
  *(uint *)(local_548 + (uint)bVar15 * -8 + 0xc4) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x208);
  *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 200) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x20c);
  pCVar5->x = pCVar5->x + (float)local_548._192_4_;
  fVar1 = (this_ptr->angular_velocity).y + (float)local_548._196_4_;
  (this_ptr->angular_velocity).y = fVar1;
  fVar2 = (this_ptr->angular_velocity).z + (float)local_548._200_4_;
  (this_ptr->angular_velocity).z = fVar2;
  local_18 = SQRT(fVar2 * (this_ptr->angular_velocity).z +
                  pCVar5->x * pCVar5->x + fVar1 * (this_ptr->angular_velocity).y);
  if (_DAT_005f12f8 < local_18) {
    local_2d8.scrape_points[7].previous_position.y = _DAT_005f12f8 / local_18;
    pCVar5->x = pCVar5->x * local_2d8.scrape_points[7].previous_position.y;
    (this_ptr->angular_velocity).y =
         (this_ptr->angular_velocity).y * local_2d8.scrape_points[7].previous_position.y;
    (this_ptr->angular_velocity).z =
         (this_ptr->angular_velocity).z * local_2d8.scrape_points[7].previous_position.y;
  }
  local_2d8.scrape_points[5].transformed_position.y = (this_ptr->linear_velocity).x * delta_time;
  local_2d8.scrape_points[5].transformed_position.z = (this_ptr->linear_velocity).y * delta_time;
  local_2d8.scrape_points[5].previous_position.x = (this_ptr->linear_velocity).z * delta_time;
  local_548._204_4_ = local_2d8.scrape_points[5].transformed_position.y;
  *(uint *)(local_548 + (uint)bVar15 * -8 + 0xd0) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x1cc);
  *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xd4) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x1d0);
  (this_ptr->position).x = (this_ptr->position).x + (float)local_548._204_4_;
  (this_ptr->position).y = (this_ptr->position).y + (float)local_548._208_4_;
  (this_ptr->position).z = (this_ptr->position).z + (float)local_548._212_4_;
  local_5b4 = (this_ptr->angular_velocity).x * delta_time;
  local_5b0 = (this_ptr->angular_velocity).y * delta_time;
  pCVar5 = (CVector3f *)(local_548 + 0x174);
  pCVar14 = &local_674;
  local_5ac = delta_time * (this_ptr->angular_velocity).z;
  local_548._372_4_ = local_5b4;
  afStack_3d0[(uint)bVar15 * -2] = afStack_628[(uint)bVar15 * -2 + 0x1e];
  afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f];
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(pCVar14,pCVar5);
  local_69c = (this_ptr->rotation_matrix).m[0].z * local_674.m[2].x +
              (this_ptr->rotation_matrix).m[0].x * local_674.m[0].x +
              (this_ptr->rotation_matrix).m[0].y * local_674.m[1].x;
  local_698 = (this_ptr->rotation_matrix).m[0].z * local_674.m[2].y +
              (this_ptr->rotation_matrix).m[0].y * local_674.m[1].y +
              (this_ptr->rotation_matrix).m[0].x * local_674.m[0].y;
  local_694 = (this_ptr->rotation_matrix).m[0].z * local_674.m[2].z +
              (this_ptr->rotation_matrix).m[0].y * local_674.m[1].z +
              (this_ptr->rotation_matrix).m[0].x * local_674.m[0].z;
  local_690 = (this_ptr->rotation_matrix).m[1].z * local_674.m[2].x +
              (this_ptr->rotation_matrix).m[1].x * local_674.m[0].x +
              (this_ptr->rotation_matrix).m[1].y * local_674.m[1].x;
  local_68c = (this_ptr->rotation_matrix).m[1].z * local_674.m[2].y +
              (this_ptr->rotation_matrix).m[1].y * local_674.m[1].y +
              (this_ptr->rotation_matrix).m[1].x * local_674.m[0].y;
  local_688 = (this_ptr->rotation_matrix).m[1].z * local_674.m[2].z +
              (this_ptr->rotation_matrix).m[1].y * local_674.m[1].z +
              (this_ptr->rotation_matrix).m[1].x * local_674.m[0].z;
  local_684 = (this_ptr->rotation_matrix).m[2].z * local_674.m[2].x +
              (this_ptr->rotation_matrix).m[2].x * local_674.m[0].x +
              (this_ptr->rotation_matrix).m[2].y * local_674.m[1].x;
  local_680 = (this_ptr->rotation_matrix).m[2].z * local_674.m[2].y +
              (this_ptr->rotation_matrix).m[2].y * local_674.m[1].y +
              (this_ptr->rotation_matrix).m[2].x * local_674.m[0].y;
  local_67c = (this_ptr->rotation_matrix).m[2].z * local_674.m[2].z +
              (this_ptr->rotation_matrix).m[2].y * local_674.m[1].z +
              (this_ptr->rotation_matrix).m[2].x * local_674.m[0].z;
  pfVar10 = &stack0xfffff964;
  pCVar14 = &this_ptr->rotation_matrix;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    pCVar14->m[0].x = *pfVar10;
    pfVar10 = pfVar10 + (uint)bVar15 * -2 + 1;
    pCVar14 = (CMatrix3x3f *)((int)pCVar14 + (uint)bVar15 * -8 + 4);
  }
  core_dirmat_cpp_FUN_004496e0(&this_ptr->rotation_matrix);
  local_338 = local_2d8.scrape_points[0].raytrace_intersection;
  local_34c[(uint)bVar15 * -2 + 6] = *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0xdc);
  local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
       *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xe0);
  if (&this_ptr->orientation != (CVector3f *)(local_34c + 5)) {
    (this_ptr->orientation).x = local_338;
    (this_ptr->orientation).y = local_334;
    (this_ptr->orientation).z = local_330;
  }
  local_34 = 0;
  if (0 < this_ptr->scrape_point_count) {
    local_2d8.scrape_points[7].previous_position.z = (float)this_ptr->scrape_points;
    local_2d8.scrape_points[7].previous_position.x = (float)&this_ptr->rotation_matrix;
    local_54 = &this_ptr->scrape_points[0].transformed_position;
    do {
      core_dirmat_cpp_FUN_00449530
                (local_2d8.scrape_points[7].previous_position.x,
                 (SScrape *)((int)local_2d8.scrape_points[7].previous_position.z + local_34 * 0x34))
      ;
      local_2d8.scrape_points[1].previous_position.z = (float)local_548._228_4_;
      *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x10c) =
           *(uint *)(local_548 + (uint)bVar15 * -8 + 0xe8);
      *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x110) =
           *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xec);
      local_2d8.scrape_points[4].local_position.z =
           (this_ptr->position).x + local_2d8.scrape_points[1].previous_position.z;
      local_2d8.scrape_points[4].transformed_position.x =
           (this_ptr->position).y + local_2d8.scrape_points[1].raytrace_intersection;
      local_2d8.scrape_points[4].transformed_position.y =
           (this_ptr->position).z + local_2d8.scrape_points[1].raytrace_normal.x;
      local_2d8.scrape_points[2].previous_position.y = local_2d8.scrape_points[4].local_position.z;
      *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x13c) =
           *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 400);
      *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x140) =
           *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x194);
      if ((CVector3f *)&local_2d8.scrape_points[2].previous_position.y != local_54) {
        local_54->x = local_2d8.scrape_points[2].previous_position.y;
        local_54->y = local_2d8.scrape_points[2].previous_position.z;
        local_54->z = local_2d8.scrape_points[2].raytrace_intersection;
      }
      local_34 = local_34 + 1;
      local_54 = (CVector3f *)((int)(local_54 + 4) + 4);
    } while (local_34 < this_ptr->scrape_point_count);
  }
  local_5c = this_ptr->scrape_points;
  local_38 = 0;
  local_50 = &this_ptr->scrape_points[0].previous_position;
  local_7c = 0;
  local_4c = &this_ptr->scrape_points[0].transformed_position;
  local_48 = this_ptr;
  if (0 < this_ptr->scrape_point_count) {
    local_44 = this_ptr->scrape_points;
    do {
      if (this_ptr[1].position.x <= local_48->scrape_points[0].transformed_position.y) {
        local_380 = local_4c->x - local_50->x;
        local_37c = local_4c->y - local_50->y;
        local_378 = local_4c->z - local_50->z;
        local_2d8.moment_of_inertia.y = local_380;
        *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0xa0) =
             afStack_3d0[(uint)bVar15 * -2 + 0x15];
        *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xa4) =
             afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
        if ((float)_DAT_005f1328 <
            SQRT(local_2d8.extents.x * local_2d8.extents.x +
                 local_2d8.moment_of_inertia.y * local_2d8.moment_of_inertia.y +
                 local_2d8.moment_of_inertia.z * local_2d8.moment_of_inertia.z)) {
          local_2c = (SScrape *)
                     core_dtrace_cpp_FUN_00472c60
                               (&g_CDemonRaytraceInstance,local_50,local_4c,
                                &local_44->raytrace_normal,0);
          local_48->scrape_points[0].raytrace_intersection = (float)local_2c;
          fVar1 = local_48->scrape_points[0].raytrace_intersection;
          if ((0.0 < fVar1) && (fVar1 < 1.0)) {
            aiStack_650[local_7c + 1] = local_38;
            local_7c = local_7c + 1;
          }
        }
      }
      else {
        if (local_50 != local_4c) {
          local_50->x = local_4c->x;
          local_50->y = local_4c->y;
          local_50->z = local_4c->z;
        }
        fVar1 = local_48->scrape_points[0].transformed_position.y;
        local_48->scrape_points[0].previous_position.y =
             this_ptr[1].position.x + (float)_DAT_005f1330;
        fVar2 = local_48->scrape_points[0].previous_position.y;
        fVar3 = this_ptr[1].position.x;
        fVar4 = local_48->scrape_points[0].previous_position.y;
        local_48->scrape_points[0].raytrace_normal.x = 0.0;
        local_48->scrape_points[0].raytrace_normal.y = 1.0;
        local_48->scrape_points[0].raytrace_normal.z = 0.0;
        local_48->scrape_points[0].raytrace_intersection = (fVar3 - fVar4) / (fVar1 - fVar2);
        aiStack_650[local_7c + 1] = local_38;
        local_7c = local_7c + 1;
      }
      local_38 = local_38 + 1;
      local_50 = (CVector3f *)((int)(local_50 + 4) + 4);
      local_4c = (CVector3f *)((int)(local_4c + 4) + 4);
      local_48 = (CBox *)&(local_48->rotation_matrix).m[2].y;
      local_44 = local_44 + 1;
    } while (local_38 < this_ptr->scrape_point_count);
  }
  iVar7 = aiStack_650[1];
  if (local_7c == 1) {
    local_20 = aiStack_650[1];
    local_584 = local_5c[aiStack_650[1]].transformed_position.x -
                local_5c[aiStack_650[1]].previous_position.x;
    local_580 = local_5c[aiStack_650[1]].transformed_position.y -
                local_5c[aiStack_650[1]].previous_position.y;
    local_57c = local_5c[aiStack_650[1]].transformed_position.z -
                local_5c[aiStack_650[1]].previous_position.z;
    local_2d8.rotation_matrix.m[2].x = local_584;
    *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x34) = local_598[(uint)bVar15 * -2 + 6];
    iVar13 = local_20;
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x38) =
         *(uint *)(local_578 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + -4);
    local_60 = (1.0 - this_ptr->scrape_points[iVar7].raytrace_intersection) * (float)_DAT_005f1300;
    local_2d8.angular_velocity_temp.z = local_2d8.rotation_matrix.m[2].x * local_60;
    local_2d8.angular_momentum.x = local_2d8.rotation_matrix.m[2].y * local_60;
    local_2d8.angular_momentum.y = local_2d8.rotation_matrix.m[2].z * local_60;
    local_2d8.scrape_points[7].local_position.z = local_2d8.rotation_matrix.m[2].x * local_60;
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x22c) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x88);
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x230) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x8c);
    (this_ptr->position).x = (this_ptr->position).x - local_2d8.scrape_points[7].local_position.z;
    (this_ptr->position).y =
         (this_ptr->position).y - local_2d8.scrape_points[7].transformed_position.x;
    (this_ptr->position).z =
         (this_ptr->position).z - local_2d8.scrape_points[7].transformed_position.y;
    core_dirmat_cpp_FUN_004495a0(&this_ptr->rotation_matrix,&local_5c[iVar13].raytrace_normal);
    local_548._12_4_ = local_2d8.scrape_points[0].raytrace_normal.z;
    *(uint *)(local_548 + (uint)bVar15 * -8 + 0x10) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0xe8);
    *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x14) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xec);
    local_2d8.scrape_points[7].raytrace_normal.y =
         ((float)local_548._20_4_ * (this_ptr->linear_velocity_local).z +
         (float)local_548._12_4_ * (this_ptr->linear_velocity_local).x +
         (float)local_548._16_4_ * (this_ptr->linear_velocity_local).y) * _DAT_005f1308;
    local_2d8.scrape_points[6].raytrace_normal.z =
         (float)local_548._12_4_ * local_2d8.scrape_points[7].raytrace_normal.y;
    local_2d8.scrape_points[7].local_position.x =
         (float)local_548._16_4_ * local_2d8.scrape_points[7].raytrace_normal.y;
    local_2d8.scrape_points[7].local_position.y =
         (float)local_548._20_4_ * local_2d8.scrape_points[7].raytrace_normal.y;
    local_2d8.scrape_points[1].local_position.z =
         (float)local_548._12_4_ * local_2d8.scrape_points[7].raytrace_normal.y;
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0xf4) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x220);
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xf8) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x224);
    local_2d8.scrape_points[3].raytrace_intersection =
         local_2d8.scrape_points[1].local_position.z - (this_ptr->linear_velocity_local).x;
    local_2d8.scrape_points[3].raytrace_normal.x =
         local_2d8.scrape_points[1].transformed_position.x - (this_ptr->linear_velocity_local).y;
    local_2d8.scrape_points[3].raytrace_normal.y =
         local_2d8.scrape_points[1].transformed_position.y - (this_ptr->linear_velocity_local).z;
    local_2d8.scrape_points[1].raytrace_normal.y = local_2d8.scrape_points[3].raytrace_intersection;
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x118) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x178);
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x11c) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x17c);
    if ((float *)(local_548 + 0x3c) != &local_2d8.scrape_points[1].raytrace_normal.y) {
      local_548._60_4_ = local_2d8.scrape_points[1].raytrace_normal.y;
      local_548._64_4_ = local_2d8.scrape_points[1].raytrace_normal.z;
      local_548._68_4_ = local_2d8.scrape_points[2].local_position.x;
    }
    local_548._60_4_ = (float)local_548._60_4_ * _DAT_005f130c * _DAT_005f1310;
    local_548._64_4_ = (float)local_548._64_4_ * _DAT_005f130c * _DAT_005f1310;
    local_548._68_4_ = (float)local_548._68_4_ * _DAT_005f130c * _DAT_005f1310;
    fVar1 = 1.0 / delta_time;
    local_548._312_4_ = (float)local_548._60_4_ - (this_ptr->linear_velocity_local).x;
    local_548._316_4_ = (float)local_548._64_4_ - (this_ptr->linear_velocity_local).y;
    local_548._320_4_ = (float)local_548._68_4_ - (this_ptr->linear_velocity_local).z;
    local_2d8.scrape_points[3].raytrace_normal.z = (float)local_548._312_4_;
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x184) =
         *(uint *)(local_548 + (uint)bVar15 * -8 + 0x13c);
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x188) =
         *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x140);
    pfVar10 = &this_ptr->mass;
    local_548._348_4_ = local_2d8.scrape_points[3].raytrace_normal.z * *pfVar10;
    local_548._352_4_ = local_2d8.scrape_points[4].local_position.x * *pfVar10;
    local_548._356_4_ = local_2d8.scrape_points[4].local_position.y * *pfVar10;
    local_614 = local_2d8.scrape_points[3].raytrace_normal.z * *pfVar10;
    afStack_628[(uint)bVar15 * -2 + 6] = *(float *)(local_548 + (uint)bVar15 * -8 + 0x160);
    afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
         *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x164);
    local_3bc = local_614 * fVar1;
    local_3b8 = local_610 * fVar1;
    local_3b4 = local_60c * fVar1;
    local_548._216_4_ = local_614 * fVar1;
    *(float *)(local_548 + (uint)bVar15 * -8 + 0xdc) = afStack_3d0[(uint)bVar15 * -2 + 6];
    iVar7 = local_20;
    *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xe0) =
         afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    (this_ptr->linear_momentum).x = (this_ptr->linear_momentum).x + (float)local_548._216_4_;
    (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).y + (float)local_548._220_4_;
    (this_ptr->linear_momentum).z = (this_ptr->linear_momentum).z + (float)local_548._224_4_;
    (this_ptr->angular_velocity).z = 0.0;
    (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
    (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
    local_5fc = this_ptr->scrape_points[local_20].local_position.y * (float)local_548._224_4_ -
                this_ptr->scrape_points[local_20].local_position.z * (float)local_548._220_4_;
    local_5f8 = this_ptr->scrape_points[local_20].local_position.z * (float)local_548._216_4_ -
                this_ptr->scrape_points[local_20].local_position.x * (float)local_548._224_4_;
    local_5f4 = this_ptr->scrape_points[local_20].local_position.x * (float)local_548._220_4_ -
                this_ptr->scrape_points[local_20].local_position.y * (float)local_548._216_4_;
    local_548._324_4_ = local_5fc;
    *(float *)(local_548 + (uint)bVar15 * -8 + 0x148) = afStack_628[(uint)bVar15 * -2 + 0xc];
    *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x14c) =
         afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
    local_2d8.orientation.x = (float)local_548._324_4_ * _DAT_005f1314;
    local_2d8.orientation.y = (float)local_548._328_4_ * _DAT_005f1314;
    local_2d8.orientation.z = (float)local_548._332_4_ * _DAT_005f1314;
    local_548._24_4_ = (float)local_548._324_4_ * _DAT_005f1314;
    *(uint *)(local_548 + (uint)bVar15 * -8 + 0x1c) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x10);
    *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x20) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x14);
    (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).x + (float)local_548._24_4_;
    (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + (float)local_548._28_4_;
    (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + (float)local_548._32_4_;
    puVar12 = (uint *)((int)(this_ptr->scrape_points + iVar7) + ((uint)bVar15 * -2 + 1) * 4);
    local_2d8.scrape_points[6].raytrace_intersection =
         this_ptr->scrape_points[iVar7].local_position.x;
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x214) = *puVar12;
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x218) =
         puVar12[(uint)bVar15 * -2 + 1];
    local_35c = 0.0;
    local_354 = 0.0;
    local_358 = this_ptr->mass * (float)_DAT_005f12f0;
    core_dirmat_cpp_FUN_004495a0(&this_ptr->rotation_matrix,afStack_3d0 + 0x1d);
    local_314 = local_2d8.linear_velocity_temp.z;
    local_34c[(uint)bVar15 * -2 + 0xf] = *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 100);
    local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
         *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x68);
    if (afStack_3d0 + 0x1d != local_34c + 0xe) {
      local_35c = local_314;
      local_358 = local_310;
      local_354 = local_30c;
    }
    local_568[2] = local_2d8.scrape_points[6].raytrace_normal.x * local_354 -
                   local_2d8.scrape_points[6].raytrace_normal.y * local_358;
    local_568[3] = local_2d8.scrape_points[6].raytrace_normal.y * local_35c -
                   local_2d8.scrape_points[6].raytrace_intersection * local_354;
    local_558 = local_2d8.scrape_points[6].raytrace_intersection * local_358 -
                local_2d8.scrape_points[6].raytrace_normal.x * local_35c;
    local_608 = local_568[2];
    afStack_628[(uint)bVar15 * -2 + 9] = local_568[(uint)bVar15 * -2 + 3];
    afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         local_568[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).x + local_608;
    (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_604;
    (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_600;
  }
  if (local_7c != 2) goto LAB_005b3bd3;
  local_1c = aiStack_650[1];
  local_2c = (SScrape *)(aiStack_650[1] * 0x34);
  local_32c = this_ptr->scrape_points[aiStack_650[1]].transformed_position.x -
              this_ptr->scrape_points[aiStack_650[1]].previous_position.x;
  local_328 = this_ptr->scrape_points[aiStack_650[1]].transformed_position.y -
              this_ptr->scrape_points[aiStack_650[1]].previous_position.y;
  local_324 = this_ptr->scrape_points[aiStack_650[1]].transformed_position.z -
              this_ptr->scrape_points[aiStack_650[1]].previous_position.z;
  local_548._168_4_ = local_32c;
  *(float *)(local_548 + (uint)bVar15 * -8 + 0xac) = local_34c[(uint)bVar15 * -2 + 9];
  *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xb0) =
       local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
  local_14 = (1.0 - this_ptr->scrape_points[aiStack_650[1]].raytrace_intersection) *
             (float)_DAT_005f1318;
  local_28 = aiStack_650[2];
  local_2f0 = (float)local_548._168_4_ * local_14;
  local_2ec = (float)local_548._172_4_ * local_14;
  local_2e8 = (float)local_548._176_4_ * local_14;
  local_350 = (float)local_548._168_4_ * local_14;
  local_34c[(uint)bVar15 * -2] = local_34c[(uint)bVar15 * -2 + 0x18];
  local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
  fVar1 = local_34c[0] * local_34c[0];
  fVar3 = local_350 * local_350;
  local_2c = (SScrape *)(aiStack_650[2] * 0x34);
  fVar2 = local_34c[1] * local_34c[1];
  local_2d8.linear_velocity.z =
       this_ptr->scrape_points[aiStack_650[2]].transformed_position.x -
       this_ptr->scrape_points[aiStack_650[2]].previous_position.x;
  local_2d8.linear_velocity_local.x =
       this_ptr->scrape_points[aiStack_650[2]].transformed_position.y -
       this_ptr->scrape_points[aiStack_650[2]].previous_position.y;
  local_2d8.linear_velocity_local.y =
       this_ptr->scrape_points[aiStack_650[2]].transformed_position.z -
       this_ptr->scrape_points[aiStack_650[2]].previous_position.z;
  local_2e4 = local_2d8.linear_velocity.z;
  local_34c[(uint)bVar15 * -2 + 0x1b] = *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x4c);
  local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c] =
       *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x50);
  local_70 = (1.0 - this_ptr->scrape_points[aiStack_650[2]].raytrace_intersection) *
             (float)_DAT_005f1318;
  local_2d8.extents.y = local_2e4 * local_70;
  local_2d8.extents.z = local_2e0 * local_70;
  local_2d8.scrape_point_count = (int)(local_2dc * local_70);
  local_2fc = local_2e4 * local_70;
  local_34c[(uint)bVar15 * -2 + 0x15] = *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0xac);
  local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
       *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xb0);
  if (SQRT(fVar2 + fVar3 + fVar1) <=
      SQRT(local_2f4 * local_2f4 + local_2fc * local_2fc + local_2f8 * local_2f8)) {
    (this_ptr->position).x = (this_ptr->position).x + local_2fc;
    (this_ptr->position).y = (this_ptr->position).y + local_2f8;
    (this_ptr->position).z = (this_ptr->position).z + local_2f4;
    core_dirmat_cpp_FUN_004495a0
              (&this_ptr->rotation_matrix,&this_ptr->scrape_points[local_28].raytrace_normal);
    afStack_628[2] = local_398;
    afStack_628[(uint)bVar15 * -2 + 3] = afStack_3d0[(uint)bVar15 * -2 + 0xf];
    afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
    if (local_2d8.scrape_points + 3 != (SScrape *)(afStack_628 + 2)) {
      local_2d8.scrape_points[3].local_position.x = afStack_628[2];
      local_2d8.scrape_points[3].local_position.y = afStack_628[3];
      local_2d8.rotation_matrix.m[0].z = local_618;
      goto LAB_005b349b;
    }
  }
  else {
    (this_ptr->position).x = (this_ptr->position).x + local_350;
    (this_ptr->position).y = (this_ptr->position).y + local_34c[0];
    (this_ptr->position).z = (this_ptr->position).z + local_34c[1];
    core_dirmat_cpp_FUN_004495a0
              (&this_ptr->rotation_matrix,&this_ptr->scrape_points[local_1c].raytrace_normal);
    local_2d8.rotation_matrix.m[0].x = local_62c;
    *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x1c) = afStack_628[(uint)bVar15 * -2];
    *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x20) =
         afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    if (local_2d8.scrape_points + 3 != (SScrape *)&local_2d8.rotation_matrix) {
      local_2d8.scrape_points[3].local_position.x = local_2d8.rotation_matrix.m[0].x;
      local_2d8.scrape_points[3].local_position.y = local_2d8.rotation_matrix.m[0].y;
LAB_005b349b:
      local_2d8.scrape_points[3].local_position.z = local_2d8.rotation_matrix.m[0].z;
    }
  }
  local_2d8.scrape_points[7].raytrace_normal.x =
       (local_2d8.scrape_points[3].local_position.z * (this_ptr->linear_velocity_local).z +
       local_2d8.scrape_points[3].local_position.x * (this_ptr->linear_velocity_local).x +
       local_2d8.scrape_points[3].local_position.y * (this_ptr->linear_velocity_local).y) *
       _DAT_005f1308;
  local_548._156_4_ =
       local_2d8.scrape_points[3].local_position.x * local_2d8.scrape_points[7].raytrace_normal.x;
  local_548._160_4_ =
       local_2d8.scrape_points[3].local_position.y * local_2d8.scrape_points[7].raytrace_normal.x;
  local_548._164_4_ =
       local_2d8.scrape_points[3].local_position.z * local_2d8.scrape_points[7].raytrace_normal.x;
  local_2d8.scrape_points[3].transformed_position.x =
       local_2d8.scrape_points[3].local_position.x * local_2d8.scrape_points[7].raytrace_normal.x;
  *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x160) =
       *(uint *)(local_548 + (uint)bVar15 * -8 + 0xa0);
  *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x164) =
       *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xa4);
  local_2d8.scrape_points[6].transformed_position.x =
       local_2d8.scrape_points[3].transformed_position.x - (this_ptr->linear_velocity_local).x;
  local_2d8.scrape_points[6].transformed_position.y =
       local_2d8.scrape_points[3].transformed_position.y - (this_ptr->linear_velocity_local).y;
  local_2d8.scrape_points[6].transformed_position.z =
       local_2d8.scrape_points[3].transformed_position.z - (this_ptr->linear_velocity_local).z;
  local_548._72_4_ = local_2d8.scrape_points[6].transformed_position.x;
  *(uint *)(local_548 + (uint)bVar15 * -8 + 0x4c) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x1fc);
  *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x50) =
       *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x200);
  if (&local_2d8.scrape_points[5].previous_position.y != (float *)(local_548 + 0x48)) {
    local_2d8.scrape_points[5].previous_position.y = (float)local_548._72_4_;
    local_2d8.scrape_points[5].previous_position.z = (float)local_548._76_4_;
    local_2d8.scrape_points[5].raytrace_intersection = (float)local_548._80_4_;
  }
  local_2d8.scrape_points[5].previous_position.y =
       local_2d8.scrape_points[5].previous_position.y * _DAT_005f130c * _DAT_005f1320;
  local_2d8.scrape_points[5].previous_position.z =
       local_2d8.scrape_points[5].previous_position.z * _DAT_005f130c * _DAT_005f1320;
  local_2d8.scrape_points[5].raytrace_intersection =
       local_2d8.scrape_points[5].raytrace_intersection * _DAT_005f130c * _DAT_005f1320;
  fVar1 = 1.0 / delta_time;
  local_548._276_4_ =
       local_2d8.scrape_points[5].previous_position.y - (this_ptr->linear_velocity_local).x;
  local_548._280_4_ =
       local_2d8.scrape_points[5].previous_position.z - (this_ptr->linear_velocity_local).y;
  local_548._284_4_ =
       local_2d8.scrape_points[5].raytrace_intersection - (this_ptr->linear_velocity_local).z;
  local_59c = (float)local_548._276_4_;
  local_598[(uint)bVar15 * -2] = *(float *)(local_548 + (uint)bVar15 * -8 + 0x118);
  local_598[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x11c);
  pfVar10 = &this_ptr->mass;
  local_598[2] = local_59c * *pfVar10;
  local_598[3] = local_598[0] * *pfVar10;
  local_588 = local_598[1] * *pfVar10;
  local_548._36_4_ = local_59c * *pfVar10;
  *(float *)(local_548 + (uint)bVar15 * -8 + 0x28) = local_598[(uint)bVar15 * -2 + 3];
  *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x2c) =
       local_598[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
  local_554 = (float)local_548._36_4_ * fVar1;
  local_550 = (float)local_548._40_4_ * fVar1;
  local_54c = (float)local_548._44_4_ * fVar1;
  local_5e4 = (float)local_548._36_4_ * fVar1;
  afStack_628[(uint)bVar15 * -2 + 0x12] = local_568[(uint)bVar15 * -2 + 6];
  iVar7 = local_28;
  afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
       local_568[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
  (this_ptr->linear_momentum).x = (this_ptr->linear_momentum).x + local_5e4;
  (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).y + local_5e0;
  (this_ptr->linear_momentum).z = (this_ptr->linear_momentum).z + local_5dc;
  (this_ptr->angular_velocity).z = 0.0;
  (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
  (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
  local_24 = local_1c * 0x34;
  local_2c = this_ptr->scrape_points;
  pSVar6 = this_ptr->scrape_points + local_1c;
  local_548._84_4_ = (pSVar6->local_position).y * local_5dc - (pSVar6->local_position).z * local_5e0
  ;
  local_548._88_4_ = (pSVar6->local_position).z * local_5e4 - (pSVar6->local_position).x * local_5dc
  ;
  local_548._92_4_ = (pSVar6->local_position).x * local_5e0 - (pSVar6->local_position).y * local_5e4
  ;
  local_5c0 = (float)local_548._84_4_;
  afStack_628[(uint)bVar15 * -2 + 0x1b] = *(float *)(local_548 + (uint)bVar15 * -8 + 0x58);
  afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c] =
       *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x5c);
  pCVar5 = &this_ptr->angular_momentum;
  local_548._180_4_ = local_5c0 * _DAT_005f1314;
  local_548._184_4_ = local_5bc * _DAT_005f1314;
  local_548._188_4_ = local_5b8 * _DAT_005f1314;
  local_548._48_4_ = local_5c0 * _DAT_005f1314;
  *(uint *)(local_548 + (uint)bVar15 * -8 + 0x34) =
       *(uint *)(local_548 + (uint)bVar15 * -8 + 0xb8);
  *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x38) =
       *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xbc);
  pCVar5->x = pCVar5->x + (float)local_548._48_4_;
  (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + (float)local_548._52_4_;
  (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + (float)local_548._56_4_;
  local_548._252_4_ =
       local_2c[iVar7].local_position.y * local_5dc - local_2c[iVar7].local_position.z * local_5e0;
  local_548._256_4_ =
       local_2c[iVar7].local_position.z * local_5e4 - local_2c[iVar7].local_position.x * local_5dc;
  local_548._260_4_ =
       local_2c[iVar7].local_position.x * local_5e0 - local_2c[iVar7].local_position.y * local_5e4;
  local_2d8.scrape_points[4].transformed_position.z = (float)local_548._252_4_;
  *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x19c) =
       *(uint *)(local_548 + (uint)bVar15 * -8 + 0x100);
  *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x1a0) =
       *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x104);
  local_548._360_4_ = local_2d8.scrape_points[4].transformed_position.z * _DAT_005f1314;
  local_548._364_4_ = local_2d8.scrape_points[4].previous_position.x * _DAT_005f1314;
  local_548._368_4_ = local_2d8.scrape_points[4].previous_position.y * _DAT_005f1314;
  local_2d8.scrape_points[0].transformed_position.x =
       local_2d8.scrape_points[4].transformed_position.z * _DAT_005f1314;
  *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0xc4) =
       *(uint *)(local_548 + (uint)bVar15 * -8 + 0x16c);
  *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 200) =
       *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x170);
  pCVar5->x = pCVar5->x + local_2d8.scrape_points[0].transformed_position.x;
  (this_ptr->angular_momentum).y =
       (this_ptr->angular_momentum).y + local_2d8.scrape_points[0].transformed_position.y;
  (this_ptr->angular_momentum).z =
       (this_ptr->angular_momentum).z + local_2d8.scrape_points[0].transformed_position.z;
  pfVar10 = (float *)((int)&this_ptr->scrape_points[0].local_position.x + local_24);
  pfVar11 = pfVar10 + (uint)bVar15 * -2 + 1;
  local_548._108_4_ = *pfVar10;
  *(float *)(local_548 + (uint)bVar15 * -8 + 0x70) = *pfVar11;
  *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x74) =
       pfVar11[(uint)bVar15 * -2 + 1];
  puVar12 = (uint *)((int)this_ptr + (uint)bVar15 * -8 + iVar7 * 0x34 + 0xb8);
  local_548._132_4_ = this_ptr->scrape_points[iVar7].local_position.x;
  *(uint *)(local_548 + (uint)bVar15 * -8 + 0x88) = *puVar12;
  *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x8c) =
       puVar12[(uint)bVar15 * -2 + 1];
  local_2d8.scrape_points[2].raytrace_normal.x = 0.0;
  local_2d8.scrape_points[2].raytrace_normal.z = 0.0;
  local_2d8.scrape_points[2].raytrace_normal.y = this_ptr->mass * (float)_DAT_005f12f0;
  core_dirmat_cpp_FUN_004495a0
            (&this_ptr->rotation_matrix,&local_2d8.scrape_points[2].raytrace_normal);
  fVar1 = _DAT_005f1310;
  local_2d8.scrape_points[3].previous_position.x = local_374;
  *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x16c) = afStack_3d0[(uint)bVar15 * -2 + 0x18];
  *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x170) =
       afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
  if (&local_2d8.scrape_points[2].raytrace_normal != &local_2d8.scrape_points[3].previous_position)
  {
    local_2d8.scrape_points[2].raytrace_normal.x = local_2d8.scrape_points[3].previous_position.x;
    local_2d8.scrape_points[2].raytrace_normal.y = local_2d8.scrape_points[3].previous_position.y;
    local_2d8.scrape_points[2].raytrace_normal.z = local_2d8.scrape_points[3].previous_position.z;
  }
  local_368 = local_2d8.scrape_points[2].raytrace_normal.x * _DAT_005f1310;
  local_364 = local_2d8.scrape_points[2].raytrace_normal.y * _DAT_005f1310;
  local_360 = local_2d8.scrape_points[2].raytrace_normal.z * _DAT_005f1310;
  local_2d8.scrape_points[4].previous_position.z =
       local_2d8.scrape_points[2].raytrace_normal.x * _DAT_005f1310;
  *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x1a8) = afStack_3d0[(uint)bVar15 * -2 + 0x1b];
  *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x1ac) =
       afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c];
  pCVar5 = &this_ptr->angular_momentum;
  local_320 = (float)local_548._112_4_ * local_2d8.scrape_points[4].raytrace_normal.x -
              (float)local_548._116_4_ * local_2d8.scrape_points[4].raytrace_intersection;
  local_31c = (float)local_548._116_4_ * local_2d8.scrape_points[4].previous_position.z -
              (float)local_548._108_4_ * local_2d8.scrape_points[4].raytrace_normal.x;
  local_318 = (float)local_548._108_4_ * local_2d8.scrape_points[4].raytrace_intersection -
              (float)local_548._112_4_ * local_2d8.scrape_points[4].previous_position.z;
  local_5d8 = local_320;
  afStack_628[(uint)bVar15 * -2 + 0x15] = local_34c[(uint)bVar15 * -2 + 0xc];
  afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
       local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
  pCVar5->x = pCVar5->x + local_5d8;
  (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_5d4;
  (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_5d0;
  local_2d8.rotation_matrix.m[1].x = local_2d8.scrape_points[2].raytrace_normal.x * fVar1;
  local_2d8.rotation_matrix.m[1].y = local_2d8.scrape_points[2].raytrace_normal.y * fVar1;
  local_2d8.rotation_matrix.m[1].z = local_2d8.scrape_points[2].raytrace_normal.z * fVar1;
  afStack_3d0[2] = local_2d8.scrape_points[2].raytrace_normal.x * fVar1;
  afStack_3d0[(uint)bVar15 * -2 + 3] = *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x28);
  afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
       *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x2c);
  local_2d8.linear_velocity_local.z =
       (float)local_548._136_4_ * local_3c0 - (float)local_548._140_4_ * afStack_3d0[3];
  local_2d8.linear_velocity_temp.x =
       (float)local_548._140_4_ * afStack_3d0[2] - (float)local_548._132_4_ * local_3c0;
  local_2d8.linear_velocity_temp.y =
       (float)local_548._132_4_ * afStack_3d0[3] - (float)local_548._136_4_ * afStack_3d0[2];
  local_3a4 = local_2d8.linear_velocity_local.z;
  afStack_3d0[(uint)bVar15 * -2 + 0xc] = *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x58);
  afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
       *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x5c);
  pCVar5->x = pCVar5->x + local_3a4;
  (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_3a0;
  (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_39c;
LAB_005b3bd3:
  if (2 < local_7c) {
    iVar7 = 0;
    local_30 = 0;
    local_58 = this_ptr->scrape_points;
    local_78 = 0.0;
    local_40 = local_7c * 4;
    if (0 < local_7c * 4) {
      do {
        iVar13 = *(int *)((int)aiStack_650 + iVar7 + 4);
        local_3c = iVar13;
        local_2c = (SScrape *)(iVar13 * 0x34);
        pSVar6 = local_58 + iVar13;
        local_5cc = (pSVar6->transformed_position).x - (pSVar6->previous_position).x;
        local_5c8 = (pSVar6->transformed_position).y - (pSVar6->previous_position).y;
        local_5c4 = (pSVar6->transformed_position).z - (pSVar6->previous_position).z;
        local_548._144_4_ = local_5cc;
        *(float *)(local_548 + (uint)bVar15 * -8 + 0x94) = afStack_628[(uint)bVar15 * -2 + 0x18];
        *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x98) =
             afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
        local_6c = (1.0 - this_ptr->scrape_points[iVar13].raytrace_intersection) *
                   (float)_DAT_005f1318;
        local_2d8.scrape_points[4].raytrace_normal.y = (float)local_548._144_4_ * local_6c;
        local_2d8.scrape_points[4].raytrace_normal.z = (float)local_548._148_4_ * local_6c;
        local_2d8.scrape_points[5].local_position.x = (float)local_548._152_4_ * local_6c;
        local_5f0 = (float)local_548._144_4_ * local_6c;
        afStack_628[(uint)bVar15 * -2 + 0xf] =
             *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x1b4);
        afStack_628[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
             *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x1b8);
        local_68 = SQRT(local_5e8 * local_5e8 + local_5f0 * local_5f0 + local_5ec * local_5ec);
        if (local_78 < local_68) {
          local_30 = local_3c;
          local_78 = local_68;
          if (&local_2d8.scrape_points[0].previous_position != (CVector3f *)(afStack_628 + 0xe)) {
            local_2d8.scrape_points[0].previous_position.x = local_5f0;
            local_2d8.scrape_points[0].previous_position.y = local_5ec;
            local_2d8.scrape_points[0].previous_position.z = local_5e8;
          }
        }
        iVar7 = iVar7 + 4;
      } while (iVar7 < local_40);
    }
    (this_ptr->position).x = (this_ptr->position).x + local_2d8.scrape_points[0].previous_position.x
    ;
    (this_ptr->position).y = (this_ptr->position).y + local_2d8.scrape_points[0].previous_position.y
    ;
    (this_ptr->position).z = (this_ptr->position).z + local_2d8.scrape_points[0].previous_position.z
    ;
    core_dirmat_cpp_FUN_004495a0(&this_ptr->rotation_matrix,&local_58[local_30].raytrace_normal);
    local_308 = local_2d8.scrape_points[2].transformed_position.y;
    local_34c[(uint)bVar15 * -2 + 0x12] = *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x130);
    local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
         *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x134);
    local_74 = (local_300 * (this_ptr->linear_velocity_local).z +
               local_308 * (this_ptr->linear_velocity_local).x +
               local_304 * (this_ptr->linear_velocity_local).y) * _DAT_005f1308;
    local_548._264_4_ = local_308 * local_74;
    local_548._268_4_ = local_304 * local_74;
    local_548._272_4_ = local_300 * local_74;
    local_548._240_4_ = local_308 * local_74;
    *(uint *)(local_548 + (uint)bVar15 * -8 + 0xf4) =
         *(uint *)(local_548 + (uint)bVar15 * -8 + 0x10c);
    *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xf8) =
         *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x110);
    local_548._288_4_ = (float)local_548._240_4_ - (this_ptr->linear_velocity_local).x;
    local_548._292_4_ = (float)local_548._244_4_ - (this_ptr->linear_velocity_local).y;
    local_548._296_4_ = (float)local_548._248_4_ - (this_ptr->linear_velocity_local).z;
    local_2d8.scrape_points[5].local_position.y = (float)local_548._288_4_;
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x1c0) =
         *(uint *)(local_548 + (uint)bVar15 * -8 + 0x124);
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x1c4) =
         *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x128);
    if (&local_2d8.scrape_points[2].local_position.y != &local_2d8.scrape_points[5].local_position.y
       ) {
      local_2d8.scrape_points[2].local_position.y = local_2d8.scrape_points[5].local_position.y;
      local_2d8.scrape_points[2].local_position.z = local_2d8.scrape_points[5].local_position.z;
      local_2d8.scrape_points[2].transformed_position.x =
           local_2d8.scrape_points[5].transformed_position.x;
    }
    local_2d8.scrape_points[2].local_position.y =
         local_2d8.scrape_points[2].local_position.y * _DAT_005f130c * _DAT_005f1324;
    local_2d8.scrape_points[2].local_position.z =
         local_2d8.scrape_points[2].local_position.z * _DAT_005f130c * _DAT_005f1324;
    local_2d8.scrape_points[2].transformed_position.x =
         local_2d8.scrape_points[2].transformed_position.x * _DAT_005f130c * _DAT_005f1324;
    fVar1 = 1.0 / delta_time;
    local_2d8.angular_velocity.z =
         local_2d8.scrape_points[2].local_position.y - (this_ptr->linear_velocity_local).x;
    local_2d8.angular_velocity_temp.x =
         local_2d8.scrape_points[2].local_position.z - (this_ptr->linear_velocity_local).y;
    local_2d8.angular_velocity_temp.y =
         local_2d8.scrape_points[2].transformed_position.x - (this_ptr->linear_velocity_local).z;
    local_2d8.angular_momentum.z = local_2d8.angular_velocity.z;
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x94) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x7c);
    *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x98) =
         *(uint *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x80);
    pfVar10 = &this_ptr->mass;
    local_3b0 = local_2d8.angular_momentum.z * *pfVar10;
    local_3ac = local_2d8.mass * *pfVar10;
    local_3a8 = local_2d8.moment_of_inertia.x * *pfVar10;
    local_2d8.scrape_points[5].raytrace_normal.x = local_2d8.angular_momentum.z * *pfVar10;
    *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + 0x1e4) = afStack_3d0[(uint)bVar15 * -2 + 9];
    *(float *)((int)&local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x1e8) =
         afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    local_38c = local_2d8.scrape_points[5].raytrace_normal.x * fVar1;
    local_388 = local_2d8.scrape_points[5].raytrace_normal.y * fVar1;
    local_384 = local_2d8.scrape_points[5].raytrace_normal.z * fVar1;
    local_548._336_4_ = local_2d8.scrape_points[5].raytrace_normal.x * fVar1;
    *(float *)(local_548 + (uint)bVar15 * -8 + 0x154) = afStack_3d0[(uint)bVar15 * -2 + 0x12];
    *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x158) =
         afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
    (this_ptr->linear_momentum).x = (this_ptr->linear_momentum).x + (float)local_548._336_4_;
    (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).y + (float)local_548._340_4_;
    (this_ptr->linear_momentum).z = (this_ptr->linear_momentum).z + (float)local_548._344_4_;
    (this_ptr->angular_velocity).z = 0.0;
    (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
    (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
  }
  if ((0 < local_7c) &&
     (fVar1 = (this_ptr->linear_velocity_local).y, fVar2 = (this_ptr->linear_velocity_local).x,
     fVar3 = (this_ptr->linear_velocity_local).z,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 1.0)) {
    iVar7 = 0;
    iVar13 = 0;
    pCVar8 = this_ptr;
    if (0 < this_ptr->scrape_point_count) {
      do {
        if (ABS(pCVar8->scrape_points[0].transformed_position.y - this_ptr[1].position.x) <
            (float)_DAT_005f1338) {
          iVar13 = iVar13 + 1;
        }
        iVar7 = iVar7 + 1;
        pCVar8 = (CBox *)&(pCVar8->rotation_matrix).m[2].y;
      } while (iVar7 < this_ptr->scrape_point_count);
    }
    if (this_ptr->scrape_point_count / 2 <= iVar13) {
      this_ptr->is_valid = 0;
      return;
    }
  }
  return;
}
