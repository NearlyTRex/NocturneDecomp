// Name: unkaddr_005a7eb0.cpp_CSimpleParticleSystem_start_FUN_005a80d0
// Address: 005a80d0
// Address Range: [[005a80d0, 005a80fc]]
// Convention: __cdecl
// Signature: void __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_start_FUN_005a80d0(CSimpleParticleSystem *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_start_FUN_005a80d0(CSimpleParticleSystem *this_ptr,int param_2)

{
  if (this_ptr->owner != (CDemonActor *)0x0) {
    if (param_2 != 0) {
      unkafter_superopt_cpp_CSimpleParticleSystem_resetFade_FUN_005a8160(this_ptr);
      this_ptr->active = 1;
      return;
    }
    this_ptr->active = 1;
  }
  return;
}
