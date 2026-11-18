// Name: core_game.cpp_CGame_updateMusic_FUN_004c4bc0
// Address: 004c4bc0
// Address Range: [[004c4bc0, 004c4cbd]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_updateMusic_FUN_004c4bc0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateMusic_FUN_004c4bc0(CGame *this_ptr)

{
  int iVar1;
  
  if (this_ptr->music_name[0] == '\0') {
    if (this_ptr->music_sfx_handle != 0) {
      sound_sndmain_cpp_setSfxFade_FUN_00556c10(this_ptr->music_sfx_handle,0.0,2.0,1);
      this_ptr->music_sfx_handle = 0;
      return;
    }
  }
  else {
    if (this_ptr->music_sfx_handle != 0) {
      iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->music_sfx_handle);
      if (iVar1 != 0) goto LAB_004c4be7;
    }
    core_game_cpp_CGame_playMusic_FUN_004c4a60
              (this_ptr,this_ptr->music_name,this_ptr->music_position);
  }
LAB_004c4be7:
  if (this_ptr->music_sfx_handle != 0) {
    if (this_ptr->letterbox_mode == 0) {
      if (this_ptr->music_volume < 1.0) {
        this_ptr->music_volume = 1.0;
        sound_sndmain_cpp_setSfxFade_FUN_00556c10
                  (this_ptr->music_sfx_handle,this_ptr->music_volume,2.0,0);
        return;
      }
    }
    else if (this_ptr->music_volume == 1.0) {
      this_ptr->music_volume = 0.3;
      sound_sndmain_cpp_setSfxFade_FUN_00556c10
                (this_ptr->music_sfx_handle,this_ptr->music_volume,2.0,0);
      return;
    }
  }
  return;
}
