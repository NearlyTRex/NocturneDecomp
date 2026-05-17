// Name: sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0
// Address: 005a96e0
// MANUAL RECONSTRUCTION
// Address Range: [[005a96e0, 005a9710]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0(uint sfx_handle,CSfxSample *output_buffer)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0(uint sfx_handle,CSfxSample *output_buffer)

{
  CSfxSlot *pCVar1;

  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  memcpy(output_buffer,pCVar1->sample,0x150);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}
