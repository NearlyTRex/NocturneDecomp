// Name: core_script.cpp_GetReferencedActor_FUN_00560760
// Address: 00560760
// Address Range: [[00560760, 005607df]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_GetReferencedActor_FUN_00560760(_FILE *param_1,int *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_GetReferencedActor_FUN_00560760(_FILE *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  char local_d0 [200];
  
  puVar3 = &DAT_00680d60;
  pcVar1 = local_d0;
  for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar1 = (char *)((int)pcVar1 + 4);
  }
  _fscanf(param_1,"\"%[^\"]\"\n",local_d0);
  iVar2 = stricmp(local_d0,"(none)");
  if (iVar2 == 0) {
    *param_2 = 0;
    return;
  }
  pcVar1 = core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
  *param_2 = (int)pcVar1;
  return;
}
