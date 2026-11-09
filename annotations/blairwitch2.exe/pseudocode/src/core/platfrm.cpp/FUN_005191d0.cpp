// Name: core_platfrm.cpp_FUN_005191d0
// Address: 005191d0
// Address Range: [[005191d0, 005193a0]]
// Convention: unknown
// Signature: void core_platfrm_cpp_FUN_005191d0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_platfrm_cpp_FUN_005191d0(CDemonActor *param_1,int param_2)

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
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 != 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if ((*(int *)&param_1[2].field_0xb4 < 2) && (*(int *)&param_1[2].field_0xbc == 0)) {
    return;
  }
  if (*(int *)&param_1[2].field_0xbc != 0) {
    if ((*(int *)&param_1[1].field_0x17c == 3) || (*(int *)&param_1[1].field_0x17c == 4)) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1[1].field_0x260);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1[1].field_0x1fc);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    if (*(int *)&param_1[2].field_0xbc == 0) {
      *(uint *)&param_1[2].field_0xb4 = 3;
    }
    else {
      *(uint *)&param_1[3].field_0x64 = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar2 = auStack_44;
  puVar3 = auStack_2c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_2c);
  if (iVar1 != 0) {
    if ((*(int *)&param_1[2].field_0x108 == 0) ||
       (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
       iVar1 != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
      return;
    }
    *(uint *)&g_CDemonSetPtr->field_0x15ac88 = 1;
    iStack_14 = (int)ROUND(*(float *)&param_1->field_0x20 * _DAT_005fac30);
    iStack_10 = (int)ROUND(*(float *)&param_1->field_0x24 * _DAT_005fac30);
    iStack_c = (int)ROUND(*(float *)&param_1->field_0x28 * _DAT_005fac30);
    _DAT_0150f450 = (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 8))(DAT_007bda74,&iStack_14,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
    *(uint *)&g_CDemonSetPtr->field_0x15ac88 = 0;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return;
}
