// Name: core_dest.cpp_CActorDestination_FUN_0046fd50
// Address: 0046fd50
// Address Range: [[0046fd50, 0046fda2]]
// Convention: __cdecl
// Signature: int __cdecl core_dest_cpp_CActorDestination_FUN_0046fd50(CActorDestination *this_ptr)

#include "nocturne.h"

int __cdecl core_dest_cpp_CActorDestination_FUN_0046fd50(CActorDestination *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  if (this_ptr->unk1 == 0) {
    if (this_ptr->dest_class[0] == '\0') {
      if (in_stack_00000008 == this_ptr->dest_actor) {
        return 1;
      }
    }
    else {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,this_ptr->dest_class);
      if (iVar1 != 0) {
        this_ptr->dest_actor = in_stack_00000008;
        return 1;
      }
    }
  }
  return 0;
}
