// Name: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50
// Address: 0052eb50
// Address Range: [[0052eb50, 0052eb91]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxDelay_FUN_00526210((double)delay);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0052d120
                    (actor,sound_name,0.0,0.0,0.0,position_tracker,0);
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return uVar1;
}
