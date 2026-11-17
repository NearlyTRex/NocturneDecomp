// Name: sound_mp3.cpp_initializeHuffmanTablesOnce_FUN_004e7b00
// Address: 004e7b00
// Address Range: [[004e7b00, 004e7d89]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_initializeHuffmanTablesOnce_FUN_004e7b00(void)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_initializeHuffmanTablesOnce_FUN_004e7b00(void)

{
  SHuffmanTable *str;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  char *pcVar8;
  int local_10;
  SHuffmanTable *local_c;
  int local_8;
  
  bVar7 = 0;
  if (g_INT_01cd6320 == 0) {
    local_8 = g_INT_01cd6320;
    iVar3 = 0;
    iVar4 = 0;
    local_c = g_SHuffmanTable_ARRAY_01cd8c28;
    do {
      str = local_c;
      _sprintf(local_c->table_id,"%d",iVar4);
      *(uint *)(g_SHuffmanTable_ARRAY_01cd8c28[0].huffman_data + iVar3 + 0x804) =
           *(uint *)((int)&g_SHuffmanTableSource_ARRAY_005bdba0[0].table_size + local_8);
      *(uint *)(g_SHuffmanTable_ARRAY_01cd8c28[0].table_id + iVar3 + 4) =
           *(uint *)((int)&g_SHuffmanTableSource_ARRAY_005bdba0[0].xlen + local_8);
      *(uint *)(g_SHuffmanTable_ARRAY_01cd8c28[0].table_id + iVar3 + 8) =
           *(uint *)((int)&g_SHuffmanTableSource_ARRAY_005bdba0[0].ylen + local_8);
      *(uint *)(g_SHuffmanTable_ARRAY_01cd8c28[0].table_id + iVar3 + 0xc) =
           *(uint *)((int)&g_SHuffmanTableSource_ARRAY_005bdba0[0].bits + local_8);
      *(int *)(g_SHuffmanTable_ARRAY_01cd8c28[0].table_id + iVar3 + 0x10) =
           (1 << (g_SHuffmanTable_ARRAY_01cd8c28[0].table_id[iVar3 + 0xc] & 0x1fU)) + -1;
      sscanf(str->table_id,"%u",&local_10);
      if (iVar4 != local_10) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 3435;
        core_main_c_displayErrorAndQuit_FUN_004c8440
                  ("wrong table number %u.  File: %s",iVar4,g_CHAR_ARRAY_01cd8b28);
      }
      iVar2 = *(int *)((int)&g_SHuffmanTableSource_ARRAY_005bdba0[0].reference_index + local_8);
      if (iVar2 < 0) {
        if (iVar2 != -1) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3469;
          pcVar8 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_004e7c24;
        }
        uVar5 = *(uint *)(g_SHuffmanTable_ARRAY_01cd8c28[0].huffman_data + iVar3 + 0x804);
        pcVar8 = g_SHuffmanTable_ARRAY_01cd8c28[0].huffman_data + iVar3 + -0xc;
        pcVar8[0] = -1;
        pcVar8[1] = -1;
        pcVar8[2] = -1;
        pcVar8[3] = -1;
        if (0x400 < uVar5) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3454;
          core_main_c_displayErrorAndQuit_FUN_004c8440
                    ("MP3 Huffman tree overflow!  File: %s",g_CHAR_ARRAY_01cd8b28);
        }
        uVar5 = 0;
        pcVar8 = *(char **)((int)&g_SHuffmanTableSource_ARRAY_005bdba0[0].huffman_data_ptr + local_8
                           );
        iVar2 = iVar3;
        if (*(int *)(g_SHuffmanTable_ARRAY_01cd8c28[0].huffman_data + iVar3 + 0x804) != 0) {
          do {
            g_SHuffmanTable_ARRAY_01cd8c28[0].huffman_data[iVar2] = *pcVar8;
            g_SHuffmanTable_ARRAY_01cd8c28[0].huffman_data[iVar2 + 1] = pcVar8[1];
            uVar5 = uVar5 + 1;
            pcVar8 = pcVar8 + 2;
            iVar2 = iVar2 + 2;
          } while (uVar5 < *(uint *)(g_SHuffmanTable_ARRAY_01cd8c28[0].huffman_data + iVar3 + 0x804)
                  );
        }
      }
      else {
        *(int *)(g_SHuffmanTable_ARRAY_01cd8c28[0].huffman_data + iVar3 + -0xc) = iVar2;
        pcVar8 = g_SHuffmanTable_ARRAY_01cd8c28[iVar2].huffman_data;
        pcVar6 = g_SHuffmanTable_ARRAY_01cd8c28[0].huffman_data + iVar3;
        for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pcVar6 = *(uint *)pcVar8;
          pcVar8 = pcVar8 + ((uint)bVar7 * -2 + 1) * 4;
          pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
        }
        for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pcVar6 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar7 * -2 + 1;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        }
        *(int *)(g_SHuffmanTable_ARRAY_01cd8c28[0].huffman_data + iVar3 + 0x804) =
             g_SHuffmanTable_ARRAY_01cd8c28[iVar2].table_size;
        if ((*(int *)(g_SHuffmanTable_ARRAY_01cd8c28[0].table_id + iVar3 + 4) !=
             g_SHuffmanTable_ARRAY_01cd8c28[iVar2].xlen) ||
           (g_SHuffmanTable_ARRAY_01cd8c28[iVar2].ylen !=
            *(int *)(g_SHuffmanTable_ARRAY_01cd8c28[0].table_id + iVar3 + 8))) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3446;
          pcVar8 = "wrong table %u reference.  File: %s";
LAB_004e7c24:
          core_main_c_displayErrorAndQuit_FUN_004c8440(pcVar8,iVar4,g_CHAR_ARRAY_01cd8b28);
        }
      }
      iVar3 = iVar3 + 0x828;
      iVar4 = iVar4 + 1;
      local_8 = local_8 + 0x18;
      local_c = local_c + 1;
    } while (iVar4 < 0x22);
    if (iVar4 != 0x22) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 3489;
      core_main_c_displayErrorAndQuit_FUN_004c8440
                ("decoder table read error.  File: %s",g_CHAR_ARRAY_01cd8b28);
    }
    g_INT_01cd6320 = 1;
  }
  return;
}
