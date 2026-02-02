// Name: core_actor.cpp_archiveActor_FUN_0040b870
// Address: 0040b870
// Address Range: [[0040b870, 0040b8ee]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040b870(CDemonActor *actor_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040b870(CDemonActor *actor_ptr,char *property_name)

{
  CDemonActor *pCVar1;
  
  if (g_ActorReadingMode == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_00523990
                       (g_CDemonMissionPtr,g_ActorDataFile,g_CurrentActorBeingProcessed,
                        property_name);
    *(CDemonActor **)actor_ptr->actor_name = pCVar1;
    return;
  }
  _fprintf(g_ActorDataFile,"%s",g_PropertyNamePrefix);
  core_mission_cpp_CDemonMission_saveActor_FUN_00523af0
            (g_CDemonMissionPtr,*(CDemonActor **)actor_ptr->actor_name,g_ActorDataFile,
             g_CurrentActorBeingProcessed,property_name);
  return;
}
