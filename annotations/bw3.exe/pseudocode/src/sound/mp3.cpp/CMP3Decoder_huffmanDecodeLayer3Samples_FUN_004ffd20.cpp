// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004ffd20
// Address: 004ffd20
// Address Range: [[004ffd20, 005003ed]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004ffd20(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004ffd20(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)

{
  SMpegLayer3SideInfo *pSVar1;
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
  SMpegLayer3SideInfo *local_2c;
  SHuffmanTable *local_28;
  SMpegLayer3SideInfo *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  uint local_14;
  
  bVar12 = 0;
  local_34 = (*(int **)frame)[4] + **(int **)frame * 3;
  if (_DAT_01d90410 == 0) {
    local_18 = _DAT_01d90410;
    iVar8 = 0;
    iVar6 = 0;
    local_1c = (char *)0x1d94c98;
    do {
      pcVar13 = local_1c;
      _sprintf(local_1c,&DAT_005ca163);
      *(uint *)(&DAT_01d954bc + iVar8) = *(uint *)(&DAT_00603110 + local_18);
      *(uint *)(iVar8 + 0x1d94c9c) = *(uint *)(&DAT_00603114 + local_18);
      *(uint *)(iVar8 + 0x1d94ca0) = *(uint *)(&DAT_00603118 + local_18);
      *(uint *)(iVar8 + 0x1d94ca4) = *(uint *)(&DAT_0060311c + local_18);
      *(int *)(iVar8 + 0x1d94ca8) = (1 << (*(byte *)(iVar8 + 0x1d94ca4) & 0x1f)) + -1;
      sscanf(pcVar13,&DAT_005ca166);
      if (iVar6 != local_38) {
        _DAT_01d71de0 = "..\\sound\\mp3.cpp";
        _DAT_01d71de4 = 0xdfb;
        core_main_c_FUN_004e4330("wrong table number %u.  File: %s",iVar6,&DAT_01d94b98);
      }
      iVar7 = *(int *)(&DAT_00603120 + local_18);
      if (iVar7 < 0) {
        if (iVar7 != -1) {
          _DAT_01d71de0 = "..\\sound\\mp3.cpp";
          _DAT_01d71de4 = 0xe1d;
          pcVar13 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_005000b4;
        }
        uVar9 = *(uint *)(&DAT_01d954bc + iVar8);
        *(uint *)(iVar8 + 0x1d94cac) = 0xffffffff;
        if (0x400 < uVar9) {
          _DAT_01d71de0 = "..\\sound\\mp3.cpp";
          _DAT_01d71de4 = 0xe0e;
          core_main_c_FUN_004e4330("MP3 Huffman tree overflow!  File: %s",&DAT_01d94b98);
        }
        uVar9 = 0;
        puVar4 = *(byte **)(&DAT_00603124 + local_18);
        iVar7 = iVar8;
        if (*(int *)(&DAT_01d954bc + iVar8) != 0) {
          do {
            *(byte *)(iVar7 + 0x1d94cb8) = *puVar4;
            *(byte *)(iVar7 + 0x1d94cb9) = puVar4[1];
            uVar9 = uVar9 + 1;
            puVar4 = puVar4 + 2;
            iVar7 = iVar7 + 2;
          } while (uVar9 < *(uint *)(&DAT_01d954bc + iVar8));
        }
      }
      else {
        *(int *)(iVar8 + 0x1d94cac) = iVar7;
        iVar7 = iVar7 * 0x828;
        puVar10 = (uint *)(iVar7 + 0x1d94cb8);
        puVar11 = (uint *)(iVar8 + 0x1d94cb8);
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
        *(uint *)(&DAT_01d954bc + iVar8) = *(uint *)(&DAT_01d954bc + iVar7);
        if ((*(int *)(iVar8 + 0x1d94c9c) != *(int *)(iVar7 + 0x1d94c9c)) ||
           (*(int *)(iVar7 + 0x1d94ca0) != *(int *)(iVar8 + 0x1d94ca0))) {
          _DAT_01d71de0 = "..\\sound\\mp3.cpp";
          _DAT_01d71de4 = 0xe06;
          pcVar13 = "wrong table %u reference.  File: %s";
LAB_005000b4:
          core_main_c_FUN_004e4330(pcVar13,iVar6,&DAT_01d94b98);
        }
      }
      iVar8 = iVar8 + 0x828;
      iVar6 = iVar6 + 1;
      local_18 = local_18 + 0x18;
      local_1c = local_1c + 0x828;
    } while (iVar6 < 0x22);
    if (iVar6 != 0x22) {
      _DAT_01d71de0 = "..\\sound\\mp3.cpp";
      _DAT_01d71de4 = 0xe32;
      core_main_c_FUN_004e4330("decoder table read error.  File: %s",&DAT_01d94b98);
    }
    _DAT_01d90410 = 1;
  }
  iVar8 = granule * 0x48 + channel * 0xa0;
  if ((*(int *)(side_info + iVar8 + 0x28) == 0) || (*(int *)(side_info + iVar8 + 0x2c) != 2)) {
    iVar8 = granule * 0x48 + channel * 0xa0;
    local_20 = *(int *)(&DAT_0060166c + *(int *)(side_info + iVar8 + 0x4c) * 4 + local_34 * 0x94);
    iVar8 = *(int *)(&DAT_00601670 +
                    (*(int *)(side_info + iVar8 + 0x50) + *(int *)(side_info + iVar8 + 0x4c)) * 4 +
                    local_34 * 0x94);
  }
  else {
    iVar8 = 0x240;
    local_20 = 0x24;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(this_ptr);
  local_30 = granule * 0x48;
  iVar6 = 1;
  local_24 = side_info + channel * 0xa0;
  for (uVar9 = 0; pSVar1 = local_24, iVar7 = local_30,
      uVar9 < (uint)(*(int *)(local_24 + local_30 + 0x1c) * 2); uVar9 = uVar9 + 2) {
    if ((int)uVar9 < local_20) {
      huffman_table = (SHuffmanTable *)(*(int *)(local_24 + local_30 + 0x34) * 0x828 + 0x1d94c98);
    }
    else if ((int)uVar9 < iVar8) {
      huffman_table = (SHuffmanTable *)(*(int *)(local_24 + local_30 + 0x38) * 0x828 + 0x1d94c98);
    }
    else {
      huffman_table = (SHuffmanTable *)(*(int *)(local_24 + local_30 + 0x3c) * 0x828 + 0x1d94c98);
    }
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_004fd9f0
              (this_ptr,huffman_table,&local_48,&local_44,&local_40,&local_3c);
    *(int *)(quantized_dest + ((int)uVar9 % 0x12) * 4 + ((int)uVar9 / 0x12) * 0x48) = local_48;
    iVar7 = iVar6 / 0x12;
    iVar3 = iVar6 % 0x12;
    iVar6 = iVar6 + 2;
    *(int *)(quantized_dest + iVar3 * 4 + iVar7 * 0x48) = local_44;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(this_ptr);
  local_28 = (SHuffmanTable *)((*(int *)(pSVar1 + iVar7 + 0x5c) + 0x20) * 0x828 + 0x1d94c98);
  iVar8 = uVar9 + 3;
  iVar6 = uVar9 + 2;
  local_2c = side_info + granule * 0x48 + channel * 0xa0;
  iVar7 = uVar9 + 1;
  while( true ) {
    local_14 = frame_bit_offset + *(int *)(local_2c + 0x18);
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(this_ptr);
    if ((local_14 <= uVar2) || (0x23f < (int)uVar9)) break;
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_004fd9f0
              (this_ptr,local_28,&local_48,&local_44,&local_40,&local_3c);
    *(int *)(quantized_dest + ((int)uVar9 % 0x12) * 4 + ((int)uVar9 / 0x12) * 0x48) = local_40;
    *(int *)(quantized_dest + (iVar7 % 0x12) * 4 + (iVar7 / 0x12) * 0x48) = local_3c;
    *(int *)(quantized_dest + (iVar6 % 0x12) * 4 + (iVar6 / 0x12) * 0x48) = local_48;
    iVar3 = iVar8 / 0x12;
    iVar5 = iVar8 % 0x12;
    uVar9 = uVar9 + 4;
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + 4;
    iVar8 = iVar8 + 4;
    *(int *)(quantized_dest + iVar5 * 4 + iVar3 * 0x48) = local_44;
  }
  iVar6 = granule * 0x48 + channel * 0xa0;
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(this_ptr);
  iVar8 = *(int *)(side_info + iVar6 + 0x18);
  uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(this_ptr);
  if ((uint)(frame_bit_offset + iVar8) < uVar2) {
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(this_ptr);
    uVar9 = uVar9 - 4;
    sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_004fd960
              (this_ptr,(uVar2 - frame_bit_offset) - *(int *)(side_info + iVar6 + 0x18));
  }
  iVar8 = *(int *)(side_info + granule * 0x48 + channel * 0xa0 + 0x18);
  uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(this_ptr);
  if ((int)uVar2 < frame_bit_offset + iVar8) {
    sound_mp3_cpp_CMP3Decoder_readBits_FUN_004fd810(this_ptr,(frame_bit_offset + iVar8) - uVar2);
  }
  for (; (int)uVar9 < 0x240; uVar9 = uVar9 + 1) {
    *(uint *)(quantized_dest + ((int)uVar9 % 0x12) * 4 + ((int)uVar9 / 0x12) * 0x48) = 0;
  }
  return;
}
