// Name: core_shadow.cpp_FUN_0053e6c0
// Address: 0053e6c0
// Address Range: [[0053e6c0, 0053e85e]]
// Convention: unknown
// Signature: undefined4 core_shadow_cpp_FUN_0053e6c0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_shadow_cpp_FUN_0053e6c0(CDemonActor *param_1)

{
  CDemonRenderer *this_ptr;
  CEventList *this_ptr_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar6 = 0;
  iVar1 = core_motion_cpp_FUN_005035c0(param_1 + 1);
  this_ptr_00 = 0x01C38BC0;
  iVar1 = *(int *)(iVar1 + 0x24);
  *(uint *)&param_1[0xe].field_0x250 = 0;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (this_ptr_00,"heroCanSee");
  uVar3 = 0;
  if (iVar2 != 0) {
    if (*(int *)&param_1[0x62].field_0x17c != 0) {
      return 0;
    }
    if ((((iVar1 != 0x14) && (iVar1 != 0xd)) && (iVar1 != 0xe)) &&
       ((iVar1 != 0xf && (iVar1 != 0x10)))) {
      core_charactr_cpp_FUN_004268b0(param_1);
      return *(uint *)&param_1[0xe].field_0x250;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
    puVar4 = auStack_24;
    puVar5 = auStack_3c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041a840(auStack_3c);
    this_ptr = DAT_0060b280;
    if (iVar1 != 0) {
      iVar1 = *(int *)&param_1[0x62].field_0x290;
      *(uint *)&param_1[0xe].field_0x250 = 1;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(this_ptr,iVar1);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,1);
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                ((CDeformableModelInstance *)(param_1 + 1),-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
      if (_DAT_01d1cdc8 != 0) {
        core_motion_cpp_FUN_005042e0((CMotionController *)(param_1 + 1),param_1);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    if (*(int *)&param_1[0x62].field_0x294 != 0) {
      core_set_cpp_FUN_005306e0(g_CDemonSetPtr,0x20b1924);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,65000);
    uVar3 = *(uint *)&param_1[0xe].field_0x250;
  }
  return uVar3;
}
