// Name: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70
// Address: 004e4c70
// Address Range: [[004e4c70, 004e4ff4]]
// Convention: unknown
// Signature: void sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70(CMP3Decoder *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int *param_6)

#include "nocturne.h"

void sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70(CMP3Decoder *param_1,uint param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  uint local_34 [5];
  ushort uStack_20;
  ushort local_1e;
  short sStack_1c;
  uint local_1a;
  uint local_16;
  
  iVar1 = param_3 + param_5 * 0xa0 + 0x18 + param_4 * 0x48;
  iVar4 = *param_6;
  sStack_1c = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if ((*(int *)(iVar1 + 0x14) == 2) && (*(int *)(iVar1 + 0x18) == 0)) {
    sStack_1c = 1;
  }
  if ((*(int *)(iVar1 + 0x14) == 2) && (*(int *)(iVar1 + 0x18) == 1)) {
    sStack_1c = 2;
  }
  iVar1 = *(int *)(iVar4 + 0x20);
  if (((iVar1 != 1) && (iVar1 != 3)) || (param_5 != 1)) {
    iVar1 = param_3 + param_5 * 0xa0 + param_4 * 0x48;
    if (uVar2 < 400) {
      local_34[0] = (uVar2 >> 4) / 5;
      uStack_20 = 5;
      local_1e = 0;
      local_34[2] = (uVar2 & 0xf) >> 2;
      local_34[1] = (uVar2 >> 4) % 5;
      local_34[3] = uVar2 & 3;
      *(uint *)(iVar1 + 0x54) = 0;
      local_1a = local_1a & 0xffff;
    }
    else if (uVar2 < 500) {
      local_34[4] = uVar2 - 400;
      local_34[0] = (local_34[4] >> 2) / 5;
      uStack_20 = 5;
      local_1e = 0;
      local_34[2] = local_34[4] & 3;
      local_34[1] = (local_34[4] >> 2) % 5;
      local_34[3] = 0;
      local_1a = CONCAT22(1,(ushort)local_1a);
      *(uint *)(iVar1 + 0x54) = 0;
    }
    else if (uVar2 < 0x200) {
      local_34[0] = (uVar2 - 500) / 3;
      uStack_20 = 3;
      local_1e = 0;
      local_34[1] = (uVar2 - 500) % 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_1a = CONCAT22(2,(ushort)local_1a);
      *(uint *)(iVar1 + 0x54) = 1;
    }
  }
  iVar4 = *(int *)(iVar4 + 0x20);
  if (((iVar4 == 1) || (iVar4 == 3)) && (param_5 == 1)) {
    uVar2 = uVar2 >> 1;
    iVar4 = param_4 * 0x48 + param_3 + 0xa0;
    if (uVar2 < 0xb4) {
      local_34[0] = uVar2 / 0x24;
      local_34[1] = (uint)(((ulonglong)uVar2 % 0x24) / 6);
      local_34[3] = 0;
      local_34[2] = (uint)(((ulonglong)uVar2 % 0x24) % 6);
      *(uint *)(iVar4 + 0x54) = 0;
      local_1a = CONCAT22(3,(ushort)local_1a);
    }
    else if (uVar2 < 0xf4) {
      uVar2 = uVar2 - 0xb4;
      local_34[0] = (uVar2 & 0x3f) >> 4;
      local_34[3] = 0;
      local_34[2] = uVar2 & 3;
      local_34[1] = (uVar2 & 0xf) >> 2;
      *(uint *)(iVar4 + 0x54) = 0;
      local_1a = CONCAT22(4,(ushort)local_1a);
    }
    else if (uVar2 < 0xff) {
      local_34[0] = (uVar2 - 0xf4) / 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_34[1] = (uVar2 - 0xf4) % 3;
      *(uint *)(iVar4 + 0x54) = 0;
      local_1a = CONCAT22(5,(ushort)local_1a);
    }
  }
  for (sVar3 = 0; sVar3 < 0x2d; sVar3 = sVar3 + 1) {
    param_1->layer3_scalefactors[sVar3] = 0;
  }
  sVar3 = 0;
  local_16 = (uint)(ushort)local_16;
  while ((int)local_16 >> 0x10 < 4) {
    for (sVar5 = 0;
        (uint)(int)sVar5 <
        *(uint *)(&DAT_005bc470 +
                 ((int)local_16 >> 0x10) * 4 + sStack_1c * 0x10 + ((int)local_1a >> 0x10) * 0x30);
        sVar5 = sVar5 + 1) {
      if (local_34[(int)local_16 >> 0x10] == 0) {
        param_1->layer3_scalefactors[sVar3] = 0;
      }
      else {
        uVar2 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                          (param_1,local_34[(int)local_16 >> 0x10]);
        param_1->layer3_scalefactors[sVar3] = uVar2;
      }
      sVar3 = sVar3 + 1;
    }
    local_16 = CONCAT22(local_16._2_2_ + 1,(ushort)local_16);
  }
  return;
}
