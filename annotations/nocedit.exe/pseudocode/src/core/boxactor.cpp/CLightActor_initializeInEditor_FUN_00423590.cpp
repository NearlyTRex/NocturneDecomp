// Name: core_boxactor.cpp_CLightActor_initializeInEditor_FUN_00423590
// Address: 00423590
// Address Range: [[00423590, 004235b7]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CLightActor_initializeInEditor_FUN_00423590(CLightActor *this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CLightActor_initializeInEditor_FUN_00423590(CLightActor *this_ptr)

{
  ELightActorType EVar1;
  
  EVar1 = core_boxactor_cpp_pickLightActorType_FUN_00423110("Select type of light to fill in initial properties.  (You can manually adjust later).",0,1)
  ;
  if (-1 < (int)EVar1) {
    this_ptr->light_actor_type = EVar1;
    return 1;
  }
  return 0;
}
