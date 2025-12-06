// Name: core_mission.cpp_CDemonMission_FUN_00524630
// Address: 00524630
// Address Range: [[00524630, 00524657]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00524630(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00524630(CDemonMission *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *in_stack_00000008;
  
  pcVar2 = &DAT_02f35f10;
  do {
    cVar1 = *in_stack_00000008;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
