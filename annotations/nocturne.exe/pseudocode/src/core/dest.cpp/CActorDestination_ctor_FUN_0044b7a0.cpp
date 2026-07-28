// Name: core_dest.cpp_CActorDestination_ctor_FUN_0044b7a0
// Address: 0044b7a0
// Address Range: [[0044b7a0, 0044b809]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0044b7a0(CActorDestination *this_ptr)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0044b7a0(CActorDestination *this_ptr)

{
  char cVar1;
  CActorDestination *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = "none";
  pCVar2 = (CActorDestination *)core_actor_cpp_FUN_00409d30(this_ptr);
  pcVar4 = pCVar2->what_event;
  (pCVar2->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_dest_cpp_CActorDestination_setup_FUN_0044b810_0059be64;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->dest_actor = (CDemonActor *)0x0;
  pCVar2->dest_class[0] = '\0';
  pCVar2->needs_actor_search = 1;
  pCVar2->persistent_event_flag = 1;
  return pCVar2;
}
