// Name: core_dest.cpp_CActorDestination_ctor_FUN_0046f900
// Address: 0046f900
// Address Range: [[0046f900, 0046f969]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0046f900(CActorDestination *this_ptr)

#include "nocturne.h"

CActorDestination * __cdecl
core_dest_cpp_CActorDestination_ctor_FUN_0046f900(CActorDestination *this_ptr)

{
  char cVar1;
  CActorDestination *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = "none";
  pCVar2 = (CActorDestination *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pcVar4 = pCVar2->what_event;
  (pCVar2->base_actor).vtable._ub = &g_CActorDestinationVTable;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->dest_actor = 0;
  pCVar2->dest_class[0] = '\0';
  pCVar2->unk = 1;
  pCVar2->persistent_event_flag = 1;
  return pCVar2;
}
