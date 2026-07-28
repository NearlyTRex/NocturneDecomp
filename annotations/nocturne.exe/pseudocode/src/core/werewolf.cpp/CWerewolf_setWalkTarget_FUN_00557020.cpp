// Name: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_00557020
// Address: 00557020
// Address Range: [[00557020, 00557055]]
// Convention: unknown
// Signature: void core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_00557020(CCharacter *param_1,CDemonActor *param_2,float param_3,float param_4)

#include "nocturne.h"

void core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_00557020(CCharacter *param_1,CDemonActor *param_2,float param_3,float param_4)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(param_1->model).motion_controller);
  if (pSVar1->state_index == 0x13) {
    return;
  }
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_00428ab0(param_1,param_2,param_3,param_4);
  return;
}
