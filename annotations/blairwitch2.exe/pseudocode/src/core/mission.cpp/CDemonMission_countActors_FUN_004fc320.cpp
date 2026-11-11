// Name: core_mission.cpp_CDemonMission_countActors_FUN_004fc320
// Address: 004fc320
// Address Range: [[004fc320, 004fc342]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004fc320(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004fc320(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
