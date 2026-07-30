// Name: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00550370
// Address: 00550370
// Address Range: [[00550370, 005504bf] [005504c1, 00550539]]
// Convention: unknown
// Signature: undefined4 core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00550370(int param_1)

#include "nocturne.h"

uint core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00550370(int param_1)

{
  char cVar1;
  CKeyFramedModel *pCVar2;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  uint uVar6;
  CVector3f local_2c;
  CVector3f local_20;
  uint local_14;
  
  if (*(int *)(param_1 + 0x7d8) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3ac) == 1) {
    core_flame_cpp_CFlame_renderTransparent_FUN_0048d5d0((CFlame *)(param_1 + 0x3bc));
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)(param_1 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,(CVector3f *)(param_1 + 0x30),(CVector3f *)0x0);
  local_20.x = 0.0;
  local_20.z = 0.0;
  local_20.y = *(float *)(param_1 + 0x658);
  local_2c.x = 0.0;
  local_2c.y = 2.2;
  local_2c.z = 0.0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&local_20,&local_2c);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  if (*(int *)(param_1 + 0x3ac) == 2) {
    uVar6 = 0x5504fe;
    dVar5 = round((double)*(float *)(param_1 + 0x7dc));
    local_14 = (uint)ROUND(dVar5);
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                       ((CKeyFramedModelInstance *)(param_1 + 0x65c));
    _sprintf(pCVar2->texture_list[0].textures[0].texture_name,"BWATER%d.RAW",
               local_14 & 0xf,uVar6);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,48000);
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                       ((CKeyFramedModelInstance *)(param_1 + 0x65c));
    pcVar3 = "MENUCLD2.RAW";
    pcVar4 = pCVar2->texture_list[0].textures[0].texture_name;
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
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            ((CKeyFramedModelInstance *)(param_1 + 0x65c),0.0,0x267);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return 1;
}
