// Name: core_fire.cpp_FUN_0049a2c0
// Address: 0049a2c0
// Address Range: [[0049a2c0, 0049a378]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049a2c0(CVector3f *param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_0049a2c0(CVector3f *param_1)

{
  int iVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  byte bVar4;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
            (DAT_005f2afc,(CVector3i *)&param_1[5].z,(CVector3i *)0x0);
  pfVar2 = *(float **)((int)param_1[6].z + 0x350);
  pCVar3 = &CStack_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->x = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CVector3f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  iVar1 = core_box_cpp_FUN_0041daf0(&CStack_28,0);
  if (iVar1 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (g_CDemonSetPtr,param_1,(UOrientationVector *)&DAT_02cfd900,&CStack_28,&CStack_1c,
               (CMatrix3x3f *)0x0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
              ((CKeyFramedModel *)param_1[6].z,0,(CKeyFramedModelInstance *)0x0,0x2e7);
  }
  engine_matrix_c_pop_FUN_0046d080();
  return;
}
