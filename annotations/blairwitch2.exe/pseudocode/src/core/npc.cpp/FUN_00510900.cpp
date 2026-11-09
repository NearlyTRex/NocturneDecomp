// Name: core_npc.cpp_FUN_00510900
// Address: 00510900
// Address Range: [[00510900, 0051098f]]
// Convention: unknown
// Signature: undefined4 core_npc_cpp_FUN_00510900(int param_1)

#include "nocturne.h"

uint core_npc_cpp_FUN_00510900(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x24340) == 0) {
    if (*(int *)(param_1 + 0x2814) == 0) {
      uVar2 = core_charactr_cpp_FUN_004254b0(param_1);
      return uVar2;
    }
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if (iVar1 != 0) {
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,"heroCanSee");
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((*(int *)(param_1 + 0x2814) != 0) && (*(int *)&g_CGamePtr->field_0x25c != 0)) {
      iVar1 = core_actor_cpp_FUN_0040cfc0(0,2);
      if (iVar1 == 1) {
        uVar2 = core_charactr_cpp_FUN_004254b0(param_1);
        return uVar2;
      }
    }
  }
  return 0;
}
