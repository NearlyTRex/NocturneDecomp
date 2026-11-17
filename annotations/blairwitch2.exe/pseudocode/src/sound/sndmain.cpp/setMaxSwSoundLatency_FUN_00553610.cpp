// Name: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00553610
// Address: 00553610
// Address Range: [[00553610, 0055367f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00553610(float latency)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00553610(float latency)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00552b20();
  if (iVar1 != 0) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x1877;
    core_main_c_displayErrorAndQuit_FUN_004e4500("setMaxSwSoundLatency - can't do this while sound is active");
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
