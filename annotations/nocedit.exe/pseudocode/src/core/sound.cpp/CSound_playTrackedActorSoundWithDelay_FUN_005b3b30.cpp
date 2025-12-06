// Name: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30
// Address: 005b3b30
// Address Range: [[005b3b30, 005b3b71]]
// Convention: __cdecl
// Signature: uint core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker, float delay)

#include "nocturne.h"

uint __cdecl
core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30
          (CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,
          float delay)

{
  uint uVar1;
  CVector3f *in_stack_00000018;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxDelay_FUN_005a8b40((double)(float)in_stack_00000018);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_005b1fd0
                    (position_tracker,(char *)delay,0.0,0.0,0.0,in_stack_00000018,0);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}
