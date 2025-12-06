// Name: sound_sndwav.cpp_enumerateWavOutDevice_FUN_005b1470
// Address: 005b1470
// Address Range: [[005b1470, 005b150d]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_enumerateWavOutDevice_FUN_005b1470(UINT device_id, SSoundDeviceInfo * device_info)

#include "nocturne.h"

int __cdecl
sound_sndwav_cpp_enumerateWavOutDevice_FUN_005b1470(UINT device_id,SSoundDeviceInfo *device_info)

{
  char cVar1;
  MMRESULT MVar2;
  char *pcVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  SSoundDeviceInfo *pSVar5;
  char *pcVar6;
  byte bVar7;
  MMVERSION MStack_38;
  char acStack_20 [24];
  
  bVar7 = 0;
  MVar2 = (*waveOutGetDevCapsA)(device_id,(LPWAVEOUTCAPSA)&stack0xffffffc4,0x34);
  if (MVar2 != 0) {
    return 0;
  }
  device_info->api_type = 0;
  device_info->device_id = device_id;
  device_info->device_value1 = 0;
  device_info->flags = 0;
  MStack_38 = 0x5b14bb;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("WavOutWrite: ");
  pSVar5 = device_info;
  do {
    cVar1 = *pcVar3;
    pSVar5->device_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pSVar5->device_name[1] = cVar1;
    pSVar5 = (SSoundDeviceInfo *)(pSVar5->device_name + 2);
  } while (cVar1 != '\0');
  pcVar3 = acStack_20;
  iVar4 = -1;
  do {
    pSVar5 = device_info;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pSVar5 = (SSoundDeviceInfo *)((int)device_info + (uint)bVar7 * -2 + 1);
    pcVar6 = device_info->device_name;
    device_info = pSVar5;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)((int)&pSVar5[-1].device_value2 + 3);
  do {
    cVar1 = *pcVar3;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return 1;
}
