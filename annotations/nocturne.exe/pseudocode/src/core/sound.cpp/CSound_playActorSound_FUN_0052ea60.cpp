// Name: core_sound.cpp_CSound_playActorSound_FUN_0052ea60
// Address: 0052ea60
// Address Range: [[0052ea60, 0052ea82]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_0052ea60(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_0052ea60(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0052d120
                    (actor,sound_name,position->x,position->y,position->z,(CVector3f *)0x0,0);
  return uVar1;
}
