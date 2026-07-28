// Name: sound_sndwav.cpp_getWavOutDevice_FUN_0052c760
// Address: 0052c760
// Address Range: [[0052c760, 0052c7a6]]
// Convention: __cdecl
// Signature: CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0052c760(UINT device_id)

#include "nocturne.h"

CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0052c760(UINT device_id)

{
  int iVar1;
  MMRESULT MVar2;
  tagWAVEOUTCAPSA local_34;
  
  iVar1 = sound_sndwav_cpp_CWavOutDevice_close_FUN_0052c290((CWavOutDevice *)&DAT_02dc9440);
  if (iVar1 == 0) {
    return (CWavOutDevice *)0x0;
  }
  MVar2 = waveOutGetDevCapsA(device_id,&local_34,0x34);
  if (MVar2 != 0) {
    return (CWavOutDevice *)0x0;
  }
  DAT_005bed44 = device_id;
  return (CWavOutDevice *)&DAT_02dc9440;
}
