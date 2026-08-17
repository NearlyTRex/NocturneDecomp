// Name: sound_mp3.cpp_initializeHuffmanTablesOnce_FUN_004e7b00
// Address: 004e7b00
// Address Range: [[004e7b00, 004e7d89]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_initializeHuffmanTablesOnce_FUN_004e7b00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_initializeHuffmanTablesOnce_FUN_004e7b00(void)

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
  int local_10;
  char *local_c;
  int local_8;
  
  bVar9 = 0;
  if (_DAT_01cd6320 == 0) {
    local_8 = _DAT_01cd6320;
    iVar4 = 0;
    iVar5 = 0;
    local_c = (char *)0x1cd8c28;
    do {
      pcVar10 = local_c;
      _sprintf(local_c,"%d",iVar5);
      *(uint *)(&DAT_01cd944c + iVar4) = *(uint *)(&DAT_005bdba0 + local_8);
      *(uint *)(iVar4 + 0x1cd8c2c) = *(uint *)(&DAT_005bdba4 + local_8);
      *(uint *)(iVar4 + 0x1cd8c30) = *(uint *)(&DAT_005bdba8 + local_8);
      *(uint *)(iVar4 + 0x1cd8c34) = *(uint *)(&DAT_005bdbac + local_8);
      *(int *)(iVar4 + 0x1cd8c38) = (1 << (*(byte *)(iVar4 + 0x1cd8c34) & 0x1f)) + -1;
      sscanf(pcVar10,"%u",&local_10);
      if (iVar5 != local_10) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 3435;
        core_main_c_displayErrorAndQuit_FUN_004c8440
                  ("wrong table number %u.  File: %s",iVar5,&DAT_01cd8b28);
      }
      iVar3 = *(int *)(&DAT_005bdbb0 + local_8);
      if (iVar3 < 0) {
        if (iVar3 != -1) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3469;
          pcVar10 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_004e7c24;
        }
        uVar7 = *(uint *)(&DAT_01cd944c + iVar4);
        *(uint *)(iVar4 + 0x1cd8c3c) = 0xffffffff;
        if (0x400 < uVar7) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3454;
          core_main_c_displayErrorAndQuit_FUN_004c8440
                    ("MP3 Huffman tree overflow!  File: %s",&DAT_01cd8b28);
        }
        uVar7 = 0;
        puVar1 = *(byte **)(&DAT_005bdbb4 + local_8);
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
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3446;
          pcVar10 = "wrong table %u reference.  File: %s";
LAB_004e7c24:
          core_main_c_displayErrorAndQuit_FUN_004c8440(pcVar10,iVar5,&DAT_01cd8b28);
        }
      }
      iVar4 = iVar4 + 0x828;
      iVar5 = iVar5 + 1;
      local_8 = local_8 + 0x18;
      local_c = local_c + 0x828;
    } while (iVar5 < 0x22);
    if (iVar5 != 0x22) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 3489;
      core_main_c_displayErrorAndQuit_FUN_004c8440
                ("decoder table read error.  File: %s",&DAT_01cd8b28);
    }
    _DAT_01cd6320 = 1;
  }
  return;
}
