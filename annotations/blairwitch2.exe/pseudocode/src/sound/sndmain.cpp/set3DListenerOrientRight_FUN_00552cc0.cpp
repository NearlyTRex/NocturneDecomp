// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0
// Address: 00552cc0
// Address Range: [[00552cc0, 00552cfd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00552cc0(float orient_right_x,float orient_right_y,float orient_right_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00552cc0(float orient_right_x,float orient_right_y,float orient_right_z)

{
  _DAT_02649000 = orient_right_x;
  _DAT_02649004 = orient_right_y;
  _DAT_02649008 = orient_right_z;
  if (_DAT_02648e80 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02648e80 + 0x2c))(_DAT_02648e80,orient_right_x,orient_right_y,orient_right_z);
  return;
}
