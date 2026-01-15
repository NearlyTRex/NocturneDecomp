// Name: sound_sndwav.cpp_getWavOutDevice_FUN_005b1510
// Address: 005b1510
// Address Range: [[005b1510, 005b1556]]
// Convention: __cdecl
// Signature: CWavOutDevice * sound_sndwav.cpp_getWavOutDevice_FUN_005b1510(UINT device_id)

#include "nocturne.h"

CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_005b1510(UINT device_id)

{
  int iVar1;
  MMRESULT MVar2;
  tagWAVEOUTCAPSA local_34;
  
  iVar1 = sound_sndwav_cpp_CWavOutDevice_close_FUN_005b0840(&g_CWavOutDeviceInstance);
  if (iVar1 == 0) {
    return (CWavOutDevice *)0x0;
  }
  MVar2 = (*waveOutGetDevCapsA)(device_id,&local_34,0x34);
  if (MVar2 != 0) {
    return (CWavOutDevice *)0x0;
  }
  g_WaveOutDeviceID = device_id;
  return &g_CWavOutDeviceInstance;
}
