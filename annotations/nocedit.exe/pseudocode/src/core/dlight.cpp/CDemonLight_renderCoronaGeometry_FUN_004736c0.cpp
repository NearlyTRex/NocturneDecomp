// Name: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
// Address: 004736c0
// Address Range: [[004736c0, 004739cc] [004739f3, 00473a1d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight *this_ptr)

{
  CDemonRenderer *pCVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  byte local_a8 [8];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  uint local_84;
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
            (g_CDemonRendererPtr2,(CVector3f *)&(this_ptr->base).base.position);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_4c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&local_4c,(CVector3i *)0x0);
  local_a8._0_4_ =
       ((float)18 / (this_ptr->base).base.projection_scale) *
       (this_ptr->base).max_distance;
  iVar6 = 0;
  local_38 = (this_ptr->base).max_distance;
  iVar5 = 0;
  do {
    fVar7 = (float10)iVar6 * (float10)6.2831853070000001 * (float10)0.0625;
    fVar8 = (float10)fcos(fVar7);
    fVar7 = (float10)fsin(fVar7);
    local_40 = (float)(fVar8 * (float10)(float)local_a8._0_4_);
    local_3c = (float)(fVar7 * (float10)(float)local_a8._0_4_);
    local_64.x = (int)ROUND(local_40 * 256.0f);
    local_64.y = (int)ROUND(local_3c * 256.0f);
    local_64.z = (int)ROUND(local_38 * 256.0f);
    local_14 = iVar6;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar5),&local_64);
    pCVar1 = g_CDemonRendererPtr2;
    iVar6 = iVar6 + 1;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->light + iVar5) = 0;
    iVar5 = iVar5 + 0x30;
  } while (iVar6 < 0x10);
  local_7c.x = (int)ROUND(FLOAT_026a72d8 * 256.0f);
  local_7c.y = (int)ROUND(FLOAT_026a72dc * 256.0f);
  local_7c.z = (int)ROUND(FLOAT_026a72e0 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[0x10].projected_vertex,&local_7c);
  pCVar1 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr[0x10].light = 9.18341e-41;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(pCVar1,1);
  pfVar2 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr2,local_58);
  local_34[0].x = *pfVar2 - (float)(this_ptr->base).base.position.x;
  local_34[0].y = pfVar2[1] - (float)(this_ptr->base).base.position.y;
  bVar4 = false;
  local_34[0].z = pfVar2[2] - (float)(this_ptr->base).base.position.z;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_70,local_34);
  if (local_34 != pCVar3) {
    local_34[0].x = pCVar3->x;
    local_34[0].y = pCVar3->y;
    local_34[0].z = pCVar3->z;
  }
  local_34[0].x = (this_ptr->base).base.projection_scale * (float)0.055555555555555601 * local_34[0].x;
  local_34[0].y = (float)0.055555555555555601 * (this_ptr->base).base.projection_scale * local_34[0].y;
  if ((((local_34[0].x < local_34[0].z) && (local_18 = -local_34[0].z, local_18 < local_34[0].x)) &&
      (local_34[0].y < local_34[0].z)) &&
     ((local_18 < local_34[0].y && (local_34[0].z < (this_ptr->base).max_distance)))) {
    bVar4 = true;
  }
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 3;
  if (bVar4) {
    core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  }
  else {
    local_84 = 0x10;
    iVar5 = 0;
    do {
      if (iVar5 == 0xf) {
        local_8c = 0;
      }
      else {
        local_8c = iVar5 + 1;
      }
      iVar6 = iVar5 + 1;
      local_88 = iVar5;
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)(local_a8 + 4),
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
      iVar5 = iVar6;
    } while (iVar6 < 0x10);
  }
  local_9c = 0;
  local_98 = 0;
  local_94 = 0xffff;
  dVar9 = round
                    ((double)((this_ptr->base).max_distance * (float)256));
  local_94 = (int)ROUND(dVar9);
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    local_90 = 0;
    local_8c = iVar5;
    local_88 = iVar6;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
              (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)local_a8,
               core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
    iVar5 = iVar6;
  } while (iVar6 < 0xe);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(this_ptr);
  return;
}
