// Name: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00550370
// Address: 00550370
// Address Range: [[00550370, 005504bf] [005504c1, 00550539]]
// Convention: unknown
// Signature: undefined4 core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00550370(int param_1)

#include "nocturne.h"

uint core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00550370(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  uint uVar6;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (*(int *)(param_1 + 0x7d8) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3ac) == 1) {
    core_flame_cpp_FUN_0048d5d0(param_1 + 0x3bc);
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,param_1 + 0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,param_1 + 0x30,0)
  ;
  local_20 = 0;
  local_18 = 0;
  local_1c = *(uint *)(param_1 + 0x658);
  local_2c = 0;
  local_28 = 0x400ccccd;
  local_24 = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&local_20,&local_2c);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  if (*(int *)(param_1 + 0x3ac) == 2) {
    uVar6 = 0x5504fe;
    fVar5 = (float10)round((float10)*(float *)(param_1 + 0x7dc));
    local_14 = (uint)ROUND(fVar5);
    iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x65c,uVar6);
    _sprintf(iVar2 + 300,"BWATER%d.RAW",local_14 & 0xf);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,48000);
  }
  else {
    iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x65c);
    pcVar3 = "MENUCLD2.RAW";
    pcVar4 = (char *)(iVar2 + 300);
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    if (*(int *)(param_1 + 0x3ac) == 0) {
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0x4000);
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(param_1 + 0x65c,0,0x267);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  return 1;
}
