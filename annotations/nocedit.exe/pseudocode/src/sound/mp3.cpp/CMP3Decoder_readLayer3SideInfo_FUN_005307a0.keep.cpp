// Name: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
// Address: 005307a0
// MANUAL RECONSTRUCTION
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
  int iVar7;
  uint uVar8;
  int local_58;
  int local_34;
  int local_30;
  SMpegLayer3GranuleInfo *gr;
  int iVar1;
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
      do {
        gr = &side_info_array->channels[local_30].granules[0];
        uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
        gr->part_2_3_length = uVar1;
        uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        gr->big_value_pair_count = uVar1;
        uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
        gr->global_gain = uVar1;
        uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        gr->scalefac_compress = uVar1;
        uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        gr->window_switching_flag = uVar1;
        if (uVar1 == 0) {
          iVar3 = 0;
          do {
            uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            gr->table_select[iVar3] = uVar1;
            iVar3 = iVar3 + 1;
          } while (iVar3 != 3);
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          gr->region0_count = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
          gr->block_type = 0;
          gr->region1_count = uVar1;
        }
        else {
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
          gr->block_type = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          gr->mixed_block_flag = uVar1;
          iVar3 = 0;
          do {
            uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            gr->table_select[iVar3] = uVar1;
            iVar3 = iVar3 + 1;
          } while (iVar3 != 2);
          uVar1 = 0;
          do {
            uVar8 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            gr->subblock_gain[uVar1] = uVar8;
            uVar1 = uVar1 + 1;
          } while (uVar1 != 3);
          iVar3 = gr->block_type;
          if (iVar3 == 0) {
            g_CurrentFilename = "..\\sound\\mp3.cpp";
            g_CurrentLineNumber = 1679;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
          }
          else if ((iVar3 == 2) && (gr->mixed_block_flag == 0)) {
            gr->region0_count = 8;
          }
          else {
            gr->region0_count = 7;
          }
          gr->region1_count = 0x14 - gr->region0_count;
        }
        uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        gr->scalefac_scale = uVar1;
        uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        gr->count_1_table_select = uVar1;
        local_30 = local_30 + 1;
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
      do {
        iVar7 = 0;
        do {
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          side_info_array->channels[iVar3].scfsi[iVar7] = uVar1;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    local_58 = 0;
    do {
      local_34 = 0;
      if (0 < iVar1) {
        do {
          gr = &side_info_array->channels[local_34].granules[local_58];
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
          gr->part_2_3_length = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
          gr->big_value_pair_count = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
          gr->global_gain = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          gr->scalefac_compress = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          gr->window_switching_flag = uVar1;
          if (uVar1 == 0) {
            iVar3 = 0;
            do {
              uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              gr->table_select[iVar3] = uVar1;
              iVar3 = iVar3 + 1;
            } while (iVar3 != 3);
            uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
            gr->region0_count = uVar1;
            uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            gr->block_type = 0;
            gr->region1_count = uVar1;
          }
          else {
            uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
            gr->block_type = uVar1;
            uVar4 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
            gr->mixed_block_flag = uVar4;
            iVar3 = 0;
            do {
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              gr->table_select[iVar3] = uVar5;
              iVar3 = iVar3 + 1;
            } while (iVar3 != 2);
            iVar3 = 0;
            do {
              uVar8 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
              gr->subblock_gain[iVar3] = uVar8;
              iVar3 = iVar3 + 1;
            } while (iVar3 != 3);
            iVar3 = gr->block_type;
            if (iVar3 == 0) {
              g_CurrentFilename = "..\\sound\\mp3.cpp";
              g_CurrentLineNumber = 1632;
              core_main_c_displayErrorAndQuit_FUN_00506f10
                        ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
            }
            else if ((iVar3 == 2) && (gr->mixed_block_flag == 0)) {
              gr->region0_count = 8;
            }
            else {
              gr->region0_count = 7;
            }
            gr->region1_count = 0x14 - gr->region0_count;
          }
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          gr->preflag = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          gr->scalefac_scale = uVar1;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          gr->count_1_table_select = uVar1;
          local_34 = local_34 + 1;
        } while (local_34 < iVar1);
      }
      local_58 = local_58 + 1;
    } while (local_58 != 2);
  }
  return;
}
