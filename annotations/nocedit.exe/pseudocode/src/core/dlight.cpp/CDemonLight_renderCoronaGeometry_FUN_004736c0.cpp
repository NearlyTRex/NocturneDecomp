// Name: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
// Address: 004736c0
// Address Range: [[004736c0, 00473a1d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight *this_ptr)

{
  float fVar4;
  CDemonRenderer *this_ptr_00;
  float *pfVar5;
  CVector3f *pCVar6;
  bool bVar7;
  int iVar8;
  int iVar5;
  int iVar6;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar7;
  float10 fVar12;
  float fVar8;
  SMRGLPrimitiveTriangleIndex local_a4;
  CVector3i local_7c;
  CVector3f local_70;
  CVector3i local_64;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34 [2];
  float local_18;
  int local_14;
  float fVar2;
  float fVar1;
  CDemonRenderer *pCVar4;
  float fVar3;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->base).base.position.f);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            (&(this_ptr->base).base.rotation_matrix,&local_4c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&local_4c,(CVector3i *)0x0);
  fVar1 = (this_ptr->base).base.focal_length;
  fVar3 = (float)18;
  fVar2 = (this_ptr->base).max_distance;
  fVar8 = (fVar3 / fVar1) * fVar2;
  iVar9 = 0;
  fVar4 = (this_ptr->base).max_distance;
  iVar5 = 0;
  do {
    fVar10 = (float10)iVar9 * (float10)6.2831853070000001 * (float10)0.0625;
    fVar11 = (float10)fcos(fVar10);
    fVar7 = (float10)fsin(fVar10);
    fVar12 = (float10)fVar8;
    local_64.x = (int)ROUND((float)(fVar11 * fVar12) * 256.0f);
    local_64.y = (int)ROUND((float)(fVar7 * fVar12) * 256.0f);
    local_64.z = (int)ROUND(fVar4 * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar5),&local_64);
    pCVar4 = g_CDemonRendererPtr2;
    iVar9 = iVar9 + 1;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar5) = 0;
    iVar5 = iVar5 + 0x30;
  } while (iVar9 < 0x10);
  local_7c.x = (int)ROUND(CVector3f_026a72d8.x * 256.0f);
  local_7c.y = (int)ROUND(CVector3f_026a72d8.y * 256.0f);
  local_7c.z = (int)ROUND(CVector3f_026a72d8.z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar4->vertex_buffer_ptr[0x10].projected_vertex,&local_7c);
  this_ptr_00 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr[0x10].r = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(this_ptr_00,1);
  pfVar5 = &engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                      (g_CDemonRendererPtr2,&local_58)->x;
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
  if ((((local_34[0].x < local_34[0].z) && (-local_34[0].z < local_34[0].x)) &&
      (local_34[0].y < local_34[0].z)) &&
     ((-local_34[0].z < local_34[0].y && (local_34[0].z < (this_ptr->base).max_distance)))) {
    bVar7 = true;
  }
  local_a4.base.surface_normal.D.i = 0;
  local_a4.base.surface_normal.C.i = 0;
  local_a4.base.surface_normal.B.i = 0;
  local_a4.base.surface_normal.A.i = 0;
  local_a4.base.base.count = 3;
  if (bVar7) {
    core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  }
  else {
    local_a4.vertices[2] = 0x10;
    local_a4.vertices[1] = 0;
    do {
      if (local_a4.vertices[1] == 0xf) {
        local_a4.vertices[0] = 0;
      }
      else {
        local_a4.vertices[0] = local_a4.vertices[1] + 1;
      }
      iVar8 = local_a4.vertices[1] + 1;
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (g_CDemonRendererPtr2,&local_a4.base,
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
      local_a4.vertices[1] = iVar8;
    } while (iVar8 < 0x10);
  }
  local_a4.base.surface_normal.A.i = 0;
  local_a4.base.surface_normal.B.i = 0;
  local_a4.base.surface_normal.C.i = 0xffff;
  local_a4.base.surface_normal.D.i =
       (int)ROUND(ROUND((this_ptr->base).max_distance * (float)256));
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    local_a4.vertices[0] = 0;
    local_a4.vertices[1] = iVar5;
    local_a4.vertices[2] = iVar6;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
              (g_CDemonRendererPtr2,&local_a4.base,
               core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
    iVar5 = iVar6;
  } while (iVar6 < 0xe);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(this_ptr);
  return;
}
