// Name: core_actor.cpp_archiveActor_FUN_0040c980
// Address: 0040c980
// Address Range: [[0040c980, 0040c9fe]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040c980(CDemonActor **actor_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040c980(CDemonActor **actor_ptr,char *property_name)

{
  CDemonActor *pCVar1;
  
  if (g_INT_00763e88 == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_004d8aa0
                       (g_CDemonMission_PTR_005baf90,g_FILE_PTR_00763e84,g_CDemonActor_PTR_00763e8c,
                        property_name);
    *actor_ptr = pCVar1;
    return;
  }
  _fprintf(g_FILE_PTR_00763e84,"%s",g_CHAR_ARRAY_005acc90);
  core_mission_cpp_CDemonMission_saveActor_FUN_004d8c00
            (g_CDemonMission_PTR_005baf90,*actor_ptr,g_FILE_PTR_00763e84,g_CDemonActor_PTR_00763e8c,
             property_name);
  return;
}
