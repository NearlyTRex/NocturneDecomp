// Name: sound_mp3.cpp_initializeHuffmanTables_FUN_00533d30
// Address: 00533d30
// MANUAL RECONSTRUCTION
// Address Range: [[00533d30, 00533f7f]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_00533d30(void)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_00533d30(void)

{
  int iVar5;
  char *pcVar7;
  int iVar2;
  int iVar4;
  uint uVar5;
  uint local_1c;

  iVar4 = 0;
  do {
    _sprintf(g_HuffmanTables[iVar4].table_id,"%d",iVar4);
    g_HuffmanTables[iVar4].table_size = g_HuffmanTableSources[iVar4].table_size;
    g_HuffmanTables[iVar4].xlen = g_HuffmanTableSources[iVar4].xlen;
    g_HuffmanTables[iVar4].ylen = g_HuffmanTableSources[iVar4].ylen;
    g_HuffmanTables[iVar4].linbits = g_HuffmanTableSources[iVar4].bits;
    g_HuffmanTables[iVar4].max_value =
         (1 << (g_HuffmanTables[iVar4].linbits & 0x1fU)) + -1;
    sscanf(g_HuffmanTables[iVar4].table_id,"%u",&local_1c);
    if (iVar4 != local_1c) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0xd72;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("wrong table number %u.  File: %s",iVar4,g_CurrentMp3Filename);
    }
    iVar5 = g_HuffmanTableSources[iVar4].reference_index;
    if (iVar5 < 0) {
      if (iVar5 != -1) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd94;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("huffman decodertable error at table %d.  File: %s",iVar4,g_CurrentMp3Filename);
      }
      g_HuffmanTables[iVar4].reference_index = -1;
      if (0x400 < (uint)g_HuffmanTables[iVar4].table_size) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd85;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("MP3 Huffman tree overflow!  File: %s",g_CurrentMp3Filename);
      }
      uVar5 = 0;
      pcVar7 = g_HuffmanTableSources[iVar4].huffman_data_ptr;
      iVar2 = 0;
      if (g_HuffmanTables[iVar4].table_size != 0) {
        do {
          g_HuffmanTables[iVar4].huffman_data[iVar2] = *pcVar7;
          g_HuffmanTables[iVar4].huffman_data[iVar2 + 1] = pcVar7[1];
          uVar5 = uVar5 + 1;
          pcVar7 = pcVar7 + 2;
          iVar2 = iVar2 + 2;
        } while (uVar5 < (uint)g_HuffmanTables[iVar4].table_size);
      }
    }
    else {
      g_HuffmanTables[iVar4].reference_index = iVar5;
      memcpy(g_HuffmanTables[iVar4].huffman_data,g_HuffmanTables[iVar5].huffman_data,0x802);
      g_HuffmanTables[iVar4].table_size = g_HuffmanTables[iVar5].table_size;
      if ((g_HuffmanTables[iVar4].xlen != g_HuffmanTables[iVar5].xlen) ||
         (g_HuffmanTables[iVar5].ylen != g_HuffmanTables[iVar4].ylen)) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd7d;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("wrong table %u reference.  File: %s",iVar4,g_CurrentMp3Filename);
      }
    }
    iVar4 = iVar4 + 1;
    if (0x21 < iVar4) {
      return iVar4;
    }
  } while( true );
}
