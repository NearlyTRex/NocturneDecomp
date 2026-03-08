// Name: core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
// Address: 00473f90
// Address Range: [[00473f90, 004746e3]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  CVector3f *pCVar3;
  SMRGLTextureBasic *texture;
  byte bVar4;
  int aiStackY_10d4 [992];
  SMRGLHeaderPrimitive local_138;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  CVector3i local_ec;
  CVector3f local_e0;
  CVector3i local_d4;
  CVector3f local_c8;
  CVector3i local_bc;
  CVector3f local_b0;
  int local_a4;
  int local_a0 [2];
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  CVector3f local_74;
  CVector3f local_68;
  CVector3i local_5c;
  CVector3i local_50;
  CVector3i local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  UVector3 *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar4 = 0;
  if (this_ptr->volumetric_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr2,&local_74.x);
    local_74.x = local_74.x - (this_ptr->base).base.position.f.x;
    local_74.y = local_74.y - (this_ptr->base).base.position.f.y;
    local_74.z = local_74.z - (this_ptr->base).base.position.f.z;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&(this_ptr->base).base.rotation_matrix,&local_b0,&local_74);
    if (&local_74 != pCVar3) {
      local_74.x = pCVar3->x;
      local_74.y = pCVar3->y;
      local_74.z = pCVar3->z;
    }
    if (local_74.z <= (this_ptr->base).max_distance) {
      local_30 = local_74.y * local_74.y;
      local_24 = ((local_74.z * (float)18) / (this_ptr->base).base.focal_length) *
                 (float)2;
      local_28 = local_74.x * local_74.x + local_30;
      local_2c = local_24 * local_24;
      if (local_28 <= local_2c) {
        fVar1 = local_28 / local_2c;
        engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                  (g_CDemonRendererPtr2,&local_ec);
        local_a4 = local_ec.x;
        local_a0[(uint)bVar4 * -2] = *(int *)((int)&local_ec + (uint)bVar4 * -8 + 4);
        local_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             *(int *)((int)&local_ec + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        local_f8 = (float)local_a4 * 0.00390625f;
        local_f4 = (float)local_a0[0] * 0.00390625f;
        local_f0 = (float)local_a0[1] * 0.00390625f;
        local_80 = local_f8 - (this_ptr->base).base.position.f.x;
        local_7c = local_f4 - (this_ptr->base).base.position.f.y;
        local_78 = local_f0 - (this_ptr->base).base.position.f.z;
        fVar2 = SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
        if (0.0 < fVar2) {
          fVar2 = 1.0 / fVar2;
          local_80 = local_80 * fVar2;
          local_7c = local_7c * fVar2;
          local_78 = local_78 * fVar2;
          local_8c.x = 0.0;
          local_8c.y = 0.0;
          local_8c.z = 1.0;
          local_14 = (float)(0xffff - (int)g_PerspectiveReciprocal);
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&(this_ptr->base).base.rotation_matrix,&local_c8,&local_8c);
          if (0.0 < (local_78 * pCVar3->z + local_80 * pCVar3->x + local_7c * pCVar3->y) * local_14
                    * 1.525902e-05f) {
            local_1c = (int)ROUND(ROUND((1.0 - fVar1) * (float)65535));
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
            local_18 = 0;
            texture = g_LightTextures;
            local_20 = &(this_ptr->base).base.position;
            do {
              texture = texture + 2;
              local_14 = (float)local_18;
              fVar1 = (float)local_18 * 0.1111111f * (this_ptr->base).max_distance;
              local_110 = (this_ptr->base).base.rotation_matrix.m[0].z;
              local_fc = fVar1 * (float)0.25;
              local_10c = (this_ptr->base).base.rotation_matrix.m[1].z;
              local_104 = local_110 * local_fc;
              local_100 = local_10c * local_fc;
              local_108 = (this_ptr->base).base.rotation_matrix.m[2].z;
              local_fc = local_108 * local_fc;
              fVar1 = (float)texture[1].base.count * (float)0.5 *
                      ((fVar1 * (float)18) / (this_ptr->base).base.focal_length) *
                      (float)2;
              local_68.x = (local_20->f).x + local_104;
              local_68.y = (local_20->f).y + local_100;
              local_68.z = (local_20->f).z + local_fc;
              if (&local_e0 != &local_68) {
                local_e0.x = local_68.x;
                local_e0.y = local_68.y;
                local_e0.z = local_68.z;
              }
              engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                        (g_CDemonRendererPtr2,&local_e0);
              engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                        (g_CDemonRendererPtr2,(float *)&local_44);
              engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                        (g_CDemonRendererPtr2,&local_44,(CVector3i *)0x0);
              local_90 = 0.0;
              local_d4.x = (int)ROUND(fVar1 * 256.0f);
              local_d4.y = (int)ROUND(fVar1 * 256.0f);
              local_d4.z = (int)ROUND(256.0f * 0.0);
              local_98 = fVar1;
              local_94 = fVar1;
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_d4);
              local_98 = -local_98;
              local_5c.x = (int)ROUND(local_98 * 256.0f);
              local_5c.y = (int)ROUND(local_94 * 256.0f);
              local_5c.z = (int)ROUND(local_90 * 256.0f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_5c);
              local_94 = -local_94;
              local_50.x = (int)ROUND(local_98 * 256.0f);
              local_50.y = (int)ROUND(local_94 * 256.0f);
              local_50.z = (int)ROUND(local_90 * 256.0f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_50);
              local_98 = -local_98;
              local_bc.x = (int)ROUND(local_98 * 256.0f);
              local_bc.y = (int)ROUND(local_94 * 256.0f);
              local_bc.z = (int)ROUND(local_90 * 256.0f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_bc);
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr2,texture);
              this_ptr_00 = g_CDemonRendererPtr2;
              local_138.base.count = 4;
              local_138.surface_normal.D = 0;
              local_138.surface_normal.C = 0;
              local_138.surface_normal.B = 0;
              local_138.surface_normal.A = 0;
              local_120 = 0;
              g_CDemonRendererPtr2->vertex_buffer_ptr->u = *(int *)texture[1].texture_name << 0x10;
              this_ptr_00->vertex_buffer_ptr->v = *(int *)(texture[1].texture_name + 4) << 0x10;
              this_ptr_00->vertex_buffer_ptr->a = local_1c;
              this_ptr_00->vertex_buffer_ptr->r = 0xffff;
              this_ptr_00->vertex_buffer_ptr->g = 0xffff;
              this_ptr_00->vertex_buffer_ptr->b = 0xffff;
              local_11c = 1;
              this_ptr_00->vertex_buffer_ptr[1].u = *(int *)(texture[1].texture_name + 8) << 0x10;
              this_ptr_00->vertex_buffer_ptr[1].v = *(int *)(texture[1].texture_name + 4) << 0x10;
              this_ptr_00->vertex_buffer_ptr[1].a = local_1c;
              this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
              this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
              this_ptr_00->vertex_buffer_ptr[1].b = 0xffff;
              local_118 = 2;
              this_ptr_00->vertex_buffer_ptr[2].u = *(int *)(texture[1].texture_name + 8) << 0x10;
              this_ptr_00->vertex_buffer_ptr[2].v = *(int *)(texture[1].texture_name + 0xc) << 0x10;
              this_ptr_00->vertex_buffer_ptr[2].a = local_1c;
              this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
              this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
              this_ptr_00->vertex_buffer_ptr[2].b = 0xffff;
              local_114 = 3;
              this_ptr_00->vertex_buffer_ptr[3].u = *(int *)texture[1].texture_name << 0x10;
              this_ptr_00->vertex_buffer_ptr[3].v = *(int *)(texture[1].texture_name + 0xc) << 0x10;
              this_ptr_00->vertex_buffer_ptr[3].a = local_1c;
              this_ptr_00->vertex_buffer_ptr[3].r = 0xffff;
              this_ptr_00->vertex_buffer_ptr[3].g = 0xffff;
              this_ptr_00->vertex_buffer_ptr[3].b = 0xffff;
              engine_drender_cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
                        (this_ptr_00,&local_138);
              engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
              local_18 = local_18 + 1;
            } while (local_18 < 9);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
            return;
          }
        }
      }
    }
  }
  return;
}
