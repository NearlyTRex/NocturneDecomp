// Name: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_005a95c0
// Address: 005a95c0
// Address Range: [[005a95c0, 005a970f] [005a9711, 005a9789]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_005a95c0(CCryptVessel *this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_005a95c0(CCryptVessel *this_ptr)

{
  char cVar1;
  CKeyFramedModel *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  uint uStack_14;
  
  if (*(int *)&this_ptr->field_0x7e8 == 0) {
    return 0;
  }
  if (*(int *)&this_ptr->field_0x3b4 == 1) {
    core_flame_cpp_CFlame_renderTransparent_FUN_004b8100((CFlame *)&this_ptr->field_0x3c4);
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x30,(CVector3f *)0x0);
  CStack_20._0_4_ = 0;
  CStack_20._8_4_ = 0;
  CStack_20._4_4_ = *(uint *)&this_ptr->field_0x668;
  CStack_2c._0_4_ = 0;
  CStack_2c._4_4_ = 0x400ccccd;
  CStack_2c._8_4_ = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&CStack_20,&CStack_2c);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  if (*(int *)&this_ptr->field_0x3b4 == 2) {
    fVar5 = (float10)*(float *)&this_ptr->field_0x7ec;
    this_ptr_00 = (CKeyFramedModelInstance *)round();
    uStack_14 = (uint)ROUND(fVar5);
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr_00);
    FUN_005bfb40(&pCVar2->field_0x12c,"BWATER%d.RAW",uStack_14 & 0xf);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,48000);
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)&this_ptr->field_0x66c);
    pcVar3 = "@MENUCLD2.RAW" + 1;
    pcVar4 = &pCVar2->field_0x12c;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    if (*(int *)&this_ptr->field_0x3b4 == 0) {
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0x4000);
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x66c,0.0,0x267);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_matrix_c_pop_FUN_004839a0();
  engine_matrix_c_pop_FUN_004839a0();
  return 1;
}
