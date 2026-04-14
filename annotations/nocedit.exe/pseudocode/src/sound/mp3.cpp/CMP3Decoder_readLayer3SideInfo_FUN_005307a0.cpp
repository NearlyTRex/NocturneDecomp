// Name: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
// Address: 005307a0
// Address Range: [[005307a0, 00530d19]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame)

{
  uint uVar3;
  uint uVar1;
  uint uVar4;
  uint uVar5;
  int iVar3;
  int *piVar6;
  int *piVar4;
  uint uVar7;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar8;
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
  int iVar1;
  int iVar2;
  int iVar11;
  
  iVar1 = frame->channel_count;
  if (frame->header->mpeg_version == 0) {
    uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
    side_info_array->main_data_begin = uVar1;
    if (iVar1 == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 2;
    }
    uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,iVar3);
    side_info_array->private_bits = uVar1;
    local_30 = 0;
    if (0 < iVar1) {
      local_28 = side_info_array;
      local_48 = side_info_array;
      local_3c = side_info_array;
      local_38 = side_info_array;
      do {
        uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
        local_28->channels[0].granules[0].part_2_3_length = uVar1;
        uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        local_28->channels[0].granules[0].big_value_pair_count = uVar1;
        uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
        local_28->channels[0].granules[0].global_gain = uVar1;
        uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        local_28->channels[0].granules[0].scalefac_compress = uVar1;
        uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        piVar9 = &side_info_array->channels[local_30 + -1].granules[1].scalefac_scale;
        local_28->channels[0].granules[0].window_switching_flag = uVar1;
        if (uVar1 == 0) {
          iVar3 = 0;
          do {
            uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            iVar8 = iVar3 + 4;
            *(uint *)((int)piVar9 + iVar3 + 0x34) = uVar1;
            iVar3 = iVar8;
          } while (iVar8 != 0xc);
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          piVar9[0x13] = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
          piVar9[0xb] = 0;
          piVar9[0x14] = uVar1;
        }
        else {
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
          local_28->channels[0].granules[0].block_type = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          local_28->channels[0].granules[0].mixed_block_flag = uVar1;
          piVar4 = piVar9 + 2;
          do {
            piVar10 = piVar9 + 1;
            uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            piVar9[0xd] = uVar1;
            piVar9 = piVar10;
          } while (piVar10 != piVar4);
          uVar1 = (uint)piVar10 ^ (uint)piVar4;
          do {
            uVar8 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            uVar6 = uVar1 + 4;
            *(uint *)((int)side_info_array->channels[local_30].granules[0].subblock_gain + uVar1) =
                 uVar8;
            uVar1 = uVar6;
          } while (uVar6 != 0xc);
          iVar3 = side_info_array->channels[local_30].granules[0].block_type;
          if (iVar3 == 0) {
            g_CurrentFilename = "..\\sound\\mp3.cpp";
            g_CurrentLineNumber = 0x68f;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
          }
          else if ((iVar3 == 2) &&
                  (side_info_array->channels[local_30].granules[0].mixed_block_flag == 0)) {
            side_info_array->channels[local_30].granules[0].region0_count = 8;
          }
          else {
            local_48->channels[0].granules[0].region0_count = 7;
          }
          local_3c->channels[0].granules[0].region1_count =
               0x14 - local_3c->channels[0].granules[0].region0_count;
        }
        uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        local_38->channels[0].granules[0].scalefac_scale = uVar1;
        uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        local_28 = (SMpegLayer3SideInfo *)&local_28->channels[0].granules[1].scalefac_scale;
        local_30 = local_30 + 1;
        local_38->channels[0].granules[0].count_1_table_select = uVar1;
        local_48 = (SMpegLayer3SideInfo *)&local_48->channels[0].granules[1].scalefac_scale;
        local_3c = (SMpegLayer3SideInfo *)&local_3c->channels[0].granules[1].scalefac_scale;
        local_38 = (SMpegLayer3SideInfo *)&local_38->channels[0].granules[1].scalefac_scale;
      } while (local_30 < iVar1);
    }
  }
  else {
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
    side_info_array->main_data_begin = uVar3;
    if (iVar1 == 1) {
      iVar11 = 5;
    }
    else {
      iVar11 = 3;
    }
    uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,iVar11);
    side_info_array->private_bits = uVar1;
    iVar3 = 0;
    if (0 < iVar1) {
      local_5c = side_info_array->channels[0].scfsi + 2;
      do {
        piVar6 = &side_info_array->channels[iVar3 + -1].granules[1].scalefac_scale;
        do {
          piVar4 = piVar6 + 1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          piVar6[2] = uVar1;
          piVar6 = piVar4;
        } while (piVar4 != local_5c);
        local_5c = local_5c + 0x28;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
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
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
          *(uint *)(local_24 + 0x18) = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
          *(uint *)(local_24 + 0x1c) = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
          *(uint *)(local_24 + 0x20) = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          *(uint *)(local_24 + 0x24) = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(local_24 + 0x28) = uVar1;
          if (uVar1 == 0) {
            iVar3 = 0;
            do {
              uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              iVar7 = iVar3 + 4;
              *(uint *)((int)side_info_array->channels[local_34].granules[0].table_select +
                       iVar3 + local_58) = uVar1;
              iVar3 = iVar7;
            } while (iVar7 != 0xc);
            uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
            *(uint *)((int)side_info_array->channels[local_34].granules[0].subblock_gain +
                     local_58 + 0xc) = uVar1;
            uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            *(uint *)
             ((int)side_info_array->channels[local_34].granules[0].table_select + local_58 + -8) = 0
            ;
            *(uint *)((int)side_info_array->channels[local_34].granules[0].subblock_gain +
                     local_58 + 0x10) = uVar1;
          }
          else {
            uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
            *(uint *)(local_24 + 0x2c) = uVar1;
            uVar4 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
            uVar1 = (int)side_info_array->channels[local_34].scfsi + local_58 + -8;
            *(uint *)(local_24 + 0x30) = uVar4;
            uVar8 = uVar1 + 8;
            do {
              uVar7 = uVar1 + 4;
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              *(uint *)(uVar1 + 0x34) = uVar5;
              uVar1 = uVar7;
            } while (uVar7 != uVar8);
            uVar1 = uVar7 ^ uVar8;
            do {
              uVar8 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
              uVar6 = uVar1 + 4;
              *(uint *)((int)side_info_array->channels[local_34].granules[0].subblock_gain +
                       uVar1 + local_58) = uVar8;
              uVar1 = uVar6;
            } while (uVar6 != 0xc);
            iVar3 = *(int *)((int)side_info_array->channels[local_34].granules[0].table_select +
                            local_58 + -8);
            if (iVar3 == 0) {
              g_CurrentFilename = "..\\sound\\mp3.cpp";
              g_CurrentLineNumber = 0x660;
              core_main_c_displayErrorAndQuit_FUN_00506f10
                        ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
            }
            else if ((iVar3 == 2) &&
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
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(local_2c + 0x54) = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(local_2c + 0x58) = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          local_24 = local_24 + 0xa0;
          local_34 = local_34 + 1;
          *(uint *)(local_2c + 0x5c) = uVar1;
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
