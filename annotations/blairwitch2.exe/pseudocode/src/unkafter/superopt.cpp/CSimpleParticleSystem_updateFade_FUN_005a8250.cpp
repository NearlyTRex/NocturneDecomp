// Name: unkafter_superopt.cpp_CSimpleParticleSystem_updateFade_FUN_005a8250
// Address: 005a8250
// Address Range: [[005a8250, 005a8289]]
// Convention: __cdecl
// Signature: float __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_updateFade_FUN_005a8250(CSimpleParticleSystem *this_ptr)

#include "nocturne.h"

float __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_updateFade_FUN_005a8250(CSimpleParticleSystem *this_ptr)

{
  if (0.0 < this_ptr->fade_timer) {
    this_ptr->fade_current =
         (this_ptr->fade_end - this_ptr->fade_start) *
         (1.0 - this_ptr->fade_timer / this_ptr->fade_duration) + this_ptr->fade_start;
    return this_ptr->fade_current;
  }
  this_ptr->fade_current = this_ptr->fade_end;
  return this_ptr->fade_current;
}
