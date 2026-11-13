// Name: sound_sndmain.cpp_CSfxOptions_reset_FUN_005726e0
// Address: 005726e0
// Address Range: [[005726e0, 0057277c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_005726e0(CSfxOptions *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_005726e0(CSfxOptions *this_ptr)

{
  float fVar1;
  
  this_ptr->channel_index = 0;
  *(uint *)&(this_ptr->position).z = 0;
  *(uint *)((int)&(this_ptr->position).z + 4) = 0;
  this_ptr->position_source_ptr = (void *)0x0;
  this_ptr->position_format = 0;
  (this_ptr->velocity).z = 0.0;
  this_ptr->velocity_source_ptr = (void *)0x0;
  this_ptr->velocity_format = 0;
  this_ptr->current_volume = 1.0;
  this_ptr->base_frequency = 1.0;
  (this_ptr->position).y = (this_ptr->position).z;
  (this_ptr->velocity).y = (this_ptr->velocity).z;
  fVar1 = (this_ptr->velocity).y;
  (this_ptr->position).x = (this_ptr->position).y;
  (this_ptr->velocity).x = fVar1;
  memset(this_ptr->userdata,0,8);
  *(uint *)&this_ptr->playback_position = 0;
  *(uint *)((int)&this_ptr->playback_position + 4) = 0;
  this_ptr->playback_position_type = 0;
  fVar1 = _DAT_00605af4;
  this_ptr->dead = 0;
  this_ptr->delay_remaining = fVar1;
  return;
}
