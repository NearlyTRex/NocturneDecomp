// Name: core_sound.cpp_FUN_0055aef0
// Address: 0055aef0
// Address Range: [[0055aef0, 0055af2e]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_FUN_0055aef0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )

#include "nocturne.h"

uint __cdecl core_sound_cpp_FUN_0055aef0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )

{
  uint uVar1;
  
  sound_sndmain_cpp_FUN_00550450();
  sound_sndmain_cpp_FUN_00550360(delay);
  uVar1 = core_sound_cpp_FUN_005594c0
                    (actor,sound_name,*(float *)position,*(float *)&position->field_0x4,
                     *(float *)&position->field_0x8,(CVector3f *)0x0,0);
  sound_sndmain_cpp_FUN_005504d0();
  return uVar1;
}
