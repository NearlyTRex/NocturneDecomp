// Name: sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560
// Address: 005b1560
// MANUAL RECONSTRUCTION
// Address Range: [[005b1560, 005b15f1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_enumerateWavInDevice_FUN_005b1560(UINT device_id,SRecordingDeviceInfo *device_info)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_enumerateWavInDevice_FUN_005b1560(UINT device_id,SRecordingDeviceInfo *device_info)

{
  MMRESULT MVar2;
  char *pcVar3;
  tagWAVEINCAPSA local_38;

  MVar2 = (*g_waveInGetDevCapsAFunc)(device_id,&local_38,0x30);
  if (MVar2 != 0) {
    return 0;
  }
  device_info->api_type = 0;
  device_info->device_id = device_id;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("WavIn: ");
  strcpy(device_info->device_name,pcVar3);
  strcat(device_info->device_name,local_38.szPname);
  return 1;
}
