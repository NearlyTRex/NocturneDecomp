// Name: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320
// Address: 004e4320
// Address Range: [[004e4320, 004e4899]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *local_5c;
  int local_58;
  uint *local_48;
  int local_44;
  int local_40;
  uint *local_3c;
  uint *local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint *local_28;
  int local_24;
  
  iVar1 = param_4[4];
  if (*(int *)*param_4 == 0) {
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,8);
    *param_3 = uVar3;
    if (iVar1 == 1) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,uVar3);
    param_3[1] = uVar3;
    local_30 = 0;
    if (0 < iVar1) {
      local_28 = param_3;
      local_48 = param_3;
      local_3c = param_3;
      local_38 = param_3;
      do {
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,0xc);
        local_28[6] = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,9);
        local_28[7] = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,8);
        local_28[8] = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,9);
        local_28[9] = uVar3;
        iVar4 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(param_2);
        puVar5 = param_3 + local_30 * 0x28;
        local_28[10] = iVar4;
        if (iVar4 == 0) {
          iVar4 = 0;
          do {
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,5);
            iVar7 = iVar4 + 4;
            *(uint *)((int)puVar5 + iVar4 + 0x34) = uVar3;
            iVar4 = iVar7;
          } while (iVar7 != 0xc);
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,4);
          puVar5[0x13] = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,3);
          puVar5[0xb] = 0;
          puVar5[0x14] = uVar3;
        }
        else {
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,2);
          local_28[0xb] = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(param_2);
          local_28[0xc] = uVar3;
          puVar8 = puVar5;
          do {
            puVar9 = puVar8 + 1;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,5);
            puVar8[0xd] = uVar3;
            puVar8 = puVar9;
          } while (puVar9 != puVar5 + 2);
          uVar10 = (uint)puVar9 ^ (uint)(puVar5 + 2);
          do {
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,3);
            iVar4 = uVar10 + local_30 * 0xa0;
            uVar10 = uVar10 + 4;
            *(uint *)((int)param_3 + iVar4 + 0x40) = uVar3;
          } while (uVar10 != 0xc);
          if (param_3[local_30 * 0x28 + 0xb] == 0) {
            PTR_01cc4800 = "..\\sound\\mp3.cpp";
            INT_01cc4804 = 0x68a;
            core_main_c_FUN_004c8440("Side info bad: block_type == 0 in split block.  File: %s",&DAT_01cd8b28);
          }
          else if ((param_3[local_30 * 0x28 + 0xb] == 2) && (param_3[local_30 * 0x28 + 0xc] == 0)) {
            param_3[local_30 * 0x28 + 0x13] = 8;
          }
          else {
            local_48[0x13] = 7;
          }
          local_3c[0x14] = 0x14 - local_3c[0x13];
        }
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(param_2);
        local_38[0x16] = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(param_2);
        local_28 = local_28 + 0x28;
        local_30 = local_30 + 1;
        local_38[0x17] = uVar3;
        local_48 = local_48 + 0x28;
        local_3c = local_3c + 0x28;
        local_38 = local_38 + 0x28;
      } while (local_30 < iVar1);
    }
  }
  else {
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,9);
    *param_3 = uVar3;
    if (iVar1 == 1) {
      uVar3 = 5;
    }
    else {
      uVar3 = 3;
    }
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,uVar3);
    param_3[1] = uVar3;
    iVar4 = 0;
    if (0 < iVar1) {
      local_5c = param_3 + 4;
      do {
        puVar5 = param_3 + iVar4 * 0x28;
        do {
          puVar8 = puVar5 + 1;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(param_2);
          puVar5[2] = uVar3;
          puVar5 = puVar8;
        } while (puVar8 != local_5c);
        local_5c = local_5c + 0x28;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    local_58 = 0;
    do {
      local_34 = 0;
      if (0 < iVar1) {
        local_44 = local_58 + (int)param_3;
        local_40 = local_44;
        local_2c = local_44;
        local_24 = local_44;
        do {
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,0xc);
          *(uint *)(local_24 + 0x18) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,9);
          *(uint *)(local_24 + 0x1c) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,8);
          *(uint *)(local_24 + 0x20) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,4);
          *(uint *)(local_24 + 0x24) = uVar3;
          iVar4 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(param_2);
          *(int *)(local_24 + 0x28) = iVar4;
          if (iVar4 == 0) {
            iVar4 = 0;
            do {
              uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,5);
              iVar7 = local_58 + local_34 * 0xa0;
              iVar2 = iVar4 + iVar7;
              iVar4 = iVar4 + 4;
              *(uint *)((int)param_3 + iVar2 + 0x34) = uVar3;
            } while (iVar4 != 0xc);
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,4);
            *(uint *)((int)param_3 + iVar7 + 0x4c) = uVar3;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,3);
            *(uint *)((int)param_3 + iVar7 + 0x2c) = 0;
            *(uint *)((int)param_3 + iVar7 + 0x50) = uVar3;
          }
          else {
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,2);
            *(uint *)(local_24 + 0x2c) = uVar3;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(param_2);
            uVar10 = (int)param_3 + local_58 + local_34 * 0xa0;
            *(uint *)(local_24 + 0x30) = uVar3;
            uVar11 = uVar10 + 8;
            do {
              uVar6 = uVar10 + 4;
              uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,5);
              *(uint *)(uVar10 + 0x34) = uVar3;
              uVar10 = uVar6;
            } while (uVar6 != uVar11);
            uVar6 = uVar6 ^ uVar11;
            do {
              uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_2,3);
              iVar4 = local_58 + local_34 * 0xa0;
              iVar7 = uVar6 + iVar4;
              uVar6 = uVar6 + 4;
              *(uint *)((int)param_3 + iVar7 + 0x40) = uVar3;
            } while (uVar6 != 0xc);
            iVar7 = *(int *)((int)param_3 + iVar4 + 0x2c);
            if (iVar7 == 0) {
              PTR_01cc4800 = "..\\sound\\mp3.cpp";
              INT_01cc4804 = 0x65b;
              core_main_c_FUN_004c8440("Side info bad: block_type == 0 in split block.  File: %s",&DAT_01cd8b28);
            }
            else if ((iVar7 == 2) && (*(int *)((int)param_3 + iVar4 + 0x30) == 0)) {
              *(uint *)((int)param_3 + iVar4 + 0x4c) = 8;
            }
            else {
              *(uint *)(local_44 + 0x4c) = 7;
            }
            *(int *)(local_40 + 0x50) = 0x14 - *(int *)(local_40 + 0x4c);
          }
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(param_2);
          *(uint *)(local_2c + 0x54) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(param_2);
          *(uint *)(local_2c + 0x58) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(param_2);
          local_24 = local_24 + 0xa0;
          local_34 = local_34 + 1;
          *(uint *)(local_2c + 0x5c) = uVar3;
          local_44 = local_44 + 0xa0;
          local_40 = local_40 + 0xa0;
          local_2c = local_2c + 0xa0;
        } while (local_34 < iVar1);
      }
      local_58 = local_58 + 0x48;
    } while (local_58 != 0x90);
  }
  return;
}
