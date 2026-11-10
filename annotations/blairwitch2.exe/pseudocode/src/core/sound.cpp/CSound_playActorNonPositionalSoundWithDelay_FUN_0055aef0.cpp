// Name: core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0055aef0
// Address: 0055aef0
// Address Range: [[0055aef0, 0055af2e]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0055aef0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0055aef0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxDelay_FUN_00550360(delay);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_005594c0
                    (actor,sound_name,position->x,position->y,position->z,(CVector3f *)0x0,0);
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  return uVar1;
}
