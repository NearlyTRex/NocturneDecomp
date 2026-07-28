// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630
// Address: 00528630
// Address Range: [[00528630, 0052866d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(float orient_right_x,float orient_right_y,float orient_right_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(float orient_right_x,float orient_right_y,float orient_right_z)

{
  _DAT_02dc8498 = orient_right_x;
  _DAT_02dc849c = orient_right_y;
  _DAT_02dc84a0 = orient_right_z;
  if (_DAT_02dc8318 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc8318 + 0x28))(_DAT_02dc8318,orient_right_x,orient_right_y,orient_right_z);
  return;
}
