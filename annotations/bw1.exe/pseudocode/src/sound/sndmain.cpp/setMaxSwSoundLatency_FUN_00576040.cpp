// Name: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00576040
// Address: 00576040
// Address Range: [[00576040, 005760af]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00576040(float latency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00576040(float latency)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00575550();
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x186e;
    core_main_c_FUN_005030e0("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (latency < (float)_DAT_005f44b8) {
    latency = 0.05;
  }
  if (latency <= (float)_DAT_005f44c0) {
    DAT_00623314 = latency;
    return;
  }
  DAT_00623314 = 2.0;
  return;
}
