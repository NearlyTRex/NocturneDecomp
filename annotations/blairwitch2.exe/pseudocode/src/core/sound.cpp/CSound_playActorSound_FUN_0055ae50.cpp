// Name: core_sound.cpp_CSound_playActorSound_FUN_0055ae50
// Address: 0055ae50
// Address Range: [[0055ae50, 0055ae72]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_0055ae50(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_0055ae50(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_playSfxInternal_FUN_005594c0
                    (actor,sound_name,position->x,position->y,position->z,(CVector3f *)0x0,0);
  return uVar1;
}
