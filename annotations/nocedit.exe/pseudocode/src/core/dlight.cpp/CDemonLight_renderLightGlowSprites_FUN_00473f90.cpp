// Name: core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
// Address: 00473f90
// Address Range: [[00473f90, 004746e3]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  SMRGLTextureBasic *texture;
  byte bVar3;
  double dVar4;
  float afStackY_10d0 [991];
  CDemonRenderer *this_ptr_00;
  CDemonRenderer *pCVar5;
  CVector3i *output;
  float local_140;
  float local_13c;
  SMRGLHeaderPrimitive local_138;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  int iStack_e8;
  float afStack_e4 [2];
  byte local_dc [12];
  int local_d0;
  int local_cc;
  CVector3f local_c8;
  CVector3i local_bc;
  CVector3f local_b0;
  int local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  byte local_74 [8];
  float local_6c;
  float local_64;
  float local_60;
  CVector3i local_5c;
  CVector3i local_50;
  CVector3i local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  CVector3i *local_20;
  float *local_1c;
  uint local_18;
  float local_14;
  
  bVar3 = 0;
  if (this_ptr->field17_0x1cbc != 0) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr,(float *)local_74);
    local_74._0_4_ = (float)local_74._0_4_ - (float)(this_ptr->base).base.position.x;
    local_74._4_4_ = (float)local_74._4_4_ - (float)(this_ptr->base).base.position.y;
    local_6c = local_6c - (float)(this_ptr->base).base.position.z;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_b0,
                        (CVector3f *)local_74);
    if ((CVector3f *)(local_74 + 4) != pCVar2) {
      local_74._0_4_ = pCVar2->x;
      local_74._4_4_ = pCVar2->y;
      local_6c = pCVar2->z;
    }
    if (local_6c <= (this_ptr->base).max_distance) {
      local_30 = (float)local_74._4_4_ * (float)local_74._4_4_;
      local_24 = ((local_6c * (float)18) / (this_ptr->base).base.projection_scale) *
                 (float)2;
      local_28 = (float)local_74._0_4_ * (float)local_74._0_4_ + local_30;
      local_2c = local_24 * local_24;
      if (local_28 <= local_2c) {
        output = (CVector3i *)(1.0 - local_28 / local_2c);
        engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                  (g_CDemonRendererPtr,output);
        local_a4 = iStack_e8;
        (&local_a0)[(uint)bVar3 * -2] = afStack_e4[(uint)bVar3 * -2];
        (&local_a0)[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
             afStack_e4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        local_f8 = (float)local_a4 * 0.00390625f;
        local_f4 = (float)(int)local_a0 * 0.00390625f;
        local_f0 = (float)local_9c * 0.00390625f;
        local_80 = local_f8 - (float)(this_ptr->base).base.position.x;
        local_7c = local_f4 - (float)(this_ptr->base).base.position.y;
        local_78 = local_f0 - (float)(this_ptr->base).base.position.z;
        local_140 = SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
        if (0.0 < local_140) {
          fVar1 = 1.0 / local_140;
          local_80 = local_80 * fVar1;
          local_7c = local_7c * fVar1;
          local_78 = local_78 * fVar1;
          local_8c.x = 0.0;
          local_8c.y = 0.0;
          local_8c.z = 1.0;
          local_14 = (float)(0xffff - (int)g_PerspectiveReciprocal);
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_c8,
                              &local_8c);
          if (0.0 < (local_78 * pCVar2->z + local_80 * pCVar2->x + local_7c * pCVar2->y) * local_14
                    * 1.525902e-05f) {
            this_ptr_00 = (CDemonRenderer *)0x474287;
            pCVar5 = g_CDemonRendererPtr;
            dVar4 = crt_math_c_round_FUN_005fe6b0((double)((float)output * (float)65535));
            local_20 = (CVector3i *)(int)ROUND(dVar4);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,(int)pCVar5);
            local_18 = 0;
            texture = g_LightTextures;
            local_20 = &(this_ptr->base).base.position;
            do {
              texture = texture + 2;
              fVar1 = (float)(int)local_14 * 0.1111111f * (this_ptr->base).max_distance;
              local_10c = (float)(this_ptr->base).base.rotation_matrix.m[0].z;
              local_140 = fVar1 * (float)0.25;
              local_108 = (float)(this_ptr->base).base.rotation_matrix.m[1].z;
              local_100 = local_10c * local_140;
              local_fc = local_108 * local_140;
              local_104 = (float)(this_ptr->base).base.rotation_matrix.m[2].z;
              local_f8 = local_104 * local_140;
              local_138.base.type =
                   (int)((float)texture[1].base.count * (float)0.5 *
                        ((fVar1 * (float)18) / (this_ptr->base).base.projection_scale)
                        * (float)2);
              local_64 = *local_1c + local_100;
              local_60 = local_1c[1] + local_fc;
              local_5c.x = (int)(local_1c[2] + local_f8);
              if ((float *)local_dc != &local_64) {
                local_dc._0_4_ = local_64;
                local_dc._4_4_ = local_60;
                local_dc._8_4_ = local_5c.x;
              }
              engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                        (g_CDemonRendererPtr,(CVector3f *)local_dc);
              engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                        (g_CDemonRendererPtr,(float *)&local_44);
              engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                        (g_CDemonRendererPtr,&local_44,(CVector3i *)0x0);
              local_90 = 0.0;
              local_98 = local_13c;
              local_94 = local_13c;
              local_dc._8_4_ = (uint)ROUND(local_13c * 256f);
              local_d0 = (int)ROUND(local_13c * 256f);
              local_cc = (int)ROUND(256f * 0.0);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                         (CVector3i *)(local_dc + 8));
              local_98 = -local_98;
              local_5c.x = (int)ROUND(local_98 * 256f);
              local_5c.y = (int)ROUND(local_94 * 256f);
              local_5c.z = (int)ROUND(local_90 * 256f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_5c);
              local_94 = -local_94;
              local_50.x = (int)ROUND(local_98 * 256f);
              local_50.y = (int)ROUND(local_94 * 256f);
              local_50.z = (int)ROUND(local_90 * 256f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_50);
              local_98 = -local_98;
              local_bc.x = (int)ROUND(local_98 * 256f);
              local_bc.y = (int)ROUND(local_94 * 256f);
              local_bc.z = (int)ROUND(local_90 * 256f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_bc);
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,texture);
              pCVar5 = g_CDemonRendererPtr;
              local_138.base.count = 4;
              local_138.surface_normal.D = 0;
              local_138.surface_normal.C = 0;
              local_138.surface_normal.B = 0;
              local_138.surface_normal.A = 0;
              local_120 = 0;
              g_CDemonRendererPtr->vertex_buffer_ptr->u =
                   (float)(*(int *)texture[1].texture_name << 0x10);
              pCVar5->vertex_buffer_ptr->v = (float)(*(int *)(texture[1].texture_name + 4) << 0x10);
              pCVar5->vertex_buffer_ptr->w_recip = (float)local_1c;
              pCVar5->vertex_buffer_ptr->light = 9.18341e-41;
              pCVar5->vertex_buffer_ptr->color = 0xffff;
              pCVar5->vertex_buffer_ptr->fog = 9.18341e-41;
              local_11c = 1;
              pCVar5->vertex_buffer_ptr[1].u =
                   (float)(*(int *)(texture[1].texture_name + 8) << 0x10);
              pCVar5->vertex_buffer_ptr[1].v =
                   (float)(*(int *)(texture[1].texture_name + 4) << 0x10);
              pCVar5->vertex_buffer_ptr[1].w_recip = (float)local_1c;
              pCVar5->vertex_buffer_ptr[1].light = 9.18341e-41;
              pCVar5->vertex_buffer_ptr[1].color = 0xffff;
              pCVar5->vertex_buffer_ptr[1].fog = 9.18341e-41;
              local_118 = 2;
              pCVar5->vertex_buffer_ptr[2].u =
                   (float)(*(int *)(texture[1].texture_name + 8) << 0x10);
              pCVar5->vertex_buffer_ptr[2].v =
                   (float)(*(int *)(texture[1].texture_name + 0xc) << 0x10);
              pCVar5->vertex_buffer_ptr[2].w_recip = (float)local_1c;
              pCVar5->vertex_buffer_ptr[2].light = 9.18341e-41;
              pCVar5->vertex_buffer_ptr[2].color = 0xffff;
              pCVar5->vertex_buffer_ptr[2].fog = 9.18341e-41;
              local_114 = 3;
              pCVar5->vertex_buffer_ptr[3].u = (float)(*(int *)texture[1].texture_name << 0x10);
              pCVar5->vertex_buffer_ptr[3].v =
                   (float)(*(int *)(texture[1].texture_name + 0xc) << 0x10);
              pCVar5->vertex_buffer_ptr[3].w_recip = (float)local_1c;
              pCVar5->vertex_buffer_ptr[3].light = 9.18341e-41;
              pCVar5->vertex_buffer_ptr[3].color = 0xffff;
              pCVar5->vertex_buffer_ptr[3].fog = 9.18341e-41;
              engine_drender_cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
                        (pCVar5,&local_138);
              engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
              local_14 = (float)((int)local_14 + 1);
            } while ((int)local_14 < 9);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
            return;
          }
        }
      }
    }
  }
  return;
}
