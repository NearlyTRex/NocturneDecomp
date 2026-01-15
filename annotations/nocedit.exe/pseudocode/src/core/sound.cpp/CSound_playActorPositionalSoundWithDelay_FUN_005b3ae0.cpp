// Name: core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
// Address: 005b3ae0
// Address Range: [[005b3ae0, 005b3b24]]
// Convention: __cdecl
// Signature: uint core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, float delay)

#include "nocturne.h"

uint __cdecl
core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
          (CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay)

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxDelay_FUN_005a8b40((double)delay);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_005b1fd0
                    (actor,sound_name,position->x,position->y,position->z,(CVector3f *)0x0,0);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}
