// Name: sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0
// Address: 00526cd0
// Address Range: [[00526cd0, 00526d00]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0(uint sfx_handle,CSfxSample *output_buffer)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0(uint sfx_handle,CSfxSample *output_buffer)

{
  CSfxSlot *pCVar1;
  int iVar2;
  CSfxSample *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  pCVar3 = pCVar1->sample;
  for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)(output_buffer->sample_info).name = *(uint *)(pCVar3->sample_info).name;
    pCVar3 = (CSfxSample *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
    output_buffer = (CSfxSample *)((int)output_buffer + (uint)bVar4 * -8 + 4);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
