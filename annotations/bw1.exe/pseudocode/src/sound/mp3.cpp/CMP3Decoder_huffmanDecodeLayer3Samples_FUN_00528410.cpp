// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00528410
// Address: 00528410
// Address Range: [[00528410, 00528add]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00528410(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00528410(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)

{
  int *piVar1;
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
  
  bVar11 = 0;
  local_34 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  if (g_INT_01d3bd40 == 0) {
    local_18 = g_INT_01d3bd40;
    iVar8 = 0;
    iVar6 = 0;
    local_1c = g_SHuffmanTable_ARRAY_01d405c8;
    do {
      pSVar4 = local_1c;
      _sprintf(local_1c->table_id,"%d");
      *(uint *)(g_SHuffmanTable_ARRAY_01d405c8[0].huffman_data + iVar8 + 0x804) =
           *(uint *)((int)&g_SHuffmanTableSource_ARRAY_00622240[0].table_size + local_18);
      *(uint *)(g_SHuffmanTable_ARRAY_01d405c8[0].table_id + iVar8 + 4) =
           *(uint *)((int)&g_SHuffmanTableSource_ARRAY_00622240[0].xlen + local_18);
      *(uint *)(g_SHuffmanTable_ARRAY_01d405c8[0].table_id + iVar8 + 8) =
           *(uint *)((int)&g_SHuffmanTableSource_ARRAY_00622240[0].ylen + local_18);
      *(uint *)(g_SHuffmanTable_ARRAY_01d405c8[0].table_id + iVar8 + 0xc) =
           *(uint *)((int)&g_SHuffmanTableSource_ARRAY_00622240[0].bits + local_18);
      *(int *)(g_SHuffmanTable_ARRAY_01d405c8[0].table_id + iVar8 + 0x10) =
           (1 << (g_SHuffmanTable_ARRAY_01d405c8[0].table_id[iVar8 + 0xc] & 0x1fU)) + -1;
      sscanf(pSVar4->table_id,"%u");
      if (iVar6 != local_38) {
        g_CHAR_PTR_01d1d400 = "..\\sound\\mp3.cpp";
        g_INT_01d1d404 = 0xdfb;
        core_main_c_displayErrorAndQuit_FUN_005030e0("wrong table number %u.  File: %s");
      }
      iVar7 = *(int *)((int)&g_SHuffmanTableSource_ARRAY_00622240[0].reference_index + local_18);
      if (iVar7 < 0) {
        if (iVar7 != -1) {
          g_CHAR_PTR_01d1d400 = "..\\sound\\mp3.cpp";
          g_INT_01d1d404 = 0xe1d;
          pcVar12 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_005287a4;
        }
        uVar9 = *(uint *)(g_SHuffmanTable_ARRAY_01d405c8[0].huffman_data + iVar8 + 0x804);
        pcVar12 = g_SHuffmanTable_ARRAY_01d405c8[0].huffman_data + iVar8 + -0xc;
        pcVar12[0] = -1;
        pcVar12[1] = -1;
        pcVar12[2] = -1;
        pcVar12[3] = -1;
        if (0x400 < uVar9) {
          g_CHAR_PTR_01d1d400 = "..\\sound\\mp3.cpp";
          g_INT_01d1d404 = 0xe0e;
          core_main_c_displayErrorAndQuit_FUN_005030e0("MP3 Huffman tree overflow!  File: %s");
        }
        uVar9 = 0;
        pcVar12 = *(char **)((int)&g_SHuffmanTableSource_ARRAY_00622240[0].huffman_data_ptr +
                            local_18);
        iVar7 = iVar8;
        if (*(int *)(g_SHuffmanTable_ARRAY_01d405c8[0].huffman_data + iVar8 + 0x804) != 0) {
          do {
            g_SHuffmanTable_ARRAY_01d405c8[0].huffman_data[iVar7] = *pcVar12;
            g_SHuffmanTable_ARRAY_01d405c8[0].huffman_data[iVar7 + 1] = pcVar12[1];
            uVar9 = uVar9 + 1;
            pcVar12 = pcVar12 + 2;
            iVar7 = iVar7 + 2;
          } while (uVar9 < *(uint *)(g_SHuffmanTable_ARRAY_01d405c8[0].huffman_data + iVar8 + 0x804)
                  );
        }
      }
      else {
        *(int *)(g_SHuffmanTable_ARRAY_01d405c8[0].huffman_data + iVar8 + -0xc) = iVar7;
        pcVar12 = g_SHuffmanTable_ARRAY_01d405c8[iVar7].huffman_data;
        pcVar10 = g_SHuffmanTable_ARRAY_01d405c8[0].huffman_data + iVar8;
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
        *(int *)(g_SHuffmanTable_ARRAY_01d405c8[0].huffman_data + iVar8 + 0x804) =
             g_SHuffmanTable_ARRAY_01d405c8[iVar7].table_size;
        if ((*(int *)(g_SHuffmanTable_ARRAY_01d405c8[0].table_id + iVar8 + 4) !=
             g_SHuffmanTable_ARRAY_01d405c8[iVar7].xlen) ||
           (g_SHuffmanTable_ARRAY_01d405c8[iVar7].ylen !=
            *(int *)(g_SHuffmanTable_ARRAY_01d405c8[0].table_id + iVar8 + 8))) {
          g_CHAR_PTR_01d1d400 = "..\\sound\\mp3.cpp";
          g_INT_01d1d404 = 0xe06;
          pcVar12 = "wrong table %u reference.  File: %s";
LAB_005287a4:
          core_main_c_displayErrorAndQuit_FUN_005030e0(pcVar12);
        }
      }
      iVar8 = iVar8 + 0x828;
      iVar6 = iVar6 + 1;
      local_18 = local_18 + 0x18;
      local_1c = local_1c + 1;
    } while (iVar6 < 0x22);
    if (iVar6 != 0x22) {
      g_CHAR_PTR_01d1d400 = "..\\sound\\mp3.cpp";
      g_INT_01d1d404 = 0xe32;
      core_main_c_displayErrorAndQuit_FUN_005030e0("decoder table read error.  File: %s");
    }
    g_INT_01d3bd40 = 1;
  }
  if ((side_info->channels[channel].granules[granule].window_switching_flag == 0) ||
     (side_info->channels[channel].granules[granule].block_type != 2)) {
    iVar8 = side_info->channels[channel].granules[granule].region0_count;
    local_20 = *(int *)(local_34 * 0x94 + 0x62079c + iVar8 * 4);
    iVar8 = *(int *)(local_34 * 0x94 + 0x6207a0 +
                    (side_info->channels[channel].granules[granule].region1_count + iVar8) * 4);
  }
  else {
    iVar8 = 0x240;
    local_20 = 0x24;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(this_ptr);
  local_30 = granule * 0x48;
  iVar6 = 1;
  local_24 = &side_info->channels[channel + -1].granules[1].scalefac_scale;
  for (uVar9 = 0; piVar1 = local_24, iVar7 = local_30,
      uVar9 < (uint)(*(int *)((int)local_24 + local_30 + 0x1c) * 2); uVar9 = uVar9 + 2) {
    if ((int)uVar9 < local_20) {
      pSVar4 = g_SHuffmanTable_ARRAY_01d405c8 + *(int *)((int)local_24 + local_30 + 0x34);
    }
    else if ((int)uVar9 < iVar8) {
      pSVar4 = g_SHuffmanTable_ARRAY_01d405c8 + *(int *)((int)local_24 + local_30 + 0x38);
    }
    else {
      pSVar4 = g_SHuffmanTable_ARRAY_01d405c8 + *(int *)((int)local_24 + local_30 + 0x3c);
    }
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_005260e0
              (this_ptr,pSVar4,&local_48,&local_44,&local_40,&local_3c);
    quantized_dest->samples[(int)uVar9 / 0x12][(int)uVar9 % 0x12] = local_48;
    iVar7 = iVar6 / 0x12;
    iVar3 = iVar6 % 0x12;
    iVar6 = iVar6 + 2;
    quantized_dest->samples[iVar7][iVar3] = local_44;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(this_ptr);
  local_28 = g_SHuffmanTable_ARRAY_01d405c8 + *(int *)((int)piVar1 + iVar7 + 0x5c) + 0x20;
  iVar8 = uVar9 + 3;
  iVar6 = uVar9 + 2;
  local_2c = side_info->channels[channel].scfsi + granule * 0x12 + -2;
  iVar7 = uVar9 + 1;
  while( true ) {
    local_14 = frame_bit_offset + local_2c[6];
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(this_ptr);
    if ((local_14 <= uVar2) || (0x23f < (int)uVar9)) break;
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_005260e0
              (this_ptr,local_28,&local_48,&local_44,&local_40,&local_3c);
    quantized_dest->samples[(int)uVar9 / 0x12][(int)uVar9 % 0x12] = local_40;
    quantized_dest->samples[iVar7 / 0x12][iVar7 % 0x12] = local_3c;
    quantized_dest->samples[iVar6 / 0x12][iVar6 % 0x12] = local_48;
    iVar3 = iVar8 / 0x12;
    iVar5 = iVar8 % 0x12;
    uVar9 = uVar9 + 4;
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + 4;
    iVar8 = iVar8 + 4;
    quantized_dest->samples[iVar3][iVar5] = local_44;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(this_ptr);
  iVar8 = side_info->channels[channel].granules[granule].part_2_3_length;
  uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(this_ptr);
  if ((uint)(frame_bit_offset + iVar8) < uVar2) {
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(this_ptr);
    uVar9 = uVar9 - 4;
    sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_00526050
              (this_ptr,(uVar2 - frame_bit_offset) -
                        side_info->channels[channel].granules[granule].part_2_3_length);
  }
  iVar8 = frame_bit_offset + side_info->channels[channel].granules[granule].part_2_3_length;
  uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(this_ptr);
  if ((int)uVar2 < iVar8) {
    sound_mp3_cpp_CMP3Decoder_readBits_FUN_00525f00(this_ptr,iVar8 - uVar2);
  }
  for (; (int)uVar9 < 0x240; uVar9 = uVar9 + 1) {
    quantized_dest->samples[(int)uVar9 / 0x12][(int)uVar9 % 0x12] = 0;
  }
  return;
}
