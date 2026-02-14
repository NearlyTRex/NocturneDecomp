// Name: core_gabriela.cpp_CGabriella_onActorDeleted_FUN_004d75e0
// Address: 004d75e0
// Address Range: [[004d75e0, 004d760c]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_onActorDeleted_FUN_004d75e0(CGabriella *this_ptr,CDemonActor *deleted_actor)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_onActorDeleted_FUN_004d75e0(CGabriella *this_ptr,CDemonActor *deleted_actor)

{
  core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0((CCharacter *)this_ptr,deleted_actor);
  if (*(CDemonActor **)(this_ptr->unk1 + 8) != deleted_actor) {
    return;
  }
  this_ptr->unk1[8] = '\0';
  this_ptr->unk1[9] = '\0';
  this_ptr->unk1[10] = '\0';
  this_ptr->unk1[0xb] = '\0';
  return;
}
