// Name: sound_mp3.cpp_initializeHuffmanTables_FUN_00533d30
// Address: 00533d30
// Address Range: [[00533d30, 00533f7f]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_initializeHuffmanTables_FUN_00533d30(void)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_00533d30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  SHuffmanTable *pSVar4;
  int unaff_ESI;
  uint uVar5;
  byte bVar6;
  char *pcVar7;
  SHuffmanTable *pSVar8;
  char *pcVar9;
  SHuffmanTable *local_14;
  
  bVar6 = 0;
  pSVar4 = (SHuffmanTable *)0x0;
  iVar3 = 0;
  pSVar8 = g_HuffmanTables;
  local_14 = (SHuffmanTable *)0x0;
  do {
    pcVar9 = pSVar8->table_id;
    crt_stdio_c_sprintf_FUN_005fdbd0(pSVar8->table_id,"%d",pSVar4);
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
    crt_stdio_c_sscanf_FUN_0060013c(pSVar8->table_id,"%u",&stack0xffffffe8);
    if (pSVar4 != local_14) {
      pcVar9 = g_CurrentMp3Filename;
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0xd72;
      core_main_c_displayErrorAndQuit_FUN_00506f10("wrong table number %u.  File: %s",pSVar4);
    }
    iVar2 = *(int *)((int)&g_HuffmanTableSources[0].reference_index + unaff_ESI);
    if (iVar2 < 0) {
      if (iVar2 != -1) {
        pcVar7 = "huffman decodertable error at table %d.  File: %s";
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd94;
        goto LAB_00533e4e;
      }
      uVar5 = *(uint *)((int)&g_HuffmanTables[0].table_size + iVar3);
      pcVar7 = g_HuffmanTables[0].huffman_data + iVar3 + -0xc;
      pcVar7[0] = -1;
      pcVar7[1] = -1;
      pcVar7[2] = -1;
      pcVar7[3] = -1;
      if (0x400 < uVar5) {
        local_14 = (SHuffmanTable *)g_CurrentMp3Filename;
        pcVar9 = "MP3 Huffman tree overflow!  File: %s";
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd85;
        core_main_c_displayErrorAndQuit_FUN_00506f10("MP3 Huffman tree overflow!  File: %s");
      }
      uVar5 = 0;
      pcVar7 = *(char **)((int)&g_HuffmanTableSources[0].huffman_data_ptr + unaff_ESI);
      iVar2 = iVar3;
      if (*(int *)((int)&g_HuffmanTables[0].table_size + iVar3) != 0) {
        do {
          g_HuffmanTables[0].huffman_data[iVar2] = *pcVar7;
          g_HuffmanTables[0].huffman_data[iVar2 + 1] = pcVar7[1];
          uVar5 = uVar5 + 1;
          pcVar7 = pcVar7 + 2;
          iVar2 = iVar2 + 2;
        } while (uVar5 < *(uint *)((int)&g_HuffmanTables[0].table_size + iVar3));
      }
    }
    else {
      *(int *)(g_HuffmanTables[0].huffman_data + iVar3 + -0xc) = iVar2;
      local_14 = (SHuffmanTable *)(g_HuffmanTables[0].huffman_data + iVar3);
      pcVar7 = g_HuffmanTables[iVar2].huffman_data;
      pSVar8 = local_14;
      for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(uint *)pSVar8->table_id = *(uint *)pcVar7;
        pcVar7 = pcVar7 + (uint)bVar6 * -8 + 4;
        pSVar8 = (SHuffmanTable *)((int)pSVar8 + (uint)bVar6 * -8 + 4);
      }
      for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
        pSVar8->table_id[0] = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar6 * -2 + 1;
        pSVar8 = (SHuffmanTable *)((int)pSVar8 + (uint)bVar6 * -2 + 1);
      }
      *(int *)((int)&g_HuffmanTables[0].table_size + iVar3) = g_HuffmanTables[iVar2].table_size;
      if ((*(int *)(g_HuffmanTables[0].table_id + iVar3 + 4) != g_HuffmanTables[iVar2].xlen) ||
         (g_HuffmanTables[iVar2].ylen != *(int *)(g_HuffmanTables[0].table_id + iVar3 + 8))) {
        pcVar7 = "wrong table %u reference.  File: %s";
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd7d;
LAB_00533e4e:
        local_14 = (SHuffmanTable *)g_CurrentMp3Filename;
        pcVar9 = pSVar4->table_id;
        core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar7);
      }
    }
    iVar3 = iVar3 + 0x828;
    pSVar4 = (SHuffmanTable *)(pSVar4->table_id + 1);
    local_14 = (SHuffmanTable *)&local_14->field6_0x18;
    pSVar8 = (SHuffmanTable *)((int)pcVar9 + 0x828);
    if (0x21 < (int)pSVar4) {
      return (int)pSVar4;
    }
  } while( true );
}
