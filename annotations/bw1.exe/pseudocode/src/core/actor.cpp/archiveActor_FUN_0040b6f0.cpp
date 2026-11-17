// Name: core_actor.cpp_archiveActor_FUN_0040b6f0
// Address: 0040b6f0
// Address Range: [[0040b6f0, 0040b76e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040b6f0(CDemonActor **actor_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040b6f0(CDemonActor **actor_ptr,char *property_name)

{
  CDemonActor *pCVar1;
  
  if (g_INT_007c3038 == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_0051afa0
                       (g_CDemonMission_PTR_0061f650,g_FILE_PTR_007c3034,g_CDemonActor_PTR_007c303c,
                        property_name);
    *actor_ptr = pCVar1;
    return;
  }
  _fprintf(g_FILE_PTR_007c3034,"%s");
  core_mission_cpp_CDemonMission_saveActor_FUN_0051b100
            (g_CDemonMission_PTR_0061f650,*actor_ptr,g_FILE_PTR_007c3034,g_CDemonActor_PTR_007c303c,
             property_name);
  return;
}
