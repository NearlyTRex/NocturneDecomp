// Name: core_fire.cpp_CGlassParticle_process_FUN_004afbf0
// Address: 004afbf0
// Address Range: [[004afbf0, 004afc5d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGlassParticle_process_FUN_004afbf0(CGlassParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGlassParticle_process_FUN_004afbf0(CGlassParticle *this_ptr)

{
  float fVar1;
  int iVar2;
  
  fVar1 = g_CGamePtr->delta_time_float;
  (this_ptr->euler_angles).x = (this_ptr->euler_angles).x + fVar1;
  (this_ptr->euler_angles).y = (this_ptr->euler_angles).y + fVar1;
  core_particle_cpp_FUN_00532250(this_ptr);
  iVar2 = this_ptr->lifetime - _DAT_01c43530 / 6;
  this_ptr->lifetime = iVar2;
  if (-1 < iVar2) {
    return;
  }
  this_ptr->lifetime = 0;
  *(uint *)&this_ptr->field_0x24 = 0;
  return;
}
