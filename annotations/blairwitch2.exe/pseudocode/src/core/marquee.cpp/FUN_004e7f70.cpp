// Name: core_marquee.cpp_FUN_004e7f70
// Address: 004e7f70
// Address Range: [[004e7f70, 004e7fed]]
// Convention: unknown
// Signature: undefined4 core_marquee_cpp_FUN_004e7f70(CDemonActor *param_1)

#include "nocturne.h"

uint core_marquee_cpp_FUN_004e7f70(CDemonActor *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 != 0) {
    return 0;
  }
  *(uint *)&param_1[1].field_0x44 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar3 = auStack_1c;
  puVar4 = auStack_34;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar2 = core_box_cpp_FUN_0041a840(auStack_34);
  *(uint *)&param_1[1].field_0x44 = uVar2;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return *(uint *)&param_1[1].field_0x44;
}
