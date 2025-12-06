// Name: sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00
// Address: 005aae00
// Address Range: [[005aae00, 005aaeab]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_resetSoundSystemDefaults_FUN_005aae00(void)

{
  int iVar1;
  uint uStack00000010;
  uint uStack00000018;
  
  iVar1 = 0;
  do {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(iVar1,1.0);
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(iVar1,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_005aa240(1.0);
  sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(0.0,0.0,0.0);
  sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
  sound_sndmain_cpp_set3DListenerVelocity_FUN_005aa1c0(0.0,0.0,0.0);
  uStack00000010 = 0x5aae93;
  iVar1 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
  uStack00000010 = 0x5aae99;
  sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar1);
  uStack00000018 = 0x5aaea1;
  iVar1 = sound_sndmain_cpp_getCurrentRecordingDevice_FUN_005ab990();
  uStack00000018 = 0x5aaea7;
  sound_sndmain_cpp_selectRecordingDevice_FUN_005ab860(iVar1);
  return;
}
