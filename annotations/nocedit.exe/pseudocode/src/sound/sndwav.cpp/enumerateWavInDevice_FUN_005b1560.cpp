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
  CHAR *pCVar5;
  SRecordingDeviceInfo *pSVar6;
  byte bVar7;
  tagWAVEINCAPSA local_38;
  
  bVar7 = 0;
  MVar2 = (*waveInGetDevCapsA)(device_id,&local_38,0x30);
  if (MVar2 != 0) {
    return 0;
  }
  device_info->api_type = 0;
  device_info->device_id = device_id;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("WavIn: ");
  pSVar6 = device_info;
  do {
    cVar1 = *pcVar3;
    pSVar6->device_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pSVar6->device_name[1] = cVar1;
    pSVar6 = (SRecordingDeviceInfo *)(pSVar6->device_name + 2);
  } while (cVar1 != '\0');
  pCVar5 = local_38.szPname;
  iVar4 = -1;
  do {
    pSVar6 = device_info;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pSVar6 = (SRecordingDeviceInfo *)((int)device_info + (uint)bVar7 * -2 + 1);
    pcVar3 = device_info->device_name;
    device_info = pSVar6;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)((int)&pSVar6[-1].device_id + 3);
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
