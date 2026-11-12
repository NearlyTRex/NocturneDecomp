// Name: core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220
// Address: 005a8220
// Address Range: [[005a8220, 005a8243]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(CSimpleParticleSystem *this_ptr)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(CSimpleParticleSystem *this_ptr)

{
  this_ptr->owner = (CDemonActor *)0x0;
  this_ptr->active = 0;
  if (this_ptr->particles == (void *)0x0) {
    return;
  }
  FUN_005b86a0(this_ptr->particles);
  return;
}
