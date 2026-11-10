// Name: core_sound.cpp_CSound_playSound_FUN_0055ae30
// Address: 0055ae30
// Address Range: [[0055ae30, 0055ae4c]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_CSound_playSound_FUN_0055ae30(CSound *this_ptr,void *user_data,char *sound_name)

#include "nocturne.h"

uint __cdecl core_sound_cpp_CSound_playSound_FUN_0055ae30(CSound *this_ptr,void *user_data,char *sound_name)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_playSfxInternal_FUN_005594c0
                    (user_data,sound_name,0.0,0.0,0.0,(CVector3f *)0x0,1);
  return uVar1;
}
