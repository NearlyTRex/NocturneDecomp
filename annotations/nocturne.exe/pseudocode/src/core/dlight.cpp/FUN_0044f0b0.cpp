// Name: core_dlight.cpp_FUN_0044f0b0
// Address: 0044f0b0
// Address Range: [[0044f0b0, 0044f426]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0044f0b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dlight_cpp_FUN_0044f0b0(int param_1)

{
  int *piVar1;
  float *pfVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  uint uVar8;
  float local_a8;
  byte local_a4 [4];
  uint local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_7c;
  int local_78;
  int local_74;
  byte local_70 [12];
  int local_64;
  int local_60;
  int local_5c;
  byte local_58 [12];
  byte local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_18;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,param_1 + 0x104);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(param_1 + 0x110,local_4c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,local_4c,0);
  local_a8 = ((float)18 / *(float *)(param_1 + 0x138)) * *(float *)(param_1 + 0x100);
  iVar5 = 0;
  local_38 = *(float *)(param_1 + 0x100);
  iVar4 = 0;
  do {
    fVar6 = (float10)iVar5 * (float10)6.2831853070000001 * (float10)0.0625;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    local_40 = (float)(fVar7 * (float10)local_a8);
    local_3c = (float)(fVar6 * (float10)local_a8);
    local_64 = (int)ROUND(local_40 * _DAT_0059c030);
    local_60 = (int)ROUND(local_3c * _DAT_0059c030);
    local_5c = (int)ROUND(local_38 * _DAT_0059c030);
    local_14 = iVar5;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + iVar4,&local_64);
    piVar1 = DAT_005ae704;
    iVar5 = iVar5 + 1;
    *(uint *)(iVar4 + 0x20 + *DAT_005ae704) = 0;
    iVar4 = iVar4 + 0x30;
  } while (iVar5 < 0x10);
  local_7c = (int)ROUND(_DAT_01abb4b8 * _DAT_0059c030);
  local_78 = (int)ROUND(_DAT_01abb4bc * _DAT_0059c030);
  local_74 = (int)ROUND(_DAT_01abb4c0 * _DAT_0059c030);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*piVar1 + 0x300,&local_7c);
  piVar1 = DAT_005ae704;
  *(uint *)(*DAT_005ae704 + 800) = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(piVar1,1);
  pfVar2 = (float *)engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
                              (DAT_005ae704,local_58);
  local_34 = *pfVar2 - *(float *)(param_1 + 0x104);
  local_30 = pfVar2[1] - *(float *)(param_1 + 0x108);
  bVar3 = false;
  local_2c = pfVar2[2] - *(float *)(param_1 + 0x10c);
  pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                              (param_1 + 0x110,local_70,&local_34);
  if (&local_34 != pfVar2) {
    local_34 = *pfVar2;
    local_30 = pfVar2[1];
    local_2c = pfVar2[2];
  }
  local_34 = *(float *)(param_1 + 0x138) * (float)0.055555555555555601 * local_34;
  local_30 = (float)0.055555555555555601 * *(float *)(param_1 + 0x138) * local_30;
  if ((((local_34 < local_2c) && (local_18 = -local_2c, local_18 < local_34)) &&
      (local_30 < local_2c)) && ((local_18 < local_30 && (local_2c < *(float *)(param_1 + 0x100)))))
  {
    bVar3 = true;
  }
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 3;
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
                (DAT_005ae704,local_a4,FUN_00444180);
      iVar4 = iVar5;
    } while (iVar5 < 0x10);
  }
  local_9c = 0;
  local_98 = 0;
  local_94 = 0xffff;
  uVar8 = 0x44f39a;
  fVar6 = (float10)round
                             ((float10)*(float *)(param_1 + 0x100) * (float10)256);
  local_94 = (int)ROUND(fVar6);
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    local_90 = 0;
    local_8c = iVar4;
    local_88 = iVar5;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
              (DAT_005ae704,&local_a8,FUN_00444180,uVar8);
    iVar4 = iVar5;
  } while (iVar5 < 0xe);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350(param_1);
  return;
}
