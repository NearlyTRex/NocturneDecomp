// Name: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
// Address: 005307a0
// Address Range: [[005307a0, 00530d19]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder * this_ptr, CFileBitStream * bit_stream, SMpegLayer3Granule * side_info_array, SMpegFrame * frame)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
          (CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3Granule *side_info_array,
          SMpegFrame *frame)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  SMpegLayer3Granule *pSVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  SMpegLayer3Granule *pSVar10;
  char *pcVar11;
  int iVar12;
  char *local_5c;
  int local_58;
  SMpegLayer3Granule *local_48;
  char *local_44;
  char *local_40;
  SMpegLayer3Granule *local_3c;
  SMpegLayer3Granule *local_38;
  int local_34;
  int local_30;
  char *local_2c;
  SMpegLayer3Granule *local_28;
  char *local_24;
  
  iVar1 = frame->samples_per_granule;
  if (frame->header->mpeg_version == 0) {
    uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
    side_info_array->unk1 = uVar2;
    if (iVar1 == 1) {
      iVar12 = 1;
    }
    else {
      iVar12 = 2;
    }
    uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,iVar12);
    side_info_array->unk2 = uVar2;
    local_30 = 0;
    if (0 < iVar1) {
      local_28 = side_info_array;
      local_48 = side_info_array;
      local_3c = side_info_array;
      local_38 = side_info_array;
      do {
        uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
        local_28->part_2_3_length_maybe = uVar2;
        uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        local_28->big_value_pair_count = uVar2;
        uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
        local_28->global_gain = uVar2;
        uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        local_28->scalefac_compress = uVar2;
        uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        pSVar4 = side_info_array + local_30;
        local_28->window_switching_flag = uVar2;
        if (uVar2 == 0) {
          iVar12 = 0;
          do {
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            iVar9 = iVar12 + 4;
            *(uint *)((int)pSVar4->table_select + iVar12) = uVar2;
            iVar12 = iVar9;
          } while (iVar9 != 0xc);
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          pSVar4->region0_count = uVar2;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
          pSVar4->block_type = 0;
          pSVar4->region1_count = uVar2;
        }
        else {
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
          local_28->block_type = uVar2;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          local_28->mixed_block_flag = uVar2;
          pSVar10 = pSVar4;
          do {
            piVar5 = &pSVar10->unk2;
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            pSVar10->table_select[0] = uVar2;
            pSVar10 = (SMpegLayer3Granule *)piVar5;
          } while (piVar5 != (int *)pSVar4->unk3);
          uVar2 = (uint)piVar5 ^ (uint)pSVar4->unk3;
          do {
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            uVar8 = uVar2 + 4;
            *(uint *)((int)side_info_array[local_30].subblock_gain + uVar2) = uVar3;
            uVar2 = uVar8;
          } while (uVar8 != 0xc);
          if (side_info_array[local_30].block_type == 0) {
            g_CurrentFilename = "..\\sound\\mp3.cpp";
            g_CurrentLineNumber = 0x68f;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
          }
          else if ((side_info_array[local_30].block_type == 2) &&
                  (side_info_array[local_30].mixed_block_flag == 0)) {
            side_info_array[local_30].region0_count = 8;
          }
          else {
            local_48->region0_count = 7;
          }
          local_3c->region1_count = 0x14 - local_3c->region0_count;
        }
        uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        local_38->scalefac_scale = uVar2;
        uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        local_28 = local_28 + 1;
        local_30 = local_30 + 1;
        local_38->count_1_table_select = uVar2;
        local_48 = local_48 + 1;
        local_3c = local_3c + 1;
        local_38 = local_38 + 1;
      } while (local_30 < iVar1);
    }
  }
  else {
    uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
    side_info_array->unk1 = uVar2;
    if (iVar1 == 1) {
      iVar12 = 5;
    }
    else {
      iVar12 = 3;
    }
    uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,iVar12);
    side_info_array->unk2 = uVar2;
    iVar12 = 0;
    if (0 < iVar1) {
      local_5c = side_info_array->unk3 + 8;
      do {
        pSVar4 = side_info_array + iVar12;
        do {
          piVar5 = &pSVar4->unk2;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)pSVar4->unk3 = uVar2;
          pSVar4 = (SMpegLayer3Granule *)piVar5;
        } while (piVar5 != (int *)local_5c);
        local_5c = local_5c + 0xa0;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar1);
    }
    local_58 = 0;
    do {
      local_34 = 0;
      if (0 < iVar1) {
        local_44 = side_info_array->unk3 + local_58 + -8;
        local_40 = local_44;
        local_2c = local_44;
        local_24 = local_44;
        do {
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
          *(uint *)(local_24 + 0x18) = uVar2;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
          *(uint *)(local_24 + 0x1c) = uVar2;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
          *(uint *)(local_24 + 0x20) = uVar2;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          *(uint *)(local_24 + 0x24) = uVar2;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(local_24 + 0x28) = uVar2;
          if (uVar2 == 0) {
            iVar12 = 0;
            do {
              uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              iVar9 = iVar12 + 4;
              *(uint *)((int)side_info_array[local_34].table_select + iVar12 + local_58) = uVar2;
              iVar12 = iVar9;
            } while (iVar9 != 0xc);
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
            *(uint *)((int)side_info_array[local_34].subblock_gain + local_58 + 0xc) = uVar2;
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            *(uint *)((int)side_info_array[local_34].table_select + local_58 + -8) = 0;
            *(uint *)((int)side_info_array[local_34].subblock_gain + local_58 + 0x10) = uVar2;
          }
          else {
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
            *(uint *)(local_24 + 0x2c) = uVar2;
            uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
            pcVar11 = side_info_array[local_34].unk3 + local_58 + -8;
            *(uint *)(local_24 + 0x30) = uVar2;
            pcVar6 = pcVar11;
            do {
              pcVar7 = pcVar6 + 4;
              uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              *(uint *)(pcVar6 + 0x34) = uVar2;
              pcVar6 = pcVar7;
            } while (pcVar7 != pcVar11 + 8);
            uVar2 = (uint)pcVar7 ^ (uint)(pcVar11 + 8);
            do {
              uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
              uVar8 = uVar2 + 4;
              *(uint *)((int)side_info_array[local_34].subblock_gain + uVar2 + local_58) = uVar3;
              uVar2 = uVar8;
            } while (uVar8 != 0xc);
            iVar12 = *(int *)((int)side_info_array[local_34].table_select + local_58 + -8);
            if (iVar12 == 0) {
              g_CurrentFilename = "..\\sound\\mp3.cpp";
              g_CurrentLineNumber = 0x660;
              core_main_c_displayErrorAndQuit_FUN_00506f10
                        ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
            }
            else if ((iVar12 == 2) &&
                    (*(int *)((int)side_info_array[local_34].table_select + local_58 + -4) == 0)) {
              *(uint *)((int)side_info_array[local_34].subblock_gain + local_58 + 0xc) = 8;
            }
            else {
              *(int *)(local_44 + 0x4c) = 7;
            }
            *(int *)(local_40 + 0x50) = 0x14 - *(int *)(local_40 + 0x4c);
          }
          uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(local_2c + 0x54) = uVar2;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(local_2c + 0x58) = uVar2;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          local_24 = local_24 + 0xa0;
          local_34 = local_34 + 1;
          *(uint *)(local_2c + 0x5c) = uVar2;
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
