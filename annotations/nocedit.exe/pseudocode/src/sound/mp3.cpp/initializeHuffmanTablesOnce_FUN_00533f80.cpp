// Name: sound_mp3.cpp_initializeHuffmanTablesOnce_FUN_00533f80
// Address: 00533f80
// Address Range: [[00533f80, 00534209]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_initializeHuffmanTablesOnce_FUN_00533f80(void)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_initializeHuffmanTablesOnce_FUN_00533f80(void)

{
  int iVar5;
  uint uVar6;
  SHuffmanTable *str_00;
  char *pcVar7;
  int iVar1;
  int iVar8;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  int local_10;
  SHuffmanTable *local_c;
  int local_8;
  char *pcVar8;
  SHuffmanTable *str;
  
  bVar7 = 0;
  if (g_HuffmanTablesInitialized == 0) {
    local_8 = g_HuffmanTablesInitialized;
    iVar3 = 0;
    iVar4 = 0;
    local_c = g_HuffmanTables;
    do {
      str_00 = local_c;
      _sprintf(local_c->table_id,"%d",iVar4);
      *(uint *)(g_HuffmanTables[0].huffman_data + iVar3 + 0x804) =
           *(uint *)((int)&g_HuffmanTableSources[0].table_size + local_8);
      *(uint *)(g_HuffmanTables[0].table_id + iVar3 + 4) =
           *(uint *)((int)&g_HuffmanTableSources[0].xlen + local_8);
      *(uint *)(g_HuffmanTables[0].table_id + iVar3 + 8) =
           *(uint *)((int)&g_HuffmanTableSources[0].ylen + local_8);
      *(uint *)(g_HuffmanTables[0].table_id + iVar3 + 0xc) =
           *(uint *)((int)&g_HuffmanTableSources[0].bits + local_8);
      *(int *)(g_HuffmanTables[0].table_id + iVar3 + 0x10) =
           (1 << (g_HuffmanTables[0].table_id[iVar3 + 0xc] & 0x1fU)) + -1;
      sscanf(str_00->table_id,"%u",&local_10);
      if (iVar4 != local_10) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 3442;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("wrong table number %u.  File: %s",iVar4,g_CurrentMp3Filename);
      }
      iVar5 = *(int *)((int)&g_HuffmanTableSources[0].reference_index + local_8);
      if (iVar5 < 0) {
        if (iVar5 != -1) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3476;
          pcVar8 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_005340a4;
        }
        uVar6 = *(uint *)(g_HuffmanTables[0].huffman_data + iVar3 + 0x804);
        pcVar7 = g_HuffmanTables[0].huffman_data + iVar3 + -0xc;
        pcVar7[0] = -1;
        pcVar7[1] = -1;
        pcVar7[2] = -1;
        pcVar7[3] = -1;
        if (0x400 < uVar6) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3461;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("MP3 Huffman tree overflow!  File: %s",g_CurrentMp3Filename);
        }
        uVar5 = 0;
        pcVar7 = *(char **)((int)&g_HuffmanTableSources[0].huffman_data_ptr + local_8);
        iVar2 = iVar3;
        if (*(int *)(g_HuffmanTables[0].huffman_data + iVar3 + 0x804) != 0) {
          do {
            g_HuffmanTables[0].huffman_data[iVar2] = *pcVar7;
            g_HuffmanTables[0].huffman_data[iVar2 + 1] = pcVar7[1];
            uVar5 = uVar5 + 1;
            pcVar7 = pcVar7 + 2;
            iVar2 = iVar2 + 2;
          } while (uVar5 < *(uint *)(g_HuffmanTables[0].huffman_data + iVar3 + 0x804));
        }
      }
      else {
        *(int *)(g_HuffmanTables[0].huffman_data + iVar3 + -0xc) = iVar5;
        pcVar7 = g_HuffmanTables[iVar5].huffman_data;
        pcVar6 = g_HuffmanTables[0].huffman_data + iVar3;
        for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pcVar6 = *(uint *)pcVar7;
          pcVar7 = pcVar7 + (uint)bVar7 * -8 + 4;
          pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
        }
        for (iVar8 = 2; iVar8 != 0; iVar8 = iVar8 + -1) {
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
          *pcVar6 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar7 * -2 + 1;
          pcVar6 = pcVar6;
        }
        *(int *)(g_HuffmanTables[0].huffman_data + iVar3 + 0x804) =
             g_HuffmanTables[iVar5].table_size;
        if ((*(int *)(g_HuffmanTables[0].table_id + iVar3 + 4) != g_HuffmanTables[iVar5].xlen) ||
           (g_HuffmanTables[iVar5].ylen != *(int *)(g_HuffmanTables[0].table_id + iVar3 + 8))) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3453;
          pcVar8 = "wrong table %u reference.  File: %s";
LAB_005340a4:
          core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar8,iVar4,g_CurrentMp3Filename);
        }
      }
      iVar3 = iVar3 + 0x828;
      iVar4 = iVar4 + 1;
      local_8 = local_8 + 0x18;
      local_c = local_c + 1;
    } while (iVar4 < 0x22);
    if (iVar4 != 0x22) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 3496;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("decoder table read error.  File: %s",g_CurrentMp3Filename);
    }
    g_HuffmanTablesInitialized = 1;
  }
  return;
}
