// Name: sound_mp3.cpp_initializeHuffmanTables_FUN_00533f80
// Address: 00533f80
// Address Range: [[00533f80, 00534209]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_initializeHuffmanTables_FUN_00533f80(void)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_00533f80(void)

{
  SHuffmanTable *str;
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000004;
  char *pcVar8;
  SHuffmanTable *local_c;
  int local_8;
  
  bVar7 = 0;
  if (g_HuffmanTablesInitialized == 0) {
    local_8 = g_HuffmanTablesInitialized;
    iVar3 = 0;
    iVar4 = 0;
    local_c = g_HuffmanTables;
    do {
      str = local_c;
      crt_stdio_c_sprintf_FUN_005fdbd0(local_c->table_id,"%d",iVar4);
      *(uint *)((int)&g_HuffmanTables[0].table_size + iVar3) =
           *(uint *)((int)&g_HuffmanTableSources[0].table_size + unaff_EBP);
      *(uint *)(g_HuffmanTables[0].table_id + iVar3 + 4) =
           *(uint *)((int)&g_HuffmanTableSources[0].field1_0x4 + unaff_EBP);
      *(uint *)(g_HuffmanTables[0].table_id + iVar3 + 8) =
           *(uint *)((int)&g_HuffmanTableSources[0].field2_0x8 + unaff_EBP);
      *(uint *)(g_HuffmanTables[0].table_id + iVar3 + 0xc) =
           *(uint *)((int)&g_HuffmanTableSources[0].bits + unaff_EBP);
      *(int *)(g_HuffmanTables[0].table_id + iVar3 + 0x10) =
           (1 << (g_HuffmanTables[0].table_id[iVar3 + 0xc] & 0x1fU)) + -1;
      crt_stdio_c_sscanf_FUN_0060013c(str->table_id,"%u",&local_c);
      if (iVar4 != local_8) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd72;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("wrong table number %u.  File: %s",iVar4,g_CurrentMp3Filename);
      }
      iVar2 = *(int *)((int)&g_HuffmanTableSources[0].reference_index + in_stack_00000004);
      if (iVar2 < 0) {
        if (iVar2 != -1) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd94;
          pcVar8 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_005340a4;
        }
        uVar5 = *(uint *)((int)&g_HuffmanTables[0].table_size + iVar3);
        pcVar8 = g_HuffmanTables[0].huffman_data + iVar3 + -0xc;
        pcVar8[0] = -1;
        pcVar8[1] = -1;
        pcVar8[2] = -1;
        pcVar8[3] = -1;
        if (0x400 < uVar5) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd85;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("MP3 Huffman tree overflow!  File: %s",g_CurrentMp3Filename);
        }
        uVar5 = 0;
        pcVar8 = *(char **)((int)&g_HuffmanTableSources[0].huffman_data_ptr + in_stack_00000004);
        iVar2 = iVar3;
        if (*(int *)((int)&g_HuffmanTables[0].table_size + iVar3) != 0) {
          do {
            g_HuffmanTables[0].huffman_data[iVar2] = *pcVar8;
            g_HuffmanTables[0].huffman_data[iVar2 + 1] = pcVar8[1];
            uVar5 = uVar5 + 1;
            pcVar8 = pcVar8 + 2;
            iVar2 = iVar2 + 2;
          } while (uVar5 < *(uint *)((int)&g_HuffmanTables[0].table_size + iVar3));
        }
      }
      else {
        *(int *)(g_HuffmanTables[0].huffman_data + iVar3 + -0xc) = iVar2;
        pcVar8 = g_HuffmanTables[iVar2].huffman_data;
        pcVar6 = g_HuffmanTables[0].huffman_data + iVar3;
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
        *(int *)((int)&g_HuffmanTables[0].table_size + iVar3) = g_HuffmanTables[iVar2].table_size;
        if ((*(int *)(g_HuffmanTables[0].table_id + iVar3 + 4) != g_HuffmanTables[iVar2].xlen) ||
           (g_HuffmanTables[iVar2].ylen != *(int *)(g_HuffmanTables[0].table_id + iVar3 + 8))) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd7d;
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
      g_CurrentLineNumber = 0xda8;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("decoder table read error.  File: %s",g_CurrentMp3Filename);
    }
    g_HuffmanTablesInitialized = 1;
  }
  return;
}
