// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
// Address: 00531680
// Address Range: [[00531680, 00531d4d]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 (CMP3Decoder *this_ptr,float *spectral_dest,SMpegLayer3Granule *granule_info,int channel, int granule,SMpegFrame *frame,int bit_budget)

#include "nocturne.h"

uint __cdecl
sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
          (CMP3Decoder *this_ptr,float *spectral_dest,SMpegLayer3Granule *granule_info,int channel,
          int granule,SMpegFrame *frame,int bit_budget)

{
  SMpegLayer3Granule *pSVar1;
  uint uVar2;
  int iVar3;
  SHuffmanTable *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  byte bVar11;
  char *pcVar12;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  char *local_2c;
  SHuffmanTable *local_28;
  SMpegLayer3Granule *local_24;
  int local_20;
  SHuffmanTable *local_1c;
  int local_18;
  uint local_14;
  
  bVar11 = 0;
  local_34 = (*(int **)bit_budget)[4] + **(int **)bit_budget * 3;
  if (g_HuffmanTablesInitialized == 0) {
    local_18 = g_HuffmanTablesInitialized;
    iVar8 = 0;
    iVar6 = 0;
    local_1c = g_HuffmanTables;
    do {
      pSVar4 = local_1c;
      sprintf(local_1c->table_id,"%d",iVar6);
      *(uint *)((int)&g_HuffmanTables[0].table_size + iVar8) =
           *(uint *)((int)&g_HuffmanTableSources[0].table_size + local_18);
      *(uint *)(g_HuffmanTables[0].table_id + iVar8 + 4) =
           *(uint *)((int)&g_HuffmanTableSources[0].unk1 + local_18);
      *(uint *)(g_HuffmanTables[0].table_id + iVar8 + 8) =
           *(uint *)((int)&g_HuffmanTableSources[0].unk2 + local_18);
      *(uint *)(g_HuffmanTables[0].table_id + iVar8 + 0xc) =
           *(uint *)((int)&g_HuffmanTableSources[0].bits + local_18);
      *(int *)(g_HuffmanTables[0].table_id + iVar8 + 0x10) =
           (1 << (g_HuffmanTables[0].table_id[iVar8 + 0xc] & 0x1fU)) + -1;
      sscanf(pSVar4->table_id,"%u",&local_38);
      if (iVar6 != local_38) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd72;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("wrong table number %u.  File: %s",iVar6,g_CurrentMp3Filename);
      }
      iVar7 = *(int *)((int)&g_HuffmanTableSources[0].reference_index + local_18);
      if (iVar7 < 0) {
        if (iVar7 != -1) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd94;
          pcVar12 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_00531a14;
        }
        uVar9 = *(uint *)((int)&g_HuffmanTables[0].table_size + iVar8);
        pcVar12 = g_HuffmanTables[0].huffman_data + iVar8 + -0xc;
        pcVar12[0] = -1;
        pcVar12[1] = -1;
        pcVar12[2] = -1;
        pcVar12[3] = -1;
        if (0x400 < uVar9) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd85;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("MP3 Huffman tree overflow!  File: %s",g_CurrentMp3Filename);
        }
        uVar9 = 0;
        pcVar12 = *(char **)((int)&g_HuffmanTableSources[0].huffman_data_ptr + local_18);
        iVar7 = iVar8;
        if (*(int *)((int)&g_HuffmanTables[0].table_size + iVar8) != 0) {
          do {
            g_HuffmanTables[0].huffman_data[iVar7] = *pcVar12;
            g_HuffmanTables[0].huffman_data[iVar7 + 1] = pcVar12[1];
            uVar9 = uVar9 + 1;
            pcVar12 = pcVar12 + 2;
            iVar7 = iVar7 + 2;
          } while (uVar9 < *(uint *)((int)&g_HuffmanTables[0].table_size + iVar8));
        }
      }
      else {
        *(int *)(g_HuffmanTables[0].huffman_data + iVar8 + -0xc) = iVar7;
        pcVar12 = g_HuffmanTables[iVar7].huffman_data;
        pcVar10 = g_HuffmanTables[0].huffman_data + iVar8;
        for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pcVar10 = *(uint *)pcVar12;
          pcVar12 = pcVar12 + ((uint)bVar11 * -2 + 1) * 4;
          pcVar10 = pcVar10 + ((uint)bVar11 * -2 + 1) * 4;
        }
        for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pcVar10 = *pcVar12;
          pcVar12 = pcVar12 + (uint)bVar11 * -2 + 1;
          pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
        }
        *(int *)((int)&g_HuffmanTables[0].table_size + iVar8) = g_HuffmanTables[iVar7].table_size;
        if ((*(int *)(g_HuffmanTables[0].table_id + iVar8 + 4) != g_HuffmanTables[iVar7].xlen) ||
           (g_HuffmanTables[iVar7].ylen != *(int *)(g_HuffmanTables[0].table_id + iVar8 + 8))) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd7d;
          pcVar12 = "wrong table %u reference.  File: %s";
