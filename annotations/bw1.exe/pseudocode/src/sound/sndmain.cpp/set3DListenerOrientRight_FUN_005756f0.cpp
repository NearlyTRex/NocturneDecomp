// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_005756f0
// Address: 005756f0
// Address Range: [[005756f0, 0057572d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_005756f0(float orient_right_x,float orient_right_y,float orient_right_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_005756f0(float orient_right_x,float orient_right_y,float orient_right_z)

{
  _DAT_02c807d0 = orient_right_x;
  _DAT_02c807d4 = orient_right_y;
  _DAT_02c807d8 = orient_right_z;
  if (_DAT_02c80650 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c80650 + 0x2c))(_DAT_02c80650,orient_right_x,orient_right_y,orient_right_z);
  return;
}
