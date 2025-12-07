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
  float unaff_EDI;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  CVector3i CStack_6c;
  byte local_58 [8];
  int iStack_50;
  byte auStack_48 [8];
  float local_40 [3];
  float local_34;
  float local_30;
  float local_2c;
  float local_18;
  float local_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&(this_ptr->base).base.position);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,(CVector3f *)auStack_48);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(auStack_48 + 4),(CVector3i *)0x0);
  fVar9 = ((float)18 / (this_ptr->base).base.projection_scale) *
          (this_ptr->base).max_distance;
  iVar6 = 0;
  local_2c = (this_ptr->base).max_distance;
  iVar5 = 0;
  do {
    fVar7 = (float10)iVar6 * (float10)6.2831853070000001 * (float10)0.0625;
    fVar8 = (float10)fcos(fVar7);
    fVar7 = (float10)fsin(fVar7);
    local_34 = (float)(fVar8 * (float10)fVar9);
    local_30 = (float)(fVar7 * (float10)fVar9);
    local_58._0_4_ = (uint)ROUND(local_34 * 256f);
    local_58._4_4_ = (uint)ROUND(local_30 * 256f);
    iStack_50 = (int)ROUND(local_2c * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar5),(CVector3i *)local_58);
    pCVar1 = g_CDemonRendererPtr;
    iVar6 = iVar6 + 1;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar5) = 0;
    iVar5 = iVar5 + 0x30;
  } while (iVar6 < 0x10);
  CStack_6c.x = (int)ROUND(DAT_026a72d8 * 256f);
  CStack_6c.y = (int)ROUND(DAT_026a72dc * 256f);
  CStack_6c.z = (int)ROUND(DAT_026a72e0 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[0x10].projected_vertex,&CStack_6c);
  pCVar1 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr[0x10].light = 9.18341e-41;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(pCVar1,1);
  pfVar2 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr,local_40);
  local_18 = *pfVar2 - (float)(this_ptr->base).base.position.x;
  local_14 = pfVar2[1] - (float)(this_ptr->base).base.position.y;
  bVar4 = false;
  fVar9 = pfVar2[2] - (float)(this_ptr->base).base.position.z;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,
                      (CVector3f *)(local_58 + 4),(CVector3f *)&local_18);
  if ((CVector3f *)&local_14 != pCVar3) {
    local_14 = pCVar3->x;
    fVar9 = pCVar3->y;
    unaff_EDI = pCVar3->z;
  }
  local_14 = (this_ptr->base).base.projection_scale * (float)0.055555555555555601 * local_14;
  fVar9 = (float)0.055555555555555601 * (this_ptr->base).base.projection_scale * fVar9;
  if ((((local_14 < unaff_EDI) && (-unaff_EDI < local_14)) && (fVar9 < unaff_EDI)) &&
     ((-unaff_EDI < fVar9 && (unaff_EDI < (this_ptr->base).max_distance)))) {
    bVar4 = true;
  }
  if (bVar4) {
    core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  }
  else {
    iVar5 = 0;
    do {
      if (iVar5 == 0xf) {
        CStack_6c.y = 0;
      }
      else {
        CStack_6c.y = iVar5 + 1;
      }
      iVar6 = iVar5 + 1;
      CStack_6c.z = iVar5;
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff80,
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
      iVar5 = iVar6;
    } while (iVar6 < 0x10);
  }
  crt_math_c_round_FUN_005fe6b0((double)((this_ptr->base).max_distance * (float)256));
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    CStack_6c.x = 0;
    CStack_6c.y = iVar5;
    CStack_6c.z = iVar6;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff7c,
               core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
    iVar5 = iVar6;
  } while (iVar6 < 0xe);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(this_ptr);
  return;
}
