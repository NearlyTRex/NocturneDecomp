// Name: core_flame.cpp_CFlame_setup_FUN_004a5aa0
// Address: 004a5aa0
// Address Range: [[004a5aa0, 004a5acc]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_setup_FUN_004a5aa0(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_setup_FUN_004a5aa0(CFlame *this_ptr)

{
  uint uVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_flame_cpp_FUN_004a5ad0(this_ptr->which_flame);
  uVar1 = rand();
  this_ptr->texture_flip = uVar1 & 1;
  return;
}
