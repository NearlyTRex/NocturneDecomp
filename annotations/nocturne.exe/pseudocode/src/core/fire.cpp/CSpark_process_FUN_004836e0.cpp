// Name: core_fire.cpp_CSpark_process_FUN_004836e0
// Address: 004836e0
// Address Range: [[004836e0, 00483796]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSpark_process_FUN_004836e0(CSpark *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSpark_process_FUN_004836e0(CSpark *this_ptr)

{
  float delta_time;
  longlong lVar1;
  int iVar2;
  
  if (this_ptr->first_update_flag == 0) {
    this_ptr->first_update_flag = 1;
  }
  else {
    lVar1 = (longlong)_DAT_01bd1d80 * (longlong)this_ptr->fade_rate;
    lVar1 = (longlong)this_ptr->intensity_target *
            (longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    iVar2 = this_ptr->intensity_current -
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    this_ptr->intensity_current = iVar2;
    if (iVar2 < 0) {
      (this_ptr->base).lifetime_remaining = 0.0;
      this_ptr->intensity_current = 0;
    }
  }
  delta_time = g_CGame_PTR_005b9354->delta_time_float;
  lVar1 = (longlong)this_ptr->fade_rate * (longlong)_DAT_01bd1d80;
  core_game_cpp_CGame_slamDT_FUN_004a5f00
            (g_CGame_PTR_005b9354,
             (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
             (float)1.52587890625e-05);
  core_particle_cpp_CParticle_process_FUN_004ef120(&this_ptr->base);
  core_game_cpp_CGame_slamDT_FUN_004a5f00(g_CGame_PTR_005b9354,delta_time);
  return;
}
