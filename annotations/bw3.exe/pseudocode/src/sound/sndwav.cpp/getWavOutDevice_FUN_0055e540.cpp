// Name: sound_sndwav.cpp_getWavOutDevice_FUN_0055e540
// Address: 0055e540
// Address Range: [[0055e540, 0055e586]]
// Convention: __cdecl
// Signature: undefined * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0055e540(UINT_PTR param_1)

#include "nocturne.h"

byte * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0055e540(UINT_PTR param_1)

{
  int iVar1;
  MMRESULT MVar2;
  tagWAVEOUTCAPSA local_34;
  
  iVar1 = sound_sndwav_cpp_CWavOutDevice_close_FUN_0055d870((CWavOutDevice *)&DAT_02cf5678);
  if (iVar1 == 0) {
    return (byte *)0x0;
  }
  MVar2 = waveOutGetDevCapsA(param_1,&local_34,0x34);
  if (MVar2 != 0) {
    return (byte *)0x0;
  }
  DAT_00604514 = param_1;
  return &DAT_02cf5678;
}
