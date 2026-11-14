// Name: sound_sndmain.cpp_getNearestListener_FUN_005571e0
// Address: 005571e0
// Address Range: [[005571e0, 00557257]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getNearestListener_FUN_005571e0(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_getNearestListener_FUN_005571e0(double pos_x,double pos_y,double pos_z)

{
  if ((_DAT_02cf28bc != 0) &&
     ((pos_z - _DAT_02cf2850) * (pos_z - _DAT_02cf2850) +
      (pos_y - _DAT_02cf2840) * (pos_y - _DAT_02cf2840) +
      (pos_x - _DAT_02cf2830) * (pos_x - _DAT_02cf2830) <=
      (pos_z - _DAT_02cf2848) * (pos_z - _DAT_02cf2848) +
      (pos_y - _DAT_02cf2838) * (pos_y - _DAT_02cf2838) +
      (pos_x - _DAT_02cf2828) * (pos_x - _DAT_02cf2828))) {
    return 1;
  }
  return 0;
}
