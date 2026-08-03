// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004e5200
// Address: 004e5200
// Address Range: [[004e5200, 004e58cd]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004e5200(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004e5200(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte *puVar4;
  SHuffmanTable *huffman_table;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  char *pcVar13;
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
  char *local_1c;
  int local_18;
  uint local_14;
  
  bVar12 = 0;
  local_34 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  if (_DAT_01cd6320 == 0) {
    local_18 = _DAT_01cd6320;
    iVar8 = 0;
    iVar6 = 0;
    local_1c = (char *)0x1cd8c28;
    do {
      pcVar13 = local_1c;
      _sprintf(local_1c,"%d");
      *(uint *)(&DAT_01cd944c + iVar8) = *(uint *)(&DAT_005bdba0 + local_18);
      *(uint *)(iVar8 + 0x1cd8c2c) = *(uint *)(&DAT_005bdba4 + local_18);
      *(uint *)(iVar8 + 0x1cd8c30) = *(uint *)(&DAT_005bdba8 + local_18);
      *(uint *)(iVar8 + 0x1cd8c34) = *(uint *)(&DAT_005bdbac + local_18);
      *(int *)(iVar8 + 0x1cd8c38) = (1 << (*(byte *)(iVar8 + 0x1cd8c34) & 0x1f)) + -1;
      sscanf(pcVar13,"%u");
      if (iVar6 != local_38) {
        g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
        g_INT_01cc4804 = 0xd6b;
        core_main_c_FUN_004c8440("wrong table number %u.  File: %s",iVar6,&DAT_01cd8b28);
      }
      iVar7 = *(int *)(&DAT_005bdbb0 + local_18);
      if (iVar7 < 0) {
        if (iVar7 != -1) {
          g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
          g_INT_01cc4804 = 0xd8d;
          pcVar13 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_004e5594;
        }
        uVar9 = *(uint *)(&DAT_01cd944c + iVar8);
        *(uint *)(iVar8 + 0x1cd8c3c) = 0xffffffff;
        if (0x400 < uVar9) {
          g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
          g_INT_01cc4804 = 0xd7e;
          core_main_c_FUN_004c8440("MP3 Huffman tree overflow!  File: %s",&DAT_01cd8b28);
        }
        uVar9 = 0;
        puVar4 = *(byte **)(&DAT_005bdbb4 + local_18);
        iVar7 = iVar8;
        if (*(int *)(&DAT_01cd944c + iVar8) != 0) {
          do {
            *(byte *)(iVar7 + 0x1cd8c48) = *puVar4;
            *(byte *)(iVar7 + 0x1cd8c49) = puVar4[1];
            uVar9 = uVar9 + 1;
            puVar4 = puVar4 + 2;
            iVar7 = iVar7 + 2;
          } while (uVar9 < *(uint *)(&DAT_01cd944c + iVar8));
        }
      }
      else {
        *(int *)(iVar8 + 0x1cd8c3c) = iVar7;
        iVar7 = iVar7 * 0x828;
        puVar10 = (uint *)(iVar7 + 0x1cd8c48);
        puVar11 = (uint *)(iVar8 + 0x1cd8c48);
        for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(byte *)puVar11 = *(byte *)puVar10;
          puVar10 = (uint *)((int)puVar10 + (uint)bVar12 * -2 + 1);
          puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
        }
        *(uint *)(&DAT_01cd944c + iVar8) = *(uint *)(&DAT_01cd944c + iVar7);
        if ((*(int *)(iVar8 + 0x1cd8c2c) != *(int *)(iVar7 + 0x1cd8c2c)) ||
           (*(int *)(iVar7 + 0x1cd8c30) != *(int *)(iVar8 + 0x1cd8c30))) {
          g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
          g_INT_01cc4804 = 0xd76;
          pcVar13 = "wrong table %u reference.  File: %s";
LAB_004e5594:
          core_main_c_FUN_004c8440(pcVar13,iVar6,&DAT_01cd8b28);
        }
      }
      iVar8 = iVar8 + 0x828;
      iVar6 = iVar6 + 1;
      local_18 = local_18 + 0x18;
      local_1c = local_1c + 0x828;
    } while (iVar6 < 0x22);
    if (iVar6 != 0x22) {
      g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
      g_INT_01cc4804 = 0xda1;
      core_main_c_FUN_004c8440("decoder table read error.  File: %s",&DAT_01cd8b28);
    }
    _DAT_01cd6320 = 1;
  }
  if ((side_info->channels[channel].granules[granule].window_switching_flag == 0) ||
     (side_info->channels[channel].granules[granule].block_type != 2)) {
    iVar8 = side_info->channels[channel].granules[granule].region0_count;
    local_20 = *(int *)(&DAT_005bc0fc + iVar8 * 4 + local_34 * 0x94);
    iVar8 = *(int *)(&DAT_005bc100 +
                    (side_info->channels[channel].granules[granule].region1_count + iVar8) * 4 +
                    local_34 * 0x94);
  }
  else {
    iVar8 = 0x240;
    local_20 = 0x24;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(this_ptr);
  local_30 = granule * 0x48;
  iVar6 = 1;
  local_24 = &side_info->channels[channel + -1].granules[1].scalefac_scale;
  for (uVar9 = 0; piVar1 = local_24, iVar7 = local_30,
      uVar9 < (uint)(*(int *)((int)local_24 + local_30 + 0x1c) * 2); uVar9 = uVar9 + 2) {
    if ((int)uVar9 < local_20) {
      huffman_table =
           (SHuffmanTable *)(*(int *)((int)local_24 + local_30 + 0x34) * 0x828 + 0x1cd8c28);
    }
    else if ((int)uVar9 < iVar8) {
      huffman_table =
           (SHuffmanTable *)(*(int *)((int)local_24 + local_30 + 0x38) * 0x828 + 0x1cd8c28);
    }
    else {
      huffman_table =
           (SHuffmanTable *)(*(int *)((int)local_24 + local_30 + 0x3c) * 0x828 + 0x1cd8c28);
    }
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0
              (this_ptr,huffman_table,&local_48,&local_44,&local_40,&local_3c);
    quantized_dest->samples[(int)uVar9 / 0x12][(int)uVar9 % 0x12] = local_48;
    iVar7 = iVar6 / 0x12;
    iVar3 = iVar6 % 0x12;
    iVar6 = iVar6 + 2;
    quantized_dest->samples[iVar7][iVar3] = local_44;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(this_ptr);
  local_28 = (SHuffmanTable *)((*(int *)((int)piVar1 + iVar7 + 0x5c) + 0x20) * 0x828 + 0x1cd8c28);
  iVar8 = uVar9 + 3;
  iVar6 = uVar9 + 2;
  local_2c = side_info->channels[channel].scfsi + granule * 0x12 + -2;
  iVar7 = uVar9 + 1;
  while( true ) {
    local_14 = frame_bit_offset + local_2c[6];
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(this_ptr);
    if ((local_14 <= uVar2) || (0x23f < (int)uVar9)) break;
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0
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
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(this_ptr);
  iVar8 = side_info->channels[channel].granules[granule].part_2_3_length;
  uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(this_ptr);
  if ((uint)(frame_bit_offset + iVar8) < uVar2) {
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(this_ptr);
    uVar9 = uVar9 - 4;
    sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_004e2e40
              (this_ptr,(uVar2 - frame_bit_offset) -
                        side_info->channels[channel].granules[granule].part_2_3_length);
  }
  iVar8 = frame_bit_offset + side_info->channels[channel].granules[granule].part_2_3_length;
  uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(this_ptr);
  if ((int)uVar2 < iVar8) {
    sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(this_ptr,iVar8 - uVar2);
  }
  for (; (int)uVar9 < 0x240; uVar9 = uVar9 + 1) {
    quantized_dest->samples[(int)uVar9 / 0x12][(int)uVar9 % 0x12] = 0;
  }
  return;
}
