// Name: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0
// Address: 0052ecb0
// Address Range: [[0052ecb0, 0052ecdc]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

{
  g_SoundReverb.volume = listener_orient_x;
  g_SoundReverb.decay_time = listener_orient_y;
  g_SoundReverb.damping = listener_orient_z;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630
            (listener_orient_x,listener_orient_y,listener_orient_z);
  return;
}
