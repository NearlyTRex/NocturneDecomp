// Name: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_00560ab0
// Address: 00560ab0
// Address Range: [[00560ab0, 00560aeb]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_00560ab0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_00560ab0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
  sound_sndmain_cpp_setNextSfxDelay_FUN_00555ee0(delay);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0055f020
                    (actor,sound_name,0.0,0.0,0.0,position_tracker,0);
  sound_sndmain_cpp_popSfxOptions_FUN_00556050();
  return uVar1;
}
