// Name: core_bwspart.cpp_CSimpleParticleSystem_start_FUN_005a80d0
// Address: 005a80d0
// Address Range: [[005a80d0, 005a80fc]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_CSimpleParticleSystem_start_FUN_005a80d0(CSimpleParticleSystem *this_ptr,int fade_in)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_CSimpleParticleSystem_start_FUN_005a80d0(CSimpleParticleSystem *this_ptr,int fade_in)

{
  if (this_ptr->owner != (CDemonActor *)0x0) {
    if (fade_in != 0) {
      core_bwspart_cpp_CSimpleParticleSystem_resetFade_FUN_005a8160(this_ptr);
      this_ptr->active = 1;
      return;
    }
    this_ptr->active = 1;
  }
  return;
}
