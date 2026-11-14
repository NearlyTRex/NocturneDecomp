// Name: core_script.cpp_readActorReference_FUN_0052a010
// Address: 0052a010
// Address Range: [[0052a010, 0052a08f]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_readActorReference_FUN_0052a010(_FILE *file_handle,CDemonActor *actor_out)

#include "nocturne.h"

void __cdecl core_script_cpp_readActorReference_FUN_0052a010(_FILE *file_handle,CDemonActor *actor_out)

{
  char *pcVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint *puVar4;
  char local_d0 [200];
  
  puVar4 = &DAT_0061b470;
  pcVar1 = local_d0;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    pcVar1 = (char *)((int)pcVar1 + 4);
  }
  _fscanf(file_handle,"\"%[^\"]\"\n");
  iVar3 = _stricmp(local_d0,"(none)");
  if (iVar3 == 0) {
    actor_out->actor_name[0] = '\0';
    actor_out->actor_name[1] = '\0';
    actor_out->actor_name[2] = '\0';
    actor_out->actor_name[3] = '\0';
    return;
  }
  pCVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740(0x01D182F0,local_d0);
  *(CDemonActor **)actor_out->actor_name = pCVar2;
  return;
}
