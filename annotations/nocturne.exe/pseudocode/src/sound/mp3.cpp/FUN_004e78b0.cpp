// Name: sound_mp3.cpp_FUN_004e78b0
// Address: 004e78b0
// Address Range: [[004e78b0, 004e7aff]]
// Convention: unknown
// Signature: int sound_mp3_cpp_FUN_004e78b0(void)

#include "nocturne.h"

int sound_mp3_cpp_FUN_004e78b0(void)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  byte bVar9;
  char *pcVar10;
  int local_1c;
  char *local_18;
  int local_14;
  
  bVar9 = 0;
  iVar5 = 0;
  iVar4 = 0;
  local_18 = (char *)0x1cd8c28;
  local_14 = 0;
  do {
    _sprintf(local_18,"%d");
    *(uint *)(&DAT_01cd944c + iVar4) = *(uint *)(&DAT_005bdba0 + local_14);
    *(uint *)(iVar4 + 0x1cd8c2c) = *(uint *)(&DAT_005bdba4 + local_14);
    *(uint *)(iVar4 + 0x1cd8c30) = *(uint *)(&DAT_005bdba8 + local_14);
    *(uint *)(iVar4 + 0x1cd8c34) = *(uint *)(&DAT_005bdbac + local_14);
    *(int *)(iVar4 + 0x1cd8c38) = (1 << (*(byte *)(iVar4 + 0x1cd8c34) & 0x1f)) + -1;
    sscanf(local_18,"%u");
    if (iVar5 != local_1c) {
      g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
      g_INT_01cc4804 = 0xd6b;
      core_main_c_FUN_004c8440("wrong table number %u.  File: %s",iVar5,&DAT_01cd8b28);
    }
    iVar3 = *(int *)(&DAT_005bdbb0 + local_14);
    if (iVar3 < 0) {
      if (iVar3 != -1) {
        pcVar10 = "huffman decodertable error at table %d.  File: %s";
        g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
        g_INT_01cc4804 = 0xd8d;
        goto LAB_004e79ce;
      }
      uVar7 = *(uint *)(&DAT_01cd944c + iVar4);
      *(uint *)(iVar4 + 0x1cd8c3c) = 0xffffffff;
      if (0x400 < uVar7) {
        g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
        g_INT_01cc4804 = 0xd7e;
        core_main_c_FUN_004c8440("MP3 Huffman tree overflow!  File: %s",&DAT_01cd8b28);
      }
      uVar7 = 0;
      puVar1 = *(byte **)(&DAT_005bdbb4 + local_14);
      iVar3 = iVar4;
      if (*(int *)(&DAT_01cd944c + iVar4) != 0) {
        do {
          *(byte *)(iVar3 + 0x1cd8c48) = *puVar1;
          *(byte *)(iVar3 + 0x1cd8c49) = puVar1[1];
          uVar7 = uVar7 + 1;
          puVar1 = puVar1 + 2;
          iVar3 = iVar3 + 2;
        } while (uVar7 < *(uint *)(&DAT_01cd944c + iVar4));
      }
    }
    else {
      *(int *)(iVar4 + 0x1cd8c3c) = iVar3;
      iVar3 = iVar3 * 0x828;
      puVar6 = (uint *)(iVar3 + 0x1cd8c48);
      puVar8 = (uint *)(iVar4 + 0x1cd8c48);
      for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(byte *)puVar8 = *(byte *)puVar6;
        puVar6 = (uint *)((int)puVar6 + (uint)bVar9 * -2 + 1);
        puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
      }
      *(uint *)(&DAT_01cd944c + iVar4) = *(uint *)(&DAT_01cd944c + iVar3);
      if ((*(int *)(iVar4 + 0x1cd8c2c) != *(int *)(iVar3 + 0x1cd8c2c)) ||
         (*(int *)(iVar3 + 0x1cd8c30) != *(int *)(iVar4 + 0x1cd8c30))) {
        pcVar10 = "wrong table %u reference.  File: %s";
        g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
        g_INT_01cc4804 = 0xd76;
LAB_004e79ce:
        core_main_c_FUN_004c8440(pcVar10,iVar5,&DAT_01cd8b28);
      }
    }
    iVar4 = iVar4 + 0x828;
    iVar5 = iVar5 + 1;
    local_14 = local_14 + 0x18;
    local_18 = local_18 + 0x828;
    if (0x21 < iVar5) {
      return iVar5;
    }
  } while( true );
}
