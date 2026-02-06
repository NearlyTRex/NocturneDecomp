// Name: core_flies.cpp_CFlies_setup_FUN_004cbe20
// Address: 004cbe20
// Address Range: [[004cbe20, 004cbe2b]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_setup_FUN_004cbe20(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_setup_FUN_004cbe20(CFlies *this_ptr)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  iVar1 = 0;
  if (0 < this_ptr->count) {
    do {
      core_flies_cpp_CFlies_FUN_004cc760(this_ptr);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->count);
  }
  this_ptr->unk3[4] = '\x01';
  this_ptr->unk3[5] = '\0';
  this_ptr->unk3[6] = '\0';
  this_ptr->unk3[7] = '\0';
  return;
}
