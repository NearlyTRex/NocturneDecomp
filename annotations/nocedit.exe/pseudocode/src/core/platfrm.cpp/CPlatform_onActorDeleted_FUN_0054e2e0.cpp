// Name: core_platfrm.cpp_CPlatform_onActorDeleted_FUN_0054e2e0
// Address: 0054e2e0
// Address Range: [[0054e2e0, 0054e311]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_onActorDeleted_FUN_0054e2e0(CPlatform *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_onActorDeleted_FUN_0054e2e0(CPlatform *this_ptr,CDemonActor *deleted_actor)

{
  CPlatform *pCVar1;
  
  pCVar1 = (CPlatform *)((this_ptr->model).model_name + 0x38);
  do {
    while (deleted_actor == this_ptr->attach_actors[0].actor) {
      this_ptr->attach_actors[0].actor = (CDemonActor *)0x0;
      this_ptr = (CPlatform *)((int)&(this_ptr->base).orient + 4);
      if (this_ptr == pCVar1) {
        return;
      }
    }
    this_ptr = (CPlatform *)((int)&(this_ptr->base).orient + 4);
  } while (this_ptr != pCVar1);
  return;
}
