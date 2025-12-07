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
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  SMRGLTextureBasic *texture;
  byte bVar3;
  float in_stack_00000014;
  int in_stack_00000020;
  float afStackY_10c8 [990];
  CDemonRenderer *this_ptr_00;
  CDemonRenderer *blend_mode;
  float in_stack_fffffec8;
  CDemonRenderer *in_stack_fffffee0;
  SMRGLHeaderPrimitive local_108;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  uint local_e0;
  float local_dc [3];
  CVector3f local_d0;
  byte local_bc [8];
  float local_b4;
  int local_b0;
  CVector3f CStack_ac;
  uint local_9c;
  float local_98;
  CVector3i local_94;
  CVector3f local_80;
  float local_74;
  byte local_70 [8];
  float local_68;
  float local_64;
  CVector3f local_58 [2];
  CVector3i CStack_3c;
  float local_30;
  CVector3i local_2c;
  float local_20;
  float local_1c;
  
  bVar3 = 0;
  if (this_ptr->field17_0x1cbc != 0) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr,&local_74);
    local_70._0_4_ = (float)local_70._0_4_ - (float)(this_ptr->base).base.position.x;
    local_70._4_4_ = (float)local_70._4_4_ - (float)(this_ptr->base).base.position.y;
    local_68 = local_68 - (float)(this_ptr->base).base.position.z;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&CStack_ac,
                        (CVector3f *)local_70);
    if ((CVector3f *)(local_70 + 4) != pCVar2) {
      local_70._4_4_ = pCVar2->x;
      local_68 = pCVar2->y;
      local_64 = pCVar2->z;
    }
    if (local_64 <= (this_ptr->base).max_distance) {
      local_2c.y = (int)(local_68 * local_68);
      local_1c = ((local_64 * (float)18) / (this_ptr->base).base.projection_scale) *
                 (float)2;
      local_20 = (float)local_70._4_4_ * (float)local_70._4_4_ + (float)local_2c.y;
      local_2c.z = (int)(local_1c * local_1c);
      if (local_20 <= (float)local_2c.z) {
        engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                  (g_CDemonRendererPtr,(CVector3i *)(1.0 - local_20 / (float)local_2c.z));
        local_9c = local_e0;
        (&local_98)[(uint)bVar3 * -2] = local_dc[(uint)bVar3 * -2];
        *(float *)((int)&local_94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             local_dc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        local_f0 = (float)(int)local_98 * 0.00390625f;
        local_ec = (float)local_94.x * 0.00390625f;
        fStack_e8 = (float)local_94.y * 0.00390625f;
        local_74 = local_ec - (float)(this_ptr->base).base.position.x;
        local_70._0_4_ = fStack_e8 - (float)(this_ptr->base).base.position.y;
        local_70._4_4_ = fStack_e4 - (float)(this_ptr->base).base.position.z;
        fVar1 = SQRT((float)local_70._4_4_ * (float)local_70._4_4_ +
                     local_74 * local_74 + (float)local_70._0_4_ * (float)local_70._0_4_);
        if (0.0 < fVar1) {
          fVar1 = 1.0 / fVar1;
          local_74 = local_74 * fVar1;
          local_70._0_4_ = (float)local_70._0_4_ * fVar1;
          local_70._4_4_ = (float)local_70._4_4_ * fVar1;
          local_80.x = 0.0;
          local_80.y = 0.0;
          local_80.z = 1.0;
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,
                              (CVector3f *)local_bc,&local_80);
          if (0.0 < (local_68 * pCVar2->z +
                    (float)local_70._0_4_ * pCVar2->x + (float)local_70._4_4_ * pCVar2->y) *
                    unaff_EBX * 1.525902e-05f) {
            this_ptr_00 = (CDemonRenderer *)0x474287;
            blend_mode = g_CDemonRendererPtr;
            crt_math_c_round_FUN_005fe6b0((double)(in_stack_fffffec8 * (float)65535));
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,(int)blend_mode)
            ;
            texture = g_LightTextures;
            do {
              texture = texture + 2;
              local_108.surface_normal.A = (this_ptr->base).base.rotation_matrix.m[0].z;
              local_ec = 0.1111111f * 0.0 * (this_ptr->base).max_distance *
                         (float)0.25;
              local_108.surface_normal.B = (this_ptr->base).base.rotation_matrix.m[1].z;
              local_108.surface_normal.D = (int)((float)local_108.surface_normal.A * local_ec);
              local_f0 = (float)local_108.surface_normal.B * local_ec;
              local_108.surface_normal.C = (this_ptr->base).base.rotation_matrix.m[2].z;
              local_ec = (float)local_108.surface_normal.C * local_ec;
              local_58[0].x =
                   (float)(this_ptr->base).base.position.x + (float)local_108.surface_normal.D;
              local_58[0].y = (float)(this_ptr->base).base.position.y + local_f0;
              local_58[0].z = (float)(this_ptr->base).base.position.z + local_ec;
              if (&local_d0 != local_58) {
                local_d0.x = local_58[0].x;
                local_d0.y = local_58[0].y;
                local_d0.z = local_58[0].z;
              }
              engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                        (g_CDemonRendererPtr,&local_d0);
              engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                        (g_CDemonRendererPtr,&local_30);
              engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                        (g_CDemonRendererPtr,&local_2c,(CVector3i *)0x0);
              local_74 = 0.0;
              local_bc._4_4_ = (uint)ROUND((float)in_stack_fffffee0 * 256f);
              local_b4 = (float)(int)ROUND((float)in_stack_fffffee0 * 256f);
              local_b0 = (int)ROUND(256f * 0.0);
              local_80.y = (float)in_stack_fffffee0;
              local_80.z = (float)in_stack_fffffee0;
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                         (CVector3i *)(local_bc + 4));
              local_80.z = -local_80.z;
              CStack_3c.x = (int)ROUND(local_80.z * 256f);
              CStack_3c.y = (int)ROUND(local_74 * 256f);
              CStack_3c.z = (int)ROUND((float)local_70._0_4_ * 256f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_3c);
              local_70._0_4_ = -(float)local_70._0_4_;
              local_2c.x = (int)ROUND(local_74 * 256f);
              local_2c.y = (int)ROUND((float)local_70._0_4_ * 256f);
              local_2c.z = (int)ROUND((float)local_70._4_4_ * 256f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_2c);
              local_70._0_4_ = -(float)local_70._0_4_;
              local_94.x = (int)ROUND((float)local_70._0_4_ * 256f);
              local_94.y = (int)ROUND((float)local_70._4_4_ * 256f);
              local_94.z = (int)ROUND(local_68 * 256f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_94);
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,texture);
              in_stack_fffffee0 = g_CDemonRendererPtr;
              local_108.base.count = 4;
              local_108.surface_normal.D = 0;
              local_108.surface_normal.C = 0;
              local_108.surface_normal.B = 0;
              local_108.surface_normal.A = 0;
              local_f0 = 0.0;
              g_CDemonRendererPtr->vertex_buffer_ptr->u =
                   (float)(*(int *)texture[1].texture_name << 0x10);
              in_stack_fffffee0->vertex_buffer_ptr->v =
                   (float)(*(int *)(texture[1].texture_name + 4) << 0x10);
              in_stack_fffffee0->vertex_buffer_ptr->w_recip = in_stack_00000014;
              in_stack_fffffee0->vertex_buffer_ptr->light = 9.18341e-41;
              in_stack_fffffee0->vertex_buffer_ptr->color = 0xffff;
              in_stack_fffffee0->vertex_buffer_ptr->fog = 9.18341e-41;
              local_ec = 1.4013e-45;
              in_stack_fffffee0->vertex_buffer_ptr[1].u =
                   (float)(*(int *)(texture[1].texture_name + 8) << 0x10);
              in_stack_fffffee0->vertex_buffer_ptr[1].v =
                   (float)(*(int *)(texture[1].texture_name + 4) << 0x10);
              in_stack_fffffee0->vertex_buffer_ptr[1].w_recip = in_stack_00000014;
              in_stack_fffffee0->vertex_buffer_ptr[1].light = 9.18341e-41;
              in_stack_fffffee0->vertex_buffer_ptr[1].color = 0xffff;
              in_stack_fffffee0->vertex_buffer_ptr[1].fog = 9.18341e-41;
              fStack_e8 = 2.8026e-45;
              in_stack_fffffee0->vertex_buffer_ptr[2].u =
                   (float)(*(int *)(texture[1].texture_name + 8) << 0x10);
              in_stack_fffffee0->vertex_buffer_ptr[2].v =
                   (float)(*(int *)(texture[1].texture_name + 0xc) << 0x10);
              in_stack_fffffee0->vertex_buffer_ptr[2].w_recip = in_stack_00000014;
              in_stack_fffffee0->vertex_buffer_ptr[2].light = 9.18341e-41;
              in_stack_fffffee0->vertex_buffer_ptr[2].color = 0xffff;
              in_stack_fffffee0->vertex_buffer_ptr[2].fog = 9.18341e-41;
              fStack_e4 = 4.2039e-45;
              in_stack_fffffee0->vertex_buffer_ptr[3].u =
                   (float)(*(int *)texture[1].texture_name << 0x10);
              in_stack_fffffee0->vertex_buffer_ptr[3].v =
                   (float)(*(int *)(texture[1].texture_name + 0xc) << 0x10);
              in_stack_fffffee0->vertex_buffer_ptr[3].w_recip = in_stack_00000014;
              in_stack_fffffee0->vertex_buffer_ptr[3].light = 9.18341e-41;
              in_stack_fffffee0->vertex_buffer_ptr[3].color = 0xffff;
              in_stack_fffffee0->vertex_buffer_ptr[3].fog = 9.18341e-41;
              engine_drender_cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
                        (in_stack_fffffee0,&local_108);
              engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
              in_stack_00000020 = in_stack_00000020 + 1;
            } while (in_stack_00000020 < 9);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
            return;
          }
        }
      }
    }
  }
  return;
}
