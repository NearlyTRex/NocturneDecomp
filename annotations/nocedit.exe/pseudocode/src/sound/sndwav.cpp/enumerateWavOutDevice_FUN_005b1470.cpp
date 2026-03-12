// Name: sound_sndwav.cpp_enumerateWavOutDevice_FUN_005b1470
// Address: 005b1470
// Address Range: [[005b1470, 005b150d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_enumerateWavOutDevice_FUN_005b1470(UINT device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_enumerateWavOutDevice_FUN_005b1470(UINT device_id,SSoundDeviceInfo *device_info)

{
  char cVar2;
  MMRESULT MVar2;
  char *pcVar3;
  int iVar4;
  CHAR *pCVar5;
  SSoundDeviceInfo *pSVar3;
  SSoundDeviceInfo *pSVar6;
  char *pcVar4;
  byte bVar7;
  tagWAVEOUTCAPSA local_3c;
  char cVar1;
  
  bVar7 = 0;
  MVar2 = (*g_waveOutGetDevCapsAFunc)(device_id,&local_3c,0x34);
  if (MVar2 != 0) {
    return 0;
  }
  device_info->api_type = 0;
  device_info->device_id = device_id;
  device_info->has_hardware_mixing = 0;
  device_info->flags = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("WavOutWrite: ");
  pSVar3 = device_info;
  do {
    cVar1 = *pcVar3;
    pSVar3->device_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pSVar3->device_name[1] = cVar2;
    pSVar3 = (SSoundDeviceInfo *)(pSVar3->device_name + 2);
  } while (cVar2 != '\0');
  pCVar5 = local_3c.szPname;
  iVar4 = -1;
  pSVar6 = device_info;
  do {
    pSVar6 = pSVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pSVar6 = (SSoundDeviceInfo *)((int)pSVar6 + (uint)bVar7 * -2 + 1);
    pcVar4 = pSVar6->device_name;
    pSVar6 = pSVar6;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)((int)&pSVar6[-1].is_emulated + 3);
  do {
    cVar2 = *pCVar5;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') {
      return 1;
    }
    cVar2 = pCVar5[1];
    pCVar5 = pCVar5 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  return 1;
}
