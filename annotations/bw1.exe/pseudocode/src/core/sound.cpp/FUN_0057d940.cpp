// Name: core_sound.cpp_FUN_0057d940
// Address: 0057d940
// Address Range: [[0057d940, 0057d97e]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_FUN_0057d940(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )

#include "nocturne.h"

uint __cdecl core_sound_cpp_FUN_0057d940(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )

{
  uint uVar1;
  
  sound_sndmain_cpp_FUN_00572ac0();
  sound_sndmain_cpp_FUN_005729d0(delay);
  uVar1 = core_sound_cpp_FUN_0057bef0
                    (actor,sound_name,*(float *)position,*(float *)&position->field_0x4,
                     *(float *)&position->field_0x8,(CVector3f *)0x0,0);
  sound_sndmain_cpp_FUN_00572b40();
  return uVar1;
}
