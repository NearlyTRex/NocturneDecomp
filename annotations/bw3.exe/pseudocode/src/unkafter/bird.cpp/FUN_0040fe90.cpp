// Name: unkafter_bird.cpp_FUN_0040fe90
// Address: 0040fe90
// Address Range: [[0040fe90, 0040ff22]]
// Convention: unknown
// Signature: int unkafter_bird_cpp_FUN_0040fe90(CCharacter *param_1)

#include "nocturne.h"

int unkafter_bird_cpp_FUN_0040fe90(CCharacter *param_1)

{
  int iVar1;
  
  if (*(int *)&param_1[2].field_0x6b14 == 0) {
    if (*(int *)&param_1->field_0x27a8 == 0) {
      iVar1 = core_charactr_cpp_FUN_0042e220(param_1);
      return iVar1;
    }
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if ((iVar1 != 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,"heroCanSee"), iVar1 == 0)) {
      return 0;
    }
    if (((*(int *)&param_1->field_0x27a8 != 0) && (*(int *)&g_CGamePtr->field_0x264 != 0)) &&
       (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2), iVar1 == 1)) {
      iVar1 = core_charactr_cpp_FUN_0042e220(param_1);
      return iVar1;
    }
  }
  return 0;
}
