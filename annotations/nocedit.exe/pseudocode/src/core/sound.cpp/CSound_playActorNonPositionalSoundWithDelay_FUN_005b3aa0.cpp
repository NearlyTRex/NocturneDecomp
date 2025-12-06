// Name: core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_005b3aa0
// Address: 005b3aa0
// Address Range: [[005b3aa0, 005b3ade]]
// Convention: __cdecl
// Signature: uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_005b3aa0(CSound * this_ptr, CDemonActor * actor, char * sound_name, float delay)

#include "nocturne.h"

uint __cdecl
core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_005b3aa0
          (CSound *this_ptr,CDemonActor *actor,char *sound_name,float delay)

{
  uint uVar1;
  char *in_stack_00000014;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxDelay_FUN_005a8b40((double)(float)in_stack_00000014);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_005b1fd0
                    ((void *)delay,in_stack_00000014,0.0,0.0,0.0,(CVector3f *)0x0,1);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}
