// Name: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
// Address: 004736c0
// Address Range: [[004736c0, 004739cc] [004739f3, 00473a1d]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight *this_ptr)

{
  CDemonRenderer *pCVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  bool bVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  byte local_78 [20];
  CVector3i local_64;
  float local_58 [3];
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  byte local_34 [8];
  float local_2c;
  float local_18;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&(this_ptr->base).base.position);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_4c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&local_4c,(CVector3i *)0x0);
  fVar9 = ((float)18 / (this_ptr->base).base.projection_scale) *
          (this_ptr->base).max_distance;
  iVar6 = 0;
  local_38 = (this_ptr->base).max_distance;
  iVar5 = 0;
  do {
    fVar7 = (float10)iVar6 * (float10)6.2831853070000001 * (float10)0.0625;
    fVar8 = (float10)fcos(fVar7);
    fVar7 = (float10)fsin(fVar7);
    local_40 = (float)(fVar8 * (float10)fVar9);
    local_3c = (float)(fVar7 * (float10)fVar9);
    local_64.x = (int)ROUND(local_40 * 256f);
    local_64.y = (int)ROUND(local_3c * 256f);
    local_64.z = (int)ROUND(local_38 * 256f);
    local_14 = iVar6;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar5),&local_64);
    pCVar1 = g_CDemonRendererPtr;
    iVar6 = iVar6 + 1;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar5) = 0;
    iVar5 = iVar5 + 0x30;
  } while (iVar6 < 0x10);
  local_78._0_4_ = (uint)ROUND(DAT_026a72d8 * 256f);
  local_78._4_4_ = (uint)ROUND(DAT_026a72dc * 256f);
  local_78._8_4_ = (uint)ROUND(DAT_026a72e0 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[0x10].projected_vertex,(CVector3i *)local_78);
  pCVar1 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr[0x10].light = 9.18341e-41;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(pCVar1,1);
  pfVar2 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr,local_58);
  local_34._0_4_ = *pfVar2 - (float)(this_ptr->base).base.position.x;
  local_34._4_4_ = pfVar2[1] - (float)(this_ptr->base).base.position.y;
  bVar4 = false;
  local_2c = pfVar2[2] - (float)(this_ptr->base).base.position.z;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,
                      (CVector3f *)(local_78 + 8),(CVector3f *)local_34);
  if ((CVector3f *)(local_34 + 4) != pCVar3) {
    local_34._0_4_ = pCVar3->x;
    local_34._4_4_ = pCVar3->y;
    local_2c = pCVar3->z;
  }
  local_34._0_4_ =
       (this_ptr->base).base.projection_scale * (float)0.055555555555555601 * (float)local_34._0_4_;
  local_34._4_4_ =
       (float)0.055555555555555601 * (this_ptr->base).base.projection_scale * (float)local_34._4_4_;
  if (((((float)local_34._0_4_ < local_2c) &&
       (local_18 = -local_2c, local_18 < (float)local_34._0_4_)) &&
      ((float)local_34._4_4_ < local_2c)) &&
     ((local_18 < (float)local_34._4_4_ && (local_2c < (this_ptr->base).max_distance)))) {
    bVar4 = true;
  }
  if (bVar4) {
    core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  }
  else {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff5c,
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
    } while (iVar5 < 0x10);
  }
  iVar5 = 0;
  crt_math_c_round_FUN_005fe6b0((double)((this_ptr->base).max_distance * (float)256));
  do {
    iVar5 = iVar5 + 1;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff5c,
               core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
  } while (iVar5 < 0xe);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(this_ptr);
  return;
}
