// Name: core_game.cpp_CGame_saveMusicPosition_FUN_004c4cc0
// Address: 004c4cc0
// Address Range: [[004c4cc0, 004c4d02]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_saveMusicPosition_FUN_004c4cc0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_saveMusicPosition_FUN_004c4cc0(CGame *this_ptr)

{
  double dVar1;
  uint local_c;
  uint local_8;
  
  if (this_ptr->music_sfx_handle == 0) {
    return;
  }
  dVar1 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005567c0(this_ptr->music_sfx_handle,1);
  local_c = SUB84(__BITCAST_UINT64(dVar1),0);
  *(uint *)&this_ptr->music_position = local_c;
  local_8 = (uint)((ulonglong)dVar1 >> 0x20);
  *(uint *)((int)&this_ptr->music_position + 4) = local_8;
  return;
}
