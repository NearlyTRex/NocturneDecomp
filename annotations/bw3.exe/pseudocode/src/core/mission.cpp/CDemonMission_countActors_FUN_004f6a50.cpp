// Name: core_mission.cpp_CDemonMission_countActors_FUN_004f6a50
// Address: 004f6a50
// Address Range: [[004f6a50, 004f6a72]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004f6a50(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004f6a50(CDemonMission *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(this_ptr + 0x143c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
