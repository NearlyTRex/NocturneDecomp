// Name: core_gore.cpp_CGore_FUN_004ee030
// Address: 004ee030
// Address Range: [[004ee030, 004ee063]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004ee030(CGore *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ee030(CGore *this_ptr,CDemonActor *actor)

{
  CFlies *pCVar1;
  
  pCVar1 = core_gore_cpp_CreateFlies_FUN_004edf30();
  (pCVar1->base).location.area_id = (actor->location).area_id;
  *(CDemonActor **)(pCVar1->unk + 0x28b0) = actor;
  return;
}
