// Name: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0
// Address: 004e48a0
// Address Range: [[004e48a0, 004e4c6a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint *local_24;
  int local_20;
  int local_1c;
  
  iVar2 = param_3 + param_5 * 0xa0 + 0x18 + param_4 * 0x48;
  if ((*(int *)(iVar2 + 0x10) != 0) && (*(int *)(iVar2 + 0x14) == 2)) {
    puVar8 = (uint *)(param_2 + param_5 * 0xf8);
    if (*(int *)(iVar2 + 0x18) == 0) {
      local_48 = 0;
      local_34 = 0;
      do {
        local_1c = *(int *)(&DAT_005bc06c + local_34);
        local_20 = local_1c * 4;
        if (local_1c < *(int *)(&DAT_005bc070 + local_34)) {
          local_24 = puVar8 + local_1c + 0x27;
          do {
            puVar7 = (uint *)(local_20 + (int)puVar8);
            do {
              puVar4 = puVar7 + 0xd;
              uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                                (param_1,*(uint *)
                                          (&DAT_005bc078 + *(int *)(iVar2 + 0xc) * 4 + local_48));
              puVar7[0x17] = uVar1;
              puVar7 = puVar4;
            } while (puVar4 != local_24);
            local_24 = local_24 + 1;
            local_20 = local_20 + 4;
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)(&DAT_005bc070 + local_34));
        }
        local_48 = local_48 + 0x40;
        local_34 = local_34 + 4;
      } while (local_48 != 0x80);
      param_2 = param_2 + param_5 * 0xf8;
      iVar2 = param_2 + 0x30;
      do {
        iVar3 = iVar2 + 0x34;
        *(uint *)(iVar2 + 0x5c) = 0;
        iVar2 = iVar3;
      } while (iVar3 != param_2 + 0xcc);
      return;
    }
    puVar7 = puVar8;
    do {
      puVar4 = puVar7 + 1;
      uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                        (param_1,*(uint *)(&DAT_005bc078 + *(int *)(iVar2 + 0xc) * 4));
      *puVar7 = uVar1;
      puVar7 = puVar4;
    } while (puVar4 != puVar8 + 8);
    local_54 = 0xa8;
    iVar3 = param_2 + param_5 * 0xf8;
    local_3c = 3;
    do {
      iVar6 = iVar3 + local_3c * 4;
      do {
        iVar5 = iVar6 + 0x34;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                          (param_1,*(uint *)(&DAT_005bc078 + *(int *)(iVar2 + 0xc) * 4));
        *(uint *)(iVar6 + 0x5c) = uVar1;
        iVar6 = iVar5;
      } while (iVar5 != iVar3 + local_54);
      local_3c = local_3c + 1;
      local_54 = local_54 + 4;
    } while (local_3c < 6);
    local_40 = 6;
    iVar3 = param_2 + param_5 * 0xf8;
    local_4c = 0xb4;
    do {
      iVar6 = local_40 * 4 + iVar3;
      do {
        iVar5 = iVar6 + 0x34;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                          (param_1,*(uint *)(&DAT_005bc0b8 + *(int *)(iVar2 + 0xc) * 4));
        *(uint *)(iVar6 + 0x5c) = uVar1;
        iVar6 = iVar5;
      } while (iVar5 != iVar3 + local_4c);
      local_40 = local_40 + 1;
      local_4c = local_4c + 4;
    } while (local_40 < 0xc);
    param_2 = param_2 + param_5 * 0xf8;
    iVar2 = param_2 + 0x30;
    do {
      iVar3 = iVar2 + 0x34;
      *(uint *)(iVar2 + 0x5c) = 0;
      iVar2 = iVar3;
    } while (iVar3 != param_2 + 0xcc);
    return;
  }
  local_38 = 0;
  local_50 = param_5 * 0xa0 + param_3;
  local_44 = 0;
  do {
    if ((*(int *)(local_50 + 8) == 0) || (param_4 == 0)) {
      iVar3 = *(int *)(&DAT_005bc058 + local_38);
      puVar8 = (uint *)(iVar3 * 4 + param_2 + param_5 * 0xf8);
      if (iVar3 < *(int *)(&DAT_005bc05c + local_38)) {
        do {
          uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
                            (param_1,*(uint *)
                                      (&DAT_005bc078 +
                                      *(int *)(iVar2 + 0xc) * 4 + (uint)(1 < local_44) * 0x40));
          *puVar8 = uVar1;
          iVar3 = iVar3 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar3 < *(int *)(&DAT_005bc05c + local_38));
      }
    }
    local_38 = local_38 + 4;
    local_44 = local_44 + 1;
    local_50 = local_50 + 4;
  } while (local_44 < 4);
  *(uint *)(param_5 * 0xf8 + param_2 + 0x58) = 0;
  return;
}
