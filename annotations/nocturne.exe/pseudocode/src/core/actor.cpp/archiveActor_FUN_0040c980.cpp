// Name: core_actor.cpp_archiveActor_FUN_0040c980
// Address: 0040c980
// Address Range: [[0040c980, 0040c9fe]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040c980(CDemonActor **actor_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040c980(CDemonActor **actor_ptr,char *property_name)

{
  CDemonActor *pCVar1;
  
  if (DAT_00763e88 == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_004d8aa0
                       (0x01CC9450,DAT_00763e84,DAT_00763e8c,property_name);
    *actor_ptr = pCVar1;
    return;
  }
  _fprintf(DAT_00763e84,"%s",&DAT_005acc90);
  core_mission_cpp_CDemonMission_saveActor_FUN_004d8c00
            (0x01CC9450,*actor_ptr,DAT_00763e84,DAT_00763e8c,property_name);
  return;
}
