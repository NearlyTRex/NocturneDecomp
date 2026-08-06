// Name: sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0
// Address: 005280c0
// Address Range: [[005280c0, 0052815d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(int bits_per_sample,int channels,int sample_rate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(int bits_per_sample,int channels,int sample_rate)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 4456;
    core_main_c_displayErrorAndQuit_FUN_004c8440("setSoundOutputMode - can't do this while sound active!");
  }
  DAT_005bea64 = bits_per_sample;
  DAT_005bea68 = channels;
  DAT_005bea6c = sample_rate;
  if (_DAT_02dc8318 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02dc8318 + 0xc))
                      (_DAT_02dc8318,bits_per_sample,channels,sample_rate,&iStack_10);
    if (iVar1 == 0) {
      return 0;
    }
    if (0 < iStack_10) {
      sound_sndmain_cpp_allocMixBuffers_FUN_00522f10(iStack_10,4);
      return 1;
    }
  }
  return 1;
}
