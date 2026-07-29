// Name: sound_sndwav.cpp_enumerateWavOutDevice_FUN_0052c6c0
// Address: 0052c6c0
// Address Range: [[0052c6c0, 0052c75d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_enumerateWavOutDevice_FUN_0052c6c0(UINT device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_enumerateWavOutDevice_FUN_0052c6c0(UINT device_id,SSoundDeviceInfo *device_info)

{
  char cVar1;
  MMRESULT MVar2;
  char *pcVar3;
  int iVar4;
  CHAR *pCVar5;
  SSoundDeviceInfo *pSVar6;
  byte bVar7;
  tagWAVEOUTCAPSA local_3c;
  
  bVar7 = 0;
  MVar2 = waveOutGetDevCapsA(device_id,&local_3c,0x34);
  if (MVar2 != 0) {
    return 0;
  }
  device_info->api_type = 0;
  device_info->device_id = device_id;
  device_info->has_hardware_mixing = 0;
  device_info->flags = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("WavOutWrite: ");
  pSVar6 = device_info;
  do {
    cVar1 = *pcVar3;
    pSVar6->device_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pSVar6->device_name[1] = cVar1;
    pSVar6 = (SSoundDeviceInfo *)(pSVar6->device_name + 2);
  } while (cVar1 != '\0');
  pCVar5 = local_3c.szPname;
  iVar4 = -1;
  do {
    pSVar6 = device_info;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pSVar6 = (SSoundDeviceInfo *)((int)device_info + (uint)bVar7 * -2 + 1);
    pcVar3 = device_info->device_name;
    device_info = pSVar6;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)((int)&pSVar6[-1].is_emulated + 3);
  do {
    cVar1 = *pCVar5;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pCVar5[1];
    pCVar5 = pCVar5 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return 1;
}
