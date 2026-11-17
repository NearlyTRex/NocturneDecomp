// Name: core_fire.cpp_CFirefly_process_FUN_00494ec0
// Address: 00494ec0
// Address Range: [[00494ec0, 00495012]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFirefly_process_FUN_00494ec0(CFirefly *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFirefly_process_FUN_00494ec0(CFirefly *this_ptr)

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
    lVar6 = (longlong)g_GlobalDeltaTimeInt * (longlong)this_ptr->time_scale;
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
  lVar6 = (longlong)this_ptr->time_scale * (longlong)g_GlobalDeltaTimeInt;
  core_game_cpp_CGame_slamDT_FUN_004bd460
            (g_CGamePtr,
             (float)(int)((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) *
             (float)1.52587890625e-05);
  core_particle_cpp_CParticle_process_FUN_00510ef0(&this_ptr->base);
  fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                    (0.0,this_ptr->jitter * 2.0f);
  fVar1 = this_ptr->jitter;
  fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                    (0.0,this_ptr->jitter * 2.0f);
  fVar2 = this_ptr->jitter;
  fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                    (0.0,this_ptr->jitter * 2.0f);
  this_ptr_00 = g_CGamePtr;
  fVar3 = (this_ptr->base).velocity.y;
  fVar4 = (this_ptr->base).velocity.z;
  fVar5 = this_ptr->jitter;
  (this_ptr->base).velocity.x = (this_ptr->base).velocity.x + (fVar7 - fVar1);
  (this_ptr->base).velocity.y = fVar3 + (fVar8 - fVar2);
  (this_ptr->base).velocity.z = fVar4 + (fVar9 - fVar5);
  core_game_cpp_CGame_slamDT_FUN_004bd460(this_ptr_00,delta_time);
  return;
}
