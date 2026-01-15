// Name: sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630
// Address: 00534630
// Address Range: [[00534630, 005349dd]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder * this_ptr, FILE * file_handle, int file_size)

#include "nocturne.h"

int __cdecl
sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630
          (CMP3Decoder *this_ptr,FILE *file_handle,int file_size)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int extraout_EAX;
  uint uVar5;
  int extraout_EDX;
  CMP3Decoder *this_ptr_00;
  CFileBitStream *pCVar6;
  double dVar7;
  int iVar8;
  SMpegFrameHeader *header_out;
  int local_78 [3];
  int local_6c;
  SMpegFrameHeader local_48;
  int local_18;
  
  sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(this_ptr);
  local_48.emphasis = 0x1000;
  pCVar6 = &this_ptr->file_bitstream;
  local_48.copyright = file_size;
  if (pCVar6->file_handle != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pCVar6->file_handle,"..\\sound\\mp3.cpp",0x20b);
    pCVar6->file_handle = (FILE *)0x0;
  }
  pcVar2 = (this_ptr->file_bitstream).buffer;
  if (pcVar2 != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(pcVar2,"..\\sound\\mp3.cpp",0x210);
    (this_ptr->file_bitstream).buffer = (char *)0x0;
  }
  pCVar6->file_handle = file_handle;
  lVar1 = crt_stdio_c_ftell_FUN_00601560(file_handle);
  (this_ptr->file_bitstream).stream_start_position = lVar1;
  (this_ptr->file_bitstream).stream_length = local_48.copyright;
  (this_ptr->file_bitstream).buffer_size = local_48.emphasis;
  pcVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (local_48.emphasis,"..\\sound\\mp3.cpp",0x1ff);
  (this_ptr->file_bitstream).buffer = pcVar2;
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x200;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Out of memory.  File: %s",g_CurrentMp3Filename);
  }
  crt_stdio_c_fseek_FUN_005ffacc
            (pCVar6->file_handle,(this_ptr->file_bitstream).stream_start_position,0);
  (this_ptr->file_bitstream).current_byte_index = 0;
  (this_ptr->file_bitstream).bits_available = 0;
  (this_ptr->file_bitstream).total_bits_read = 0;
  (this_ptr->file_bitstream).bytes_remaining = (this_ptr->file_bitstream).stream_length;
  (this_ptr->file_bitstream).end_of_stream_flag = 0;
  pCVar6 = &this_ptr->file_bitstream;
  (this_ptr->file_bitstream).error_flag = 0;
  uVar5 = (this_ptr->file_bitstream).total_bits_read & 7;
  if (uVar5 != 0) {
    sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar6,8 - uVar5);
  }
  uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar6,0xc);
  while (((uVar5 & 0x1fff) != 0xfff && ((this_ptr->file_bitstream).error_flag == 0))) {
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar6,8);
    uVar5 = uVar5 << 8 | uVar3;
  }
  header_out = &local_48;
  local_48.mpeg_version = (int)local_78;
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0(&this_ptr->file_bitstream,header_out);
  iVar8 = local_48.mpeg_version;
  local_48.layer = *(int *)(local_48.mpeg_version + 0x1c);
  local_48.sampling_rate_index = (local_48.layer != 3) + 1;
  if (*(int *)(local_48.mpeg_version + 4) == 2) {
    local_18 = local_48.private_bit;
    local_48.channel_mode = *(int *)(local_48.mpeg_version + 4) + -1;
    local_48.mode_extension = *(int *)(local_48.mpeg_version + 0xc);
    iVar4 = *(int *)local_48.mpeg_version;
    header_out = (SMpegFrameHeader *)0x534863;
    local_48.original = (int)&local_48;
    dVar7 = crt_math_c_round_FUN_005fe6b0
                      (g_MpegSampleRateTable[iVar4][*(int *)(local_48.mpeg_version + 0x10)]);
    local_18 = (int)ROUND(dVar7);
    if (iVar4 == 1) {
      if (((local_18 == 0x30) && (0x37 < extraout_EDX)) ||
         ((0x37 < extraout_EDX && (extraout_EDX < 0x51)))) {
        iVar4 = 0;
      }
      else if ((local_18 == 0x30) || (extraout_EDX < 0x60)) {
        if ((local_18 == 0x20) || (0x30 < extraout_EDX)) {
          iVar4 = 3;
        }
        else {
          iVar4 = 2;
        }
      }
      else {
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 4;
    }
    if (iVar4 != *(int *)(local_48.copyright + 0xc)) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1a2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("MPEG Layer 2 - pick_table - can't load tables!  File: %s",g_CurrentMp3Filename);
    }
    local_48.private_bit = local_48.emphasis;
  }
  else {
    local_48.private_bit = 0x20;
  }
  local_48.padding = local_48.private_bit;
  if (*(int *)(iVar8 + 0x1c) == 1) {
    iVar4 = *(int *)(iVar8 + 4);
    iVar8 = *(int *)(iVar8 + 0x20);
    if ((((iVar4 < 1) || (3 < iVar4)) || (iVar8 < 0)) || (3 < iVar8)) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1b2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("js_bound bad layer/modext (%d/%d)  File: %s",iVar4,iVar8,g_CurrentMp3Filename);
    }
    local_48.padding = (int)g_MpegLayer2AllocationTables[iVar4][iVar8];
  }
  iVar8 = 0x534945;
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    (g_MpegSampleRateTable[(int)header_out][local_6c] * 1000);
  *(int *)(extraout_EAX + 0x100) = (int)ROUND(dVar7);
  this_ptr_00->num_channels = local_48.protection;
  iVar8 = sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(this_ptr_00,iVar8);
  return iVar8;
}
