// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
// Address: 005ab6e0
// Address Range: [[005ab6e0, 005ab71d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0(float orient_right_x,float orient_right_y,float orient_right_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0(float orient_right_x,float orient_right_y,float orient_right_z)

{
  g_DeferredOrientRight.x = orient_right_x;
  g_DeferredOrientRight.y = orient_right_y;
  g_DeferredOrientRight.z = orient_right_z;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->commitDeferredSettings)(g_CSoundDevicePtr);
  return;
}
