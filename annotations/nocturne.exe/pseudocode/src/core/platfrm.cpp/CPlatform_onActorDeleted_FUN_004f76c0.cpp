// Name: core_platfrm.cpp_CPlatform_onActorDeleted_FUN_004f76c0
// Address: 004f76c0
// Address Range: [[004f76c0, 004f76f1]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_onActorDeleted_FUN_004f76c0(CPlatform *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_onActorDeleted_FUN_004f76c0(CPlatform *this_ptr,CDemonActor *deleted_actor)

{
  CPlatform *pCVar1;
  
  pCVar1 = (CPlatform *)((this_ptr->model).model_name + 0x40);
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
