// Name: core_sound.cpp_FUN_0055ac50
// Address: 0055ac50
// Address Range: [[0055ac50, 0055ada5]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0055ac50(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_FUN_0055ac50(CSound *this_ptr)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(1);
  if (0x3E800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(1,0x3E800000);
  }
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(0);
  if (0x3E800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(0,0x3E800000);
  }
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(2);
  if (0x3F800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(2,0x3F800000);
  }
  iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
  if (iVar2 == 0) {
    core_sound_cpp_FUN_0055adb0(this_ptr);
    sound_sndmain_cpp_set3DListenerOrientRight_FUN_00552cc0(0,0,0);
    sound_sndmain_cpp_FUN_00551490(0,0,0,0,0,0);
    sound_sndmain_cpp_FUN_005514f0(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
    sound_sndmain_cpp_FUN_00551570(0,0,0);
    sound_sndmain_cpp_FUN_005524b0();
    sound_sndmain_cpp_FUN_00550450();
    sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(1);
    sound_sndmain_cpp_FUN_005503a0(1);
    iVar2 = sound_sndmain_cpp_FUN_005527f0();
    if (iVar2 < 0x7531) {
      sound_sndmain_cpp_FUN_005506b0("XBLAIRMENU.wav");
      sound_sndmain_cpp_FUN_005504d0();
      return;
    }
    sound_sndmain_cpp_FUN_005506b0("@XBLAIRMENU.wav" + 1);
    sound_sndmain_cpp_FUN_005504d0();
  }
  return;
}
