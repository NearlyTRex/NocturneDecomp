// Name: core_actor.cpp_archiveActor_FUN_0040b9e0
// Address: 0040b9e0
// Address Range: [[0040b9e0, 0040ba5e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040b9e0(CDemonActor **actor_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040b9e0(CDemonActor **actor_ptr,char *property_name)

{
  CDemonActor *pCVar1;
  
  if (DAT_007bc038 == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_004fc040
                       (0x01D182F0,DAT_007bc034,DAT_007bc03c,property_name);
    *actor_ptr = pCVar1;
    return;
  }
  FUN_005b8010(DAT_007bc034,&DAT_005cab4e,&DAT_00609590);
  core_mission_cpp_CDemonMission_saveActor_FUN_004fc1a0
            (0x01D182F0,*actor_ptr,DAT_007bc034,DAT_007bc03c,property_name);
  return;
}
