// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00558860
// Address: 00558860
// Address Range: [[00558860, 0055889d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00558860(float orient_right_x,float orient_right_y,float orient_right_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00558860(float orient_right_x,float orient_right_y,float orient_right_z)

{
  _DAT_02cf3400 = orient_right_x;
  _DAT_02cf3404 = orient_right_y;
  _DAT_02cf3408 = orient_right_z;
  if (_DAT_02cf3280 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf3280 + 0x2c))(_DAT_02cf3280,orient_right_x,orient_right_y,orient_right_z);
  return;
}
