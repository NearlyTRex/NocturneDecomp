// Name: sound_sndwav.cpp_enumerateWavOutDevice_FUN_005b1470
// Address: 005b1470
// MANUAL RECONSTRUCTION
// Address Range: [[005b1470, 005b150d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_enumerateWavOutDevice_FUN_005b1470(UINT device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_enumerateWavOutDevice_FUN_005b1470(UINT device_id,SSoundDeviceInfo *device_info)

{
  MMRESULT MVar2;
  char *pcVar3;
  tagWAVEOUTCAPSA local_3c;

  MVar2 = (*g_waveOutGetDevCapsAFunc)(device_id,&local_3c,0x34);
  if (MVar2 != 0) {
    return 0;
  }
  device_info->api_type = 0;
  device_info->device_id = device_id;
  device_info->has_hardware_mixing = 0;
  device_info->flags = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("WavOutWrite: ");
  strcpy(device_info->device_name,pcVar3);
  strcat(device_info->device_name,local_3c.szPname);
  return 1;
}
