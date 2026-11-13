// Name: core_fire.cpp_CShell_process_FUN_004a0af0
// Address: 004a0af0
// Address Range: [[004a0af0, 004a0b82]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CShell_process_FUN_004a0af0(CShell *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CShell_process_FUN_004a0af0(CShell *this_ptr)

{
  byte bVar1;
  float afStackY_1008 [1015];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar1 = 0;
  if ((this_ptr->base).lifetime_remaining <= 0.0) {
    return;
  }
  core_particle_cpp_FUN_00509f30(this_ptr);
  fStack_8 = g_CGamePtr->delta_time_float;
  fStack_20 = (this_ptr->angular_velocity).x * fStack_8;
  fStack_1c = (this_ptr->angular_velocity).y * fStack_8;
  fStack_18 = (this_ptr->angular_velocity).z * fStack_8;
  fStack_14 = fStack_20;
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  (this_ptr->euler_angles).x = (this_ptr->euler_angles).x + fStack_14;
  (this_ptr->euler_angles).y = (this_ptr->euler_angles).y + fStack_10;
  (this_ptr->euler_angles).z = (this_ptr->euler_angles).z + fStack_c;
  return;
}
