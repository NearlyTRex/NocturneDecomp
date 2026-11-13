// Name: core_game.cpp_FUN_004c4a60
// Address: 004c4a60
// Address Range: [[004c4a60, 004c4bbb]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004c4a60(void *param_1,char *param_2,int param_3,uint param_4)

#include "nocturne.h"

void core_game_cpp_FUN_004c4a60(void *param_1,char *param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint sfx_handle;
  char *pcVar3;
  bool bVar4;
  float volume;
  
  iVar2 = _stricmp(param_2,(char *)((int)param_1 + 0x298));
  if (((iVar2 != 0) || (*(uint *)((int)param_1 + 0x2fc) == 0)) ||
     (iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(*(uint *)((int)param_1 + 0x2fc)),
     iVar2 == 0)) {
    bVar4 = *(uint *)((int)param_1 + 0x2fc) != 0;
    if (bVar4) {
      sound_sndmain_cpp_setSfxFade_FUN_00556c10(*(uint *)((int)param_1 + 0x2fc),0.0,4.0,1);
      *(uint *)((int)param_1 + 0x2fc) = 0;
    }
    pcVar3 = (char *)((int)param_1 + 0x298);
    do {
      cVar1 = *param_2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    if ((*(char *)((int)param_1 + 0x298) != '\0') &&
       (iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(1), iVar2 != 0)) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(1);
      if (((param_4 & 0x7fffffff) != 0) || (param_3 != 0)) {
        sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60(__BITCAST_DOUBLE(CONCAT44(param_4,param_3)),1);
      }
      if (bVar4) {
        volume = 0.01;
      }
      else {
        volume = *(float *)((int)param_1 + 0x308);
      }
      sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(volume);
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_00555f20(1);
      sfx_handle = core_sound_cpp_CSound_playSound_FUN_005609b0
                             (0x02CF5680,param_1,(char *)((int)param_1 + 0x298));
      *(uint *)((int)param_1 + 0x2fc) = sfx_handle;
      if (bVar4) {
        sound_sndmain_cpp_setSfxFade_FUN_00556c10(sfx_handle,*(float *)((int)param_1 + 0x308),4.0,0)
        ;
      }
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
      *(uint *)((int)param_1 + 0x300) = 0;
      *(uint *)((int)param_1 + 0x304) = 0;
      return;
    }
  }
  return;
}
