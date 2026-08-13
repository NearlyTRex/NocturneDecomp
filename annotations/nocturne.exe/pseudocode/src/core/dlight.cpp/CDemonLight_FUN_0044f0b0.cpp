// Name: core_dlight.cpp_CDemonLight_FUN_0044f0b0
// Address: 0044f0b0
// Address Range: [[0044f0b0, 0044f426]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_FUN_0044f0b0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_FUN_0044f0b0(CDemonLight *this_ptr)

{
  CDemonRenderer *pCVar1;
  CVector3f *pCVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  byte local_a8 [8];
  UIntegerFloat local_a0;
  UIntegerFloat local_9c;
  UIntegerFloat local_98;
  UIntegerFloat local_94;
  uint local_90;
  int local_8c;
  int local_88;
  uint local_84;
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
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&(this_ptr->base).position);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
            (&(this_ptr->base).rotation_matrix,&local_4c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,&local_4c,(CVector3f *)0x0);
  local_a8._0_4_ =
       ((float)18 / (this_ptr->base).focal_length) * (this_ptr->base).fixed_point_scale
  ;
  iVar5 = 0;
  local_38 = (this_ptr->base).fixed_point_scale;
  iVar4 = 0;
  do {
    fVar6 = (float10)iVar5 * (float10)6.2831853070000001 * (float10)0.0625;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    local_40 = (float)(fVar7 * (float10)(float)local_a8._0_4_);
    local_3c = (float)(fVar6 * (float10)(float)local_a8._0_4_);
    local_64.x = (int)ROUND(local_40 * _DAT_0059c030);
    local_64.y = (int)ROUND(local_3c * _DAT_0059c030);
    local_64.z = (int)ROUND(local_38 * _DAT_0059c030);
    local_14 = iVar5;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                      transformed_x + iVar4),&local_64);
    pCVar1 = g_CDemonRenderer_PTR_005ae704;
    iVar5 = iVar5 + 1;
    *(uint *)((int)&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->r + iVar4) = 0;
    iVar4 = iVar4 + 0x30;
  } while (iVar5 < 0x10);
  local_7c.x = (int)ROUND(CVector3f_01abb4b8.x * _DAT_0059c030);
  local_7c.y = (int)ROUND(CVector3f_01abb4b8.y * _DAT_0059c030);
  local_7c.z = (int)ROUND(CVector3f_01abb4b8.z * _DAT_0059c030);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&pCVar1->vertex_buffer_ptr[0x10].projected_vertex,&local_7c);
  pCVar1 = g_CDemonRenderer_PTR_005ae704;
  g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x10].r = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(pCVar1,1);
  pCVar2 = engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
                     (g_CDemonRenderer_PTR_005ae704,&local_58);
  local_34[0].x = pCVar2->x - (this_ptr->base).position.x;
  local_34[0].y = pCVar2->y - (this_ptr->base).position.y;
  bVar3 = false;
  local_34[0].z = pCVar2->z - (this_ptr->base).position.z;
  pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                     (&(this_ptr->base).rotation_matrix,&local_70,local_34);
  if (local_34 != pCVar2) {
    local_34[0].x = pCVar2->x;
    local_34[0].y = pCVar2->y;
    local_34[0].z = pCVar2->z;
  }
  local_34[0].x = (this_ptr->base).focal_length * (float)0.055555555555555601 * local_34[0].x;
  local_34[0].y = (float)0.055555555555555601 * (this_ptr->base).focal_length * local_34[0].y;
  if ((((local_34[0].x < local_34[0].z) && (local_18 = -local_34[0].z, local_18 < local_34[0].x)) &&
      (local_34[0].y < local_34[0].z)) &&
     ((local_18 < local_34[0].y && (local_34[0].z < (this_ptr->base).fixed_point_scale)))) {
    bVar3 = true;
  }
  local_90 = 0;
  local_94.i = 0;
  local_98.i = 0;
  local_9c.i = 0;
  local_a0.i = 3;
  if (bVar3) {
    core_dcamera_cpp_initializeCoronaBuffers_FUN_00444140();
  }
  else {
    local_84 = 0x10;
    iVar4 = 0;
    do {
      if (iVar4 == 0xf) {
        local_8c = 0;
      }
      else {
        local_8c = iVar4 + 1;
      }
      iVar5 = iVar4 + 1;
      local_88 = iVar4;
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
                (g_CDemonRenderer_PTR_005ae704,(SMRGLHeaderPrimitive *)(local_a8 + 4),
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00444180);
      iVar4 = iVar5;
    } while (iVar5 < 0x10);
  }
  local_9c.i = 0;
  local_98.i = 0;
  local_94.i = 0xffff;
  dVar8 = round
                    ((double)((this_ptr->base).fixed_point_scale * (float)256));
  local_94.i = (int)ROUND(dVar8);
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    local_90 = 0;
    local_8c = iVar4;
    local_88 = iVar5;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
              (g_CDemonRenderer_PTR_005ae704,(SMRGLHeaderPrimitive *)local_a8,
               core_dcamera_cpp_renderCoronaDepthScanline_FUN_00444180);
    iVar4 = iVar5;
  } while (iVar5 < 0xe);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350(this_ptr);
  return;
}
