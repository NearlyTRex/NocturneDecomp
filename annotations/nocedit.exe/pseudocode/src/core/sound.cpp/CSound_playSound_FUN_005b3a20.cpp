// Name: core_sound.cpp_CSound_playSound_FUN_005b3a20
// Address: 005b3a20
// Address Range: [[005b3a20, 005b3a3c]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)

#include "nocturne.h"

void __cdecl
core_sound_cpp_CSound_playSound_FUN_005b3a20(CSound *this_ptr,void *user_data,char *sound_name)

{
  core_sound_cpp_playSfxInternal_FUN_005b1fd0(user_data,sound_name,0.0,0.0,0.0,(CVector3f *)0x0,1);
  return;
}
