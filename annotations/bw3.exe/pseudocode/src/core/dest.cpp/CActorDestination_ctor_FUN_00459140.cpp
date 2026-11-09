// Name: core_dest.cpp_CActorDestination_ctor_FUN_00459140
// Address: 00459140
// Address Range: [[00459140, 004591a9]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_00459140(CActorDestination *this_ptr)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_00459140(CActorDestination *this_ptr)

{
  char cVar1;
  CActorDestination *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x5ba9a6;
  pCVar2 = (CActorDestination *)
           core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  pcVar4 = &pCVar2->field_0x188;
  *(byte **)&pCVar2->field_0x154 = &g_CActorDestinationVTable;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar2->field_0x158 = 0;
  pCVar2->field_0x15c = 0;
  *(uint *)&pCVar2->field_0x1f0 = 1;
  *(uint *)&pCVar2->field_0x1ec = 1;
  return pCVar2;
}
