// Name: core_fire.cpp_CSpark_process_FUN_004c0240
// Address: 004c0240
// Address Range: [[004c0240, 004c02f6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSpark_process_FUN_004c0240(CSpark *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSpark_process_FUN_004c0240(CSpark *this_ptr)

{
  float delta_time;
  longlong lVar1;
  int iVar2;
  
  if (this_ptr->first_update_flag == 0) {
    this_ptr->first_update_flag = 1;
  }
  else {
    lVar1 = (longlong)g_GlobalDeltaTimeInt * (longlong)this_ptr->fade_rate;
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
  lVar1 = (longlong)this_ptr->fade_rate * (longlong)g_GlobalDeltaTimeInt;
  core_game_cpp_CGame_slamDT_FUN_004e3080
            (g_CGamePtr,
             (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
             (float)1.52587890625e-05);
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,delta_time);
  return;
}
