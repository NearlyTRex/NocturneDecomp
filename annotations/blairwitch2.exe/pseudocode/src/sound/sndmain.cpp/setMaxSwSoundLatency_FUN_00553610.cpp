// Name: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00553610
// Address: 00553610
// Address Range: [[00553610, 0055367f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00553610(float latency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00553610(float latency)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00552b20();
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x1877;
    core_main_c_FUN_004e4500("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (latency < (float)_DAT_005e92be) {
    latency = 0.05;
  }
  if (latency <= (float)_DAT_005e92c6) {
    DAT_0061bcc4 = latency;
    return;
  }
  DAT_0061bcc4 = 2.0;
  return;
}
