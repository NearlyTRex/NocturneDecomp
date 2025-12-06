// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
// Address: 00531680
// Address Range: [[00531680, 00531d4d]]
// Convention: __cdecl
// Signature: uint sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680(CMP3Decoder * this_ptr, float * spectral_dest, SMpegLayer3Granule * granule_info, int channel, int granule, SMpegFrame * frame, int bit_budget)

#include "nocturne.h"

uint __cdecl
sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
          (CMP3Decoder *this_ptr,float *spectral_dest,SMpegLayer3Granule *granule_info,int channel,
          int granule,SMpegFrame *frame,int bit_budget)

{
  uint uVar1;
  int iVar2;
  SHuffmanTable *huffman_table;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  char *pcVar8;
  uint unaff_ESI;
  uint uVar9;
  int unaff_EDI;
  int iVar10;
  char *pcVar11;
  byte bVar12;
  CMP3Decoder *in_stack_00000020;
  CMP3Decoder *in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  char *pcVar13;
  char *in_stack_ffffffbc;
  int *w_out;
  int in_stack_ffffffc4;
  char *in_stack_ffffffd0;
  SHuffmanTable *local_1c;
  int local_14;
  
  bVar12 = 0;
  iVar3 = (*(int **)bit_budget)[4] + **(int **)bit_budget * 3;
  if (g_HuffmanTablesInitialized == 0) {
    iVar7 = 0;
    pcVar8 = (char *)0x0;
    local_1c = g_HuffmanTables;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_1c->table_id,"%d",pcVar8);
      *(uint *)((int)&g_HuffmanTables[0].table_size + iVar7) =
           *(uint *)((int)&g_HuffmanTableSources[0].table_size + local_14);
      *(uint *)(g_HuffmanTables[0].table_id + iVar7 + 4) =
           *(uint *)((int)&g_HuffmanTableSources[0].field1_0x4 + local_14);
      *(uint *)(g_HuffmanTables[0].table_id + iVar7 + 8) =
           *(uint *)((int)&g_HuffmanTableSources[0].field2_0x8 + local_14);
      *(uint *)(g_HuffmanTables[0].table_id + iVar7 + 0xc) =
           *(uint *)((int)&g_HuffmanTableSources[0].bits + local_14);
      *(int *)(g_HuffmanTables[0].table_id + iVar7 + 0x10) =
           (1 << (g_HuffmanTables[0].table_id[iVar7 + 0xc] & 0x1fU)) + -1;
      crt_stdio_c_sscanf_FUN_0060013c(local_1c->table_id,"%u",&stack0xffffffcc);
      if (pcVar8 != in_stack_ffffffd0) {
        in_stack_ffffffbc = g_CurrentMp3Filename;
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd72;
        core_main_c_displayErrorAndQuit_FUN_00506f10("wrong table number %u.  File: %s",pcVar8);
      }
      iVar5 = *(int *)((int)&g_HuffmanTableSources[0].reference_index + unaff_EDI);
      if (iVar5 < 0) {
        if (iVar5 != -1) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd94;
          pcVar13 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_00531a14;
        }
        uVar9 = *(uint *)((int)&g_HuffmanTables[0].table_size + iVar7);
        pcVar13 = g_HuffmanTables[0].huffman_data + iVar7 + -0xc;
        pcVar13[0] = -1;
        pcVar13[1] = -1;
        pcVar13[2] = -1;
        pcVar13[3] = -1;
        if (0x400 < uVar9) {
          in_stack_ffffffbc = "MP3 Huffman tree overflow!  File: %s";
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd85;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MP3 Huffman tree overflow!  File: %s");
        }
        uVar9 = 0;
        pcVar13 = *(char **)((int)&g_HuffmanTableSources[0].huffman_data_ptr + unaff_EDI);
        iVar5 = iVar7;
        if (*(int *)((int)&g_HuffmanTables[0].table_size + iVar7) != 0) {
          do {
            g_HuffmanTables[0].huffman_data[iVar5] = *pcVar13;
            g_HuffmanTables[0].huffman_data[iVar5 + 1] = pcVar13[1];
            uVar9 = uVar9 + 1;
            pcVar13 = pcVar13 + 2;
            iVar5 = iVar5 + 2;
          } while (uVar9 < *(uint *)((int)&g_HuffmanTables[0].table_size + iVar7));
        }
      }
      else {
        *(int *)(g_HuffmanTables[0].huffman_data + iVar7 + -0xc) = iVar5;
        pcVar13 = g_HuffmanTables[iVar5].huffman_data;
        pcVar11 = g_HuffmanTables[0].huffman_data + iVar7;
        for (iVar10 = 0x200; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(uint *)pcVar11 = *(uint *)pcVar13;
          pcVar13 = pcVar13 + ((uint)bVar12 * -2 + 1) * 4;
          pcVar11 = pcVar11 + ((uint)bVar12 * -2 + 1) * 4;
        }
        for (iVar10 = 2; iVar10 != 0; iVar10 = iVar10 + -1) {
          *pcVar11 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
          pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
        }
        *(int *)((int)&g_HuffmanTables[0].table_size + iVar7) = g_HuffmanTables[iVar5].table_size;
        if ((*(int *)(g_HuffmanTables[0].table_id + iVar7 + 4) != g_HuffmanTables[iVar5].xlen) ||
           (g_HuffmanTables[iVar5].ylen != *(int *)(g_HuffmanTables[0].table_id + iVar7 + 8))) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd7d;
          pcVar13 = "wrong table %u reference.  File: %s";
LAB_00531a14:
          in_stack_ffffffbc = pcVar8;
          core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar13);
        }
      }
      iVar7 = iVar7 + 0x828;
      pcVar8 = pcVar8 + 1;
      local_1c = local_1c + 1;
    } while ((int)pcVar8 < 0x22);
    if (pcVar8 != (char *)0x22) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0xda8;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("decoder table read error.  File: %s",g_CurrentMp3Filename);
    }
    g_HuffmanTablesInitialized = 1;
  }
  if ((granule_info[channel].table_select[granule * 0x12 + -3] == 0) ||
     (granule_info[channel].table_select[granule * 0x12 + -2] != 2)) {
    iVar7 = *(int *)(&DAT_0067e6d0 +
                    (granule_info[channel].subblock_gain[granule * 0x12 + 4] +
                    granule_info[channel].subblock_gain[granule * 0x12 + 3]) * 4 + iVar3 * 0x94);
  }
  else {
    iVar7 = 0x240;
  }
  uVar9 = 0;
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  iVar10 = granule * 0x48;
  iVar5 = 1;
  while( true ) {
    if ((uint)(*(int *)(granule_info[channel].field2_0x8 + iVar10 + 0x14) * 2) <= uVar9) break;
    if ((int)uVar9 < (int)local_1c) {
      huffman_table = g_HuffmanTables + *(int *)((int)granule_info[channel].table_select + iVar10);
    }
    else if ((int)uVar9 < iVar7) {
      huffman_table =
           g_HuffmanTables + *(int *)((int)granule_info[channel].table_select + iVar10 + 4);
    }
    else {
      huffman_table =
           g_HuffmanTables + *(int *)((int)granule_info[channel].table_select + iVar10 + 8);
    }
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
              ((CMP3Decoder *)spectral_dest,huffman_table,(int *)&stack0xffffffbc,
               (int *)&stack0xffffffc0,(int *)&stack0xffffffc4,(int *)&stack0xffffffc8);
    *(char **)(channel + ((int)uVar9 / 0x12) * 0x48 + ((int)uVar9 % 0x12) * 4) = in_stack_ffffffbc;
    iVar6 = iVar5 / 0x12;
    iVar2 = iVar5 % 0x12;
    uVar9 = uVar9 + 2;
    iVar5 = iVar5 + 2;
    *(int *)(channel + iVar6 * 0x48 + iVar2 * 4) = in_stack_ffffffc4;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160((CMP3Decoder *)spectral_dest);
  iVar7 = uVar9 + 3;
  iVar5 = uVar9 + 2;
  iVar6 = uVar9 + 1;
  for (; (uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
                            ((CMP3Decoder *)granule_info), uVar1 < unaff_ESI && ((int)uVar9 < 0x240)
         ); uVar9 = uVar9 + 4) {
    w_out = (int *)&stack0xffffffd0;
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
              ((CMP3Decoder *)channel,local_1c,(int *)&stack0xffffffc4,(int *)&stack0xffffffc8,
               (int *)&stack0xffffffcc,w_out);
    *(char **)((int)frame + ((int)uVar9 % 0x12) * 4 + ((int)uVar9 / 0x12) * 0x48) =
         in_stack_ffffffd0;
    *(int *)((int)frame + (iVar6 % 0x12) * 4 + (iVar6 / 0x12) * 0x48) = iVar10;
    *(int **)((int)frame + (iVar5 % 0x12) * 4 + (iVar5 / 0x12) * 0x48) = w_out;
    iVar2 = iVar7 / 0x12;
    iVar4 = iVar7 % 0x12;
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 4;
    iVar7 = iVar7 + 4;
    *(int *)((int)frame + iVar4 * 4 + iVar2 * 0x48) = iVar3;
  }
  iVar7 = (int)in_stack_00000020 * 0x48 + bit_budget * 0xa0;
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160((CMP3Decoder *)channel);
  iVar3 = *(int *)((int)frame + iVar7 + 0x18);
  uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160((CMP3Decoder *)granule);
  if ((uint)(in_stack_00000028 + iVar3) < uVar1) {
    uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160((CMP3Decoder *)frame);
    uVar9 = uVar9 - 4;
    sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
              ((CMP3Decoder *)bit_budget,
               (uVar1 - in_stack_00000030) - *(int *)((int)frame + iVar7 + 0x18));
  }
  iVar3 = in_stack_00000034 +
          *(int *)(in_stack_00000028 + in_stack_0000002c * 0xa0 + 0x18 + in_stack_00000030 * 0x48);
  uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(in_stack_00000020);
  if ((int)uVar1 < iVar3) {
    uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(in_stack_00000024,iVar3 - uVar1);
  }
  for (; (int)uVar9 < 0x240; uVar9 = uVar9 + 1) {
    uVar1 = (int)uVar9 / 0x12;
    *(uint *)(in_stack_0000002c + ((int)uVar9 / 0x12) * 0x48 + ((int)uVar9 % 0x12) * 4) = 0;
  }
  return uVar1;
}
