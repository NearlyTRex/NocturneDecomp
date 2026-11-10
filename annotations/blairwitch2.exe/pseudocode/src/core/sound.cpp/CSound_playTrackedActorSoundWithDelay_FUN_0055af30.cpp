// Name: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0055af30
// Address: 0055af30
// Address Range: [[0055af30, 0055af6b]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0055af30(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0055af30(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxDelay_FUN_00550360(delay);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_005594c0
                    (actor,sound_name,0.0,0.0,0.0,position_tracker,0);
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  return uVar1;
}
