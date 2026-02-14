// Name: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90
// Address: 005b3c90
// Address Range: [[005b3c90, 005b3cbc]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_005b3c90(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_005b3c90(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

{
  g_SoundListenerOrient.x = listener_orient_x;
  g_SoundListenerOrient.y = listener_orient_y;
  g_SoundListenerOrient.z = listener_orient_z;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0
            (listener_orient_x,listener_orient_y,listener_orient_z);
  return;
}
