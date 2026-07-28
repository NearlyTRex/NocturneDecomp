// Name: core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90
// Address: 0052ea90
// Address Range: [[0052ea90, 0052eab1]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0052d120
                    (actor,sound_name,0.0,0.0,0.0,position_tracker,0);
  return uVar1;
}
