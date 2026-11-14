// Name: core_fire.cpp_CGlassParticle_process_FUN_0049ac10
// Address: 0049ac10
// Address Range: [[0049ac10, 0049ac89]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGlassParticle_process_FUN_0049ac10(CGlassParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGlassParticle_process_FUN_0049ac10(CGlassParticle *this_ptr)

{
  float fVar1;
  int iVar2;
  
  fVar1 = g_CGamePtr->delta_time_float;
  (this_ptr->euler_angles).x = (this_ptr->euler_angles).x + fVar1;
  (this_ptr->euler_angles).y = (this_ptr->euler_angles).y + fVar1;
  core_particle_cpp_FUN_00509f30(this_ptr);
  iVar2 = this_ptr->lifetime - _DAT_01c5fad0 / 6;
  this_ptr->lifetime = iVar2;
  if (-1 < iVar2) {
    return;
  }
  this_ptr->lifetime = 0;
  (this_ptr->base).lifetime_remaining = 0.0;
  return;
}
