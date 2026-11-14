// Name: sound_sndwav.cpp_getWavOutDevice_FUN_0057b410
// Address: 0057b410
// Address Range: [[0057b410, 0057b456]]
// Convention: __cdecl
// Signature: CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0057b410(UINT device_id)

#include "nocturne.h"

CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0057b410(UINT device_id)

{
  int iVar1;
  MMRESULT MVar2;
  tagWAVEOUTCAPSA local_34;
  
  iVar1 = sound_sndwav_cpp_CWavOutDevice_close_FUN_0057a740((CWavOutDevice *)&DAT_02c82a4c);
  if (iVar1 == 0) {
    return (CWavOutDevice *)0x0;
  }
  MVar2 = waveOutGetDevCapsA(device_id,&local_34,0x34);
  if (MVar2 != 0) {
    return (CWavOutDevice *)0x0;
  }
  DAT_006235d4 = device_id;
  return (CWavOutDevice *)&DAT_02c82a4c;
}
