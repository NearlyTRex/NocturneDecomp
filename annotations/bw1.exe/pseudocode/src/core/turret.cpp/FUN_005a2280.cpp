// Name: core_turret.cpp_FUN_005a2280
// Address: 005a2280
// Address Range: [[005a2280, 005a2391]]
// Convention: unknown
// Signature: int core_turret_cpp_FUN_005a2280(CTurret *param_1)

#include "nocturne.h"

int core_turret_cpp_FUN_005a2280(CTurret *param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  uint auStack_44 [6];
  uint auStack_2c [6];
  float fStack_14;
  
  bVar5 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar3 = auStack_44;
  puVar4 = auStack_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_004207b0(auStack_2c);
  if (iVar2 != 0) {
    iVar6 = -1;
    fStack_14 = core_turret_cpp_CTurret_getCurFrame_FUN_005a2ae0(param_1,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              ((CKeyFramedModelInstance *)&param_1->field_0x158,fStack_14,iVar6);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
  if (iVar2 != 0) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)&param_1->field_0x584);
    if (0 < *(int *)&pCVar1->field_0x110) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                (DAT_00612560,(CVector3f *)&param_1->field_0x20);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,(CVector3f *)&param_1->field_0x578,(CVector3f *)0x0);
      iVar6 = -1;
      fStack_14 = core_turret_cpp_CTurret_getCurFrame_FUN_005a2ae0(param_1,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                ((CKeyFramedModelInstance *)&param_1->field_0x584,fStack_14,iVar6);
      engine_matrix_c_pop_FUN_004839a0();
      return iVar2;
    }
  }
  return iVar2;
}
