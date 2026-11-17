// Name: core_actor.cpp_archiveActor_FUN_0040b9e0
// Address: 0040b9e0
// Address Range: [[0040b9e0, 0040ba5e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveActor_FUN_0040b9e0(CDemonActor **actor_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveActor_FUN_0040b9e0(CDemonActor **actor_ptr,char *property_name)

{
  CDemonActor *pCVar1;
  
  if (g_INT_007bc038 == 1) {
    pCVar1 = core_mission_cpp_CDemonMission_loadActor_FUN_004fc040
                       (g_CDemonMission_PTR_00618170,g_FILE_PTR_007bc034,g_CDemonActor_PTR_007bc03c,
                        property_name);
    *actor_ptr = pCVar1;
    return;
  }
  _fprintf(g_FILE_PTR_007bc034,"%s");
  core_mission_cpp_CDemonMission_saveActor_FUN_004fc1a0
            (g_CDemonMission_PTR_00618170,*actor_ptr,g_FILE_PTR_007bc034,g_CDemonActor_PTR_007bc03c,
             property_name);
  return;
}
