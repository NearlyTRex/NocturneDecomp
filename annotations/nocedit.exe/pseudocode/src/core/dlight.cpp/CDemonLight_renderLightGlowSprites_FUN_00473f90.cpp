// Name: core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
// Address: 00473f90
// Address Range: [[00473f90, 004746e3]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  SMRGLTextureBasic *texture;
  byte bVar3;
  double dVar4;
  float afStackY_10d4 [991];
  CDemonRenderer *this_ptr_00;
  CDemonRenderer *pCVar5;
  float local_148;
  float local_140;
  SMRGLHeaderPrimitive local_13c;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  byte local_ec [12];
  float local_e0;
  float local_dc;
  CVector3i local_d8;
  byte local_c8 [12];
  int local_bc;
  int local_b8;
  CVector3f local_b0;
  int local_a4;
  int local_a0;
  float local_9c [4];
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  CVector3f local_74;
  float local_68;
  float local_64;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48 [2];
  float local_30;
  float local_2c;
  float local_28;
  CVector3i *local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar3 = 0;
  if (this_ptr->unk2 != 0) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr2,&local_74.x);
    local_74.x = local_74.x - (float)(this_ptr->base).base.position.x;
    local_74.y = local_74.y - (float)(this_ptr->base).base.position.y;
    local_74.z = local_74.z - (float)(this_ptr->base).base.position.z;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_b0,&local_74);
    if (&local_74 != pCVar2) {
      local_74.x = pCVar2->x;
      local_74.y = pCVar2->y;
      local_74.z = pCVar2->z;
    }
    if (local_74.z <= (this_ptr->base).max_distance) {
      local_30 = local_74.y * local_74.y;
      local_24 = (CVector3i *)
                 (((local_74.z * (float)18) / (this_ptr->base).base.projection_scale) *
                 (float)2);
      local_28 = local_74.x * local_74.x + local_30;
      local_2c = (float)local_24 * (float)local_24;
      if (local_28 <= local_2c) {
        local_148 = 1.0 - local_28 / local_2c;
        engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                  (g_CDemonRendererPtr2,(CVector3i *)local_ec);
        local_a4 = local_ec._0_4_;
        (&local_a0)[(uint)bVar3 * -2] = *(int *)(local_ec + (uint)bVar3 * -8 + 4);
        local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
             *(float *)(local_ec + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        local_f8 = (float)local_a4 * 0.00390625f;
        local_f4 = (float)local_a0 * 0.00390625f;
        local_f0 = (float)(int)local_9c[0] * 0.00390625f;
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
                             ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,
                              (CVector3f *)local_c8,&local_8c);
          if (0.0 < (local_78 * pCVar2->z + local_80 * pCVar2->x + local_7c * pCVar2->y) * local_14
                    * 1.525902e-05f) {
            this_ptr_00 = (CDemonRenderer *)0x474287;
            pCVar5 = g_CDemonRendererPtr2;
            dVar4 = round((double)(local_148 * (float)65535));
            local_20 = (float)(int)ROUND(dVar4);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,(int)pCVar5);
            local_1c = 0;
            texture = g_LightTextures;
            local_24 = &(this_ptr->base).base.position;
            do {
              texture = texture + 2;
              local_18 = local_1c;
              fVar1 = (float)local_1c * 0.1111111f * (this_ptr->base).max_distance;
              local_114 = (float)(this_ptr->base).base.rotation_matrix.m[0].z;
              local_148 = fVar1 * (float)0.25;
              local_110 = (float)(this_ptr->base).base.rotation_matrix.m[1].z;
              local_108 = local_114 * local_148;
              local_104 = local_110 * local_148;
              local_10c = (float)(this_ptr->base).base.rotation_matrix.m[2].z;
              local_100 = local_10c * local_148;
              local_140 = (float)texture[1].base.count * (float)0.5 *
                          ((fVar1 * (float)18) / (this_ptr->base).base.projection_scale
                          ) * (float)2;
              local_74.z = (float)local_24->x + local_108;
              local_68 = (float)local_24->y + local_104;
              local_64 = (float)local_24->z + local_100;
              if ((float *)(local_ec + 8) != &local_74.z) {
                local_ec._8_4_ = local_74.z;
                local_e0 = local_68;
                local_dc = local_64;
              }
              engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                        (g_CDemonRendererPtr2,(CVector3f *)(local_ec + 8));
              engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                        (g_CDemonRendererPtr2,(float *)local_48);
              engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                        (g_CDemonRendererPtr2,local_48,(CVector3i *)0x0);
              local_9c[2] = 0.0;
              local_9c[0] = local_140;
              local_9c[1] = local_140;
              local_d8.x = (int)ROUND(local_140 * 256.0f);
              local_d8.y = (int)ROUND(local_140 * 256.0f);
              local_d8.z = (int)ROUND(256.0f * 0.0);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_d8);
              local_9c[0] = -local_9c[0];
              local_60.x = (int)ROUND(local_9c[0] * 256.0f);
              local_60.y = (int)ROUND(local_9c[1] * 256.0f);
              local_60.z = (int)ROUND(local_9c[2] * 256.0f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_60);
              local_9c[1] = -local_9c[1];
              local_54.x = (int)ROUND(local_9c[0] * 256.0f);
              local_54.y = (int)ROUND(local_9c[1] * 256.0f);
              local_54.z = (int)ROUND(local_9c[2] * 256.0f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_54);
              local_9c[0] = -local_9c[0];
              local_c8._8_4_ = (uint)ROUND(local_9c[0] * 256.0f);
              local_bc = (int)ROUND(local_9c[1] * 256.0f);
              local_b8 = (int)ROUND(local_9c[2] * 256.0f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,
                         (CVector3i *)(local_c8 + 8));
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr2,texture);
              pCVar5 = g_CDemonRendererPtr2;
              local_13c.base.count = 4;
              local_13c.surface_normal.D = 0;
              local_13c.surface_normal.C = 0;
              local_13c.surface_normal.B = 0;
              local_13c.surface_normal.A = 0;
              local_124 = 0;
              g_CDemonRendererPtr2->vertex_buffer_ptr->u =
                   (float)(*(int *)texture[1].texture_name << 0x10);
              pCVar5->vertex_buffer_ptr->v = (float)(*(int *)(texture[1].texture_name + 4) << 0x10);
              pCVar5->vertex_buffer_ptr->w_recip = local_20;
              pCVar5->vertex_buffer_ptr->light = 9.18341e-41;
              pCVar5->vertex_buffer_ptr->color = 0xffff;
              pCVar5->vertex_buffer_ptr->fog = 9.18341e-41;
              local_120 = 1;
              pCVar5->vertex_buffer_ptr[1].u =
                   (float)(*(int *)(texture[1].texture_name + 8) << 0x10);
              pCVar5->vertex_buffer_ptr[1].v =
                   (float)(*(int *)(texture[1].texture_name + 4) << 0x10);
              pCVar5->vertex_buffer_ptr[1].w_recip = local_20;
              pCVar5->vertex_buffer_ptr[1].light = 9.18341e-41;
              pCVar5->vertex_buffer_ptr[1].color = 0xffff;
              pCVar5->vertex_buffer_ptr[1].fog = 9.18341e-41;
              local_11c = 2;
              pCVar5->vertex_buffer_ptr[2].u =
                   (float)(*(int *)(texture[1].texture_name + 8) << 0x10);
              pCVar5->vertex_buffer_ptr[2].v =
                   (float)(*(int *)(texture[1].texture_name + 0xc) << 0x10);
              pCVar5->vertex_buffer_ptr[2].w_recip = local_20;
              pCVar5->vertex_buffer_ptr[2].light = 9.18341e-41;
              pCVar5->vertex_buffer_ptr[2].color = 0xffff;
              pCVar5->vertex_buffer_ptr[2].fog = 9.18341e-41;
              local_118 = 3;
              pCVar5->vertex_buffer_ptr[3].u = (float)(*(int *)texture[1].texture_name << 0x10);
              pCVar5->vertex_buffer_ptr[3].v =
                   (float)(*(int *)(texture[1].texture_name + 0xc) << 0x10);
              pCVar5->vertex_buffer_ptr[3].w_recip = local_20;
              pCVar5->vertex_buffer_ptr[3].light = 9.18341e-41;
              pCVar5->vertex_buffer_ptr[3].color = 0xffff;
              pCVar5->vertex_buffer_ptr[3].fog = 9.18341e-41;
              engine_drender_cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
                        (pCVar5,&local_13c);
              engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
              local_1c = local_1c + 1;
            } while (local_1c < 9);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
            return;
          }
        }
      }
    }
  }
  return;
}
