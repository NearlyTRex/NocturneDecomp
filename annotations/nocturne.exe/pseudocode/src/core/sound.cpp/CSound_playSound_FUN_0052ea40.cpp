// Name: core_sound.cpp_CSound_playSound_FUN_0052ea40
// Address: 0052ea40
// Address Range: [[0052ea40, 0052ea5c]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playSound_FUN_0052ea40(CSound *this_ptr,void *user_data,char *sound_name)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playSound_FUN_0052ea40(CSound *this_ptr,void *user_data,char *sound_name)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0052d120
                    (user_data,sound_name,0.0,0.0,0.0,(CVector3f *)0x0,1);
  return uVar1;
}
