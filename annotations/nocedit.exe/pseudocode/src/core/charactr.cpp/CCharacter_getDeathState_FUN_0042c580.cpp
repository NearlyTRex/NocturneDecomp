// Name: core_charactr.cpp_CCharacter_getDeathState_FUN_0042c580
// Address: 0042c580
// Address Range: [[0042c580, 0042c5e0]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580(CCharacter *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580(CCharacter *this_ptr)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  if ((this_ptr->base).lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  iVar3 = 3;
  pcVar2 = "DIE";
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
                     (&(this_ptr->model).motion_controller);
  iVar3 = _strnicmp(pcVar1,pcVar2,iVar3);
  if (iVar3 == 0) {
    return DEATH_STATE_DYING;
  }
  pcVar2 = "DEAD";
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
                     (&(this_ptr->model).motion_controller);
  iVar3 = _stricmp(pcVar1,pcVar2);
  if (iVar3 == 0) {
    return DEATH_STATE_DEAD;
  }
  return DEATH_STATE_ALIVE;
}
