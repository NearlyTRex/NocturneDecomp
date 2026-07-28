// Name: sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0
// Address: 00525eb0
// Address Range: [[00525eb0, 00525f4c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_00525eb0(CSfxOptions *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_00525eb0(CSfxOptions *this_ptr)

{
  double dVar1;
  
  this_ptr->channel_index = 0;
  *(uint *)&(this_ptr->position).z = 0;
  *(uint *)((int)&(this_ptr->position).z + 4) = 0;
  this_ptr->position_source_ptr = (void *)0x0;
  this_ptr->position_format = 0;
  *(uint *)&(this_ptr->velocity).z = 0;
  *(uint *)((int)&(this_ptr->velocity).z + 4) = 0;
  this_ptr->velocity_source_ptr = (void *)0x0;
  this_ptr->velocity_format = 0;
  this_ptr->current_volume = 1.0;
  this_ptr->base_frequency = 1.0;
  dVar1 = (this_ptr->velocity).z;
  (this_ptr->position).y = (this_ptr->position).z;
  (this_ptr->velocity).y = dVar1;
  dVar1 = (this_ptr->velocity).y;
  (this_ptr->position).x = (this_ptr->position).y;
  (this_ptr->velocity).x = dVar1;
  memset(this_ptr->userdata,0,8);
  *(uint *)&this_ptr->trigger_time = 0;
  *(uint *)((int)&this_ptr->trigger_time + 4) = 0;
  dVar1 = _DAT_005a2148;
  this_ptr->trigger_id = 0;
  this_ptr->delay_remaining = dVar1;
  return;
}
