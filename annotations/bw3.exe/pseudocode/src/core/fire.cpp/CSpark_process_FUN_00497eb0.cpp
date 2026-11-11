// Name: core_fire.cpp_CSpark_process_FUN_00497eb0
// Address: 00497eb0
// Address Range: [[00497eb0, 00497f66]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSpark_process_FUN_00497eb0(CSpark *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSpark_process_FUN_00497eb0(CSpark *this_ptr)

{
  float delta_time;
  longlong lVar1;
  int iVar2;
  
  if (this_ptr->first_update_flag == 0) {
    this_ptr->first_update_flag = 1;
  }
  else {
    lVar1 = (longlong)_DAT_01c5fad0 * (longlong)this_ptr->fade_rate;
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
  delta_time = g_CGamePtr->delta_time_float;
  lVar1 = (longlong)this_ptr->fade_rate * (longlong)_DAT_01c5fad0;
  core_game_cpp_CGame_slamDT_FUN_004bf3a0
            (g_CGamePtr,
             (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
             (float)_DAT_005c0518);
  core_particle_cpp_FUN_00509f30(this_ptr);
  core_game_cpp_CGame_slamDT_FUN_004bf3a0(g_CGamePtr,delta_time);
  return;
}
