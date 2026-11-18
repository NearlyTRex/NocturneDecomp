// Name: sound_sndmain.cpp_set3DListenerOrient_FUN_00527690
// Address: 00527690
// Address Range: [[00527690, 005277ab]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00527690(double front_x,double front_y,double front_z,double up_x,double up_y,double up_z,double right_x,double right_y,double right_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00527690(double front_x,double front_y,double front_z,double up_x,double up_y,double up_z,double right_x,double right_y,double right_z)

{
  g_DOUBLE_02dc7910 = front_x;
  g_DOUBLE_02dc7918 = front_y;
  g_DOUBLE_02dc7920 = front_z;
  g_Cached3DListenerOrientUp.x = up_x;
  g_Cached3DListenerOrientUp.y = up_y;
  g_Cached3DListenerOrientUp.z = up_z;
  g_Cached3DListenerOrientRight.x = right_x;
  g_Cached3DListenerOrientRight.y = right_y;
  g_Cached3DListenerOrientRight.z = right_z;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->set3DListenerOrient)
            (g_CSoundDevicePtr,front_x,front_y,front_z,up_x,up_y,up_z,right_x,right_y,right_z);
  return;
}
