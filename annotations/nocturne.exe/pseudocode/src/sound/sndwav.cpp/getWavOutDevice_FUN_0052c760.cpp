// Name: sound_sndwav.cpp_getWavOutDevice_FUN_0052c760
// Address: 0052c760
// Address Range: [[0052c760, 0052c7a6]]
// Convention: __cdecl
// Signature: undefined * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0052c760(UINT_PTR param_1)

#include "nocturne.h"

byte * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0052c760(UINT_PTR param_1)

{
  int iVar1;
  MMRESULT MVar2;
  tagWAVEOUTCAPSA local_34;
  
  iVar1 = sound_sndwav_cpp_CWavOutDevice_close_FUN_0052c290(&DAT_02dc9440);
  if (iVar1 == 0) {
    return (byte *)0x0;
  }
  MVar2 = waveOutGetDevCapsA(param_1,&local_34,0x34);
  if (MVar2 != 0) {
    return (byte *)0x0;
  }
  DAT_005bed44 = param_1;
  return &DAT_02dc9440;
}
