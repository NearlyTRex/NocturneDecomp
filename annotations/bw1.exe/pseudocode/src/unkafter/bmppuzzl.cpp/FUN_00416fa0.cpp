// Name: unkafter_bmppuzzl.cpp_FUN_00416fa0
// Address: 00416fa0
// Address Range: [[00416fa0, 0041722c]]
// Convention: unknown
// Signature: void unkafter_bmppuzzl_cpp_FUN_00416fa0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_bmppuzzl_cpp_FUN_00416fa0(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  CDemonSet *pCVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  CKeyFramedModelInstance *this_ptr;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1028 [1001];
  CDemonRenderer *this_ptr_00;
  CVector3f *euler_angles;
  CVector3f *translation;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [4];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float afStack_18 [2];
  
  pCVar1 = g_CDemonSetPtr;
  bVar7 = 0;
  iVar4 = 0xfc;
  if (0x280 < DAT_0061b498) {
    param_2 = (param_2 * 0x280) / DAT_0061b498;
    param_3 = (param_3 * 0x1e0) / DAT_0061b49c;
    iVar4 = (int)(0x27600 / (longlong)DAT_0061b498);
  }
  *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
  *(uint *)&pCVar1->field_0x15ae88 = 0xffffb7d5;
  *(uint *)&pCVar1->field_0x15ae8c = 0xffffb7d5;
  *(uint *)&pCVar1->field_0x15ae90 = 0x482b;
  *(uint *)&pCVar1->field_0x15ae94 = 32000;
  engine_special_cpp_fillDepthRegion_FUN_0057dd92
            (param_2,param_2 + iVar4 + -1,param_3,param_3 + iVar4 + -1);
  this_ptr = (CKeyFramedModelInstance *)(param_1 + 0x8f8);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr);
  puVar5 = *(uint **)&pCVar2->field_0x350;
  puVar6 = &stack0xffffff90;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_matrix_c_FUN_00483c10(DAT_00612560,param_2,param_3,iVar4,iVar4);
  CStack_58._8_4_ = 0xc0000000;
  CStack_58._0_4_ = 0;
  CStack_58._4_4_ = 0;
  engine_drender_cpp_FUN_004834b0(DAT_00612560,&CStack_58);
  engine_matrix_c_FUN_004839b0(DAT_00612560,0x42100000);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
            (DAT_00612560,(CVector3f *)&DAT_02c8af28);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&DAT_02c8af28);
  fStack_40 = fStack_70 + fStack_64;
  afStack_3c[0] = fStack_6c + fStack_60;
  afStack_3c[1] = fStack_68 + fStack_5c;
  afStack_3c[2] = fStack_70 + fStack_64;
  afStack_3c[(uint)bVar7 * -2 + 3] = afStack_3c[(uint)bVar7 * -2];
  afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  _DAT_01c51cac = 0;
  CStack_4c._0_4_ = 0;
  CStack_4c._4_4_ = 0;
  translation = (CVector3f *)0x0;
  CStack_4c._8_4_ = param_4;
  euler_angles = &CStack_4c;
  fStack_28 = afStack_3c[2] * _DAT_005d3ffe;
  fStack_24 = afStack_3c[3] * _DAT_005d3ffe;
  fStack_20 = fStack_2c * _DAT_005d3ffe;
  fStack_1c = afStack_3c[2] * _DAT_005d3ffe;
  afStack_18[(uint)bVar7 * -2] = afStack_3c[(uint)bVar7 * -2 + 6];
  this_ptr_00 = DAT_00612560;
  afStack_18[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (this_ptr_00,euler_angles,translation);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)&DAT_02c8af28,(CVector3f *)&fStack_1c);
  if (param_5 == 0) {
    this_ptr = (CKeyFramedModelInstance *)(param_1 + 0xa74);
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(this_ptr,0.0,-1);
  engine_matrix_c_pop_FUN_004839a0();
  engine_matrix_c_pop_FUN_004839a0();
  engine_matrix_c_popViewport_FUN_00483c40();
  *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
  return;
}
