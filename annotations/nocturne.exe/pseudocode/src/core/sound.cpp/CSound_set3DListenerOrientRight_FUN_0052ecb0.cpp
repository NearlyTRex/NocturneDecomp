// Name: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0
// Address: 0052ecb0
// Address Range: [[0052ecb0, 0052ecdc]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

{
  _DAT_02dc9474 = listener_orient_x;
  _DAT_02dc9478 = listener_orient_y;
  _DAT_02dc947c = listener_orient_z;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630
            (listener_orient_x,listener_orient_y,listener_orient_z);
  return;
}
