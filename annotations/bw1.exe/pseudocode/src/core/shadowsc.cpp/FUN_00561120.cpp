// Name: core_shadowsc.cpp_FUN_00561120
// Address: 00561120
// Address Range: [[00561120, 00561190]]
// Convention: unknown
// Signature: int core_shadowsc_cpp_FUN_00561120(CCharacter *param_1)

#include "nocturne.h"

int core_shadowsc_cpp_FUN_00561120(CCharacter *param_1)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"heroCanSee");
  if (iVar1 != 0) {
    if ((*(int *)&param_1[1].field_0xc8 == 0) &&
       (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
       iVar1 != 0)) {
      return 0;
    }
    if ((*(int *)&g_CGamePtr->field_0x25c != 0) &&
       (iVar1 = core_actor_cpp_FUN_0040cc60(0,2), iVar1 == 1)) {
      iVar1 = core_charactr_cpp_FUN_0042f240(param_1);
      return iVar1;
    }
  }
  return 0;
}
