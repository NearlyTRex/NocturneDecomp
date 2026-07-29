// Name: core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0052eac0
// Address: 0052eac0
// Address Range: [[0052eac0, 0052eafe]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0052eac0(CSound *this_ptr,CDemonActor *actor,char *sound_name,float delay)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0052eac0(CSound *this_ptr,CDemonActor *actor,char *sound_name,float delay)

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxDelay_FUN_00526210((double)delay);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0052d120
                    (actor,sound_name,0.0,0.0,0.0,(CVector3f *)0x0,1);
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return uVar1;
}
