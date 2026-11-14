// Name: core_fire.cpp_CFirefly_process_FUN_004988b0
// Address: 004988b0
// Address Range: [[004988b0, 00498a02]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFirefly_process_FUN_004988b0(CFirefly *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFirefly_process_FUN_004988b0(CFirefly *this_ptr)

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
    lVar6 = (longlong)_DAT_01c5fad0 * (longlong)this_ptr->time_scale;
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
  lVar6 = (longlong)this_ptr->time_scale * (longlong)_DAT_01c5fad0;
  core_game_cpp_CGame_slamDT_FUN_004bf3a0
            (g_CGamePtr,
             (float)(int)((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) *
             (float)_DAT_005c0530);
  core_particle_cpp_FUN_00509f30(this_ptr);
  fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,this_ptr->jitter * _DAT_005c0538);
  fVar1 = this_ptr->jitter;
  fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,this_ptr->jitter * _DAT_005c0538);
  fVar2 = this_ptr->jitter;
  fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,this_ptr->jitter * _DAT_005c0538);
  this_ptr_00 = g_CGamePtr;
  fVar3 = (this_ptr->base).velocity.y;
  fVar4 = (this_ptr->base).velocity.z;
  fVar5 = this_ptr->jitter;
  (this_ptr->base).velocity.x = (this_ptr->base).velocity.x + (fVar7 - fVar1);
  (this_ptr->base).velocity.y = fVar3 + (fVar8 - fVar2);
  (this_ptr->base).velocity.z = fVar4 + (fVar9 - fVar5);
  core_game_cpp_CGame_slamDT_FUN_004bf3a0(this_ptr_00,delta_time);
  return;
}
