// Name: core_mission.cpp_CDemonMission_countActors_FUN_004d8d80
// Address: 004d8d80
// Address Range: [[004d8d80, 004d8da2]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004d8d80(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004d8d80(CDemonMission *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(this_ptr->set_names[3] + 0xcc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x144))
  {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
