// Name: sound_sndmain.cpp_pollAllStreams_FUN_005298f0
// Address: 005298f0
// Address Range: [[005298f0, 00529973]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_005298f0(int param_1)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_005298f0(int param_1)

{
  double dVar1;
  int iVar2;
  uint local_18;
  uint local_14;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  local_18 = 2.0f + (float)-0.10000000000000001;
  dVar1 = -0.29999999999999999;
  if (param_1 != 0) {
    local_18 = 2.0f;
    dVar1 = -0.20000000000000001;
  }
  local_14 = 2.0f + (float)dVar1;
  iVar2 = 0x2dc1edc;
  do {
    sound_sndmain_cpp_CSfxSample_pollStream_FUN_00523ea0(iVar2,local_14,local_18);
    iVar2 = iVar2 + 0x168;
  } while (iVar2 != 0x2dc78dc);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
