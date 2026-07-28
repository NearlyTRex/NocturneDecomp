// Name: sound_sndmain.cpp_set3DListenerPos_FUN_00527610
// Address: 00527610
// Address Range: [[00527610, 00527683]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00527610(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00527610(double pos_x,double pos_y,double pos_z)

{
  _DAT_02dc78e0 = pos_x;
  _DAT_02dc78e8 = pos_y;
  _DAT_02dc78f0 = pos_z;
  if (_DAT_02dc8318 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc8318 + 0x18))(_DAT_02dc8318,pos_x,pos_y,pos_z);
  return;
}
