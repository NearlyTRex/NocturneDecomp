// Name: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00528980
// Address: 00528980
// Address Range: [[00528980, 005289ef]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00528980(float param_1)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00528980(float param_1)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
  if (iVar1 != 0) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x1329;
    core_main_c_FUN_004c8440("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (param_1 < (float)0.050000000000000003) {
    param_1 = 0.05;
  }
  if (param_1 <= (float)2) {
    DAT_005bea98 = param_1;
    return;
  }
  DAT_005bea98 = 2.0;
  return;
}
