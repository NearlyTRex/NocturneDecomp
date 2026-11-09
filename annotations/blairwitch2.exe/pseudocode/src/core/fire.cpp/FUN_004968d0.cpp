// Name: core_fire.cpp_FUN_004968d0
// Address: 004968d0
// Address Range: [[004968d0, 00496988]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004968d0(CVector3f *param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_004968d0(CVector3f *param_1)

{
  int iVar1;
  uint *puVar2;
  CVector3f *pCVar3;
  byte bVar4;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(DAT_0060b280,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,(CVector3i *)&param_1[5].field_0x8,(CVector3i *)0x0);
  puVar2 = *(uint **)(*(int *)&param_1[6].field_0x8 + 0x350);
  pCVar3 = &CStack_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pCVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CVector3f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  iVar1 = core_box_cpp_FUN_0041a840(&CStack_28,0);
  if (iVar1 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
              (g_CDemonSetPtr,param_1,(UOrientationVector *)&DAT_0265370c,&CStack_28,&CStack_1c,
               (CMatrix3x3f *)0x0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
              (*(CKeyFramedModel **)&param_1[6].field_0x8,0,(CKeyFramedModelInstance *)0x0,0x2e7);
  }
  engine_matrix_c_pop_FUN_0046b4a0();
  return;
}
