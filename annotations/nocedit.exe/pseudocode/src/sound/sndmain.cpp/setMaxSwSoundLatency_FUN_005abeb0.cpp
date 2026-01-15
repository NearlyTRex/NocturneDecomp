// Name: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0
// Address: 005abeb0
// Address Range: [[005abeb0, 005abf1f]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0(float latency)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_005abeb0(float latency)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x15a2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (latency < (float)0.050000000000000003) {
    latency = 0.05;
  }
  if (latency <= (float)2) {
    0.5f = latency;
    return;
  }
  0.5f = 2.0;
  return;
}
