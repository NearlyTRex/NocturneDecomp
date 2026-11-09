// Name: core_npc.cpp_FUN_00509560
// Address: 00509560
// Address Range: [[00509560, 005095ef]]
// Convention: unknown
// Signature: int core_npc_cpp_FUN_00509560(CCharacter *param_1)

#include "nocturne.h"

int core_npc_cpp_FUN_00509560(CCharacter *param_1)

{
  int iVar1;
  
  if (*(int *)&param_1[2].field_0x6b14 == 0) {
    if (*(int *)&param_1->field_0x27a8 == 0) {
      iVar1 = core_charactr_cpp_FUN_0042e220(param_1);
      return iVar1;
    }
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if (iVar1 != 0) {
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,"heroCanSee");
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((*(int *)&param_1->field_0x27a8 != 0) && (*(int *)&g_CGamePtr->field_0x264 != 0)) {
      iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      if (iVar1 == 1) {
        iVar1 = core_charactr_cpp_FUN_0042e220(param_1);
        return iVar1;
      }
    }
  }
  return 0;
}
