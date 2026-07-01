// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
// Address: 00531680
// Address Range: [[00531680, 00531d4d]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)

{
  int *piVar2;
  SHuffmanTable *str;
  uint uVar2;
  int iVar3;
  char *pcVar3;
  SHuffmanTable *pSVar4;
  uint uVar4;
  int iVar9;
  int iVar10;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar11;
  uint uVar9;
  int iVar12;
  char *pcVar10;
  byte bVar11;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  SHuffmanTable *local_28;
  int *local_24;
  int local_20;
  SHuffmanTable *local_1c;
  int local_18;
  uint local_14;
  char *pcVar12;
  int *piVar1;
  
  bVar11 = 0;
  local_34 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  if (g_HuffmanTablesInitialized == 0) {
    local_18 = g_HuffmanTablesInitialized;
    iVar12 = 0;
    iVar11 = 0;
    local_1c = g_HuffmanTables;
    do {
      str = local_1c;
      _sprintf(local_1c->table_id,"%d",iVar11);
      *(uint *)(g_HuffmanTables[0].huffman_data + iVar12 + 0x804) =
           *(uint *)((int)&g_HuffmanTableSources[0].table_size + local_18);
      *(uint *)(g_HuffmanTables[0].table_id + iVar12 + 4) =
           *(uint *)((int)&g_HuffmanTableSources[0].xlen + local_18);
      *(uint *)(g_HuffmanTables[0].table_id + iVar12 + 8) =
           *(uint *)((int)&g_HuffmanTableSources[0].ylen + local_18);
      *(uint *)(g_HuffmanTables[0].table_id + iVar12 + 0xc) =
           *(uint *)((int)&g_HuffmanTableSources[0].bits + local_18);
      *(int *)(g_HuffmanTables[0].table_id + iVar12 + 0x10) =
           (1 << (g_HuffmanTables[0].table_id[iVar12 + 0xc] & 0x1fU)) + -1;
      sscanf(str->table_id,"%u",&local_38);
      if (iVar11 != local_38) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 3442;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("wrong table number %u.  File: %s",iVar11,g_CurrentMp3Filename);
      }
      iVar10 = *(int *)((int)&g_HuffmanTableSources[0].reference_index + local_18);
      if (iVar10 < 0) {
        if (iVar10 != -1) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3476;
          pcVar12 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_00531a14;
        }
        uVar4 = *(uint *)(g_HuffmanTables[0].huffman_data + iVar12 + 0x804);
        pcVar3 = g_HuffmanTables[0].huffman_data + iVar12 + -0xc;
        pcVar3[0] = -1;
        pcVar3[1] = -1;
        pcVar3[2] = -1;
        pcVar3[3] = -1;
        if (0x400 < uVar4) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3461;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("MP3 Huffman tree overflow!  File: %s",g_CurrentMp3Filename);
        }
        uVar4 = 0;
        pcVar3 = *(char **)((int)&g_HuffmanTableSources[0].huffman_data_ptr + local_18);
        iVar10 = iVar12;
        if (*(int *)(g_HuffmanTables[0].huffman_data + iVar12 + 0x804) != 0) {
          do {
            g_HuffmanTables[0].huffman_data[iVar10] = *pcVar3;
            g_HuffmanTables[0].huffman_data[iVar10 + 1] = pcVar3[1];
            uVar4 = uVar4 + 1;
            pcVar3 = pcVar3 + 2;
            iVar10 = iVar10 + 2;
          } while (uVar4 < *(uint *)(g_HuffmanTables[0].huffman_data + iVar12 + 0x804));
        }
      }
      else {
        *(int *)(g_HuffmanTables[0].huffman_data + iVar12 + -0xc) = iVar10;
        pcVar3 = g_HuffmanTables[iVar10].huffman_data;
        pcVar10 = g_HuffmanTables[0].huffman_data + iVar12;
        for (iVar9 = 0x200; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(uint *)pcVar10 = *(uint *)pcVar3;
          pcVar3 = pcVar3 + (uint)bVar11 * -8 + 4;
          pcVar10 = pcVar10 + (uint)bVar11 * -8 + 4;
        }
        for (iVar9 = 2; iVar9 != 0; iVar9 = iVar9 + -1) {
          pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
          *pcVar10 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar11 * -2 + 1;
          pcVar10 = pcVar10;
        }
        *(int *)(g_HuffmanTables[0].huffman_data + iVar12 + 0x804) =
             g_HuffmanTables[iVar10].table_size;
        if ((*(int *)(g_HuffmanTables[0].table_id + iVar12 + 4) != g_HuffmanTables[iVar10].xlen) ||
           (g_HuffmanTables[iVar10].ylen != *(int *)(g_HuffmanTables[0].table_id + iVar12 + 8))) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3453;
          pcVar12 = "wrong table %u reference.  File: %s";
LAB_00531a14:
          core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar12,iVar11,g_CurrentMp3Filename);
        }
      }
      iVar12 = iVar12 + 0x828;
      iVar11 = iVar11 + 1;
      local_18 = local_18 + 0x18;
      local_1c = local_1c + 1;
    } while (iVar11 < 0x22);
    if (iVar11 != 0x22) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 3496;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("decoder table read error.  File: %s",g_CurrentMp3Filename);
    }
    g_HuffmanTablesInitialized = 1;
  }
  if ((side_info->channels[channel].granules[granule].window_switching_flag == 0) ||
     (side_info->channels[channel].granules[granule].block_type != 2)) {
    iVar12 = side_info->channels[channel].granules[granule].region0_count;
    local_20 = *(int *)(local_34 * 0x94 + 0x67e6cc + iVar12 * 4);
    iVar8 = *(int *)(local_34 * 0x94 + 0x67e6d0 +
                    (side_info->channels[channel].granules[granule].region1_count + iVar12) * 4);
  }
  else {
    iVar8 = 0x240;
    local_20 = 0x24;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  local_30 = granule * 0x48;
  iVar6 = 1;
  local_24 = &side_info->channels[channel + -1].granules[1].scalefac_scale;
  for (uVar9 = 0; piVar2 = local_24, iVar12 = local_30,
      uVar9 < (uint)(*(int *)((int)local_24 + local_30 + 0x1c) * 2); uVar9 = uVar9 + 2) {
    if ((int)uVar9 < local_20) {
      pSVar4 = g_HuffmanTables + *(int *)((int)local_24 + local_30 + 0x34);
    }
    else if ((int)uVar9 < iVar8) {
      pSVar4 = g_HuffmanTables + *(int *)((int)local_24 + local_30 + 0x38);
    }
    else {
      pSVar4 = g_HuffmanTables + *(int *)((int)local_24 + local_30 + 0x3c);
    }
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
              (this_ptr,pSVar4,&local_48,&local_44,&local_40,&local_3c);
    quantized_dest->samples[(int)uVar9 / 0x12][(int)uVar9 % 0x12] = local_48;
    iVar12 = iVar6 / 0x12;
    iVar11 = iVar6 % 0x12;
    iVar6 = iVar6 + 2;
    quantized_dest->samples[iVar12][iVar11] = local_44;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  local_28 = g_HuffmanTables + *(int *)((int)piVar2 + iVar12 + 0x5c) + 0x20;
  iVar12 = uVar9 + 3;
  iVar11 = uVar9 + 2;
  local_2c = side_info->channels[channel].scfsi + granule * 0x12 + -2;
  iVar7 = uVar9 + 1;
  while( true ) {
    local_14 = frame_bit_offset + local_2c[6];
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
    if ((local_14 <= uVar2) || (0x23f < (int)uVar9)) break;
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
              (this_ptr,local_28,&local_48,&local_44,&local_40,&local_3c);
    quantized_dest->samples[(int)uVar9 / 0x12][(int)uVar9 % 0x12] = local_40;
    quantized_dest->samples[iVar7 / 0x12][iVar7 % 0x12] = local_3c;
    quantized_dest->samples[iVar11 / 0x12][iVar11 % 0x12] = local_48;
    iVar3 = iVar12 / 0x12;
    iVar5 = iVar12 % 0x12;
    uVar9 = uVar9 + 4;
    iVar7 = iVar7 + 4;
    iVar11 = iVar11 + 4;
    iVar12 = iVar12 + 4;
    quantized_dest->samples[iVar3][iVar5] = local_44;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  iVar12 = side_info->channels[channel].granules[granule].part_2_3_length;
  uVar4 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  if ((uint)(frame_bit_offset + iVar12) < uVar4) {
    uVar4 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
    uVar9 = uVar9 - 4;
    sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
              (this_ptr,(uVar4 - frame_bit_offset) -
                        side_info->channels[channel].granules[granule].part_2_3_length);
  }
  iVar12 = frame_bit_offset + side_info->channels[channel].granules[granule].part_2_3_length;
  uVar4 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  if ((int)uVar4 < iVar12) {
    sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,iVar12 - uVar4);
  }
  for (; (int)uVar9 < 0x240; uVar9 = uVar9 + 1) {
    quantized_dest->samples[(int)uVar9 / 0x12][(int)uVar9 % 0x12] = 0;
  }
  return;
}
