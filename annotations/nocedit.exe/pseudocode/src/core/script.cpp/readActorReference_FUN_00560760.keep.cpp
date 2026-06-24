// Name: core_script.cpp_readActorReference_FUN_00560760
// Address: 00560760
// MANUAL RECONSTRUCTION
// Address Range: [[00560760, 005607df]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_readActorReference_FUN_00560760(_FILE *file_handle,CDemonActor *actor_out)

#include "nocturne.h"

void __cdecl core_script_cpp_readActorReference_FUN_00560760(_FILE *file_handle,CDemonActor *actor_out)

{
  int iVar1;
  CDemonActor *pCVar2;
  char local_d0 [200];

  memcpy(local_d0,g_ActorRefDefaultBuffer,sizeof(local_d0));
  _fscanf(file_handle,"\"%[^\"]\"\n",local_d0);
  iVar1 = _stricmp(local_d0,"(none)");
  if (iVar1 == 0) {
    actor_out->actor_name[0] = '\0';
    actor_out->actor_name[1] = '\0';
    actor_out->actor_name[2] = '\0';
    actor_out->actor_name[3] = '\0';
    return;
  }
  pCVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(g_CDemonMissionPtr,local_d0);
  *(CDemonActor **)actor_out->actor_name = pCVar2;
  return;
}
