// Name: core_fire.cpp_CFirefly_process_FUN_004ad860
// Address: 004ad860
// Address Range: [[004ad860, 004ad9b2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFirefly_process_FUN_004ad860(CFirefly *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFirefly_process_FUN_004ad860(CFirefly *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float delta_time;
  longlong lVar6;
  CGame *this_ptr_00;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  
  if (this_ptr->first_update_flag == 0) {
    this_ptr->first_update_flag = 1;
  }
  else {
    lVar6 = (longlong)_DAT_01c43530 * (longlong)this_ptr->time_scale;
    lVar6 = (longlong)this_ptr->fade_rate *
            (longlong)(int)((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
    iVar10 = this_ptr->intensity - ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
    this_ptr->intensity = iVar10;
    if (iVar10 < 0) {
      (this_ptr->base).lifetime_remaining = 0.0;
      this_ptr->intensity = 0;
    }
  }
  delta_time = g_CGamePtr->delta_time_float;
  lVar6 = (longlong)this_ptr->time_scale * (longlong)_DAT_01c43530;
  core_game_cpp_CGame_slamDT_FUN_004d7f50
            (g_CGamePtr,
             (float)(int)((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) *
             (float)_DAT_005df1f4);
  core_particle_cpp_FUN_00532250(this_ptr);
  fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,this_ptr->jitter * _DAT_005df1fc);
  fVar1 = this_ptr->jitter;
  fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,this_ptr->jitter * _DAT_005df1fc);
  fVar2 = this_ptr->jitter;
  fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,this_ptr->jitter * _DAT_005df1fc);
  this_ptr_00 = g_CGamePtr;
  fVar3 = (this_ptr->base).velocity.y;
  fVar4 = (this_ptr->base).velocity.z;
  fVar5 = this_ptr->jitter;
  (this_ptr->base).velocity.x = (this_ptr->base).velocity.x + (fVar7 - fVar1);
  (this_ptr->base).velocity.y = fVar3 + (fVar8 - fVar2);
  (this_ptr->base).velocity.z = fVar4 + (fVar9 - fVar5);
  core_game_cpp_CGame_slamDT_FUN_004d7f50(this_ptr_00,delta_time);
  return;
}
