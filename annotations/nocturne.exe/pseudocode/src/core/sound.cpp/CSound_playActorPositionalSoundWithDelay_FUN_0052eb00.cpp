// Name: core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
// Address: 0052eb00
// Address Range: [[0052eb00, 0052eb44]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxDelay_FUN_00526210((double)delay);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0052d120
                    (actor,sound_name,position->x,position->y,position->z,(CVector3f *)0x0,0);
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return uVar1;
}
