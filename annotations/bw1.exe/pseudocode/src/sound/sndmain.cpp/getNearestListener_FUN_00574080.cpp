// Name: sound_sndmain.cpp_getNearestListener_FUN_00574080
// Address: 00574080
// Address Range: [[00574080, 005740f7]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getNearestListener_FUN_00574080(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_getNearestListener_FUN_00574080(double pos_x,double pos_y,double pos_z)

{
  if ((_DAT_02c7fc8c != 0) &&
     ((pos_z - _DAT_02c7fc20) * (pos_z - _DAT_02c7fc20) +
      (pos_y - _DAT_02c7fc10) * (pos_y - _DAT_02c7fc10) +
      (pos_x - _DAT_02c7fc00) * (pos_x - _DAT_02c7fc00) <=
      (pos_z - _DAT_02c7fc18) * (pos_z - _DAT_02c7fc18) +
      (pos_y - _DAT_02c7fc08) * (pos_y - _DAT_02c7fc08) +
      (pos_x - _DAT_02c7fbf8) * (pos_x - _DAT_02c7fbf8))) {
    return 1;
  }
  return 0;
}
