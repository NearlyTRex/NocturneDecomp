// Name: unkaddr_005a7eb0.cpp_CSimpleParticleSystem_stop_FUN_005a8100
// Address: 005a8100
// Address Range: [[005a8100, 005a8129]]
// Convention: __cdecl
// Signature: void __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_stop_FUN_005a8100(CSimpleParticleSystem *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_stop_FUN_005a8100(CSimpleParticleSystem *this_ptr,int param_2)

{
  if (this_ptr->owner != (CDemonActor *)0x0) {
    if (param_2 != 0) {
      this_ptr->stop_after_fade = 1;
      unkafter_superopt_cpp_CSimpleParticleSystem_resetFade_FUN_005a8160(this_ptr);
      return;
    }
    this_ptr->stop_after_fade = 0;
    this_ptr->active = 0;
  }
  return;
}
