// Name: sound_sndmain.cpp_FUN_005591b0
// Address: 005591b0
// Address Range: [[005591b0, 0055921f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_005591b0(float latency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_005591b0(float latency)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_FUN_005586c0();
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1881;
    core_main_c_FUN_004e4330("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (latency < (float)_DAT_005d3db2) {
    latency = 0.05;
  }
  if (latency <= (float)_DAT_005d3dba) {
    DAT_00604250 = latency;
    return;
  }
  DAT_00604250 = 2.0;
  return;
}
