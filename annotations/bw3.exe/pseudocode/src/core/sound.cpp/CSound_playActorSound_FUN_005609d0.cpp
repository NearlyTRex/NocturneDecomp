// Name: core_sound.cpp_CSound_playActorSound_FUN_005609d0
// Address: 005609d0
// Address Range: [[005609d0, 005609f2]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_005609d0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_005609d0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_FUN_0055f020
                    (actor,sound_name,*(float *)position,*(float *)&position->field_0x4,
                     *(float *)&position->field_0x8,(CVector3f *)0x0,0);
  return uVar1;
}
