// Name: sound_sndwav.cpp_enumerateWavOutDevice_FUN_0052c6c0
// Address: 0052c6c0
// Address Range: [[0052c6c0, 0052c75d]]
// Convention: unknown
// Signature: undefined4 sound_sndwav_cpp_enumerateWavOutDevice_FUN_0052c6c0(UINT_PTR param_1,char *param_2)

#include "nocturne.h"

uint sound_sndwav_cpp_enumerateWavOutDevice_FUN_0052c6c0(UINT_PTR param_1,char *param_2)

{
  char cVar1;
  MMRESULT MVar2;
  char *pcVar3;
  int iVar4;
  CHAR *pCVar5;
  char *pcVar6;
  byte bVar7;
  tagWAVEOUTCAPSA local_3c;
  
  bVar7 = 0;
  MVar2 = waveOutGetDevCapsA(param_1,&local_3c,0x34);
  if (MVar2 != 0) {
    return 0;
  }
  param_2[0x100] = '\0';
  param_2[0x101] = '\0';
  param_2[0x102] = '\0';
  param_2[0x103] = '\0';
  *(UINT_PTR *)(param_2 + 0x104) = param_1;
  param_2[0x108] = '\0';
  param_2[0x109] = '\0';
  param_2[0x10a] = '\0';
  param_2[0x10b] = '\0';
  param_2[0x10c] = '\0';
  param_2[0x10d] = '\0';
  param_2[0x10e] = '\0';
  param_2[0x10f] = '\0';
  pcVar3 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("WavOutWrite: ");
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar3;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar5 = local_3c.szPname;
  iVar4 = -1;
  do {
    pcVar6 = param_2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = param_2 + (uint)bVar7 * -2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pCVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pCVar5[1];
    pCVar5 = pCVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return 1;
}
