// Name: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50
// Address: 0052eb50
// Address Range: [[0052eb50, 0052eb91]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5 )

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50(uint param_1,uint param_2,uint param_3,uint param_4,float param_5 )

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxDelay_FUN_00526210((double)param_5);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0052d120(param_2,param_3,0,0,0,param_4,0);
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return uVar1;
}
