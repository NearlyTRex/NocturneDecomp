// Name: core_charactr.cpp_CCharacter_getDeathState_FUN_00428710
// Address: 00428710
// Address Range: [[00428710, 00428770]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_00428710(CCharacter *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_00428710(CCharacter *this_ptr)

{
  char *pcVar1;
  float *str2;
  int iVar2;
  char *str2_00;
  
  if ((this_ptr->base).lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  iVar2 = 3;
  str2 = &FLOAT_0057a04a;
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0
                     (&(this_ptr->model).motion_controller);
  iVar2 = _strnicmp(pcVar1,(char *)str2,iVar2);
  if (iVar2 == 0) {
    return DEATH_STATE_DYING;
  }
  str2_00 = "DEAD";
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0
                     (&(this_ptr->model).motion_controller);
  iVar2 = _stricmp(pcVar1,str2_00);
  if (iVar2 == 0) {
    return DEATH_STATE_DEAD;
  }
  return DEATH_STATE_ALIVE;
}
