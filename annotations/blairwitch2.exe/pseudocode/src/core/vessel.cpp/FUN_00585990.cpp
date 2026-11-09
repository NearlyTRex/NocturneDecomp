// Name: core_vessel.cpp_FUN_00585990
// Address: 00585990
// Address Range: [[00585990, 00585adf] [00585ae1, 00585b59]]
// Convention: unknown
// Signature: undefined4 core_vessel_cpp_FUN_00585990(int param_1)

#include "nocturne.h"

uint core_vessel_cpp_FUN_00585990(int param_1)

{
  char cVar1;
  CKeyFramedModel *pCVar2;
  CKeyFramedModelInstance *this_ptr;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  uint uStack_14;
  
  if (*(int *)(param_1 + 0xaa0) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x510) == 1) {
    core_flame_cpp_FUN_0049f850((CFlame *)(param_1 + 0x520));
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)(param_1 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)(param_1 + 0x30),(CVector3f *)0x0);
  CStack_20._0_4_ = 0;
  CStack_20._8_4_ = 0;
  CStack_20._4_4_ = *(uint *)(param_1 + 0x920);
  CStack_2c._0_4_ = 0;
  CStack_2c._4_4_ = 0x400ccccd;
  CStack_2c._8_4_ = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&CStack_20,&CStack_2c);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  if (*(int *)(param_1 + 0x510) == 2) {
    fVar5 = (float10)*(float *)(param_1 + 0xaa4);
    this_ptr = (CKeyFramedModelInstance *)round();
    uStack_14 = (uint)ROUND(fVar5);
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr);
    FUN_005b7790(&pCVar2->field_0x12c,"BWATER%d.RAW",uStack_14 & 0xf);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,48000);
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                       ((CKeyFramedModelInstance *)(param_1 + 0x924));
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
    if (*(int *)(param_1 + 0x510) == 0) {
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0x4000);
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)(param_1 + 0x924),0.0,0x267);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_matrix_c_pop_FUN_0046b4a0();
  return 1;
}
