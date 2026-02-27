// Name: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
// Address: 005307a0
// Address Range: [[005307a0, 00530d19]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
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
  
  iVar1 = frame->samples_per_granule;
  if (frame->header->mpeg_version == 0) {
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
    side_info_array->main_data_begin = uVar3;
    if (iVar1 == 1) {
      iVar11 = 1;
    }
    else {
      iVar11 = 2;
    }
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,iVar11);
    side_info_array->private_bits = uVar3;
    local_30 = 0;
    if (0 < iVar1) {
      local_28 = side_info_array;
      local_48 = side_info_array;
      local_3c = side_info_array;
      local_38 = side_info_array;
      do {
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
        local_28->granules[0].part_2_3_length = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        local_28->granules[0].big_value_pair_count = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
        local_28->granules[0].global_gain = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        local_28->granules[0].scalefac_compress = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        piVar6 = side_info_array->scfsi + local_30 * 0x28 + -2;
        local_28->granules[0].window_switching_flag = uVar3;
        if (uVar3 == 0) {
          iVar11 = 0;
          do {
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            iVar8 = iVar11 + 4;
            *(uint *)((int)piVar6 + iVar11 + 0x34) = uVar3;
            iVar11 = iVar8;
          } while (iVar8 != 0xc);
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          piVar6[0x13] = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
          piVar6[0xb] = 0;
          piVar6[0x14] = uVar3;
        }
        else {
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
          local_28->granules[0].block_type = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          local_28->granules[0].mixed_block_flag = uVar3;
          piVar9 = piVar6;
          do {
            piVar10 = piVar9 + 1;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            piVar9[0xd] = uVar3;
            piVar9 = piVar10;
          } while (piVar10 != piVar6 + 2);
          uVar3 = (uint)piVar10 ^ (uint)(piVar6 + 2);
          do {
            uVar4 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            iVar11 = uVar3 + local_30 * 0xa0;
            uVar3 = uVar3 + 4;
            *(uint *)((int)side_info_array->granules + iVar11 + 0x28) = uVar4;
          } while (uVar3 != 0xc);
          iVar11 = *(int *)((int)side_info_array->granules + local_30 * 0xa0 + 0x14);
          if (iVar11 == 0) {
            g_CurrentFilename = "..\\sound\\mp3.cpp";
            g_CurrentLineNumber = 0x68f;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
          }
          else if ((iVar11 == 2) &&
                  (*(int *)((int)side_info_array->granules + local_30 * 0xa0 + 0x18) == 0)) {
            *(uint *)((int)side_info_array->granules + local_30 * 0xa0 + 0x34) = 8;
          }
          else {
            local_48->granules[0].region0_count = 7;
          }
          local_3c->granules[0].region1_count = 0x14 - local_3c->granules[0].region0_count;
        }
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        local_38->granules[0].scalefac_scale = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        local_28 = (SMpegLayer3SideInfo *)&local_28->granules[1].scalefac_scale;
        local_30 = local_30 + 1;
        local_38->granules[0].count_1_table_select = uVar3;
        local_48 = (SMpegLayer3SideInfo *)&local_48->granules[1].scalefac_scale;
        local_3c = (SMpegLayer3SideInfo *)&local_3c->granules[1].scalefac_scale;
        local_38 = (SMpegLayer3SideInfo *)&local_38->granules[1].scalefac_scale;
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
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,iVar11);
    side_info_array->private_bits = uVar3;
    iVar11 = 0;
    if (0 < iVar1) {
      local_5c = side_info_array->scfsi + 2;
      do {
        piVar6 = side_info_array->scfsi + iVar11 * 0x28 + -2;
        do {
          piVar9 = piVar6 + 1;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          piVar6[2] = uVar3;
          piVar6 = piVar9;
        } while (piVar9 != local_5c);
        local_5c = local_5c + 0x28;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar1);
    }
    local_58 = 0;
    do {
      local_34 = 0;
      if (0 < iVar1) {
        local_44 = (int)side_info_array->scfsi + local_58 + -8;
        local_40 = local_44;
        local_2c = local_44;
        local_24 = local_44;
        do {
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
          *(uint *)(local_24 + 0x18) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
          *(uint *)(local_24 + 0x1c) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
          *(uint *)(local_24 + 0x20) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          *(uint *)(local_24 + 0x24) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(local_24 + 0x28) = uVar3;
          if (uVar3 == 0) {
            iVar11 = 0;
            do {
              uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              iVar8 = local_58 + local_34 * 0xa0;
              iVar2 = iVar11 + iVar8;
              iVar11 = iVar11 + 4;
              *(uint *)((int)side_info_array->granules + iVar2 + 0x1c) = uVar3;
            } while (iVar11 != 0xc);
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
            *(uint *)((int)side_info_array->granules + iVar8 + 0x34) = uVar3;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            *(uint *)((int)side_info_array->granules + iVar8 + 0x14) = 0;
            *(uint *)((int)side_info_array->granules + iVar8 + 0x38) = uVar3;
          }
          else {
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
            *(uint *)(local_24 + 0x2c) = uVar3;
            uVar4 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
            uVar3 = (int)side_info_array->scfsi + local_58 + local_34 * 0xa0 + -8;
            *(uint *)(local_24 + 0x30) = uVar4;
            uVar4 = uVar3 + 8;
            do {
              uVar7 = uVar3 + 4;
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              *(uint *)(uVar3 + 0x34) = uVar5;
              uVar3 = uVar7;
            } while (uVar7 != uVar4);
            uVar7 = uVar7 ^ uVar4;
            do {
              uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
              iVar11 = local_58 + local_34 * 0xa0;
              iVar8 = uVar7 + iVar11;
              uVar7 = uVar7 + 4;
              *(uint *)((int)side_info_array->granules + iVar8 + 0x28) = uVar3;
            } while (uVar7 != 0xc);
            iVar8 = *(int *)((int)side_info_array->granules + iVar11 + 0x14);
            if (iVar8 == 0) {
              g_CurrentFilename = "..\\sound\\mp3.cpp";
              g_CurrentLineNumber = 0x660;
              core_main_c_displayErrorAndQuit_FUN_00506f10
                        ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
            }
            else if ((iVar8 == 2) && (*(int *)((int)side_info_array->granules + iVar11 + 0x18) == 0)
                    ) {
              *(uint *)((int)side_info_array->granules + iVar11 + 0x34) = 8;
            }
            else {
              *(uint *)(local_44 + 0x4c) = 7;
            }
            *(int *)(local_40 + 0x50) = 0x14 - *(int *)(local_40 + 0x4c);
          }
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(local_2c + 0x54) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(local_2c + 0x58) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
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
