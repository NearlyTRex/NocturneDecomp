// Name: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005591b0
// Address: 005591b0
// Address Range: [[005591b0, 0055921f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_005591b0(float latency)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_005591b0(float latency)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005586c0();
  if (iVar1 != 0) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0x1881;
    core_main_c_displayErrorAndQuit_FUN_004e4330("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (latency < (float)0.050000000000000003) {
    latency = 0.05;
  }
  if (latency <= (float)2) {
    g_MaxSoftwareLatency = latency;
    return;
  }
  g_MaxSoftwareLatency = 2.0;
  return;
}
