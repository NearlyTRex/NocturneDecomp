// Name: sound_sndmain.cpp_set3DListenerOrient_FUN_00527690
// Address: 00527690
// Address Range: [[00527690, 005277ab]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00527690(double front_x,double front_y,double front_z,double up_x,double up_y,double up_z,double right_x,double right_y,double right_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00527690(double front_x,double front_y,double front_z,double up_x,double up_y,double up_z,double right_x,double right_y,double right_z)

{
  _DAT_02dc7910 = front_x;
  _DAT_02dc7918 = front_y;
  _DAT_02dc7920 = front_z;
  _DAT_02dc7928 = up_x;
  _DAT_02dc7930 = up_y;
  _DAT_02dc7938 = up_z;
  _DAT_02dc7940 = right_x;
  _DAT_02dc7948 = right_y;
  _DAT_02dc7950 = right_z;
  if (_DAT_02dc8318 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc8318 + 0x1c))
            (_DAT_02dc8318,front_x,front_y,front_z,up_x,up_y,up_z,right_x,right_y,right_z);
  return;
}
