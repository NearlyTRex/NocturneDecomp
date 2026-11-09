// Name: core_platfrm.cpp_FUN_0053a520
// Address: 0053a520
// Address Range: [[0053a520, 0053a6f0]]
// Convention: unknown
// Signature: void core_platfrm_cpp_FUN_0053a520(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_platfrm_cpp_FUN_0053a520(CDemonActor *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_44 [6];
  uint auStack_2c [6];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 != 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if ((*(int *)&param_1[3].field_0xb8 < 2) && (*(int *)&param_1[3].field_0xc0 == 0)) {
    return;
  }
  if (*(int *)&param_1[3].field_0xc0 != 0) {
    if ((*(int *)&param_1[2].field_0x24 == 3) || (*(int *)&param_1[2].field_0x24 == 4)) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1[2].field_0x108);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1[2].field_0xa4);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 == 0) {
    if (*(int *)&param_1[3].field_0xc0 == 0) {
      *(uint *)&param_1[3].field_0xb8 = 3;
    }
    else {
      *(uint *)&param_1[5].field_0x6c = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar2 = auStack_44;
  puVar3 = auStack_2c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_2c);
  if (iVar1 != 0) {
    if ((*(int *)&param_1[3].field_0x10c == 0) ||
       (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
       iVar1 != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(param_1);
      return;
    }
    *(uint *)&g_CDemonSetPtr->field_0x15ac88 = 1;
    iStack_14 = (int)ROUND(*(float *)&param_1->field_0x20 * _DAT_00604910);
    iStack_10 = (int)ROUND(*(float *)&param_1->field_0x24 * _DAT_00604910);
    iStack_c = (int)ROUND(*(float *)&param_1->field_0x28 * _DAT_00604910);
    _DAT_0152a950 = (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 8))(DAT_007c6120,&iStack_14,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
    *(uint *)&g_CDemonSetPtr->field_0x15ac88 = 0;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(param_1);
  return;
}
