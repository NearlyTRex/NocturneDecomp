// Name: unkaddr_0059aa80.cpp_FUN_0059bb60
// Address: 0059bb60
// Address Range: [[0059bb60, 0059bde0]]
// Convention: unknown
// Signature: void unkaddr_0059aa80_cpp_FUN_0059bb60(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkaddr_0059aa80_cpp_FUN_0059bb60(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  CDemonSet *pCVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  CKeyFramedModelInstance *this_ptr;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1040 [1007];
  CDemonRenderer *this_ptr_00;
  CVector3f *euler_angles;
  CVector3f *translation;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  byte auStack_58 [8];
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [4];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f CStack_1c;
  
  pCVar1 = g_CDemonSetPtr;
  bVar7 = 0;
  iVar4 = 0xfc;
  if (0x280 < DAT_006141b8) {
    param_2 = (param_2 * 0x280) / DAT_006141b8;
    param_3 = (param_3 * 0x1e0) / DAT_006141bc;
    iVar4 = (int)(0x27600 / (longlong)DAT_006141b8);
  }
  *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
  *(uint *)&pCVar1->field_0x15ae88 = 0xffffb7d5;
  *(uint *)&pCVar1->field_0x15ae8c = 0xffffb7d5;
  *(uint *)&pCVar1->field_0x15ae90 = 0x482b;
  *(uint *)&pCVar1->field_0x15ae94 = 32000;
  engine_special_cpp_fillDepthRegion_FUN_0055b342
            (param_2,param_2 + iVar4 + -1,param_3,param_3 + iVar4 + -1);
  this_ptr = (CKeyFramedModelInstance *)(param_1 + 0x574);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr);
  puVar5 = *(uint **)&pCVar2->field_0x350;
  puVar6 = &stack0xffffff90;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_matrix_c_FUN_0046b710(DAT_0060b280,param_2,param_3,iVar4,iVar4);
  CStack_4c._8_4_ = 0xc0000000;
  CStack_4c._0_4_ = 0;
  CStack_4c._4_4_ = 0;
  engine_drender_cpp_FUN_0046afb0(DAT_0060b280,&CStack_4c);
  engine_matrix_c_FUN_0046b4b0(DAT_0060b280,0x42100000);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
            (DAT_0060b280,(CVector3f *)&DAT_0265370c);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)&DAT_0265370c);
  afStack_3c[2] = fStack_70 + fStack_64;
  afStack_3c[3] = fStack_6c + fStack_60;
  fStack_2c = fStack_68 + fStack_5c;
  fStack_28 = fStack_70 + fStack_64;
  afStack_3c[(uint)bVar7 * -2 + 6] = afStack_3c[(uint)bVar7 * -2 + 3];
  afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  translation = (CVector3f *)0x0;
  CStack_1c._8_4_ = param_4;
  euler_angles = &CStack_1c;
  _DAT_01c38aec = 0;
  fStack_40 = fStack_28 * _DAT_005ef5a4;
  afStack_3c[0] = fStack_24 * _DAT_005ef5a4;
  afStack_3c[1] = fStack_20 * _DAT_005ef5a4;
  auStack_58._0_4_ = fStack_28 * _DAT_005ef5a4;
  *(float *)(auStack_58 + (uint)bVar7 * -8 + 4) = afStack_3c[(uint)bVar7 * -2];
  this_ptr_00 = DAT_0060b280;
  *(float *)(auStack_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (this_ptr_00,euler_angles,translation);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&DAT_0265370c,(CVector3f *)auStack_58);
  if (param_5 == 0) {
    this_ptr = (CKeyFramedModelInstance *)(param_1 + 0x6f0);
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(this_ptr,0.0,-1);
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_matrix_c_popViewport_FUN_0046b740();
  *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
  return;
}
