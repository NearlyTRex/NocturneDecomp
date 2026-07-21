// Name: sound_mp3.cpp_CMP3Decoder_read_FUN_004e82d0
// Address: 004e82d0
// Address Range: [[004e82d0, 004e8408]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_read_FUN_004e82d0(char *param_1,undefined4 *param_2,int param_3)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_read_FUN_004e82d0(char *param_1,uint *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  uint *puVar8;
  byte bVar9;
  int local_14;
  
  bVar9 = 0;
  pcVar7 = &DAT_01cd8b28;
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  local_14 = 0;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x108);
    if (0 < iVar3) {
      if (param_3 < iVar3) {
        iVar3 = param_3;
      }
      iVar2 = *(int *)(param_1 + 0x104);
      puVar6 = *(uint **)(param_1 + 0x10c);
      puVar8 = param_2;
      for (uVar4 = (iVar2 * iVar3 & 0x7fffffffU) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      for (uVar4 = (byte)((char)(iVar2 * iVar3) * '\x02') & 0xffffff03; uVar4 != 0;
          uVar4 = uVar4 - 1) {
        *(byte *)puVar8 = *(byte *)puVar6;
        puVar6 = (uint *)((int)puVar6 + (uint)bVar9 * -2 + 1);
        puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
      }
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) - iVar3;
      local_14 = local_14 + iVar3;
      param_3 = param_3 - iVar3;
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x104) * iVar3 * 2;
      param_2 = (uint *)((int)param_2 + *(int *)(param_1 + 0x104) * iVar3 * 2);
    }
    for (; 0x47f < param_3; param_3 = param_3 - iVar3) {
      iVar3 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_004e85b0(param_1,param_2);
      if (iVar3 < 1) {
        return local_14;
      }
      local_14 = local_14 + iVar3;
      param_2 = (uint *)((int)param_2 + *(int *)(param_1 + 0x104) * iVar3 * 2);
    }
    if (param_3 < 1) break;
    iVar3 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_004e85b0(param_1,param_1 + 0x110);
    *(int *)(param_1 + 0x108) = iVar3;
    if (iVar3 < 1) {
      return local_14;
    }
    *(char **)(param_1 + 0x10c) = param_1 + 0x110;
  }
  return local_14;
}
