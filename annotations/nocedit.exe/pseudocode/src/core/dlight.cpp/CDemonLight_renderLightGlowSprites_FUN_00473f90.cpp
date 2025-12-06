// Name: core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
// Address: 00473f90
// Address Range: [[00473f90, 004746e3]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  uint extraout_EDX;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  SMRGLTextureBasic *texture;
  byte bVar4;
  float in_stack_0000001c;
  int in_stack_00000028;
  int aiStackY_10c8 [990];
  CDemonRenderer *this_ptr_00;
  int in_stack_fffffec8;
  CDemonRenderer *in_stack_fffffee8;
  SMRGLHeaderPrimitive local_100;
  float fStack_e8;
  float fStack_e4;
  uint local_e0;
  int local_dc [5];
  CVector3f local_c8;
  CVector3f local_bc;
  byte local_b0 [8];
  int iStack_a8;
  uint local_9c;
  int local_98 [3];
  CVector3i local_8c;
  CVector3f local_80;
  CDemonRenderer *local_74;
  byte local_70 [8];
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_50 [2];
  CVector3i CStack_34;
  float local_28;
  CVector3i local_24;
  
  bVar4 = 0;
  if (this_ptr->field17_0x1cbc != 0) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr,(float *)&local_74);
    local_70._0_4_ = (float)local_70._0_4_ - (float)(this_ptr->base).base.position.x;
    local_70._4_4_ = (float)local_70._4_4_ - (float)(this_ptr->base).base.position.y;
    local_68 = local_68 - (float)(this_ptr->base).base.position.z;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,
                        (CVector3f *)(local_b0 + 4),(CVector3f *)local_70);
    if ((CVector3f *)(local_70 + 4) != pCVar3) {
      local_70._4_4_ = pCVar3->x;
      local_68 = pCVar3->y;
      local_64 = pCVar3->z;
    }
    if (local_64 <= (this_ptr->base).max_distance) {
      local_28 = local_68 * local_68;
      local_24.z = (int)(((local_64 * (float)18) /
                         (this_ptr->base).base.projection_scale) * (float)2);
      local_24.y = (int)((float)local_70._4_4_ * (float)local_70._4_4_ + local_28);
      local_24.x = (int)((float)local_24.z * (float)local_24.z);
      if ((float)local_24.y <= (float)local_24.x) {
        engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                  (g_CDemonRendererPtr,(CVector3i *)(1.0 - (float)local_24.y / (float)local_24.x));
        local_9c = local_e0;
        local_98[(uint)bVar4 * -2] = local_dc[(uint)bVar4 * -2];
        local_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        local_100.surface_normal.C = (int)((float)local_98[0] * 0.00390625f);
        local_100.surface_normal.D = (int)((float)local_98[1] * 0.00390625f);
        fStack_e8 = (float)local_98[2] * 0.00390625f;
        fVar1 = (float)local_100.surface_normal.D - (float)(this_ptr->base).base.position.x;
        fVar2 = fStack_e8 - (float)(this_ptr->base).base.position.y;
        fStack_e4 = fStack_e4 - (float)(this_ptr->base).base.position.z;
        local_70._4_4_ = SQRT(fStack_e4 * fStack_e4 + fVar1 * fVar1 + fVar2 * fVar2);
        if (0.0 < (float)local_70._4_4_) {
          local_70._4_4_ = 1.0 / (float)local_70._4_4_;
          local_74 = (CDemonRenderer *)(fVar1 * (float)local_70._4_4_);
          local_70._0_4_ = fVar2 * (float)local_70._4_4_;
          local_70._4_4_ = fStack_e4 * (float)local_70._4_4_;
          local_80.x = 0.0;
          local_80.y = 0.0;
          local_80.z = 1.0;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_bc,
                              &local_80);
          fVar1 = (local_68 * pCVar3->z +
                  (float)local_70._0_4_ * pCVar3->x + (float)local_70._4_4_ * pCVar3->y) * unaff_EBX
                  * 1.525902e-05f;
          if (0.0 < fVar1) {
            this_ptr_00 = (CDemonRenderer *)&DAT_00000001;
            crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,
                                        CONCAT22 /* combine 2-byte values */((short)((uint)pCVar3 >> 0x10),
                                                 (ushort)(0.0 < fVar1) << 8 |
                                                 (ushort)NAN(fVar1) << 10 |
                                                 (ushort)(fVar1 == 0.0) << 0xe)));
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
                      (this_ptr_00,in_stack_fffffec8);
            texture = g_LightTextures;
            do {
              texture = texture + 2;
              local_100.surface_normal.A = (int)fRam00000018;
              fStack_e4 = 0.1111111f * 0.0 * fRam00000140 * (float)0.25;
              local_100.surface_normal.B = (int)_DAT_00000024;
              local_100.surface_normal.D = (int)(fRam00000018 * fStack_e4);
              fStack_e8 = _DAT_00000024 * fStack_e4;
              local_100.surface_normal.C = (int)fRam00000030;
              fStack_e4 = fRam00000030 * fStack_e4;
              local_50[0].x =
                   (float)(this_ptr->base).base.position.x + (float)local_100.surface_normal.D;
              local_50[0].y = (float)(this_ptr->base).base.position.y + fStack_e8;
              local_50[0].z = (float)(this_ptr->base).base.position.z + fStack_e4;
              if (&local_c8 != local_50) {
                local_c8.x = local_50[0].x;
                local_c8.y = local_50[0].y;
                local_c8.z = local_50[0].z;
              }
              engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                        (g_CDemonRendererPtr,&local_c8);
              engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                        (g_CDemonRendererPtr,&local_28);
              engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                        (g_CDemonRendererPtr,&local_24,(CVector3i *)0x0);
              local_70._4_4_ = 0.0;
              local_b0._0_4_ = (uint)ROUND((float)in_stack_fffffee8 * 256f);
              local_b0._4_4_ = (uint)ROUND((float)in_stack_fffffee8 * 256f);
              iStack_a8 = (int)ROUND(256f * 0.0);
              local_74 = in_stack_fffffee8;
              local_70._0_4_ = in_stack_fffffee8;
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                         (CVector3i *)local_b0);
              local_70._0_4_ = -(float)local_70._0_4_;
              CStack_34.x = (int)ROUND((float)local_70._0_4_ * 256f);
              CStack_34.y = (int)ROUND((float)local_70._4_4_ * 256f);
              CStack_34.z = (int)ROUND(local_68 * 256f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_34);
              local_68 = -local_68;
              local_24.x = (int)ROUND((float)local_70._4_4_ * 256f);
              local_24.y = (int)ROUND(local_68 * 256f);
              local_24.z = (int)ROUND(local_64 * 256f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_24);
              local_68 = -local_68;
              local_8c.x = (int)ROUND(local_68 * 256f);
              local_8c.y = (int)ROUND(local_64 * 256f);
              local_8c.z = (int)ROUND(local_60 * 256f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_8c);
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,texture);
              in_stack_fffffee8 = g_CDemonRendererPtr;
              local_100.base.count = 4;
              local_100.surface_normal.D = 0;
              local_100.surface_normal.C = 0;
              local_100.surface_normal.B = 0;
              local_100.surface_normal.A = 0;
              fStack_e8 = 0.0;
              g_CDemonRendererPtr->vertex_buffer_ptr->u =
                   (float)(*(int *)texture[1].texture_name << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr->v =
                   (float)(*(int *)(texture[1].texture_name + 4) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr->w_recip = in_stack_0000001c;
              in_stack_fffffee8->vertex_buffer_ptr->light = 9.18341e-41;
              in_stack_fffffee8->vertex_buffer_ptr->color = 0xffff;
              in_stack_fffffee8->vertex_buffer_ptr->fog = 9.18341e-41;
              fStack_e4 = 1.4013e-45;
              in_stack_fffffee8->vertex_buffer_ptr[1].u =
                   (float)(*(int *)(texture[1].texture_name + 8) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[1].v =
                   (float)(*(int *)(texture[1].texture_name + 4) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[1].w_recip = in_stack_0000001c;
              in_stack_fffffee8->vertex_buffer_ptr[1].light = 9.18341e-41;
              in_stack_fffffee8->vertex_buffer_ptr[1].color = 0xffff;
              in_stack_fffffee8->vertex_buffer_ptr[1].fog = 9.18341e-41;
              local_e0 = 2;
              in_stack_fffffee8->vertex_buffer_ptr[2].u =
                   (float)(*(int *)(texture[1].texture_name + 8) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[2].v =
                   (float)(*(int *)(texture[1].texture_name + 0xc) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[2].w_recip = in_stack_0000001c;
              in_stack_fffffee8->vertex_buffer_ptr[2].light = 9.18341e-41;
              in_stack_fffffee8->vertex_buffer_ptr[2].color = 0xffff;
              in_stack_fffffee8->vertex_buffer_ptr[2].fog = 9.18341e-41;
              local_dc[0] = 3;
              in_stack_fffffee8->vertex_buffer_ptr[3].u =
                   (float)(*(int *)texture[1].texture_name << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[3].v =
                   (float)(*(int *)(texture[1].texture_name + 0xc) << 0x10);
              in_stack_fffffee8->vertex_buffer_ptr[3].w_recip = in_stack_0000001c;
              in_stack_fffffee8->vertex_buffer_ptr[3].light = 9.18341e-41;
              in_stack_fffffee8->vertex_buffer_ptr[3].color = 0xffff;
              in_stack_fffffee8->vertex_buffer_ptr[3].fog = 9.18341e-41;
              engine_drender_cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
                        (in_stack_fffffee8,&local_100);
              engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
              in_stack_00000028 = in_stack_00000028 + 1;
            } while (in_stack_00000028 < 9);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
            return;
          }
        }
      }
    }
  }
  return;
}
