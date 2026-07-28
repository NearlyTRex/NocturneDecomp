// Name: core_dlight.cpp_FUN_0044f0b0
// Address: 0044f0b0
// Address Range: [[0044f0b0, 0044f426]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0044f0b0(CDemonLight *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dlight_cpp_FUN_0044f0b0(CDemonLight *param_1)

{
  CDemonRenderer *pCVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
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
  byte local_70 [12];
  CVector3i local_64;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_18;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)((param_1->base).camera_name + 0xc4));
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
            ((CMatrix3x3f *)((param_1->base).camera_name + 0xd0),&local_4c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&local_4c,(CVector3f *)0x0);
  local_a8._0_4_ =
       ((float)18 / *(float *)((param_1->base).camera_name + 0xf8)) *
       *(float *)((param_1->base).camera_name + 0xc0);
  iVar6 = 0;
  local_38 = *(float *)((param_1->base).camera_name + 0xc0);
  iVar5 = 0;
  do {
    fVar7 = (float10)iVar6 * (float10)6.2831853070000001 * (float10)0.0625;
    fVar8 = (float10)fcos(fVar7);
    fVar7 = (float10)fsin(fVar7);
    local_40 = (float)(fVar8 * (float10)(float)local_a8._0_4_);
    local_3c = (float)(fVar7 * (float10)(float)local_a8._0_4_);
    local_64.x = (int)ROUND(local_40 * _DAT_0059c030);
    local_64.y = (int)ROUND(local_3c * _DAT_0059c030);
    local_64.z = (int)ROUND(local_38 * _DAT_0059c030);
    local_14 = iVar6;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              ((SProjectedVertex *)
               ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x + iVar5),
               &local_64);
    pCVar1 = DAT_005ae704;
    iVar6 = iVar6 + 1;
    *(uint *)((int)&DAT_005ae704->vertex_buffer_ptr->r + iVar5) = 0;
    iVar5 = iVar5 + 0x30;
  } while (iVar6 < 0x10);
  local_7c.x = (int)ROUND(_DAT_01abb4b8 * _DAT_0059c030);
  local_7c.y = (int)ROUND(_DAT_01abb4bc * _DAT_0059c030);
  local_7c.z = (int)ROUND(_DAT_01abb4c0 * _DAT_0059c030);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&pCVar1->vertex_buffer_ptr[0x10].projected_vertex,&local_7c);
  pCVar1 = DAT_005ae704;
  DAT_005ae704->vertex_buffer_ptr[0x10].r = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(pCVar1,1);
  pCVar2 = engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
                     (DAT_005ae704,&local_58);
  local_34 = pCVar2->x - *(float *)((param_1->base).camera_name + 0xc4);
  local_30 = pCVar2->y - *(float *)((param_1->base).camera_name + 200);
  bVar4 = false;
  local_2c = pCVar2->z - *(float *)((param_1->base).camera_name + 0xcc);
  pfVar3 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                              ((param_1->base).camera_name + 0xd0,local_70,&local_34);
  if (&local_34 != pfVar3) {
    local_34 = *pfVar3;
    local_30 = pfVar3[1];
    local_2c = pfVar3[2];
  }
  local_34 = *(float *)((param_1->base).camera_name + 0xf8) * (float)0.055555555555555601 * local_34;
  local_30 = (float)0.055555555555555601 * *(float *)((param_1->base).camera_name + 0xf8) * local_30;
  if ((((local_34 < local_2c) && (local_18 = -local_2c, local_18 < local_34)) &&
      (local_30 < local_2c)) &&
     ((local_18 < local_30 && (local_2c < *(float *)((param_1->base).camera_name + 0xc0))))) {
    bVar4 = true;
  }
  local_90 = 0;
  local_94.i = 0;
  local_98.i = 0;
  local_9c.i = 0;
  local_a0.i = 3;
  if (bVar4) {
    core_dcamera_cpp_initializeCoronaBuffers_FUN_00444140();
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
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
                (DAT_005ae704,(SMRGLHeaderPrimitive *)(local_a8 + 4),
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00444180);
      iVar5 = iVar6;
    } while (iVar6 < 0x10);
  }
  local_9c.i = 0;
  local_98.i = 0;
  local_94.i = 0xffff;
  dVar9 = round
                    ((double)(*(float *)((param_1->base).camera_name + 0xc0) *
                             (float)256));
  local_94.i = (int)ROUND(dVar9);
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    local_90 = 0;
    local_8c = iVar5;
    local_88 = iVar6;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
              (DAT_005ae704,(SMRGLHeaderPrimitive *)local_a8,
               core_dcamera_cpp_renderCoronaDepthScanline_FUN_00444180);
    iVar5 = iVar6;
  } while (iVar6 < 0xe);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350(param_1);
  return;
}
