// Name: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0057dad0
// Address: 0057dad0
// Address Range: [[0057dad0, 0057dafc]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0057dad0(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0057dad0(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

{
  _DAT_02c82a84 = listener_orient_x;
  _DAT_02c82a88 = listener_orient_y;
  _DAT_02c82a8c = listener_orient_z;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_005756f0
            (listener_orient_x,listener_orient_y,listener_orient_z);
  return;
}