LAB_00531a14:
          core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar12,iVar6,g_CurrentMp3Filename);
        }
      }
      iVar8 = iVar8 + 0x828;
      iVar6 = iVar6 + 1;
      local_18 = local_18 + 0x18;
      local_1c = local_1c + 1;
    } while (iVar6 < 0x22);
    if (iVar6 != 0x22) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0xda8;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("decoder table read error.  File: %s",g_CurrentMp3Filename);
    }
    g_HuffmanTablesInitialized = 1;
  }
  if ((granule_info[channel].table_select[granule * 0x12 + -3] == 0) ||
     (granule_info[channel].table_select[granule * 0x12 + -2] != 2)) {
    local_20 = *(int *)(&DAT_0067e6cc +
                       granule_info[channel].subblock_gain[granule * 0x12 + 3] * 4 + local_34 * 0x94
                       );
    iVar8 = *(int *)(&DAT_0067e6d0 +
                    (granule_info[channel].subblock_gain[granule * 0x12 + 4] +
                    granule_info[channel].subblock_gain[granule * 0x12 + 3]) * 4 + local_34 * 0x94);
  }
  else {
    iVar8 = 0x240;
    local_20 = 0x24;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  local_30 = granule * 0x48;
  iVar6 = 1;
  local_24 = granule_info + channel;
  for (uVar9 = 0; pSVar1 = local_24, iVar7 = local_30,
      uVar9 < (uint)(*(int *)(local_24->unk3 + local_30 + 0x14) * 2); uVar9 = uVar9 + 2) {
    if ((int)uVar9 < local_20) {
      pSVar4 = g_HuffmanTables + *(int *)((int)local_24->table_select + local_30);
    }
    else if ((int)uVar9 < iVar8) {
      pSVar4 = g_HuffmanTables + *(int *)((int)local_24->table_select + local_30 + 4);
    }
    else {
      pSVar4 = g_HuffmanTables + *(int *)((int)local_24->table_select + local_30 + 8);
    }
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
              (this_ptr,pSVar4,(int *)&local_48,(int *)&local_44,(int *)&local_40,(int *)&local_3c);
    spectral_dest[((int)uVar9 / 0x12) * 0x12 + (int)uVar9 % 0x12] = local_48;
    iVar7 = iVar6 / 0x12;
    iVar3 = iVar6 % 0x12;
    iVar6 = iVar6 + 2;
    spectral_dest[iVar7 * 0x12 + iVar3] = local_44;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  local_28 = g_HuffmanTables + *(int *)(pSVar1->unk4 + iVar7 + -4) + 0x20;
  iVar8 = uVar9 + 3;
  iVar6 = uVar9 + 2;
  local_2c = granule_info[channel].unk3 + granule * 0x48 + -8;
  iVar7 = uVar9 + 1;
  while( true ) {
    local_14 = (int)&frame->header + *(int *)(local_2c + 0x18);
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
    if ((local_14 <= uVar2) || (0x23f < (int)uVar9)) break;
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
              (this_ptr,local_28,(int *)&local_48,(int *)&local_44,(int *)&local_40,(int *)&local_3c
              );
    spectral_dest[((int)uVar9 / 0x12) * 0x12 + (int)uVar9 % 0x12] = local_40;
    spectral_dest[(iVar7 / 0x12) * 0x12 + iVar7 % 0x12] = local_3c;
    spectral_dest[(iVar6 / 0x12) * 0x12 + iVar6 % 0x12] = local_48;
    iVar3 = iVar8 / 0x12;
    iVar5 = iVar8 % 0x12;
    uVar9 = uVar9 + 4;
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + 4;
    iVar8 = iVar8 + 4;
    spectral_dest[iVar3 * 0x12 + iVar5] = local_44;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  iVar8 = *(int *)(granule_info[channel].unk3 + granule * 0x48 + 0x10);
  uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  if ((uint)((int)&frame->header + iVar8) < uVar2) {
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
    uVar9 = uVar9 - 4;
    sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
              (this_ptr,(uVar2 - (int)frame) -
                        *(int *)(granule_info[channel].unk3 + granule * 0x48 + 0x10));
  }
  iVar8 = (int)&frame->header + *(int *)(granule_info[channel].unk3 + granule * 0x48 + 0x10);
  uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  if ((int)uVar2 < iVar8) {
    uVar2 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,iVar8 - uVar2);
  }
  for (; (int)uVar9 < 0x240; uVar9 = uVar9 + 1) {
    uVar2 = (int)uVar9 / 0x12;
    spectral_dest[((int)uVar9 / 0x12) * 0x12 + (int)uVar9 % 0x12] = 0.0;
  }
  return uVar2;
}
