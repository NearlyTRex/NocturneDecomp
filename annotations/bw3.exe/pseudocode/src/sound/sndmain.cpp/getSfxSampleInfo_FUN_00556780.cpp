// Name: sound_sndmain.cpp_getSfxSampleInfo_FUN_00556780
// Address: 00556780
// Address Range: [[00556780, 005567b0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00556780(uint sfx_handle,CSfxSample *output_buffer)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00556780(uint sfx_handle,CSfxSample *output_buffer)

{
  CSfxSlot *pCVar1;
  int iVar2;
  CSfxSample *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  pCVar1 = sound_sndmain_cpp_FUN_00552f10(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  pCVar3 = pCVar1->sample;
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)(output_buffer->sample_info).name = *(uint *)(pCVar3->sample_info).name;
    pCVar3 = (CSfxSample *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
    output_buffer = (CSfxSample *)((int)output_buffer + (uint)bVar4 * -8 + 4);
  }
  sound_sndmain_cpp_FUN_00556fd0();
  return 1;
}
