// Name: core_door.cpp_FUN_00464a60
// Address: 00464a60
// Address Range: [[00464a60, 00464b3b]]
// Convention: unknown
// Signature: int core_door_cpp_FUN_00464a60(CDemonActor *param_1)

#include "nocturne.h"

int core_door_cpp_FUN_00464a60(CDemonActor *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  byte bVar6;
  uint auStack_68 [6];
  uint auStack_50 [6];
  CBoundingBox3D CStack_38;
  uint auStack_20 [6];
  
  bVar6 = 0;
  if (2 < *(int *)&param_1[7].field_0x60) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar3 = auStack_20;
  puVar4 = auStack_50;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041daf0(auStack_50);
  if (iVar2 != 0) {
    if (*(int *)&param_1[7].field_0x6c != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
      if (iVar1 != 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
        puVar3 = auStack_68;
        pCVar5 = &CStack_38;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pCVar5 = *puVar3;
          puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
          pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
        core_box_cpp_FUN_0041e9b0(&CStack_38);
        goto LAB_00464b03;
      }
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
              ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
    return iVar2;
  }
LAB_00464b03:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
  return iVar2;
}
