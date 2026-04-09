// Name: core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210
// Address: 00475210
// Address Range: [[00475210, 004758c3]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight *this_ptr)

{
  int iVar1;
  int iVar3;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  CDemonRenderer *this_ptr_00;
  float fVar14;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar15;
  float10 fVar5;
  float10 fVar6;
  float10 fVar16;
  float10 fVar7;
  unkbyte10 Var8;
  float10 fVar9;
  int iVar17;
  SMRGLPrimitiveQuadIndex local_e0;
  CVector3i local_b8;
  CVector3i local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3i local_88;
  CVector3i local_7c [2];
  int local_60;
  int local_58;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  
  if (this_ptr->volumetric_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&(this_ptr->base).base.position.f);
    core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
              (&(this_ptr->base).base.rotation_matrix,&local_94);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,(CVector3i *)&local_94,(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,g_LightTextures);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    iVar17 = 1;
    do {
      fVar3 = (float10)iVar17 *
              ((float10)18 / (float10)(this_ptr->base).base.focal_length) *
              (float10)0.0625;
      Var8 = fpatan(fVar3,(float10)1);
      fVar4 = (float10)fcos(Var8);
      local_4c = 0;
      do {
        fVar15 = (float10)local_4c * (float10)0.0625f * (float10)3.1415926535000001 *
                 (float10)2;
        fVar5 = (float10)fsin(fVar15);
        fVar9 = (float10)(local_4c + 1) * (float10)0.0625f * (float10)3.1415926535000001 *
                (float10)2;
        fVar6 = (float10)fsin(fVar9);
        fVar15 = (float10)fcos(fVar15);
        fVar16 = (float10)fcos(fVar9);
        fVar7 = (float10)(float)fVar3;
        fVar8 = (float)(fVar15 * fVar7);
        fVar11 = (float)(this_ptr->shadow_map_height / 2);
        fVar10 = (float)(fVar5 * fVar7);
        fVar14 = (float)(this_ptr->shadow_map_width / 2);
        fVar11 = (float)this_ptr->shadow_depth_buffer
                        [(int)ROUND(ROUND(fVar11 - fVar11 * fVar8)) * this_ptr->shadow_map_width +
                         (int)ROUND(ROUND(fVar14 * fVar10 + fVar14))] * (float)0.00390625;
        iVar2 = 0;
        do {
          fVar14 = (this_ptr->base).max_distance;
          fVar13 = (float)iVar2 * (float)fVar4 * fVar14 * 0.25f;
          fVar12 = (float)(iVar2 + 1) * (float)fVar4 * fVar14 * 0.25f;
          iVar1 = (int)ROUND(ROUND((fVar14 - fVar13) * (1.0 / fVar14) * (float)1024));
          iVar3 = (int)ROUND(ROUND((fVar14 - fVar12) * (1.0 / fVar14) * (float)1024));
          fVar14 = fVar11;
          if (fVar13 < fVar11) {
            fVar14 = fVar13;
          }
          local_b8.x = (int)ROUND(fVar14 * fVar10 * 256.0f);
          local_b8.y = (int)ROUND(fVar14 * fVar8 * 256.0f);
          local_b8.z = (int)ROUND(fVar14 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_b8);
          fVar14 = fVar11;
          if (fVar13 < fVar11) {
            fVar14 = fVar13;
          }
          local_ac.x = (int)ROUND(fVar14 * (float)(fVar6 * fVar7) * 256.0f);
          local_ac.y = (int)ROUND(fVar14 * (float)(fVar16 * fVar7) * 256.0f);
          local_ac.z = (int)ROUND(fVar14 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_ac);
          fVar14 = fVar11;
          if (fVar12 < fVar11) {
            fVar14 = fVar12;
          }
          local_7c[0].x = (int)ROUND(fVar14 * (float)(fVar6 * fVar7) * 256.0f);
          local_7c[0].y = (int)ROUND(fVar14 * (float)(fVar16 * fVar7) * 256.0f);
          local_7c[0].z = (int)ROUND(fVar14 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,local_7c);
          fVar14 = fVar11;
          if (fVar12 < fVar11) {
            fVar14 = fVar12;
          }
          local_88.x = (int)ROUND(fVar14 * fVar10 * 256.0f);
          local_88.y = (int)ROUND(fVar14 * fVar8 * 256.0f);
          local_88.z = (int)ROUND(fVar14 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_88);
          this_ptr_00 = g_CDemonRendererPtr2;
          g_CDemonRendererPtr2->vertex_buffer_ptr->a = iVar1;
          this_ptr_00->vertex_buffer_ptr->b = 0xffff;
          this_ptr_00->vertex_buffer_ptr->g = 0xffff;
          this_ptr_00->vertex_buffer_ptr->r = 0xffff;
          this_ptr_00->vertex_buffer_ptr->u = 0xf80000;
          this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
          this_ptr_00->vertex_buffer_ptr[1].a = iVar1;
          this_ptr_00->vertex_buffer_ptr[1].b = 0xffff;
          this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
          this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
          this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
          this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
          this_ptr_00->vertex_buffer_ptr[2].a = iVar3;
          this_ptr_00->vertex_buffer_ptr[2].b = 0xffff;
          this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
          this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
          this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
          this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
          this_ptr_00->vertex_buffer_ptr[3].a = iVar3;
          this_ptr_00->vertex_buffer_ptr[3].b = 0xffff;
          this_ptr_00->vertex_buffer_ptr[3].g = 0xffff;
          this_ptr_00->vertex_buffer_ptr[3].r = 0xffff;
          this_ptr_00->vertex_buffer_ptr[3].u = 0xf80000;
          iVar2 = iVar2 + 1;
          this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
          local_e0.base.surface_normal.D = 0;
          local_e0.base.surface_normal.C = 0;
          local_e0.base.base.count = 4;
          local_e0.base.surface_normal.B = 0;
          local_e0.vertices[1] = 1;
          local_e0.base.surface_normal.A = 0;
          local_e0.vertices[0] = 0;
          local_e0.vertices[3] = 3;
          local_e0.vertices[2] = 2;
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (this_ptr_00,&local_e0.base);
        } while (iVar2 < 4);
        local_4c = local_4c + 1;
      } while (local_4c < 0x10);
      iVar17 = iVar17 + 1;
    } while (iVar17 < 0x10);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
    return;
  }
  return;
}
