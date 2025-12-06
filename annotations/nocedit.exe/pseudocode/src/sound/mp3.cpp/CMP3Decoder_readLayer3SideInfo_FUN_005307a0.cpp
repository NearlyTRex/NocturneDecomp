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
  CFileBitStream *pCVar2;
  SMpegFrameHeader *pSVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  FILE *pFVar7;
  SMpegLayer3Granule *pSVar8;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  byte *puVar9;
  byte *puVar10;
  uint uVar11;
  int iVar12;
  int unaff_EDI;
  uint uVar13;
  int unaff_retaddr;
  CFileBitStream *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_00000034;
  int iVar14;
  int *piVar15;
  int *piVar16;
  CFileBitStream *pCVar17;
  CFileBitStream *pCVar18;
  int in_stack_ffffffb8;
  int in_stack_ffffffbc;
  CFileBitStream *pCVar19;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  if (frame->header->mpeg_version == 0) {
    pSVar3 = (SMpegFrameHeader *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
    frame->header = pSVar3;
    if (in_stack_ffffffb8 == 1) {
      iVar14 = 1;
    }
    else {
      iVar14 = 2;
    }
    pcVar4 = (char *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,iVar14);
    in_stack_00000014->buffer = pcVar4;
    pCVar17 = in_stack_00000014;
    if (0 < in_stack_ffffffbc) {
      do {
        uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
        *(uint *)(local_1c + 0x18) = uVar5;
        uRam0000001c = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
        *(uint *)(local_14 + 0x20) = uVar5;
        uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        *(uint *)(unaff_EBP + 0x24) = uVar5;
        uRam00000028 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        iVar14 = local_24 * 0xa0 + in_stack_00000018;
        if (uRam00000028 == 0) {
          iVar12 = 0;
          do {
            uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            iVar1 = iVar12 + iVar14;
            iVar12 = iVar12 + 4;
            *(uint *)((int)frame + iVar1 + 0x34) = uVar5;
          } while (iVar12 != 0xc);
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          *(uint *)((int)frame + iVar14 + 0x4c) = uVar5;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
          *(uint *)((int)frame + iVar14 + 0x2c) = 0;
          *(uint *)((int)frame + iVar14 + 0x50) = uVar5;
        }
        else {
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
          *(uint *)(unaff_ESI + 0x2c) = uVar5;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(unaff_EBX + 0x30) = uVar5;
          uVar13 = (int)pCVar17 + iVar14 + 8;
          uVar5 = (int)pCVar17 + iVar14;
          do {
            uVar11 = uVar5 + 4;
            uVar6 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            *(uint *)(uVar5 + 0x34) = uVar6;
            uVar5 = uVar11;
          } while (uVar11 != uVar13);
          uVar11 = uVar11 ^ uVar13;
          iVar14 = unaff_ESI * 0xa0 + in_stack_00000034;
          do {
            uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            iVar12 = uVar11 + iVar14;
            uVar11 = uVar11 + 4;
            *(uint *)((int)bit_stream + iVar12 + 0x40) = uVar5;
          } while (uVar11 != 0xc);
          iVar12 = *(int *)((int)bit_stream + iVar14 + 0x2c);
          if (iVar12 == 0) {
            g_CurrentFilename = "..\\sound\\mp3.cpp";
            g_CurrentLineNumber = 0x68f;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
          }
          else if ((iVar12 == 2) && (*(int *)((int)bit_stream + iVar14 + 0x30) == 0)) {
            *(uint *)((int)bit_stream + iVar14 + 0x4c) = 8;
          }
          else {
            in_stack_00000014[1].stream_start_position = 7;
          }
          *(int *)(unaff_EBP + 0x50) = 0x14 - *(int *)(unaff_EBP + 0x4c);
        }
        uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        *(uint *)(unaff_ESI + 0x58) = uVar5;
        pCVar17 = bit_stream;
        uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        this_ptr = (CMP3Decoder *)(this_ptr->filename + 1);
        *(uint *)(unaff_EBX + 0x5c) = uVar5;
        local_14 = local_14 + 0xa0;
        unaff_ESI = unaff_ESI + 0xa0;
        unaff_EBX = unaff_EBX + 0xa0;
      } while ((int)this_ptr < 0);
    }
  }
  else {
    pSVar3 = (SMpegFrameHeader *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
    frame->header = pSVar3;
    if (in_stack_ffffffb8 == 1) {
      iVar14 = 5;
    }
    else {
      iVar14 = 3;
    }
    pcVar4 = (char *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,iVar14);
    in_stack_00000014->buffer = pcVar4;
    iVar14 = 0;
    if (0 < in_stack_ffffffbc) {
      piVar15 = &in_stack_00000014->current_byte_index;
      do {
        puVar9 = (byte *)((int)in_stack_00000014 + iVar14 * 0xa0);
        piVar16 = piVar15;
        do {
          puVar10 = puVar9 + 4;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(puVar9 + 8) = uVar5;
          puVar9 = puVar10;
        } while ((int *)puVar10 != piVar15);
        piVar15 = piVar16 + 0x28;
        iVar14 = iVar14 + 1;
      } while (iVar14 < in_stack_ffffffbc);
    }
    pCVar17 = (CFileBitStream *)0x0;
    do {
      pCVar2 = in_stack_00000014;
      pCVar19 = (CFileBitStream *)0x0;
      pCVar18 = pCVar17;
      if (0 < in_stack_ffffffbc) {
        do {
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
          *(uint *)(local_18 + 0x18) = uVar5;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
          pCVar17->error_flag = uVar5;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
          pCVar17->stream_start_position = uVar5;
          pCVar18 = bit_stream;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          *(uint *)(unaff_EDI + 0x24) = uVar5;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          iVar14 = local_28 * 0xa0 + in_stack_00000018;
          *(uint *)(unaff_ESI + 0x28) = uVar5;
          if (uVar5 == 0) {
            iVar12 = 0;
            do {
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              iVar1 = iVar12 + iVar14;
              iVar12 = iVar12 + 4;
              *(uint *)((int)bit_stream + iVar1 + 0x34) = uVar5;
            } while (iVar12 != 0xc);
            in_stack_ffffffbc = 0x530a93;
            uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
            *(uint *)((int)bit_stream + iVar14 + 0x4c) = uVar5;
            uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            *(uint *)((int)bit_stream + iVar14 + 0x2c) = 0;
            *(uint *)((int)bit_stream + iVar14 + 0x50) = uVar5;
          }
          else {
            uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
            *(uint *)(unaff_EBX + 0x2c) = uVar5;
            uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
            *(uint *)(unaff_retaddr + 0x30) = uVar5;
            uVar13 = (int)pCVar19 + iVar14 + 8;
            uVar5 = (int)pCVar19 + iVar14;
            do {
              uVar11 = uVar5 + 4;
              uVar6 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              *(uint *)(uVar5 + 0x34) = uVar6;
              uVar5 = uVar11;
            } while (uVar11 != uVar13);
            uVar11 = uVar11 ^ uVar13;
            iVar14 = unaff_EDI * 0xa0 + in_stack_00000034;
            do {
              in_stack_ffffffbc = 0x530941;
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
              iVar12 = uVar11 + iVar14;
              uVar11 = uVar11 + 4;
              *(uint *)((int)frame + iVar12 + 0x40) = uVar5;
            } while (uVar11 != 0xc);
            iVar12 = *(int *)((int)frame + iVar14 + 0x2c);
            if (iVar12 == 0) {
              g_CurrentFilename = "..\\sound\\mp3.cpp";
              g_CurrentLineNumber = 0x660;
              core_main_c_displayErrorAndQuit_FUN_00506f10
                        ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
            }
            else if ((iVar12 == 2) && (*(int *)((int)frame + iVar14 + 0x30) == 0)) {
              *(uint *)((int)frame + iVar14 + 0x4c) = 8;
            }
            else {
              *(uint *)((int)&pCVar2[1].stream_start_position + (int)&pCVar17->file_handle) =
                   7;
            }
            pCVar17[1].stream_length = 0x14 - pCVar17[1].stream_start_position;
          }
          uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(this_ptr->filename + 0x54) = uVar5;
          pFVar7 = (FILE *)sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          bit_stream[2].file_handle = pFVar7;
          pCVar19 = bit_stream;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          in_stack_00000014 = (CFileBitStream *)&in_stack_00000014[3].error_flag;
          pSVar8 = side_info_array + 1;
          this_ptr = (CMP3Decoder *)(this_ptr->filename + 1);
          side_info_array->count_1_table_select = uVar5;
          unaff_EDI = unaff_EDI + 0xa0;
          unaff_ESI = unaff_ESI + 0xa0;
          side_info_array = pSVar8;
        } while ((int)this_ptr < (int)pCVar17);
      }
      pCVar17 = (CFileBitStream *)&pCVar18[1].error_flag;
    } while (pCVar17 != (CFileBitStream *)0x90);
  }
  return;
}
