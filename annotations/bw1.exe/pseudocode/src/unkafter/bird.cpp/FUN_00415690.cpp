// Name: unkafter_bird.cpp_FUN_00415690
// Address: 00415690
// Address Range: [[00415690, 00415722]]
// Convention: unknown
// Signature: int unkafter_bird_cpp_FUN_00415690(CCharacter *param_1)

#include "nocturne.h"

int unkafter_bird_cpp_FUN_00415690(CCharacter *param_1)

{
  int iVar1;
  
  if (*(int *)&param_1[2].field_0x7710 == 0) {
    if (*(int *)&param_1->field_0x27a8 == 0) {
      iVar1 = core_charactr_cpp_FUN_0042f240(param_1);
      return iVar1;
    }
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if ((iVar1 != 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,"heroCanSee"), iVar1 == 0)) {
      return 0;
    }
    if (((*(int *)&param_1->field_0x27a8 != 0) && (*(int *)&g_CGamePtr->field_0x25c != 0)) &&
       (iVar1 = core_actor_cpp_FUN_0040cc60(0,2), iVar1 == 1)) {
      iVar1 = core_charactr_cpp_FUN_0042f240(param_1);
      return iVar1;
    }
  }
  return 0;
}
