// Name: sound_sndwav.cpp_getWavOutDevice_FUN_0055e540
// Address: 0055e540
// Address Range: [[0055e540, 0055e586]]
// Convention: __cdecl
// Signature: CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0055e540(UINT device_id)

#include "nocturne.h"

CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0055e540(UINT device_id)

{
  int iVar1;
  MMRESULT MVar2;
  tagWAVEOUTCAPSA local_34;
  
  iVar1 = sound_sndwav_cpp_CWavOutDevice_close_FUN_0055d870((CWavOutDevice *)&DAT_02cf5678);
  if (iVar1 == 0) {
    return (CWavOutDevice *)0x0;
  }
  MVar2 = waveOutGetDevCapsA(device_id,&local_34,0x34);
  if (MVar2 != 0) {
    return (CWavOutDevice *)0x0;
  }
  DAT_00604514 = device_id;
  return (CWavOutDevice *)&DAT_02cf5678;
}
