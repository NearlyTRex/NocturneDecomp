// Name: sound_sndmain.cpp_generateSilence_FUN_00523550
// Address: 00523550
// Address Range: [[00523550, 005235a3]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_generateSilence_FUN_00523550(void *buffer,uint bits_per_sample,uint num_samples)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_generateSilence_FUN_00523550(void *buffer,uint bits_per_sample,uint num_samples)

{
  int value;
  
  if (7 < bits_per_sample) {
    if (bits_per_sample < 9) {
      value = 0x80;
    }
    else {
      if (bits_per_sample != 0x10) goto LAB_00523580;
      num_samples = num_samples * 2;
      value = 0;
    }
    memset(buffer,value,num_samples);
    return;
  }
LAB_00523580:
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 1476;
  core_main_c_displayErrorAndQuit_FUN_004c8440("generateSilence - invalid bit depth!");
  return;
}
