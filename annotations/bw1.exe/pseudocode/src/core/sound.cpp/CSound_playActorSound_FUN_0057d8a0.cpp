// Name: core_sound.cpp_CSound_playActorSound_FUN_0057d8a0
// Address: 0057d8a0
// Address Range: [[0057d8a0, 0057d8c2]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_0057d8a0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_0057d8a0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0057bef0
                    (actor,sound_name,position->x,position->y,position->z,(CVector3f *)0x0,0);
  return uVar1;
}
