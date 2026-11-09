// Name: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_00560c00
// Address: 00560c00
// Address Range: [[00560c00, 00560c2c]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_00560c00(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_00560c00(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

{
  _DAT_02cf56a4 = listener_orient_x;
  _DAT_02cf56a8 = listener_orient_y;
  _DAT_02cf56ac = listener_orient_z;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_00558860
            (listener_orient_x,listener_orient_y,listener_orient_z);
  return;
}
