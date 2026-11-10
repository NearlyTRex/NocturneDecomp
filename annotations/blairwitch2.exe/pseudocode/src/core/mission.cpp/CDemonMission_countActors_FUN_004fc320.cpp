// Name: core_mission.cpp_CDemonMission_countActors_FUN_004fc320
// Address: 004fc320
// Address Range: [[004fc320, 004fc342]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004fc320(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004fc320(CDemonMission *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(this_ptr + 0x1114); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
