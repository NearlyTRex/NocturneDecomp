// Name: core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80
// Address: 0055ae80
// Address Range: [[0055ae80, 0055aea1]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_playSfxInternal_FUN_005594c0
                    (actor,sound_name,0.0,0.0,0.0,position_tracker,0);
  return uVar1;
}
