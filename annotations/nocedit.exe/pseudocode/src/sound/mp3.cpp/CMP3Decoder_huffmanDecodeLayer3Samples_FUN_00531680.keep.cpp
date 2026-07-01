// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
// Address: 00531680
// MANUAL RECONSTRUCTION
// Address Range: [[00531680, 00531d4d]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)

{
  uint uVar2;
  int iVar3;
  SHuffmanTable *pSVar4;
  int iVar10;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar11;
  uint uVar9;
  int iVar12;
  uint uVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  SHuffmanTable *local_28;
  int local_20;
  uint local_14;
  char *pcVar12;

  local_34 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  if (g_HuffmanTablesInitialized == 0) {
    for (iVar11 = 0; iVar11 < 0x22; iVar11 = iVar11 + 1) {
      _sprintf(g_HuffmanTables[iVar11].table_id,"%d",iVar11);
      g_HuffmanTables[iVar11].table_size = g_HuffmanTableSources[iVar11].table_size;
      g_HuffmanTables[iVar11].xlen = g_HuffmanTableSources[iVar11].xlen;
      g_HuffmanTables[iVar11].ylen = g_HuffmanTableSources[iVar11].ylen;
      g_HuffmanTables[iVar11].linbits = g_HuffmanTableSources[iVar11].bits;
      g_HuffmanTables[iVar11].max_value =
           (1 << (g_HuffmanTables[iVar11].linbits & 0x1fU)) + -1;
      sscanf(g_HuffmanTables[iVar11].table_id,"%u",&local_38);
      if (iVar11 != local_38) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 3442;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("wrong table number %u.  File: %s",iVar11,g_CurrentMp3Filename);
      }
      iVar10 = g_HuffmanTableSources[iVar11].reference_index;
      if (iVar10 < 0) {
        if (iVar10 != -1) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3476;
          pcVar12 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_00531a14;
        }
        g_HuffmanTables[iVar11].reference_index = -1;
        if (0x400 < (uint)g_HuffmanTables[iVar11].table_size) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3461;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("MP3 Huffman tree overflow!  File: %s",g_CurrentMp3Filename);
        }
        if (g_HuffmanTables[iVar11].table_size > 0) {
          memcpy(g_HuffmanTables[iVar11].huffman_data,
                 g_HuffmanTableSources[iVar11].huffman_data_ptr,
                 2 * g_HuffmanTables[iVar11].table_size);
        }
      }
      else {
        g_HuffmanTables[iVar11].reference_index = iVar10;
        memcpy(g_HuffmanTables[iVar11].huffman_data,g_HuffmanTables[iVar10].huffman_data,0x802);
        g_HuffmanTables[iVar11].table_size = g_HuffmanTables[iVar10].table_size;
        if ((g_HuffmanTables[iVar11].xlen != g_HuffmanTables[iVar10].xlen) ||
           (g_HuffmanTables[iVar10].ylen != g_HuffmanTables[iVar11].ylen)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3453;
          pcVar12 = "wrong table %u reference.  File: %s";
LAB_00531a14:
          core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar12,iVar11,g_CurrentMp3Filename);
        }
      }
    }
    g_HuffmanTablesInitialized = 1;
  }
  if ((side_info->channels[channel].granules[granule].window_switching_flag == 0) ||
     (side_info->channels[channel].granules[granule].block_type != 2)) {
    iVar12 = side_info->channels[channel].granules[granule].region0_count;
    local_20 = g_Layer3BandIndex[local_34].l[iVar12 + 1];
    iVar8 = g_Layer3BandIndex[local_34].l[iVar12 +
              side_info->channels[channel].granules[granule].region1_count + 2];
  }
  else {
    iVar8 = 0x240;
    local_20 = 0x24;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  iVar6 = 1;
  for (uVar9 = 0;
       uVar9 < (uint)(side_info->channels[channel].granules[granule].big_value_pair_count * 2);
       uVar9 = uVar9 + 2) {
    if ((int)uVar9 < local_20) {
      pSVar4 = &g_HuffmanTables[side_info->channels[channel].granules[granule].table_select[0]];
    }
    else if ((int)uVar9 < iVar8) {
      pSVar4 = &g_HuffmanTables[side_info->channels[channel].granules[granule].table_select[1]];
    }
    else {
      pSVar4 = &g_HuffmanTables[side_info->channels[channel].granules[granule].table_select[2]];
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
  local_28 = &g_HuffmanTables[
                side_info->channels[channel].granules[granule].count_1_table_select + 32];
  iVar12 = uVar9 + 3;
  iVar11 = uVar9 + 2;
  iVar7 = uVar9 + 1;
  while( true ) {
    local_14 = frame_bit_offset + side_info->channels[channel].granules[granule].part_2_3_length;
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
    if ((local_14 <= uVar2) || (0x23f < (int)uVar9)) break;
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
              (this_ptr,local_28,&local_48,&local_44,&local_40,&local_3c);
    if ((int)uVar9 < 0x240) quantized_dest->samples[(int)uVar9 / 0x12][(int)uVar9 % 0x12] = local_40;
    if (iVar7 < 0x240) quantized_dest->samples[iVar7 / 0x12][iVar7 % 0x12] = local_3c;
    if (iVar11 < 0x240) quantized_dest->samples[iVar11 / 0x12][iVar11 % 0x12] = local_48;
    iVar3 = iVar12 / 0x12;
    iVar5 = iVar12 % 0x12;
    uVar9 = uVar9 + 4;
    iVar7 = iVar7 + 4;
    iVar11 = iVar11 + 4;
    iVar12 = iVar12 + 4;
    if (iVar3 < 0x20) quantized_dest->samples[iVar3][iVar5] = local_44;
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
