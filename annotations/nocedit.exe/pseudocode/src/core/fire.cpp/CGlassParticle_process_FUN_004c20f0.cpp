// Name: core_fire.cpp_CGlassParticle_process_FUN_004c20f0
// Address: 004c20f0
// Address Range: [[004c20f0, 004c215d]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGlassParticle_process_FUN_004c20f0(CGlassParticle * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGlassParticle_process_FUN_004c20f0(CGlassParticle *this_ptr)

{
  float fVar1;
  int iVar2;
  
  fVar1 = g_CGamePtr->delta_time_float;
  (this_ptr->euler_angles).x = (this_ptr->euler_angles).x + fVar1;
  (this_ptr->euler_angles).y = (this_ptr->euler_angles).y + fVar1;
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  iVar2 = this_ptr->lifetime - g_GlobalDeltaTimeInt / 6;
  this_ptr->lifetime = iVar2;
  if (-1 < iVar2) {
    return;
  }
  this_ptr->lifetime = 0;
  (this_ptr->base).lifetime_remaining = 0.0;
  return;
}
