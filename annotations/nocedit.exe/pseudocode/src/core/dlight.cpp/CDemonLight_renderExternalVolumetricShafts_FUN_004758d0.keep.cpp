// Name: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0
// Address: 004758d0
// MANUAL RECONSTRUCTION
// Address Range: [[004758d0, 00475fb7] [0060c82c, 0060c848]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(CDemonLight *this_ptr)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar10;
  float fVar12;
  CVector3f *pCVar3;
  float fVar13;
  CMatrix3x3f *this_ptr_01;
  int iVar4;
  float10 fVar6;
  float10 fVar7;
  float10 fVar14;
  float10 fVar15;
  float10 fVar8;
  float10 fVar16;
  float10 fVar9;
  float10 Var10;
  float10 fVar11;
  SMRGLPrimitiveQuadIndex local_160;
  CVector3f local_138;
  CVector3i local_12c;
  CVector3f local_120;
  CVector3f local_108;
  CVector3i local_f0;
  CVector3i local_d8;
  CVector3f local_cc;
  CVector3i local_c0;
  CVector3f local_b4;
  CVector3i local_a8;
  int local_50;
  int local_48;
  int local_24;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  
  if (((this_ptr->volumetric_enabled != 0) &&
      ((float)0.10000000000000001 <= (g_CDemonSetPtr->active_fog).density_multiplier)) &&
     (g_CGamePtr->halo_mode != 0)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0048c760
              (g_CDemonRendererPtr2,&local_f0);
    fVar3 = (float)local_f0.x * 0.00390625f - (this_ptr->base).base.position.f.x;
    fVar4 = (float)local_f0.y * 0.00390625f - (this_ptr->base).base.position.f.y;
    fVar5 = (float)local_f0.z * 0.00390625f - (this_ptr->base).base.position.f.z;
    if (0.0 < SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4)) {
      local_120.x = 0.0;
      local_120.y = 0.0;
      local_120.z = 1.0;
      this_ptr_01 = &(this_ptr->base).base.rotation_matrix;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(this_ptr_01,&local_108,&local_120);
      engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0048c780
                (g_CDemonRendererPtr2,&local_138);
      local_138.x = local_138.x - (this_ptr->base).base.position.f.x;
      local_138.y = local_138.y - (this_ptr->base).base.position.f.y;
      local_138.z = local_138.z - (this_ptr->base).base.position.f.z;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (this_ptr_01,&local_cc,&local_138);
      local_138 = *pCVar3;
      fVar3 = ((local_138.z * (float)18) / (this_ptr->base).base.focal_length) *
              (float)2;
      fVar2 = local_138.x * local_138.x + local_138.y * local_138.y;
      fVar3 = fVar3 * fVar3;
      if ((fVar3 <= fVar2) || (1.0 - fVar2 / fVar3 <= (float)0.5)) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&(this_ptr->base).base.position.f);
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                  (&(this_ptr->base).base.rotation_matrix,&local_b4);
        local_50 = 1;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,&local_b4,(CVector3f *)0x0);
        do {
          fVar6 = (float10)local_50 *
                  ((float10)18 / (float10)(this_ptr->base).base.focal_length) *
                  (float10)0.0625;
          Var10 = fpatan(fVar6,(float10)1);
          fVar7 = (float10)fcos(Var10);
          local_48 = 0;
          do {
            fVar14 = (float10)local_48 * (float10)0.0625f * (float10)3.1415926535000001 *
                     (float10)2;
            fVar15 = (float10)fsin(fVar14);
            fVar11 = (float10)(local_48 + 1) * (float10)0.0625f * (float10)3.1415926535000001 *
                     (float10)2;
            fVar8 = (float10)fsin(fVar11);
            fVar14 = (float10)fcos(fVar14);
            fVar16 = (float10)fcos(fVar11);
            fVar9 = (float10)(float)fVar6;
            fVar3 = (float)(fVar14 * fVar9);
            fVar5 = (float)(this_ptr->shadow_map_height - (this_ptr->shadow_map_height >> 0x1f) >> 1
                           );
            fVar4 = (float)(fVar15 * fVar9);
            fVar13 = (float)(this_ptr->shadow_map_width - (this_ptr->shadow_map_width >> 0x1f) >> 1)
            ;
            fVar5 = (float)this_ptr->shadow_depth_buffer
                           [(int)ROUND(ROUND(fVar5 - fVar5 * fVar3)) * this_ptr->shadow_map_width +
                            (int)ROUND(ROUND(fVar13 * fVar4 + fVar13))] * (float)0.00390625;
            local_24 = 0;
            do {
              fVar13 = (this_ptr->base).max_distance;
              fVar12 = (float)local_24 * (float)fVar7 * fVar13 * 0.25f;
              fVar10 = (float)(local_24 + 1) * (float)fVar7 * fVar13 * 0.25f;
              iVar1 = (int)ROUND(this_ptr->volumetric_intensity *
                                 (fVar13 - fVar12) * (1.0 / fVar13) * (float)512 *
                                 (float)((float10)1 - fVar6));
              iVar2 = (int)ROUND((float)((float10)1 - fVar6) *
                                 (fVar13 - fVar10) * (1.0 / fVar13) * (float)512 *
                                 this_ptr->volumetric_intensity);
              fVar13 = fVar5;
              if (fVar12 < fVar5) {
                fVar13 = fVar12;
              }
              local_12c.x = (int)ROUND(fVar13 * fVar4 * 256.0f);
              local_12c.y = (int)ROUND(fVar13 * fVar3 * 256.0f);
              local_12c.z = (int)ROUND(fVar13 * 256.0f);
              engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_12c);
              fVar13 = fVar5;
              if (fVar12 < fVar5) {
                fVar13 = fVar12;
              }
              local_a8.x = (int)ROUND(fVar13 * (float)(fVar8 * fVar9) * 256.0f);
              local_a8.y = (int)ROUND(fVar13 * (float)(fVar9 * fVar16) * 256.0f);
              local_a8.z = (int)ROUND(fVar13 * 256.0f);
              engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_a8);
              fVar13 = fVar5;
              if (fVar10 < fVar5) {
                fVar13 = fVar10;
              }
              local_d8.x = (int)ROUND(fVar13 * (float)(fVar8 * fVar9) * 256.0f);
              local_d8.y = (int)ROUND(fVar13 * (float)(fVar9 * fVar16) * 256.0f);
              local_d8.z = (int)ROUND(fVar13 * 256.0f);
              engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_d8);
              fVar13 = fVar5;
              if (fVar10 < fVar5) {
                fVar13 = fVar10;
              }
              local_c0.x = (int)ROUND(fVar13 * fVar4 * 256.0f);
              local_c0.y = (int)ROUND(fVar13 * fVar3 * 256.0f);
              local_c0.z = (int)ROUND(fVar13 * 256.0f);
              engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_c0);
              this_ptr_00 = g_CDemonRendererPtr2;
              g_CDemonRendererPtr2->vertex_buffer_ptr->r = iVar1;
              this_ptr_00->vertex_buffer_ptr[1].r = iVar1;
              this_ptr_00->vertex_buffer_ptr[2].r = iVar2;
              this_ptr_00->vertex_buffer_ptr[3].r = iVar2;
              local_160.base.base.count = 4;
              local_160.vertices[2] = 1;
              local_160.base.surface_normal.D.i = 0;
              local_160.base.surface_normal.C.i = 0;
              local_160.base.surface_normal.B.i = 0;
              local_160.base.surface_normal.A.i = 0;
              iVar4 = local_24 + 1;
              local_160.vertices[1] = 2;
              local_160.vertices[3] = 0;
              local_160.vertices[0] = 3;
              engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                        (this_ptr_00,&local_160.base,
                         core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440);
              local_24 = iVar4;
            } while (iVar4 < 4);
            local_48 = local_48 + 1;
          } while (local_48 < 0x10);
          local_50 = local_50 + 1;
        } while (local_50 < 0x10);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
        return;
      }
    }
  }
  return;
}
