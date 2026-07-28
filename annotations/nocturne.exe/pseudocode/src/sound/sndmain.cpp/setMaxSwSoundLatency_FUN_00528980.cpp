// Name: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00528980
// Address: 00528980
// Address Range: [[00528980, 005289ef]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00528980(float latency)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00528980(float latency)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
  if (iVar1 != 0) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x1329;
    core_main_c_FUN_004c8440("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (latency < (float)0.050000000000000003) {
    latency = 0.05;
  }
  if (latency <= (float)2) {
    DAT_005bea98 = latency;
    return;
  }
  DAT_005bea98 = 2.0;
  return;
}
