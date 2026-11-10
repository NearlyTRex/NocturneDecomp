// Name: core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0
// Address: 0057d8d0
// Address Range: [[0057d8d0, 0057d8f1]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0057bef0
                    (actor,sound_name,0.0,0.0,0.0,position_tracker,0);
  return uVar1;
}
