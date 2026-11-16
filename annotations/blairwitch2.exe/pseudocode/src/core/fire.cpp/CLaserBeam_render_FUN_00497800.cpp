// Name: core_fire.cpp_CLaserBeam_render_FUN_00497800
// Address: 00497800
// Address Range: [[00497800, 00498c2e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLaserBeam_render_FUN_00497800(CLaserBeam *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_00497800(CLaserBeam *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonRenderer *pCVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float afStackY_1274 [941];
  CVector3f *pCVar13;
  float local_394;
  float local_390;
  float local_384;
  float local_380;
  byte local_37c [72];
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  float local_30c;
  int local_308;
  uint local_304;
  float local_300;
  int local_2fc;
  uint local_2f8;
  uint local_2f4;
  int local_2f0;
  SMRGLHeaderPrimitive local_2ec;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  CMatrix3x3f local_2c0;
  CVector3i local_298;
  CVector3f local_28c;
  CVector3i local_280;
  float local_274;
  float local_270 [2];
  CVector3f local_268;
  float local_25c;
  float local_258 [4];
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  CVector3i local_238;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c [4];
  float local_20c;
  CVector3f local_208;
  float local_1fc;
  float local_1f8 [2];
  CVector3f local_1f0;
  float local_1e4;
  float local_1e0 [4];
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc [2];
  CVector3f local_1b4;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  CVector3f local_19c;
  CVector3f local_190;
  float local_184;
  float local_180 [2];
  CVector3f local_178;
  float local_16c;
  float local_168 [4];
  float local_158;
  CVector3f local_154;
  CVector3f local_148;
  CVector3i local_13c;
  CVector3f local_130;
  CVector3f local_124;
  float local_118;
  float local_114 [2];
  CVector3f local_10c;
  float local_100;
  float local_fc [2];
  CVector3i local_f4;
  CVector3f local_e8;
  CVector3i local_dc;
  CVector3i local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3i local_b8;
  CVector3f local_ac;
  CVector3i local_a0;
  CVector3i local_94 [2];
  int iStack_78;
  float local_70;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar9 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_006151e4);
  local_1fc = (this_ptr->hit_position).x - (this_ptr->origin).x;
  local_1f8[0] = (this_ptr->hit_position).y - (this_ptr->origin).y;
  local_1f8[1] = (this_ptr->hit_position).z - (this_ptr->origin).z;
  local_19c.x = local_1fc;
  *(float *)((int)&local_19c + (uint)bVar9 * -8 + 4) = local_1f8[(uint)bVar9 * -2];
  *(float *)((int)&local_19c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       local_1f8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_19c,&local_148);
  fVar2 = SQRT(local_19c.z * local_19c.z + local_19c.x * local_19c.x + local_19c.y * local_19c.y);
  pCVar13 = &local_e8;
  local_e8.x = local_148.x;
  *(uint *)((int)&local_e8 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_148 + (uint)bVar9 * -8 + 4);
  *(uint *)((int)&local_e8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((int)&local_148 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_2c0,pCVar13);
  local_380 = this_ptr->beam_width;
  local_394 = this_ptr->reticle_intensity;
  local_390 = 0.0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046b5e0(DAT_0060b280,&local_130);
  local_168[2] = local_130.x;
  local_168[(uint)bVar9 * -2 + 3] = *(float *)((int)&local_130 + (uint)bVar9 * -8 + 4);
  local_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       *(float *)((int)&local_130 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  local_1e4 = local_168[2] - (this_ptr->origin).x;
  local_1e0[0] = local_168[3] - (this_ptr->origin).y;
  local_1e0[1] = local_158 - (this_ptr->origin).z;
  local_258[2] = local_1e4;
  local_258[(uint)bVar9 * -2 + 3] = local_1e0[(uint)bVar9 * -2];
  local_258[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       local_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  if (local_1e0 + 2 != local_258 + 2) {
    local_1e0[2] = local_258[2];
    local_1e0[3] = local_258[3];
    local_1d0 = local_248;
  }
  local_244 = (this_ptr->hit_position).x - (this_ptr->origin).x;
  local_240 = (this_ptr->hit_position).y - (this_ptr->origin).y;
  local_23c = (this_ptr->hit_position).z - (this_ptr->origin).z;
  local_16c = local_244;
  local_168[(uint)bVar9 * -2] = local_258[(uint)bVar9 * -2 + 6];
  local_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_258[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  if (&local_1cc != &local_16c) {
    local_1cc = local_16c;
    local_1c8 = local_168[0];
    local_1c4 = local_168[1];
  }
  fVar1 = local_1d0 * local_1c4 + local_1e0[2] * local_1cc + local_1e0[3] * local_1c8;
  local_37c._0_4_ = 448.0;
  if (0.0 < fVar1) {
    if (this_ptr->cone_angle <= 0.0) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046b5e0(DAT_0060b280,&local_208);
      local_268.x = local_208.x;
      *(uint *)((int)&local_268 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_208 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&local_268 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&local_208 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      local_268.x = local_268.x - (this_ptr->origin).x;
      local_268.y = local_268.y - (this_ptr->origin).y;
      local_268.z = local_268.z - (this_ptr->origin).z;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
                (&local_2c0,&local_268,&local_ac);
      local_1b4.x = local_ac.x;
      local_1bc[(uint)bVar9 * -2 + 3] = *(float *)((int)&local_ac + (uint)bVar9 * -8 + 4);
      local_1bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           *(float *)((int)&local_ac + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (&local_268 != (CVector3f *)(local_1bc + 2)) {
        local_268.x = local_1b4.x;
        local_268.y = local_1b4.y;
        local_268.z = local_1b4.z;
      }
      local_60 = local_268.y * local_268.y;
      local_5c = ((local_268.z * (float)_DAT_005d548a) / (float)local_37c._0_4_) *
                 (float)_DAT_005d5492;
      local_58 = local_268.x * local_268.x + local_60;
      local_54 = local_5c * local_5c;
      if (local_58 < local_54) {
        local_390 = 1.0 - local_58 / local_54;
      }
    }
    else {
      fVar10 = (float10)fcos((float10)this_ptr->cone_angle);
      local_4c = fVar1 / (SQRT(local_1c4 * local_1c4 + local_1cc * local_1cc + local_1c8 * local_1c8
                              ) * SQRT(local_1d0 * local_1d0 +
                                       local_1e0[2] * local_1e0[2] + local_1e0[3] * local_1e0[3]));
      local_384 = (float)fVar10;
      if (local_384 < local_4c) {
        local_390 = (local_4c - local_384) / (1.0 - local_384);
      }
      fVar10 = (float10)fptan((float10)this_ptr->cone_angle);
      local_48 = (float)fVar10;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  if ((0.0 < local_390) && (g_CGamePtr->halo_mode != 0)) {
    fVar1 = this_ptr->beam_width;
    fVar3 = 1.0 - local_390 * (float)_DAT_005d5492;
    local_380 = local_380 * fVar3;
    local_394 = fVar3 * local_394;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    local_20 = 0;
    do {
      local_18 = local_20;
      fVar3 = (float)local_20 * _DAT_005d549a * fVar2;
      fVar4 = local_48;
      if (this_ptr->cone_angle <= 0.0) {
        fVar4 = (float)_DAT_005d548a / (float)local_37c._0_4_;
      }
      local_28 = fVar4 * fVar3;
      local_1c0 = local_2c0.m[0].z * fVar3;
      local_1bc[0] = local_2c0.m[1].z * fVar3;
      local_1bc[1] = local_2c0.m[2].z * fVar3;
      local_184 = local_2c0.m[0].z * fVar3;
      local_180[(uint)bVar9 * -2] = local_1bc[(uint)bVar9 * -2];
      local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           local_1bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      local_21c[2] = (this_ptr->origin).x + local_184;
      local_21c[3] = (this_ptr->origin).y + local_180[0];
      local_20c = (this_ptr->origin).z + local_180[1];
      local_154.x = local_21c[2];
      local_168[(uint)bVar9 * -2 + 6] = local_21c[(uint)bVar9 * -2 + 3];
      local_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           local_21c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      if (&local_178 != (CVector3f *)(local_168 + 5)) {
        local_178.x = local_154.x;
        local_178.y = local_154.y;
        local_178.z = local_154.z;
      }
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                (DAT_0060b280,&local_178);
      engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046b670
                (DAT_0060b280,&local_28c);
      iVar6 = local_20;
      pCVar13 = (CVector3f *)0x0;
      local_1f0.x = local_28c.x;
      *(uint *)((int)&local_1f0 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_28c + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&local_1f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&local_28c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      local_18 = iVar6;
      local_1f0.z = (float)iVar6 + local_1f0.z;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (DAT_0060b280,&local_1f0,pCVar13);
      local_bc = 0.0;
      local_c4 = local_28;
      local_c0 = local_28;
      local_13c.x = (int)ROUND(local_28 * _DAT_005f64e4);
      local_13c.y = (int)ROUND(local_28 * _DAT_005f64e4);
      local_13c.z = (int)ROUND(_DAT_005f64e4 * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_13c);
      local_c4 = -local_c4;
      local_d0.x = (int)ROUND(local_c4 * _DAT_005f64e4);
      local_d0.y = (int)ROUND(local_c0 * _DAT_005f64e4);
      local_d0.z = (int)ROUND(local_bc * _DAT_005f64e4);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_d0);
      local_c0 = -local_c0;
      local_a0.x = (int)ROUND(local_c4 * _DAT_005f64e4);
      local_a0.y = (int)ROUND(local_c0 * _DAT_005f64e4);
      local_a0.z = (int)ROUND(local_bc * _DAT_005f64e4);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_a0);
      local_c4 = -local_c4;
      local_f4.x = (int)ROUND(local_c4 * _DAT_005f64e4);
      local_f4.y = (int)ROUND(local_c0 * _DAT_005f64e4);
      local_f4.z = (int)ROUND(local_bc * _DAT_005f64e4);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_f4);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0061522c);
      pCVar5 = DAT_0060b280;
      local_2ec.surface_normal.A.i = 4;
      local_2d4 = 0;
      local_2ec.surface_normal.D.i = 0;
      local_2ec.surface_normal.C.i = 0;
      local_2ec.surface_normal.B.i = 0;
      local_2d0 = 0;
      pSVar7 = DAT_0060b280->vertex_buffer_ptr;
      dVar12 = round((double)(local_390 * fVar1 * (float)_DAT_005d54a2));
      iStack_78 = (int)ROUND(dVar12);
      pSVar7->a = iStack_78;
      pCVar5->vertex_buffer_ptr->r = (this_ptr->color).r;
      pCVar5->vertex_buffer_ptr->g = (this_ptr->color).g;
      pCVar5->vertex_buffer_ptr->b = (this_ptr->color).b;
      local_2d0 = 1;
      pCVar5->vertex_buffer_ptr[1].a = iStack_78;
      pCVar5->vertex_buffer_ptr[1].r = (this_ptr->color).r;
      pCVar5->vertex_buffer_ptr[1].g = (this_ptr->color).g;
      pCVar5->vertex_buffer_ptr[1].b = (this_ptr->color).b;
      local_2cc = 2;
      pCVar5->vertex_buffer_ptr[2].a = iStack_78;
      pCVar5->vertex_buffer_ptr[2].r = (this_ptr->color).r;
      pCVar5->vertex_buffer_ptr[2].g = (this_ptr->color).g;
      pCVar5->vertex_buffer_ptr[2].b = (this_ptr->color).b;
      local_2c8 = 3;
      pCVar5->vertex_buffer_ptr[3].a = iStack_78;
      pCVar5->vertex_buffer_ptr[3].r = (this_ptr->color).r;
      pCVar5->vertex_buffer_ptr[3].g = (this_ptr->color).g;
      pCVar5->vertex_buffer_ptr[3].b = (this_ptr->color).b;
      pCVar5->vertex_buffer_ptr->u = 0xf80000;
      pCVar5->vertex_buffer_ptr->v = 0xf80000;
      pCVar5->vertex_buffer_ptr[1].u = 0x80000;
      pCVar5->vertex_buffer_ptr[1].v = 0xf80000;
      pCVar5->vertex_buffer_ptr[2].u = 0x80000;
      pCVar5->vertex_buffer_ptr[2].v = 0x80000;
      pCVar5->vertex_buffer_ptr[3].u = 0xf80000;
      pCVar5->vertex_buffer_ptr[3].v = 0x80000;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(pCVar5,&local_2ec);
      engine_drender_cpp_pop_FUN_0046b4a0();
      local_24 = (float)((int)local_24 + 1);
    } while ((int)local_24 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  }
  if (0.0 < local_380) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)&DAT_006151fc);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,&this_ptr->origin);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&local_e8,(CVector3f *)0x0);
    fVar1 = this_ptr->cone_angle;
    local_50 = this_ptr->halo_spread;
    local_24 = 1.12104e-44;
    if (0.0 < fVar1) {
      fVar10 = (float10)fptan((float10)fVar1);
      local_24 = 2.24208e-44;
      local_50 = (float)(fVar10 * (float10)fVar2);
    }
    local_40 = (uint)(0.0 < fVar1);
    local_3c = core_fire_cpp_computeScreenSpaceSize_FUN_00497710(0.0,this_ptr->halo_spread);
    local_14 = local_3c;
    local_38 = core_fire_cpp_computeScreenSpaceSize_FUN_00497710(fVar2,local_50);
    local_1c = 0;
    local_14 = local_38;
    if (-1 < (int)local_24) {
      local_44 = (fVar2 * _DAT_005d54aa) / _DAT_005d54ae;
      local_30 = 0x100;
      do {
        pCVar5 = DAT_0060b280;
        local_18 = local_1c;
        local_14 = local_24;
        fVar10 = ((float10)local_1c / (float10)(int)local_24) * (float10)_DAT_005d5492 *
                 (float10)_DAT_005d54b2;
        fVar11 = (float10)fsin(fVar10);
        fVar10 = (float10)fcos(fVar10);
        pSVar7 = DAT_0060b280->vertex_buffer_ptr;
        pSVar8 = DAT_0060b280->vertex_buffer_ptr + 3;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
        }
        pSVar7 = pCVar5->vertex_buffer_ptr;
        local_68 = (float)fVar11;
        pSVar8 = pSVar7 + 1;
        pSVar7 = pSVar7 + 2;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          (pSVar7->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
        }
        local_70 = (float)fVar10;
        local_224 = 0.0;
        local_228 = (float)(fVar11 * (float10)local_3c);
        local_22c = (float)(fVar10 * (float10)local_3c);
        local_280.x = (int)ROUND(local_22c * _DAT_005f64e4);
        local_280.y = (int)ROUND(local_228 * _DAT_005f64e4);
        local_280.z = (int)ROUND(_DAT_005f64e4 * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&pCVar5->vertex_buffer_ptr->projected_vertex,&local_280);
        local_22c = local_70 * local_38;
        local_228 = local_68 * local_38;
        local_224 = fVar2 + (float)_DAT_005d54ca;
        local_238.x = (int)ROUND(local_22c * _DAT_005f64e4);
        local_238.y = (int)ROUND(local_228 * _DAT_005f64e4);
        local_238.z = (int)ROUND(local_224 * _DAT_005f64e4);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_238);
        iVar6 = local_1c;
        if (local_1c != 0) {
          dVar12 = round((double)local_44);
          pCVar5 = DAT_0060b280;
          local_330 = 4;
          local_320 = 0;
          local_324 = 0;
          local_328 = 0;
          local_32c = 0;
          local_31c = 0;
          local_2f8 = 3;
          local_310 = 1;
          local_304 = 2;
          local_38 = (float)(int)ROUND(dVar12);
          if (this_ptr->cone_angle <= 0.0) {
            local_318 = 0;
            local_308 = ((iVar6 << 8) / (int)local_28 + _DAT_01c3ec58) * 0x10000;
            local_2f0 = (local_34 / (int)local_28 + _DAT_01c3ec58) * 0x10000;
            local_2f4 = 0;
            local_300 = local_38;
          }
          else {
            local_308 = 0x800000;
            local_300 = 1.1754944e-38;
            local_2f4 = 0x800000;
            local_2f0 = 0x800000;
            local_318 = 0x800000;
          }
          DAT_0060b280->vertex_buffer_ptr->r = (this_ptr->color).r;
          pCVar5->vertex_buffer_ptr->g = (this_ptr->color).g;
          pCVar5->vertex_buffer_ptr->b = (this_ptr->color).b;
          pCVar5->vertex_buffer_ptr[1].r = (this_ptr->color).r;
          pCVar5->vertex_buffer_ptr[1].g = (this_ptr->color).g;
          pCVar5->vertex_buffer_ptr[1].b = (this_ptr->color).b;
          pCVar5->vertex_buffer_ptr[2].r = (this_ptr->color).r;
          pCVar5->vertex_buffer_ptr[2].g = (this_ptr->color).g;
          pCVar5->vertex_buffer_ptr[2].b = (this_ptr->color).b;
          pCVar5->vertex_buffer_ptr[3].r = (this_ptr->color).r;
          pCVar5->vertex_buffer_ptr[3].g = (this_ptr->color).g;
          pCVar5->vertex_buffer_ptr[3].b = (this_ptr->color).b;
          local_314 = local_308;
          local_30c = local_300;
          local_2fc = local_2f0;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(pCVar5,1);
          fVar1 = local_44;
          dVar12 = round((double)(local_384 * (float)_DAT_005d54ba));
          pCVar5 = DAT_0060b280;
          local_34 = (int)ROUND(dVar12);
          if (fVar1 == 0.0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,local_34);
            engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20
                      (DAT_0060b280,(SMRGLPrimitivePoly *)(local_37c + 0x44));
          }
          else {
            DAT_0060b280->vertex_buffer_ptr->a = local_34;
            pCVar5->vertex_buffer_ptr[1].a = 0;
            pCVar5->vertex_buffer_ptr[2].a = 0;
            pCVar5->vertex_buffer_ptr[3].a = local_34;
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
                      (pCVar5,(SMRGLPrimitivePoly *)(local_37c + 0x44));
          }
        }
        local_30 = local_30 + 0x100;
        local_1c = local_1c + 1;
      } while (local_1c <= (int)local_24);
    }
    engine_drender_cpp_pop_FUN_0046b4a0();
  }
  if (0.0 < local_394) {
    fVar2 = 1.0 / fVar2;
    local_220 = local_19c.x * fVar2;
    local_21c[0] = local_19c.y * fVar2;
    local_21c[1] = local_19c.z * fVar2;
    local_118 = local_19c.x * fVar2;
    local_114[(uint)bVar9 * -2] = local_21c[(uint)bVar9 * -2];
    local_114[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_21c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_25c = local_118 * _DAT_005d54c2;
    local_258[0] = local_114[0] * _DAT_005d54c2;
    local_258[1] = local_114[1] * _DAT_005d54c2;
    local_274 = local_118 * _DAT_005d54c2;
    local_270[(uint)bVar9 * -2] = local_258[(uint)bVar9 * -2];
    local_270[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_258[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_100 = (this_ptr->hit_position).x - local_274;
    local_fc[0] = (this_ptr->hit_position).y - local_270[0];
    local_fc[1] = (this_ptr->hit_position).z - local_270[1];
    local_10c.x = local_100;
    *(float *)((int)&local_10c + (uint)bVar9 * -8 + 4) = local_fc[(uint)bVar9 * -2];
    *(float *)((int)&local_10c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
              (&this_ptr->reflection_normal,&local_190);
    local_124.x = local_190.x;
    *(uint *)((int)&local_124 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&local_190 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&local_124 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&local_190 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    if (&local_e8 != &local_124) {
      local_e8.x = local_124.x;
      local_e8.y = local_124.y;
      local_e8.z = local_124.z;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,&local_10c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&local_e8,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00615214);
    local_1a8 = 0.2;
    local_1a0 = 0.0;
    local_1a4 = 0.2;
    local_298.x = (int)ROUND(_DAT_005f64e4 * 0.2);
    local_298.y = (int)ROUND(_DAT_005f64e4 * 0.2);
    local_298.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_298);
    local_1a8 = -local_1a8;
    local_dc.x = (int)ROUND(local_1a8 * _DAT_005f64e4);
    local_dc.y = (int)ROUND(local_1a4 * _DAT_005f64e4);
    local_dc.z = (int)ROUND(local_1a0 * _DAT_005f64e4);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_dc);
    local_1a4 = -local_1a4;
    local_b8.x = (int)ROUND(local_1a8 * _DAT_005f64e4);
    local_b8.y = (int)ROUND(local_1a4 * _DAT_005f64e4);
    local_b8.z = (int)ROUND(local_1a0 * _DAT_005f64e4);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_b8);
    local_1a8 = -local_1a8;
    local_94[0].x = (int)ROUND(local_1a8 * _DAT_005f64e4);
    local_94[0].y = (int)ROUND(local_1a4 * _DAT_005f64e4);
    local_94[0].z = (int)ROUND(local_1a0 * _DAT_005f64e4);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,local_94);
    pCVar5 = DAT_0060b280;
    local_37c._8_4_ = 4;
    local_37c._24_4_ = 0;
    local_37c._20_4_ = 0;
    local_37c._16_4_ = 0;
    local_37c._12_4_ = 0;
    local_37c._28_4_ = 0;
    local_37c._64_4_ = 3;
    local_37c._32_4_ = 0x80000;
    local_37c._36_4_ = 0x80000;
    local_37c._44_4_ = 0xf80000;
    local_37c._48_4_ = 0x80000;
    local_37c._56_4_ = 0xf80000;
    local_37c._60_4_ = 0xf80000;
    local_37c._68_4_ = 0x80000;
    local_334 = 0xf80000;
    local_37c._40_4_ = 1;
    local_37c._52_4_ = 2;
    DAT_0060b280->vertex_buffer_ptr->r = (this_ptr->color).r;
    pCVar5->vertex_buffer_ptr->g = (this_ptr->color).g;
    pCVar5->vertex_buffer_ptr->b = (this_ptr->color).b;
    pCVar5->vertex_buffer_ptr[1].r = (this_ptr->color).r;
    pCVar5->vertex_buffer_ptr[1].g = (this_ptr->color).g;
    pCVar5->vertex_buffer_ptr[1].b = (this_ptr->color).b;
    pCVar5->vertex_buffer_ptr[2].r = (this_ptr->color).r;
    pCVar5->vertex_buffer_ptr[2].g = (this_ptr->color).g;
    pCVar5->vertex_buffer_ptr[2].b = (this_ptr->color).b;
    pCVar5->vertex_buffer_ptr[3].r = (this_ptr->color).r;
    pCVar5->vertex_buffer_ptr[3].g = (this_ptr->color).g;
    pCVar5->vertex_buffer_ptr[3].b = (this_ptr->color).b;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(pCVar5,1);
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(32768.0,40959.0);
    dVar12 = round((double)(local_14 * local_394));
    local_1c = (int)ROUND(dVar12);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,local_1c);
    engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20
              (DAT_0060b280,(SMRGLPrimitivePoly *)local_37c);
    engine_drender_cpp_pop_FUN_0046b4a0();
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  return;
}
