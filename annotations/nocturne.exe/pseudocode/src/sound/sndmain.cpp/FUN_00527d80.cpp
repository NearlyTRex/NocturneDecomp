// Name: sound_sndmain.cpp_FUN_00527d80
// Address: 00527d80
// Address Range: [[00527d80, 00527e0f]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00527d80(void)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00527d80(void)

{
  int channel_index;
  
  channel_index = 0;
  do {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(channel_index,1.0);
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(channel_index,1);
    channel_index = channel_index + 1;
  } while (channel_index < 0x20);
  func_0x00527830(0,0x3ff00000);
  sound_sndmain_cpp_set3DListenerPos_FUN_00527610(0.0,0.0,0.0);
  sound_sndmain_cpp_set3DListenerOrient_FUN_00527690(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
  sound_sndmain_cpp_set3DListenerVelocity_FUN_005277b0(0.0,0.0,0.0);
  return;
}
