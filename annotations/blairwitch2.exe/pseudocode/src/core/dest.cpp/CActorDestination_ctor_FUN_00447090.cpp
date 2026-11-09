// Name: core_dest.cpp_CActorDestination_ctor_FUN_00447090
// Address: 00447090
// Address Range: [[00447090, 004470f9]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_00447090(CActorDestination *this_ptr)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_00447090(CActorDestination *this_ptr)

{
  char cVar1;
  CActorDestination *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x5cea54;
  pCVar2 = (CActorDestination *)
           core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  pcVar4 = &pCVar2->field_0x2e4;
  *(byte **)&pCVar2->field_0x2b0 = &g_CActorDestinationVTable;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar2->field_0x2b4 = 0;
  pCVar2->field_0x2b8 = 0;
  *(uint *)&pCVar2->field_0x34c = 1;
  *(uint *)&pCVar2->field_0x348 = 1;
  return pCVar2;
}
