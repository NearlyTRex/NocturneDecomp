// Name: sound_sndwav.cpp_getWavInDevice_FUN_005b1600
// Address: 005b1600
// Address Range: [[005b1600, 005b1646]]
// Convention: __cdecl
// Signature: CWavInDevice * sound_sndwav.cpp_getWavInDevice_FUN_005b1600(UINT device_id)

#include "nocturne.h"

CWavInDevice * __cdecl sound_sndwav_cpp_getWavInDevice_FUN_005b1600(UINT device_id)

{
  int iVar1;
  MMRESULT MVar2;
  tagWAVEINCAPSA local_30;
  
  iVar1 = sound_sndwav_cpp_CWavInDevice_close_FUN_005b0d70(&g_CWavInDeviceInstance);
  if (iVar1 == 0) {
    return (CWavInDevice *)0x0;
  }
  MVar2 = (*g_waveInGetDevCapsAFunc)(device_id,&local_30,0x30);
  if (MVar2 != 0) {
    return (CWavInDevice *)0x0;
  }
  g_WaveInDeviceID = device_id;
  return &g_CWavInDeviceInstance;
}
