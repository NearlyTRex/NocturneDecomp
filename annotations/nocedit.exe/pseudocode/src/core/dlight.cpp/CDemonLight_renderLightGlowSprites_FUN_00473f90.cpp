// Name: core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
// Address: 00473f90
// Address Range: [[00473f90, 00474719] [0060c868, 0060c884]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Removing unreachable block (ram,0x00474702) */

void __cdecl core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight *this_ptr)

{
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *pCVar3;
  int iVar7;
  CVector3f *pCVar8;
  SMRGLTextureBasic *texture;
  byte bVar4;
  int aiStackY_10d4 [992];
  float fVar9;
  SMRGLPrimitiveQuadIndex local_138;
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
  CVector3f local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  UVector3 *local_20;
  int local_1c;
  int local_18;
  float local_14;
  CDemonRenderer *this_ptr_00;
  float fVar1;
  float fVar2;
  
  if (this_ptr->volumetric_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr2,&local_74);
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
      fVar3 = ((local_74.z * (float)18) / (this_ptr->base).base.focal_length) *
              (float)2;
      fVar9 = local_74.x * local_74.x + local_74.y * local_74.y;
      fVar3 = fVar3 * fVar3;
      if (fVar9 <= fVar3) {
        fVar1 = fVar9 / fVar3;
        fVar9 = 1.0 - fVar1;
        engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                  (g_CDemonRendererPtr2,&local_ec);
        fVar3 = (float)local_ec.x * 0.00390625f - (this_ptr->base).base.position.f.x;
        fVar4 = (float)local_ec.y * 0.00390625f - (this_ptr->base).base.position.f.y;
        fVar5 = (float)local_ec.z * 0.00390625f - (this_ptr->base).base.position.f.z;
        fVar2 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
        if (0.0 < fVar2) {
          fVar6 = 1.0 / fVar2;
          iVar7 = 0xffff - g_PerspectiveReciprocal;
          local_8c.x = 0.0;
          local_8c.y = 0.0;
          local_8c.z = 1.0;
          pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&(this_ptr->base).base.rotation_matrix,&local_c8,&local_8c);
          if (0.0 < (fVar5 * fVar6 * pCVar8->z +
                    fVar3 * fVar6 * pCVar8->x + fVar4 * fVar6 * pCVar8->y) * (float)iVar7 *
                    1.525902e-05f) {
            iVar7 = (int)ROUND(ROUND(fVar9 * (float)65535));
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
            texture = g_LightTextures;
            do {
              texture = texture + 2;
              fVar9 = 0.1111111f * 0.0 * (this_ptr->base).max_distance;
              fVar3 = fVar9 * (float)0.25;
              fVar9 = (float)texture[1].base.count * (float)0.5 *
                      ((fVar9 * (float)18) / (this_ptr->base).base.focal_length) *
                      (float)2;
              local_68.x = (this_ptr->base).base.position.f.x +
                           (this_ptr->base).base.rotation_matrix.m[0].z * fVar3;
              local_68.y = (this_ptr->base).base.position.f.y +
                           (this_ptr->base).base.rotation_matrix.m[1].z * fVar3;
              local_68.z = (this_ptr->base).base.position.f.z +
                           (this_ptr->base).base.rotation_matrix.m[2].z * fVar3;
              if (&local_e0 != &local_68) {
                local_e0.x = local_68.x;
                local_e0.y = local_68.y;
                local_e0.z = local_68.z;
              }
              engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                        (g_CDemonRendererPtr2,&local_e0);
              engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                        (g_CDemonRendererPtr2,&local_44.x);
              engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                        (g_CDemonRendererPtr2,&local_44,(CVector3f *)0x0);
              local_d4.x = (int)ROUND(fVar9 * 256.0f);
              local_d4.y = (int)ROUND(fVar9 * 256.0f);
              local_d4.z = (int)ROUND(256.0f * 0.0);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_d4);
              local_98 = -fVar9;
              local_5c.x = (int)ROUND(local_98 * 256.0f);
              local_5c.y = (int)ROUND(fVar9 * 256.0f);
              local_5c.z = (int)ROUND(256.0f * 0.0);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_5c);
              local_94 = -fVar9;
              local_50.x = (int)ROUND(local_98 * 256.0f);
              local_50.y = (int)ROUND(local_94 * 256.0f);
              local_50.z = (int)ROUND(256.0f * 0.0);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_50);
              local_98 = -local_98;
              local_bc.x = (int)ROUND(local_98 * 256.0f);
              local_bc.y = (int)ROUND(local_94 * 256.0f);
              local_bc.z = (int)ROUND(256.0f * 0.0);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_bc);
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr2,texture);
              this_ptr_00 = g_CDemonRendererPtr2;
              local_138.base.base.count = 4;
              local_138.base.surface_normal.D.i = 0;
              local_138.base.surface_normal.C.i = 0;
              local_138.base.surface_normal.B.i = 0;
              local_138.base.surface_normal.A.i = 0;
              local_138.vertices[0] = 0;
              g_CDemonRendererPtr2->vertex_buffer_ptr->u = *(int *)texture[1].texture_name << 0x10;
              this_ptr_00->vertex_buffer_ptr->v = *(int *)(texture[1].texture_name + 4) << 0x10;
              this_ptr_00->vertex_buffer_ptr->a = iVar7;
              this_ptr_00->vertex_buffer_ptr->r = 0xffff;
              this_ptr_00->vertex_buffer_ptr->g = 0xffff;
              this_ptr_00->vertex_buffer_ptr->b = 0xffff;
              local_138.vertices[1] = 1;
              this_ptr_00->vertex_buffer_ptr[1].u = *(int *)(texture[1].texture_name + 8) << 0x10;
              this_ptr_00->vertex_buffer_ptr[1].v = *(int *)(texture[1].texture_name + 4) << 0x10;
              this_ptr_00->vertex_buffer_ptr[1].a = iVar7;
              this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
              this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
              this_ptr_00->vertex_buffer_ptr[1].b = 0xffff;
              local_138.vertices[2] = 2;
              this_ptr_00->vertex_buffer_ptr[2].u = *(int *)(texture[1].texture_name + 8) << 0x10;
              this_ptr_00->vertex_buffer_ptr[2].v = *(int *)(texture[1].texture_name + 0xc) << 0x10;
              this_ptr_00->vertex_buffer_ptr[2].a = iVar7;
              this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
              this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
              this_ptr_00->vertex_buffer_ptr[2].b = 0xffff;
              local_138.vertices[3] = 3;
              this_ptr_00->vertex_buffer_ptr[3].u = *(int *)texture[1].texture_name << 0x10;
              this_ptr_00->vertex_buffer_ptr[3].v = *(int *)(texture[1].texture_name + 0xc) << 0x10;
              this_ptr_00->vertex_buffer_ptr[3].a = iVar7;
              this_ptr_00->vertex_buffer_ptr[3].r = 0xffff;
              this_ptr_00->vertex_buffer_ptr[3].g = 0xffff;
              this_ptr_00->vertex_buffer_ptr[3].b = 0xffff;
              engine_drender_cpp_CDemonRenderer_renderOverlayDirect_FUN_0048bf10
                        (this_ptr_00,&local_138.base);
              engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
            } while( true );
          }
        }
      }
    }
  }
  return;
}
