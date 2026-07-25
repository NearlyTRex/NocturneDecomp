// Name: FUN_00527d80
// Address: 00527d80
// Address Range: [[00527d80, 00527e0f]]
// Convention: unknown
// Signature: void FUN_00527d80(void)

#include "nocturne.h"

void FUN_00527d80(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(iVar1,0x3f800000);
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(iVar1,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  func_0x00527830(0,0x3ff00000);
  sound_sndmain_cpp_set3DListenerPos_FUN_00527610(0,0,0,0,0,0);
  sound_sndmain_cpp_set3DListenerOrient_FUN_00527690
            (0,0x3ff00000,0,0,0,0,0,0,0,0x3ff00000,0,0,0,0,0,0,0,0x3ff00000);
  sound_sndmain_cpp_set3DListenerVelocity_FUN_005277b0(0,0,0,0,0,0);
  return;
}
