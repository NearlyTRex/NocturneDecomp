// Name: core_dest.cpp_CActorDestination_ctor_FUN_0045d1f0
// Address: 0045d1f0
// Address Range: [[0045d1f0, 0045d259]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0045d1f0(CActorDestination *this_ptr)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0045d1f0(CActorDestination *this_ptr)

{
  char cVar1;
  CActorDestination *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x5d834d;
  pCVar2 = (CActorDestination *)core_actor_cpp_CDemonActor_ctor_FUN_004085c0(&this_ptr->base);
  pcVar4 = pCVar2->what_event;
  (pCVar2->base).vtable._ub = &g_CActorDestinationVTable;
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
