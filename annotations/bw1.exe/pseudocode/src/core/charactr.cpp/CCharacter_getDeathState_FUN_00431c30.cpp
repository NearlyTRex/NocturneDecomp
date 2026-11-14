// Name: core_charactr.cpp_CCharacter_getDeathState_FUN_00431c30
// Address: 00431c30
// Address Range: [[00431c30, 00431cb4]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_00431c30(CCharacter *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_00431c30(CCharacter *this_ptr)

{
  char *pcVar1;
  CDeformableModelInstance *this_ptr_00;
  char *pcVar2;
  int iVar3;
  
  if ((this_ptr->base).lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  iVar3 = 3;
  pcVar2 = &DAT_005d5a90;
  this_ptr_00 = &this_ptr->model;
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(&this_ptr_00->base);
  iVar3 = _strnicmp(pcVar1,pcVar2,iVar3);
  if (iVar3 == 0) {
    return DEATH_STATE_DYING;
  }
  iVar3 = 4;
  pcVar2 = &DAT_005d5a94;
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(&this_ptr_00->base);
  iVar3 = _strnicmp(pcVar1,pcVar2,iVar3);
  if (iVar3 == 0) {
    return DEATH_STATE_DEAD;
  }
  pcVar2 = "DEAD_POSSUM";
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(&this_ptr_00->base);
  iVar3 = _stricmp(pcVar1,pcVar2);
  if (iVar3 == 0) {
    return ~DEATH_STATE_DYING;
  }
  return DEATH_STATE_ALIVE;
}
