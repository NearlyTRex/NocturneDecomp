// Name: core_gore.cpp_CGore_FUN_004ee030
// Address: 004ee030
// Address Range: [[004ee030, 004ee063]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004ee030(CGore *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ee030(CGore *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  iVar1 = core_gore_cpp_CreateFlies_FUN_004edf30();
  *(int *)(iVar1 + 0x2c) = (actor->location).area_id;
  *(CDemonActor **)(iVar1 + 0x2a08) = actor;
  return;
}
