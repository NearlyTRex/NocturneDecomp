// Name: sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560
// Address: 005b1560
// Address Range: [[005b1560, 005b15f1]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560(UINT device_id, SRecordingDeviceInfo * device_info)

#include "nocturne.h"

int __cdecl
sound_sndwav_cpp_enumerateWavInDevice_FUN_005b1560(UINT device_id,SRecordingDeviceInfo *device_info)

{
  char cVar1;
  MMRESULT MVar2;
  char *pcVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  SRecordingDeviceInfo *pSVar5;
  char *pcVar6;
  byte bVar7;
  MMVERSION MStack_34;
  char acStack_1c [20];
  
  bVar7 = 0;
  MVar2 = (*waveInGetDevCapsA)(device_id,(LPWAVEINCAPSA)&stack0xffffffc8,0x30);
  if (MVar2 != 0) {
    return 0;
  }
  device_info->api_type = 0;
  device_info->device_id = device_id;
  MStack_34 = 0x5b159f;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("WavIn: ");
  pSVar5 = device_info;
  do {
    cVar1 = *pcVar3;
    pSVar5->device_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pSVar5->device_name[1] = cVar1;
    pSVar5 = (SRecordingDeviceInfo *)(pSVar5->device_name + 2);
  } while (cVar1 != '\0');
  pcVar3 = acStack_1c;
  iVar4 = -1;
  do {
    pSVar5 = device_info;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pSVar5 = (SRecordingDeviceInfo *)((int)device_info + (uint)bVar7 * -2 + 1);
    pcVar6 = device_info->device_name;
    device_info = pSVar5;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)((int)&pSVar5[-1].device_id + 3);
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
