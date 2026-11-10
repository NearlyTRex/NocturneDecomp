// Name: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980
// Address: 0057d980
// Address Range: [[0057d980, 0057d9bb]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay)

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
  sound_sndmain_cpp_FUN_005729d0(delay);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0057bef0
                    (actor,sound_name,0.0,0.0,0.0,position_tracker,0);
  sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  return uVar1;
}
