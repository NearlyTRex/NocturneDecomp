// Name: core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00
// Address: 00560a00
// Address Range: [[00560a00, 00560a21]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0055f020
                    (actor,sound_name,0.0,0.0,0.0,position_tracker,0);
  return uVar1;
}
