// Name: core_game.cpp_CGame_playMusic_FUN_004c4a60
// Address: 004c4a60
// Address Range: [[004c4a60, 004c4bbb]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_playMusic_FUN_004c4a60(CGame *this_ptr,char *music_name,double start_position)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_playMusic_FUN_004c4a60(CGame *this_ptr,char *music_name,double start_position)

{
  char cVar1;
  int iVar2;
  uint sfx_handle;
  char *pcVar3;
  bool bVar4;
  float volume;
  
  iVar2 = _stricmp(music_name,this_ptr->music_name);
  if (((iVar2 != 0) || (this_ptr->music_sfx_handle == 0)) ||
     (iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->music_sfx_handle), iVar2 == 0))
  {
    bVar4 = this_ptr->music_sfx_handle != 0;
    if (bVar4) {
      sound_sndmain_cpp_setSfxFade_FUN_00556c10(this_ptr->music_sfx_handle,0.0,4.0,1);
      this_ptr->music_sfx_handle = 0;
    }
    pcVar3 = this_ptr->music_name;
    do {
      cVar1 = *music_name;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = music_name[1];
      music_name = music_name + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    if ((this_ptr->music_name[0] != '\0') &&
       (iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(1), iVar2 != 0)) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(1);
      if ((((ulonglong)start_position & 0x7fffffff00000000) != 0) || (start_position._0_4_ != 0)) {
        sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60(start_position,1);
      }
      if (bVar4) {
        volume = 0.01;
      }
      else {
        volume = this_ptr->music_volume;
      }
      sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(volume);
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_00555f20(1);
      sfx_handle = core_sound_cpp_CSound_playSound_FUN_005609b0
                             (0x02CF5680,this_ptr,this_ptr->music_name);
      this_ptr->music_sfx_handle = sfx_handle;
      if (bVar4) {
        sound_sndmain_cpp_setSfxFade_FUN_00556c10(sfx_handle,this_ptr->music_volume,4.0,0);
      }
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
      *(uint *)&this_ptr->music_position = 0;
      *(uint *)((int)&this_ptr->music_position + 4) = 0;
      return;
    }
  }
  return;
}
