// Name: sound_sndmain.cpp_generateSilence_FUN_005a5db0
// Address: 005a5db0
// Address Range: [[005a5db0, 005a5e03]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_generateSilence_FUN_005a5db0(void * buffer, uint bits_per_sample, uint num_samples)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_generateSilence_FUN_005a5db0(void *buffer,uint bits_per_sample,uint num_samples)

{
  int value;
  
  if (7 < bits_per_sample) {
    if (bits_per_sample < 9) {
      value = 0x80;
    }
    else {
      if (bits_per_sample != 0x10) goto LAB_005a5de0;
      num_samples = num_samples * 2;
      value = 0;
    }
    crt_memory_c_memset_FUN_005fde40(buffer,value,num_samples);
    return;
  }
LAB_005a5de0:
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0x5ca;
  core_main_c_displayErrorAndQuit_FUN_00506f10("generateSilence - invalid bit depth!");
  return;
}
