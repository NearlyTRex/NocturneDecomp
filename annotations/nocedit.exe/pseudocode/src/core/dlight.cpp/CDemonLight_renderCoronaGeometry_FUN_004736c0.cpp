// Name: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
// Address: 004736c0
// Address Range: [[004736c0, 004739cc] [004739f3, 00473a1d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *pCVar4;
  float *pfVar5;
  CVector3f *pCVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  SMRGLHeaderPrimitive local_a4;
  int local_8c;
  int local_88;
  int local_84;
  CVector3i local_7c;
  CVector3f local_70;
  CVector3i local_64;
  float local_58 [3];
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34 [2];
  float local_18;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->base).base.position.f);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            (&(this_ptr->base).base.rotation_matrix,&local_4c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&local_4c,(CVector3i *)0x0);
  fVar1 = (this_ptr->base).base.focal_length;
  fVar3 = (float)18;
  fVar2 = (this_ptr->base).max_distance;
  iVar9 = 0;
  local_38 = (this_ptr->base).max_distance;
  iVar8 = 0;
  do {
    fVar10 = (float10)iVar9 * (float10)6.2831853070000001 * (float10)0.0625;
    fVar11 = (float10)fcos(fVar10);
    fVar10 = (float10)fsin(fVar10);
    fVar12 = (float10)((fVar3 / fVar1) * fVar2);
    local_40 = (float)(fVar11 * fVar12);
    local_3c = (float)(fVar10 * fVar12);
    local_64.x = (int)ROUND(local_40 * 256.0f);
    local_64.y = (int)ROUND(local_3c * 256.0f);
    local_64.z = (int)ROUND(local_38 * 256.0f);
    local_14 = iVar9;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar8),&local_64);
    pCVar4 = g_CDemonRendererPtr2;
    iVar9 = iVar9 + 1;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar8) = 0;
    iVar8 = iVar8 + 0x30;
  } while (iVar9 < 0x10);
  local_7c.x = (int)ROUND(FLOAT_026a72d8 * 256.0f);
  local_7c.y = (int)ROUND(FLOAT_026a72dc * 256.0f);
  local_7c.z = (int)ROUND(FLOAT_026a72e0 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar4->vertex_buffer_ptr[0x10].projected_vertex,&local_7c);
  pCVar4 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr[0x10].r = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(pCVar4,1);
  pfVar5 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr2,local_58);
  local_34[0].x = *pfVar5 - (this_ptr->base).base.position.f.x;
  local_34[0].y = pfVar5[1] - (this_ptr->base).base.position.f.y;
  bVar7 = false;
  local_34[0].z = pfVar5[2] - (this_ptr->base).base.position.f.z;
  pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     (&(this_ptr->base).base.rotation_matrix,&local_70,local_34);
  if (local_34 != pCVar6) {
    local_34[0].x = pCVar6->x;
    local_34[0].y = pCVar6->y;
    local_34[0].z = pCVar6->z;
  }
  local_34[0].x = (this_ptr->base).base.focal_length * (float)0.055555555555555601 * local_34[0].x;
  local_34[0].y = (float)0.055555555555555601 * (this_ptr->base).base.focal_length * local_34[0].y;
  if ((((local_34[0].x < local_34[0].z) && (local_18 = -local_34[0].z, local_18 < local_34[0].x)) &&
      (local_34[0].y < local_34[0].z)) &&
     ((local_18 < local_34[0].y && (local_34[0].z < (this_ptr->base).max_distance)))) {
    bVar7 = true;
  }
  local_a4.surface_normal.D = 0;
  local_a4.surface_normal.C = 0;
  local_a4.surface_normal.B = 0;
  local_a4.surface_normal.A = 0;
  local_a4.base.count = 3;
  if (bVar7) {
    core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  }
  else {
    local_84 = 0x10;
    local_88 = 0;
    do {
      if (local_88 == 0xf) {
        local_8c = 0;
      }
      else {
        local_8c = local_88 + 1;
      }
      iVar8 = local_88 + 1;
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (g_CDemonRendererPtr2,&local_a4,
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
      local_88 = iVar8;
    } while (iVar8 < 0x10);
  }
  local_a4.surface_normal.A = 0;
  local_a4.surface_normal.B = 0;
  local_a4.surface_normal.C = 0xffff;
  local_a4.surface_normal.D =
       (int)ROUND(ROUND((this_ptr->base).max_distance * (float)256));
  iVar8 = 0;
  do {
    iVar9 = iVar8 + 1;
    local_8c = 0;
    local_88 = iVar8;
    local_84 = iVar9;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
              (g_CDemonRendererPtr2,&local_a4,
               core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
    iVar8 = iVar9;
  } while (iVar9 < 0xe);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(this_ptr);
  return;
}
