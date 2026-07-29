// Name: core_fire.cpp_CShell_process_FUN_004897d0
// Address: 004897d0
// Address Range: [[004897d0, 00489849]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CShell_process_FUN_004897d0(CShell *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CShell_process_FUN_004897d0(CShell *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((this_ptr->base).lifetime_remaining <= 0.0) {
    return;
  }
  core_particle_cpp_CParticle_process_FUN_004ef120(&this_ptr->base);
  fVar3 = *(float *)(0x01C775EC + 0x264);
  fVar1 = (this_ptr->angular_velocity).y;
  fVar2 = (this_ptr->angular_velocity).z;
  (this_ptr->euler_angles).x = (this_ptr->euler_angles).x + (this_ptr->angular_velocity).x * fVar3;
  (this_ptr->euler_angles).y = (this_ptr->euler_angles).y + fVar1 * fVar3;
  (this_ptr->euler_angles).z = (this_ptr->euler_angles).z + fVar2 * fVar3;
  return;
}
