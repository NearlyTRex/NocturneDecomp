// Name: core_charactr.cpp_CCharacter_getDeathState_FUN_00431000
// Address: 00431000
// Address Range: [[00431000, 004310d2]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_00431000(CCharacter *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_00431000(CCharacter *this_ptr)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_70 [100];
  
  pcVar2 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004fc320
                     (&(this_ptr->model).base);
  pcVar4 = local_70;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  FUN_005a3ff0(local_70);
  if ((this_ptr->base).lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  iVar3 = _strnicmp(local_70,&DAT_005b83d7,3);
  if (iVar3 == 0) {
    return DEATH_STATE_DYING;
  }
  iVar3 = _stricmp(local_70,"DEAD_POSSUM");
  if (iVar3 == 0) {
    return ~DEATH_STATE_DYING;
  }
  pcVar2 = strstr(local_70,&DAT_005b83e7);
  if ((pcVar2 != (char *)0x0) && (this_ptr->hit_points <= 0.0)) {
    return DEATH_STATE_DEAD;
  }
  return DEATH_STATE_ALIVE;
}
