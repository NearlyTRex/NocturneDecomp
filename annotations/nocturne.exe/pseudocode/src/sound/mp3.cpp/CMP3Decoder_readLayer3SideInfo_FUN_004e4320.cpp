// Name: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320
// Address: 004e4320
// Address Range: [[004e4320, 004e4899]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame)

{
  int iVar1;
  SMpegLayer3GranuleInfo *pSVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *local_5c;
  int local_58;
  SMpegLayer3SideInfo *local_48;
  int local_44;
  int local_40;
  SMpegLayer3SideInfo *local_3c;
  SMpegLayer3SideInfo *local_38;
  int local_34;
  int local_30;
  int local_2c;
  SMpegLayer3SideInfo *local_28;
  int local_24;
  
  iVar1 = frame->channel_count;
  if (frame->header->mpeg_version == 0) {
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,8);
    side_info_array->main_data_begin = uVar3;
    if (iVar1 == 1) {
      iVar10 = 1;
    }
    else {
      iVar10 = 2;
    }
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,iVar10);
    side_info_array->private_bits = uVar3;
    local_30 = 0;
    if (0 < iVar1) {
      local_28 = side_info_array;
      local_48 = side_info_array;
      local_3c = side_info_array;
      local_38 = side_info_array;
      do {
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,0xc);
        local_28->channels[0].granules[0].part_2_3_length = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,9);
        local_28->channels[0].granules[0].big_value_pair_count = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,8);
        local_28->channels[0].granules[0].global_gain = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,9);
        local_28->channels[0].granules[0].scalefac_compress = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(bit_stream);
        pSVar2 = side_info_array->channels[local_30 + -1].granules;
        local_28->channels[0].granules[0].window_switching_flag = uVar3;
        if (uVar3 == 0) {
          iVar10 = 0;
          do {
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,5);
            iVar8 = iVar10 + 4;
            *(uint *)((int)&pSVar2[1].scalefac_scale + iVar10 + 0x34) = uVar3;
            iVar10 = iVar8;
          } while (iVar8 != 0xc);
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,4);
          *(uint *)((int)(pSVar2 + 2) + 0x44) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,3);
          *(uint *)((int)(pSVar2 + 2) + 0x24) = 0;
          *(uint *)(pSVar2 + 3) = uVar3;
        }
        else {
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,2);
          local_28->channels[0].granules[0].block_type = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(bit_stream);
          local_28->channels[0].granules[0].mixed_block_flag = uVar3;
          piVar9 = &pSVar2[1].scalefac_scale;
          do {
            piVar6 = piVar9 + 1;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,5);
            piVar9[0xd] = uVar3;
            piVar9 = piVar6;
          } while ((SMpegLayer3GranuleInfo *)piVar6 != pSVar2 + 2);
          uVar3 = (uint)piVar6 ^ (uint)(pSVar2 + 2);
          do {
            uVar4 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,3);
            uVar5 = uVar3 + 4;
            *(uint *)((int)side_info_array->channels[local_30].granules[0].subblock_gain + uVar3) =
                 uVar4;
            uVar3 = uVar5;
          } while (uVar5 != 0xc);
          iVar10 = side_info_array->channels[local_30].granules[0].block_type;
          if (iVar10 == 0) {
            PTR_01cc4800 = "..\\sound\\mp3.cpp";
            INT_01cc4804 = 0x68a;
            core_main_c_FUN_004c8440("Side info bad: block_type == 0 in split block.  File: %s",&DAT_01cd8b28);
          }
          else if ((iVar10 == 2) &&
                  (side_info_array->channels[local_30].granules[0].mixed_block_flag == 0)) {
            side_info_array->channels[local_30].granules[0].region0_count = 8;
          }
          else {
            local_48->channels[0].granules[0].region0_count = 7;
          }
          local_3c->channels[0].granules[0].region1_count =
               0x14 - local_3c->channels[0].granules[0].region0_count;
        }
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(bit_stream);
        local_38->channels[0].granules[0].scalefac_scale = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(bit_stream);
        local_28 = (SMpegLayer3SideInfo *)&local_28->channels[0].granules[1].scalefac_scale;
        local_30 = local_30 + 1;
        local_38->channels[0].granules[0].count_1_table_select = uVar3;
        local_48 = (SMpegLayer3SideInfo *)&local_48->channels[0].granules[1].scalefac_scale;
        local_3c = (SMpegLayer3SideInfo *)&local_3c->channels[0].granules[1].scalefac_scale;
        local_38 = (SMpegLayer3SideInfo *)&local_38->channels[0].granules[1].scalefac_scale;
      } while (local_30 < iVar1);
    }
  }
  else {
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,9);
    side_info_array->main_data_begin = uVar3;
    if (iVar1 == 1) {
      iVar10 = 5;
    }
    else {
      iVar10 = 3;
    }
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,iVar10);
    side_info_array->private_bits = uVar3;
    iVar10 = 0;
    if (0 < iVar1) {
      local_5c = side_info_array->channels[0].scfsi + 2;
      do {
        piVar9 = &side_info_array->channels[iVar10 + -1].granules[1].scalefac_scale;
        do {
          piVar6 = piVar9 + 1;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(bit_stream);
          piVar9[2] = uVar3;
          piVar9 = piVar6;
        } while (piVar6 != local_5c);
        local_5c = local_5c + 0x28;
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar1);
    }
    local_58 = 0;
    do {
      local_34 = 0;
      if (0 < iVar1) {
        local_44 = (int)side_info_array->channels[0].scfsi + local_58 + -8;
        local_40 = local_44;
        local_2c = local_44;
        local_24 = local_44;
        do {
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,0xc);
          *(uint *)(local_24 + 0x18) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,9);
          *(uint *)(local_24 + 0x1c) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,8);
          *(uint *)(local_24 + 0x20) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,4);
          *(uint *)(local_24 + 0x24) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(bit_stream);
          *(uint *)(local_24 + 0x28) = uVar3;
          if (uVar3 == 0) {
            iVar10 = 0;
            do {
              uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,5);
              iVar8 = iVar10 + 4;
              *(uint *)((int)side_info_array->channels[local_34].granules[0].table_select +
                       iVar10 + local_58) = uVar3;
              iVar10 = iVar8;
            } while (iVar8 != 0xc);
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,4);
            *(uint *)((int)side_info_array->channels[local_34].granules[0].subblock_gain +
                     local_58 + 0xc) = uVar3;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,3);
            *(uint *)
             ((int)side_info_array->channels[local_34].granules[0].table_select + local_58 + -8) = 0
            ;
            *(uint *)((int)side_info_array->channels[local_34].granules[0].subblock_gain +
                     local_58 + 0x10) = uVar3;
          }
          else {
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,2);
            *(uint *)(local_24 + 0x2c) = uVar3;
            uVar4 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(bit_stream);
            uVar3 = (int)side_info_array->channels[local_34].scfsi + local_58 + -8;
            *(uint *)(local_24 + 0x30) = uVar4;
            uVar4 = uVar3 + 8;
            do {
              uVar7 = uVar3 + 4;
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,5);
              *(uint *)(uVar3 + 0x34) = uVar5;
              uVar3 = uVar7;
            } while (uVar7 != uVar4);
            uVar3 = uVar7 ^ uVar4;
            do {
              uVar4 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(bit_stream,3);
              uVar5 = uVar3 + 4;
              *(uint *)((int)side_info_array->channels[local_34].granules[0].subblock_gain +
                       uVar3 + local_58) = uVar4;
              uVar3 = uVar5;
            } while (uVar5 != 0xc);
            iVar10 = *(int *)((int)side_info_array->channels[local_34].granules[0].table_select +
                             local_58 + -8);
            if (iVar10 == 0) {
              PTR_01cc4800 = "..\\sound\\mp3.cpp";
              INT_01cc4804 = 0x65b;
              core_main_c_FUN_004c8440("Side info bad: block_type == 0 in split block.  File: %s",&DAT_01cd8b28);
            }
            else if ((iVar10 == 2) &&
                    (*(int *)((int)side_info_array->channels[local_34].granules[0].table_select +
                             local_58 + -4) == 0)) {
              *(uint *)
               ((int)side_info_array->channels[local_34].granules[0].subblock_gain + local_58 + 0xc)
                   = 8;
            }
            else {
              *(uint *)(local_44 + 0x4c) = 7;
            }
            *(int *)(local_40 + 0x50) = 0x14 - *(int *)(local_40 + 0x4c);
          }
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(bit_stream);
          *(uint *)(local_2c + 0x54) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(bit_stream);
          *(uint *)(local_2c + 0x58) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(bit_stream);
          local_24 = local_24 + 0xa0;
          local_34 = local_34 + 1;
          *(uint *)(local_2c + 0x5c) = uVar3;
          local_44 = local_44 + 0xa0;
          local_40 = local_40 + 0xa0;
          local_2c = local_2c + 0xa0;
        } while (local_34 < iVar1);
      }
      local_58 = local_58 + 0x48;
    } while (local_58 != 0x90);
  }
  return;
}
