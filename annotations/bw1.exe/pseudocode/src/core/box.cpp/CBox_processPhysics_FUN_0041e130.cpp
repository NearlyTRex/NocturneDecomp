// Name: core_box.cpp_CBox_processPhysics_FUN_0041e130
// Address: 0041e130
// Address Range: [[0041e130, 0042013a]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041e130(CBox *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041e130(CBox *this_ptr,float delta_time)

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
  CVector3f local_62c;
  float local_620;
  float local_61c [4];
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
  CVector3f local_5a8;
  float local_59c;
  float local_598 [4];
  float local_588;
  float local_584;
  float local_580;
  float local_57c;
  CVector3f local_578;
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
  CVector3f local_398;
  float local_38c;
  float local_388 [4];
  float local_378;
  CVector3f local_374;
  float local_368;
  float local_364 [2];
  CVector3f local_35c;
  float local_350;
  float local_34c [2];
  CVector3f local_344;
  float local_338;
  float local_334 [4];
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  CVector3f local_314;
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
  byte local_2d8 [64];
  float afStack_298 [4];
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  CVector3f local_278;
  float local_26c;
  float local_268 [4];
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  CVector3f local_200;
  CVector3f local_1f4;
  float local_1e8;
  float local_1e4 [4];
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  CVector3f local_1ac;
  float local_1a0;
  float local_19c [2];
  CVector3f local_194;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178 [2];
  CVector3f local_170;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4 [2];
  CVector3f local_ec;
  float local_e0;
  float local_dc [4];
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
  CMatrix3x3f *local_a0;
  float local_9c;
  SScrape *local_98;
  float local_90;
  float local_8c;
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
  if ((CBox *)local_2d8 != this_ptr) {
    local_2d8._0_4_ = (this_ptr->position).x;
    local_2d8._4_4_ = (this_ptr->position).y;
    local_2d8._8_4_ = (this_ptr->position).z;
  }
  local_548._4_4_ = (float)local_548._4_4_ + 1.0;
  local_2d8._4_4_ = (float)local_2d8._4_4_ + _DAT_005d4aa8;
  local_2c = (SScrape *)
             core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_0048b150
                       (&g_CDemonRaytraceInstance,(CVector3f *)local_548,(CVector3f *)local_2d8,
                        &local_578,(int *)0x0);
  if (((float)local_2c <= 0.0) || (1.0 <= (float)local_2c)) {
    this_ptr[1].position.x = -9999.0;
  }
  else {
    this_ptr[1].position.x =
         ((float)local_2d8._4_4_ - (float)local_548._4_4_) * (float)local_2c +
         (float)local_548._4_4_;
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
  local_5a8.z = 0.0;
  local_5a8.x = 0.0;
  local_5a8.y = -this_ptr->mass * (float)_DAT_005d4ab0;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
            (&this_ptr->rotation_matrix,&local_5a8,(CVector3f *)(local_2d8 + 0x3c));
  pCVar5 = &this_ptr->linear_momentum;
  local_548._300_4_ = local_2d8._60_4_;
  *(float *)(local_548 + (uint)bVar15 * -8 + 0x130) = afStack_298[(uint)bVar15 * -2];
  *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x134) =
       afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
  pCVar5->x = pCVar5->x + (float)local_548._300_4_;
  (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).y + (float)local_548._304_4_;
  (this_ptr->linear_momentum).z = (this_ptr->linear_momentum).z + (float)local_548._308_4_;
  fVar1 = 1.0 / this_ptr->mass;
  local_26c = pCVar5->x * fVar1;
  local_268[0] = (this_ptr->linear_momentum).y * fVar1;
  local_268[1] = fVar1 * (this_ptr->linear_momentum).z;
  local_56c = local_26c;
  local_568[(uint)bVar15 * -2] = local_268[(uint)bVar15 * -2];
  local_568[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       local_268[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
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
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
            ((CMatrix3x3f *)local_2c,&this_ptr->linear_velocity_temp,&local_ec);
  local_224 = local_ec.x;
  local_268[(uint)bVar15 * -2 + 0x12] = *(float *)((int)&local_ec + (uint)bVar15 * -8 + 4);
  pSVar6 = local_2c;
  local_268[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
       *(float *)((int)&local_ec + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
  pCVar5 = &this_ptr->linear_velocity;
  local_1e4[2] = local_224 * delta_time;
  local_1e4[3] = local_220 * delta_time;
  local_1d4 = local_21c * delta_time;
  local_548._96_4_ = local_224 * delta_time;
  *(float *)(local_548 + (uint)bVar15 * -8 + 100) = local_1e4[(uint)bVar15 * -2 + 3];
  pCVar9 = pCVar5;
  *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x68) =
       local_1e4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
  pCVar5->x = pCVar5->x + (float)local_548._96_4_;
  (this_ptr->linear_velocity).y = (this_ptr->linear_velocity).y + (float)local_548._100_4_;
  (this_ptr->linear_velocity).z = (this_ptr->linear_velocity).z + (float)local_548._104_4_;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
            ((CMatrix3x3f *)pSVar6,pCVar9,&local_344);
  local_548._120_4_ = local_344.x;
  *(uint *)(local_548 + (uint)bVar15 * -8 + 0x7c) =
       *(uint *)((int)&local_344 + (uint)bVar15 * -8 + 4);
  *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x80) =
       *(uint *)((int)&local_344 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
  if (&this_ptr->linear_velocity_local != (CVector3f *)(local_548 + 0x78)) {
    (this_ptr->linear_velocity_local).x = (float)local_548._120_4_;
    (this_ptr->linear_velocity_local).y = (float)local_548._124_4_;
    (this_ptr->linear_velocity_local).z = (float)local_548._128_4_;
  }
  local_dc[2] = (this_ptr->angular_velocity_temp).x * delta_time;
  local_dc[3] = (this_ptr->angular_velocity_temp).y * delta_time;
  pCVar5 = &this_ptr->angular_velocity;
  local_cc = delta_time * (this_ptr->angular_velocity_temp).z;
  local_548._192_4_ = local_dc[2];
  *(float *)(local_548 + (uint)bVar15 * -8 + 0xc4) = local_dc[(uint)bVar15 * -2 + 3];
  *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 200) =
       local_dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
  pCVar5->x = pCVar5->x + (float)local_548._192_4_;
  fVar1 = (this_ptr->angular_velocity).y + (float)local_548._196_4_;
  (this_ptr->angular_velocity).y = fVar1;
  fVar2 = (this_ptr->angular_velocity).z + (float)local_548._200_4_;
  (this_ptr->angular_velocity).z = fVar2;
  local_18 = SQRT(fVar2 * (this_ptr->angular_velocity).z +
                  pCVar5->x * pCVar5->x + fVar1 * (this_ptr->angular_velocity).y);
  if (_DAT_005d4ab8 < local_18) {
    local_9c = _DAT_005d4ab8 / local_18;
    pCVar5->x = pCVar5->x * local_9c;
    (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).y * local_9c;
    (this_ptr->angular_velocity).z = (this_ptr->angular_velocity).z * local_9c;
  }
  local_110 = (this_ptr->linear_velocity).x * delta_time;
  local_10c = (this_ptr->linear_velocity).y * delta_time;
  local_108 = (this_ptr->linear_velocity).z * delta_time;
  local_548._204_4_ = local_110;
  *(float *)(local_548 + (uint)bVar15 * -8 + 0xd0) = local_178[(uint)bVar15 * -2 + 0x1b];
  *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xd4) =
       local_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c];
  (this_ptr->position).x = (this_ptr->position).x + (float)local_548._204_4_;
  (this_ptr->position).y = (this_ptr->position).y + (float)local_548._208_4_;
  (this_ptr->position).z = (this_ptr->position).z + (float)local_548._212_4_;
  local_5b4 = (this_ptr->angular_velocity).x * delta_time;
  local_5b0 = (this_ptr->angular_velocity).y * delta_time;
  pCVar5 = (CVector3f *)(local_548 + 0x174);
  pCVar14 = &local_674;
  local_5ac = delta_time * (this_ptr->angular_velocity).z;
  local_548._372_4_ = local_5b4;
  afStack_3d0[(uint)bVar15 * -2] = local_61c[(uint)bVar15 * -2 + 0x1b];
  afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       local_61c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c];
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(pCVar14,pCVar5);
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
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045f840(&this_ptr->rotation_matrix,&local_200);
  local_338 = local_200.x;
  local_334[(uint)bVar15 * -2] = *(float *)((int)&local_200 + (uint)bVar15 * -8 + 4);
  local_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       *(float *)((int)&local_200 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
  if (&this_ptr->orientation != (CVector3f *)&local_338) {
    (this_ptr->orientation).x = local_338;
    (this_ptr->orientation).y = local_334[0];
    (this_ptr->orientation).z = local_334[1];
  }
  local_34 = 0;
  if (0 < this_ptr->scrape_point_count) {
    local_98 = this_ptr->scrape_points;
    local_a0 = &this_ptr->rotation_matrix;
    local_54 = &this_ptr->scrape_points[0].transformed_position;
    do {
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
                (local_a0,&local_98[local_34].local_position,(CVector3f *)(local_548 + 0xe4));
      local_1d0 = (float)local_548._228_4_;
      local_1e4[(uint)bVar15 * -2 + 6] = *(float *)(local_548 + (uint)bVar15 * -8 + 0xe8);
      local_1e4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
           *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xec);
      local_14c = (this_ptr->position).x + local_1d0;
      local_148 = (this_ptr->position).y + local_1cc;
      local_144 = (this_ptr->position).z + local_1c8;
      local_1a0 = local_14c;
      local_19c[(uint)bVar15 * -2] = local_178[(uint)bVar15 * -2 + 0xc];
      local_19c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           local_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
      if ((CVector3f *)&local_1a0 != local_54) {
        local_54->x = local_1a0;
        local_54->y = local_19c[0];
        local_54->z = local_19c[1];
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
        local_388[2] = local_4c->x - local_50->x;
        local_388[3] = local_4c->y - local_50->y;
        local_378 = local_4c->z - local_50->z;
        local_23c = local_388[2];
        local_268[(uint)bVar15 * -2 + 0xc] = local_388[(uint)bVar15 * -2 + 3];
        local_268[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
             local_388[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        if ((float)_DAT_005d4ae8 <
            SQRT(local_234 * local_234 + local_23c * local_23c + local_238 * local_238)) {
          local_2c = (SScrape *)
                     core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_0048b150
                               (&g_CDemonRaytraceInstance,local_50,local_4c,
                                &local_44->raytrace_normal,(int *)0x0);
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
             this_ptr[1].position.x + (float)_DAT_005d4af0;
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
      local_50 = (CVector3f *)&local_50[4].y;
      local_4c = (CVector3f *)&local_4c[4].y;
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
    local_2d8._48_4_ = local_584;
    *(float *)(local_2d8 + (uint)bVar15 * -8 + 0x34) = local_598[(uint)bVar15 * -2 + 6];
    iVar13 = local_20;
    *(float *)(local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x38) =
         local_598[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    local_60 = (1.0 - this_ptr->scrape_points[iVar7].raytrace_intersection) * (float)_DAT_005d4ac0;
    local_254 = (float)local_2d8._48_4_ * local_60;
    local_250 = (float)local_2d8._52_4_ * local_60;
    local_24c = (float)local_2d8._56_4_ * local_60;
    local_b0 = (float)local_2d8._48_4_ * local_60;
    local_dc[(uint)bVar15 * -2 + 0xc] = local_268[(uint)bVar15 * -2 + 6];
    local_dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
         local_268[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    (this_ptr->position).x = (this_ptr->position).x - local_b0;
    (this_ptr->position).y = (this_ptr->position).y - local_ac;
    (this_ptr->position).z = (this_ptr->position).z - local_a8;
    core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
              (&this_ptr->rotation_matrix,&local_5c[iVar13].raytrace_normal,&local_1f4);
    local_548._12_4_ = local_1f4.x;
    *(uint *)(local_548 + (uint)bVar15 * -8 + 0x10) =
         *(uint *)((int)&local_1f4 + (uint)bVar15 * -8 + 4);
    *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x14) =
         *(uint *)((int)&local_1f4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    local_8c = ((float)local_548._20_4_ * (this_ptr->linear_velocity_local).z +
               (float)local_548._12_4_ * (this_ptr->linear_velocity_local).x +
               (float)local_548._16_4_ * (this_ptr->linear_velocity_local).y) * _DAT_005d4ac8;
    local_bc = (float)local_548._12_4_ * local_8c;
    local_b8 = (float)local_548._16_4_ * local_8c;
    local_b4 = (float)local_548._20_4_ * local_8c;
    local_1e8 = (float)local_548._12_4_ * local_8c;
    local_1e4[(uint)bVar15 * -2] = local_dc[(uint)bVar15 * -2 + 9];
    local_1e4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         local_dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    local_164 = local_1e8 - (this_ptr->linear_velocity_local).x;
    local_160 = local_1e4[0] - (this_ptr->linear_velocity_local).y;
    local_15c = local_1e4[1] - (this_ptr->linear_velocity_local).z;
    local_1c4 = local_164;
    local_1e4[(uint)bVar15 * -2 + 9] = local_178[(uint)bVar15 * -2 + 6];
    local_1e4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         local_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    if ((float *)(local_548 + 0x3c) != local_1e4 + 8) {
      local_548._60_4_ = local_1c4;
      local_548._64_4_ = local_1c0;
      local_548._68_4_ = local_1bc;
    }
    local_548._60_4_ = (float)local_548._60_4_ * _DAT_005d4acc * _DAT_005d4ad0;
    local_548._64_4_ = (float)local_548._64_4_ * _DAT_005d4acc * _DAT_005d4ad0;
    local_548._68_4_ = (float)local_548._68_4_ * _DAT_005d4acc * _DAT_005d4ad0;
    fVar1 = 1.0 / delta_time;
    local_548._312_4_ = (float)local_548._60_4_ - (this_ptr->linear_velocity_local).x;
    local_548._316_4_ = (float)local_548._64_4_ - (this_ptr->linear_velocity_local).y;
    local_548._320_4_ = (float)local_548._68_4_ - (this_ptr->linear_velocity_local).z;
    local_158 = (float)local_548._312_4_;
    local_178[(uint)bVar15 * -2 + 9] = *(float *)(local_548 + (uint)bVar15 * -8 + 0x13c);
    local_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x140);
    pfVar10 = &this_ptr->mass;
    local_548._348_4_ = local_158 * *pfVar10;
    local_548._352_4_ = local_154 * *pfVar10;
    local_548._356_4_ = local_150 * *pfVar10;
    local_61c[2] = local_158 * *pfVar10;
    local_61c[(uint)bVar15 * -2 + 3] = *(float *)(local_548 + (uint)bVar15 * -8 + 0x160);
    local_61c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x164);
    local_3bc = local_61c[2] * fVar1;
    local_3b8 = local_61c[3] * fVar1;
    local_3b4 = local_60c * fVar1;
    local_548._216_4_ = local_61c[2] * fVar1;
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
    *(float *)(local_548 + (uint)bVar15 * -8 + 0x148) = local_61c[(uint)bVar15 * -2 + 9];
    *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x14c) =
         local_61c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    local_2d8._12_4_ = (float)local_548._324_4_ * _DAT_005d4ad4;
    local_2d8._16_4_ = (float)local_548._328_4_ * _DAT_005d4ad4;
    local_2d8._20_4_ = (float)local_548._332_4_ * _DAT_005d4ad4;
    local_548._24_4_ = (float)local_548._324_4_ * _DAT_005d4ad4;
    *(uint *)(local_548 + (uint)bVar15 * -8 + 0x1c) =
         *(uint *)(local_2d8 + (uint)bVar15 * -8 + 0x10);
    *(uint *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x20) =
         *(uint *)(local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x14);
    (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).x + (float)local_548._24_4_;
    (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + (float)local_548._28_4_;
    (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + (float)local_548._32_4_;
    pfVar10 = (float *)((int)(this_ptr->scrape_points + iVar7) + ((uint)bVar15 * -2 + 1) * 4);
    local_c8 = this_ptr->scrape_points[iVar7].local_position.x;
    local_dc[(uint)bVar15 * -2 + 6] = *pfVar10;
    local_dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] = pfVar10[(uint)bVar15 * -2 + 1];
    local_35c.x = 0.0;
    local_35c.z = 0.0;
    local_35c.y = this_ptr->mass * (float)_DAT_005d4ab0;
    core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
              (&this_ptr->rotation_matrix,&local_35c,&local_278);
    local_314.x = local_278.x;
    local_334[(uint)bVar15 * -2 + 9] = *(float *)((int)&local_278 + (uint)bVar15 * -8 + 4);
    local_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         *(float *)((int)&local_278 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    if (&local_35c != (CVector3f *)(local_334 + 8)) {
      local_35c.x = local_314.x;
      local_35c.y = local_314.y;
      local_35c.z = local_314.z;
    }
    local_568[2] = local_c4 * local_35c.z - local_c0 * local_35c.y;
    local_568[3] = local_c0 * local_35c.x - local_c8 * local_35c.z;
    local_558 = local_c8 * local_35c.y - local_c4 * local_35c.x;
    local_608 = local_568[2];
    local_61c[(uint)bVar15 * -2 + 6] = local_568[(uint)bVar15 * -2 + 3];
    local_61c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
         local_568[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).x + local_608;
    (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_604;
    (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_600;
  }
  if (local_7c != 2) goto LAB_0041fa13;
  local_1c = aiStack_650[1];
  local_2c = (SScrape *)(aiStack_650[1] * 0x34);
  local_334[2] = this_ptr->scrape_points[aiStack_650[1]].transformed_position.x -
                 this_ptr->scrape_points[aiStack_650[1]].previous_position.x;
  local_334[3] = this_ptr->scrape_points[aiStack_650[1]].transformed_position.y -
                 this_ptr->scrape_points[aiStack_650[1]].previous_position.y;
  local_324 = this_ptr->scrape_points[aiStack_650[1]].transformed_position.z -
              this_ptr->scrape_points[aiStack_650[1]].previous_position.z;
  local_548._168_4_ = local_334[2];
  *(float *)(local_548 + (uint)bVar15 * -8 + 0xac) = local_334[(uint)bVar15 * -2 + 3];
  *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xb0) =
       local_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
  local_14 = (1.0 - this_ptr->scrape_points[aiStack_650[1]].raytrace_intersection) *
             (float)_DAT_005d4ad8;
  local_28 = aiStack_650[2];
  local_2f0 = (float)local_548._168_4_ * local_14;
  local_2ec = (float)local_548._172_4_ * local_14;
  local_2e8 = (float)local_548._176_4_ * local_14;
  local_350 = (float)local_548._168_4_ * local_14;
  local_34c[(uint)bVar15 * -2] = local_334[(uint)bVar15 * -2 + 0x12];
  local_34c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       local_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
  fVar1 = local_34c[0] * local_34c[0];
  fVar3 = local_350 * local_350;
  local_2c = (SScrape *)(aiStack_650[2] * 0x34);
  fVar2 = local_34c[1] * local_34c[1];
  afStack_298[2] =
       this_ptr->scrape_points[aiStack_650[2]].transformed_position.x -
       this_ptr->scrape_points[aiStack_650[2]].previous_position.x;
  afStack_298[3] =
       this_ptr->scrape_points[aiStack_650[2]].transformed_position.y -
       this_ptr->scrape_points[aiStack_650[2]].previous_position.y;
  local_288 = this_ptr->scrape_points[aiStack_650[2]].transformed_position.z -
              this_ptr->scrape_points[aiStack_650[2]].previous_position.z;
  local_2e4 = afStack_298[2];
  local_334[(uint)bVar15 * -2 + 0x15] = afStack_298[(uint)bVar15 * -2 + 3];
  local_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
       afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
  local_70 = (1.0 - this_ptr->scrape_points[aiStack_650[2]].raytrace_intersection) *
             (float)_DAT_005d4ad8;
  local_230 = local_2e4 * local_70;
  local_22c = local_2e0 * local_70;
  local_228 = local_2dc * local_70;
  local_2fc = local_2e4 * local_70;
  local_334[(uint)bVar15 * -2 + 0xf] = local_268[(uint)bVar15 * -2 + 0xf];
  local_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
       local_268[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
  if (SQRT(fVar2 + fVar3 + fVar1) <=
      SQRT(local_2f4 * local_2f4 + local_2fc * local_2fc + local_2f8 * local_2f8)) {
    (this_ptr->position).x = (this_ptr->position).x + local_2fc;
    (this_ptr->position).y = (this_ptr->position).y + local_2f8;
    (this_ptr->position).z = (this_ptr->position).z + local_2f4;
    core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
              (&this_ptr->rotation_matrix,&this_ptr->scrape_points[local_28].raytrace_normal,
               &local_398);
    local_620 = local_398.x;
    local_61c[(uint)bVar15 * -2] = *(float *)((int)&local_398 + (uint)bVar15 * -8 + 4);
    local_61c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         *(float *)((int)&local_398 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    if (&local_188 != &local_620) {
      local_188 = local_620;
      local_184 = local_61c[0];
      local_2d8._32_4_ = local_61c[1];
      goto LAB_0041f2db;
    }
  }
  else {
    (this_ptr->position).x = (this_ptr->position).x + local_350;
    (this_ptr->position).y = (this_ptr->position).y + local_34c[0];
    (this_ptr->position).z = (this_ptr->position).z + local_34c[1];
    core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
              (&this_ptr->rotation_matrix,&this_ptr->scrape_points[local_1c].raytrace_normal,
               &local_62c);
    local_2d8._24_4_ = local_62c.x;
    *(uint *)(local_2d8 + (uint)bVar15 * -8 + 0x1c) =
         *(uint *)((int)&local_62c + (uint)bVar15 * -8 + 4);
    *(uint *)(local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x20) =
         *(uint *)((int)&local_62c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    if (&local_188 != (float *)(local_2d8 + 0x18)) {
      local_188 = (float)local_2d8._24_4_;
      local_184 = (float)local_2d8._28_4_;
LAB_0041f2db:
      local_180 = (float)local_2d8._32_4_;
    }
  }
  local_90 = (local_180 * (this_ptr->linear_velocity_local).z +
             local_188 * (this_ptr->linear_velocity_local).x +
             local_184 * (this_ptr->linear_velocity_local).y) * _DAT_005d4ac8;
  local_548._156_4_ = local_188 * local_90;
  local_548._160_4_ = local_184 * local_90;
  local_548._164_4_ = local_180 * local_90;
  local_17c = local_188 * local_90;
  local_178[(uint)bVar15 * -2] = *(float *)(local_548 + (uint)bVar15 * -8 + 0xa0);
  local_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0xa4);
  local_e0 = local_17c - (this_ptr->linear_velocity_local).x;
  local_dc[0] = local_178[0] - (this_ptr->linear_velocity_local).y;
  local_dc[1] = local_178[1] - (this_ptr->linear_velocity_local).z;
  local_548._72_4_ = local_e0;
  *(float *)(local_548 + (uint)bVar15 * -8 + 0x4c) = local_dc[(uint)bVar15 * -2];
  *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x50) =
       local_dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
  if (local_178 + 0x1d != (float *)(local_548 + 0x48)) {
    local_104 = (float)local_548._72_4_;
    local_100 = (float)local_548._76_4_;
    local_fc = (float)local_548._80_4_;
  }
  local_104 = local_104 * _DAT_005d4acc * _DAT_005d4ae0;
  local_100 = local_100 * _DAT_005d4acc * _DAT_005d4ae0;
  local_fc = local_fc * _DAT_005d4acc * _DAT_005d4ae0;
  fVar1 = 1.0 / delta_time;
  local_548._276_4_ = local_104 - (this_ptr->linear_velocity_local).x;
  local_548._280_4_ = local_100 - (this_ptr->linear_velocity_local).y;
  local_548._284_4_ = local_fc - (this_ptr->linear_velocity_local).z;
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
  local_61c[(uint)bVar15 * -2 + 0xf] = local_568[(uint)bVar15 * -2 + 6];
  iVar7 = local_28;
  local_61c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
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
  local_61c[(uint)bVar15 * -2 + 0x18] = *(float *)(local_548 + (uint)bVar15 * -8 + 0x58);
  local_61c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
       *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x5c);
  pCVar5 = &this_ptr->angular_momentum;
  local_548._180_4_ = local_5c0 * _DAT_005d4ad4;
  local_548._184_4_ = local_5bc * _DAT_005d4ad4;
  local_548._188_4_ = local_5b8 * _DAT_005d4ad4;
  local_548._48_4_ = local_5c0 * _DAT_005d4ad4;
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
  local_140 = (float)local_548._252_4_;
  local_178[(uint)bVar15 * -2 + 0xf] = *(float *)(local_548 + (uint)bVar15 * -8 + 0x100);
  local_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
       *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x104);
  local_548._360_4_ = local_140 * _DAT_005d4ad4;
  local_548._364_4_ = local_13c * _DAT_005d4ad4;
  local_548._368_4_ = local_138 * _DAT_005d4ad4;
  local_218 = local_140 * _DAT_005d4ad4;
  local_268[(uint)bVar15 * -2 + 0x15] = *(float *)(local_548 + (uint)bVar15 * -8 + 0x16c);
  local_268[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
       *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x170);
  pCVar5->x = pCVar5->x + local_218;
  (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_214;
  (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_210;
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
  local_194.x = 0.0;
  local_194.z = 0.0;
  local_194.y = this_ptr->mass * (float)_DAT_005d4ab0;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
            (&this_ptr->rotation_matrix,&local_194,&local_374);
  fVar1 = _DAT_005d4ad0;
  local_170.x = local_374.x;
  local_178[(uint)bVar15 * -2 + 3] = *(float *)((int)&local_374 + (uint)bVar15 * -8 + 4);
  local_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
       *(float *)((int)&local_374 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
  if (&local_194 != (CVector3f *)(local_178 + 2)) {
    local_194.x = local_170.x;
    local_194.y = local_170.y;
    local_194.z = local_170.z;
  }
  local_368 = local_194.x * _DAT_005d4ad0;
  local_364[0] = local_194.y * _DAT_005d4ad0;
  local_364[1] = local_194.z * _DAT_005d4ad0;
  local_134 = local_194.x * _DAT_005d4ad0;
  local_178[(uint)bVar15 * -2 + 0x12] = local_364[(uint)bVar15 * -2];
  local_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
       local_364[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
  pCVar5 = &this_ptr->angular_momentum;
  local_320 = (float)local_548._112_4_ * local_12c - (float)local_548._116_4_ * local_130;
  local_31c = (float)local_548._116_4_ * local_134 - (float)local_548._108_4_ * local_12c;
  local_318 = (float)local_548._108_4_ * local_130 - (float)local_548._112_4_ * local_134;
  local_5d8 = local_320;
  local_61c[(uint)bVar15 * -2 + 0x12] = local_334[(uint)bVar15 * -2 + 6];
  local_61c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
       local_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
  pCVar5->x = pCVar5->x + local_5d8;
  (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_5d4;
  (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_5d0;
  local_2d8._36_4_ = local_194.x * fVar1;
  local_2d8._40_4_ = local_194.y * fVar1;
  local_2d8._44_4_ = local_194.z * fVar1;
  afStack_3d0[2] = local_194.x * fVar1;
  afStack_3d0[(uint)bVar15 * -2 + 3] = *(float *)(local_2d8 + (uint)bVar15 * -8 + 0x28);
  afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
       *(float *)(local_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x2c);
  local_284 = (float)local_548._136_4_ * local_3c0 - (float)local_548._140_4_ * afStack_3d0[3];
  local_280 = (float)local_548._140_4_ * afStack_3d0[2] - (float)local_548._132_4_ * local_3c0;
  local_27c = (float)local_548._132_4_ * afStack_3d0[3] - (float)local_548._136_4_ * afStack_3d0[2];
  local_3a4 = local_284;
  afStack_3d0[(uint)bVar15 * -2 + 0xc] = afStack_298[(uint)bVar15 * -2 + 6];
  afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
       afStack_298[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
  pCVar5->x = pCVar5->x + local_3a4;
  (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).y + local_3a0;
  (this_ptr->angular_momentum).z = (this_ptr->angular_momentum).z + local_39c;
LAB_0041fa13:
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
        *(float *)(local_548 + (uint)bVar15 * -8 + 0x94) = local_61c[(uint)bVar15 * -2 + 0x15];
        *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x98) =
             local_61c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
        local_6c = (1.0 - this_ptr->scrape_points[iVar13].raytrace_intersection) *
                   (float)_DAT_005d4ad8;
        local_128 = (float)local_548._144_4_ * local_6c;
        local_124 = (float)local_548._148_4_ * local_6c;
        local_120 = (float)local_548._152_4_ * local_6c;
        local_5f0 = (float)local_548._144_4_ * local_6c;
        local_61c[(uint)bVar15 * -2 + 0xc] = local_178[(uint)bVar15 * -2 + 0x15];
        local_61c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
             local_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
        local_68 = SQRT(local_5e8 * local_5e8 + local_5f0 * local_5f0 + local_5ec * local_5ec);
        if (local_78 < local_68) {
          local_30 = local_3c;
          local_78 = local_68;
          if (local_268 + 0x17 != local_61c + 0xb) {
            local_20c = local_5f0;
            local_208 = local_5ec;
            local_204 = local_5e8;
          }
        }
        iVar7 = iVar7 + 4;
      } while (iVar7 < local_40);
    }
    (this_ptr->position).x = (this_ptr->position).x + local_20c;
    (this_ptr->position).y = (this_ptr->position).y + local_208;
    (this_ptr->position).z = (this_ptr->position).z + local_204;
    core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
              (&this_ptr->rotation_matrix,&local_58[local_30].raytrace_normal,&local_1ac);
    local_308 = local_1ac.x;
    local_334[(uint)bVar15 * -2 + 0xc] = *(float *)((int)&local_1ac + (uint)bVar15 * -8 + 4);
    local_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
         *(float *)((int)&local_1ac + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    local_74 = (local_300 * (this_ptr->linear_velocity_local).z +
               local_308 * (this_ptr->linear_velocity_local).x +
               local_304 * (this_ptr->linear_velocity_local).y) * _DAT_005d4ac8;
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
    local_11c = (float)local_548._288_4_;
    local_178[(uint)bVar15 * -2 + 0x18] = *(float *)(local_548 + (uint)bVar15 * -8 + 0x124);
    local_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
         *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x128);
    if (local_1e4 + 0xb != local_178 + 0x17) {
      local_1b8 = local_11c;
      local_1b4 = local_118;
      local_1b0 = local_114;
    }
    local_1b8 = local_1b8 * _DAT_005d4acc * _DAT_005d4ae4;
    local_1b4 = local_1b4 * _DAT_005d4acc * _DAT_005d4ae4;
    local_1b0 = local_1b0 * _DAT_005d4acc * _DAT_005d4ae4;
    fVar1 = 1.0 / delta_time;
    local_268[2] = local_1b8 - (this_ptr->linear_velocity_local).x;
    local_268[3] = local_1b4 - (this_ptr->linear_velocity_local).y;
    local_258 = local_1b0 - (this_ptr->linear_velocity_local).z;
    local_248 = local_268[2];
    local_268[(uint)bVar15 * -2 + 9] = local_268[(uint)bVar15 * -2 + 3];
    local_268[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         local_268[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    pfVar10 = &this_ptr->mass;
    local_3b0 = local_248 * *pfVar10;
    local_3ac = local_244 * *pfVar10;
    local_3a8 = local_240 * *pfVar10;
    local_f8 = local_248 * *pfVar10;
    local_f4[(uint)bVar15 * -2] = afStack_3d0[(uint)bVar15 * -2 + 9];
    local_f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_3d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    local_38c = local_f8 * fVar1;
    local_388[0] = local_f4[0] * fVar1;
    local_388[1] = local_f4[1] * fVar1;
    local_548._336_4_ = local_f8 * fVar1;
    *(float *)(local_548 + (uint)bVar15 * -8 + 0x154) = local_388[(uint)bVar15 * -2];
    *(float *)(local_548 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 0x158) =
         local_388[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
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
            (float)_DAT_005d4af8) {
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
