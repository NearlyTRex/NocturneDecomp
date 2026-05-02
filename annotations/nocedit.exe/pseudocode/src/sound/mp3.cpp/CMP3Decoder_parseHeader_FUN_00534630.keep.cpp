// Name: sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630
// Address: 00534630
// MANUAL RECONSTRUCTION
// Address Range: [[00534630, 005349dd]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size)

{
  char *ptr;
  int iVar1;
  long lVar2;
  char *pcVar3;
  CFileBitStream *bitstream;
  uint uVar2;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar3;
  uint uVar7;
  CFileBitStream *pCVar8;
  SMpegFrameHeader local_78;
  SMpegFrameHeader *local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  SMpegFrameHeader **local_20;
  int local_1c;
  int local_18;
  int local_14;
  SMpegFrameHeader *pSVar1;

  sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(this_ptr);
  local_1c = 0x1000;
  pCVar8 = &this_ptr->file_bitstream;
  local_24 = file_size;
  if (pCVar8->file_handle != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pCVar8->file_handle,"..\\sound\\mp3.cpp",0x20b);
    pCVar8->file_handle = (_FILE *)0x0;
  }
  ptr = (this_ptr->file_bitstream).buffer;
  if (ptr != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\sound\\mp3.cpp",0x210);
    (this_ptr->file_bitstream).buffer = (char *)0x0;
  }
  pCVar8->file_handle = file_handle;
  lVar2 = _ftell(file_handle);
  (this_ptr->file_bitstream).stream_start_position = lVar2;
  (this_ptr->file_bitstream).stream_length = local_24;
  (this_ptr->file_bitstream).buffer_size = local_1c;
  pcVar3 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(local_1c,"..\\sound\\mp3.cpp",0x1ff);
  (this_ptr->file_bitstream).buffer = pcVar3;
  if (pcVar3 == (char *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x200;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Out of memory.  File: %s",g_CurrentMp3Filename);
  }
  _fseek(pCVar8->file_handle,(this_ptr->file_bitstream).stream_start_position,0);
  (this_ptr->file_bitstream).current_byte_index = 0;
  (this_ptr->file_bitstream).bits_available = 0;
  (this_ptr->file_bitstream).total_bits_read = 0;
  (this_ptr->file_bitstream).bytes_remaining = (this_ptr->file_bitstream).stream_length;
  (this_ptr->file_bitstream).end_of_stream_flag = 0;
  bitstream = &this_ptr->file_bitstream;
  (this_ptr->file_bitstream).error_flag = 0;
  uVar7 = (this_ptr->file_bitstream).total_bits_read & 7;
  if (uVar7 != 0) {
    sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bitstream,8 - uVar7);
  }
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bitstream,0xc);
  while (((uVar2 & 0x1fff) != 0xfff && ((this_ptr->file_bitstream).error_flag == 0))) {
    uVar4 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bitstream,8);
    uVar2 = uVar2 << 8 | uVar4;
  }
  local_48 = &local_78;
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0(&this_ptr->file_bitstream,&local_48);
  pSVar1 = local_48;
  local_44 = local_48->channel_mode;
  local_38 = (local_44 != 3) + 1;
  if (local_48->layer == 2) {
    local_18 = local_30;
    local_2c = local_48->layer + -1;
    local_28 = local_48->bitrate_index;
    iVar3 = local_48->mpeg_version;
    iVar5 = g_MpegBitrateTable[iVar3][local_48->layer - 1][local_28] / local_38;
    local_14 = (int)ROUND(ROUND(g_MpegSampleRateTable[iVar3][local_48->sampling_rate_index]));
    if (iVar3 == 1) {
      if (((local_14 == 0x30) && (0x37 < iVar5)) || ((0x37 < iVar5 && (iVar5 < 0x51)))) {
        iVar6 = 0;
      }
      else if ((local_14 == 0x30) || (iVar5 < 0x60)) {
        if ((local_14 == 0x20) || (0x30 < iVar5)) {
          iVar6 = 3;
        }
        else {
          iVar6 = 2;
        }
      }
      else {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = 4;
    }
    local_20 = &local_48;
    if (iVar6 != local_3c) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1a2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("MPEG Layer 2 - pick_table - can't load tables!  File: %s",g_CurrentMp3Filename);
    }
    local_30 = local_18;
  }
  else {
    local_30 = 0x20;
  }
  local_34 = local_30;
  if (pSVar1->channel_mode == 1) {
    iVar3 = pSVar1->layer;
    iVar1 = pSVar1->mode_extension;
    if ((((iVar3 < 1) || (3 < iVar3)) || (iVar1 < 0)) || (3 < iVar1)) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1b2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("js_bound bad layer/modext (%d/%d)  File: %s",iVar3,iVar1,g_CurrentMp3Filename);
    }
    local_34 = g_MpegLayer2AllocationTables[iVar3][iVar1];
  }
  this_ptr->sample_rate =
       (int)ROUND(ROUND(g_MpegSampleRateTable[local_78.mpeg_version][local_78.sampling_rate_index] *
                        1000));
  this_ptr->num_channels = local_38;
  iVar3 = sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(this_ptr,0);
  return iVar3;
}
