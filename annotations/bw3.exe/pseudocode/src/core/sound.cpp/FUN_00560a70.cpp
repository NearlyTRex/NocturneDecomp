// Name: core_sound.cpp_FUN_00560a70
// Address: 00560a70
// Address Range: [[00560a70, 00560aae]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_FUN_00560a70(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )

#include "nocturne.h"

uint __cdecl core_sound_cpp_FUN_00560a70(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )

{
  uint uVar1;
  
  sound_sndmain_cpp_FUN_00555fd0();
  sound_sndmain_cpp_setNextSfxDelay_FUN_00555ee0(delay);
  uVar1 = core_sound_cpp_FUN_0055f020
                    (actor,sound_name,*(float *)position,*(float *)&position->field_0x4,
                     *(float *)&position->field_0x8,(CVector3f *)0x0,0);
  sound_sndmain_cpp_FUN_00556050();
  return uVar1;
}
