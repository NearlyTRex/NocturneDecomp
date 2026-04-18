// Name: core_dest.cpp_CActorDestination_ctor_FUN_0046f900
// Address: 0046f900
// MANUAL RECONSTRUCTION
// Address Range: [[0046f900, 0046f969]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0046f900(CActorDestination *this_ptr)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0046f900(CActorDestination *this_ptr)

{
  CActorDestination *pCVar2;

  pCVar2 = (CActorDestination *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CActorDestinationVTable;
  strcpy(pCVar2->what_event,"none");
  pCVar2->dest_actor = (CDemonActor *)0x0;
  pCVar2->dest_class[0] = '\0';
  pCVar2->needs_actor_search = 1;
  pCVar2->persistent_event_flag = 1;
  return pCVar2;
}
