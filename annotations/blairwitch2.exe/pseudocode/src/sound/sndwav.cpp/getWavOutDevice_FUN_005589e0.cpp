// Name: sound_sndwav.cpp_getWavOutDevice_FUN_005589e0
// Address: 005589e0
// Address Range: [[005589e0, 00558a26]]
// Convention: __cdecl
// Signature: CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_005589e0(UINT device_id)

#include "nocturne.h"

CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_005589e0(UINT device_id)

{
  int iVar1;
  MMRESULT MVar2;
  tagWAVEOUTCAPSA local_34;
  
  iVar1 = sound_sndwav_cpp_CWavOutDevice_close_FUN_00557d10((CWavOutDevice *)&DAT_0264b27c);
  if (iVar1 == 0) {
    return (CWavOutDevice *)0x0;
  }
  MVar2 = waveOutGetDevCapsA(device_id,&local_34,0x34);
  if (MVar2 != 0) {
    return (CWavOutDevice *)0x0;
  }
  DAT_0061bf84 = device_id;
  return (CWavOutDevice *)&DAT_0264b27c;
}
