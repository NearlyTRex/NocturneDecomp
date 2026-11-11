// Name: sound_mp3.cpp_FUN_00502890
// Address: 00502890
// Address Range: [[00502890, 00502a0e]]
// Convention: unknown
// Signature: void sound_mp3_cpp_FUN_00502890(CMP3Decoder *param_1,_FILE *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_mp3_cpp_FUN_00502890(CMP3Decoder *param_1,_FILE *param_2,int param_3)

{
  CFileBitStream *pCVar1;
  int iVar2;
  char *pcVar3;
  float10 fVar4;
  SMpegFrameHeader local_68;
  SMpegFrame local_38;
  int local_1c;
  ulong local_18;
  _FILE *local_14;
  
  sound_mp3_cpp_CMP3Decoder_free_FUN_00502a10(param_1);
  pCVar1 = &param_1->file_bitstream;
  local_18 = 0x1000;
  local_14 = param_2;
  local_1c = param_3;
  if (pCVar1->file_handle != (_FILE *)0x0) {
    _fclose(pCVar1->file_handle);
    pCVar1->file_handle = (_FILE *)0x0;
  }
  pcVar3 = (param_1->file_bitstream).buffer;
  if (pcVar3 != (char *)0x0) {
    FUN_005a3770(pcVar3);
    (param_1->file_bitstream).buffer = (char *)0x0;
  }
  pCVar1->file_handle = local_14;
  iVar2 = _ftell(local_14);
  (param_1->file_bitstream).stream_start_position = iVar2;
  (param_1->file_bitstream).stream_length = local_1c;
  (param_1->file_bitstream).buffer_size = local_18;
  pcVar3 = (char *)malloc(local_18);
  (param_1->file_bitstream).buffer = pcVar3;
  if (pcVar3 == (char *)0x0) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0x23d;
    core_main_c_FUN_004e4330("Out of memory.  File: %s",&DAT_01d94b98);
  }
  _fseek(pCVar1->file_handle,(param_1->file_bitstream).stream_start_position,0);
  (param_1->file_bitstream).current_byte_index = 0;
  (param_1->file_bitstream).bits_available = 0;
  (param_1->file_bitstream).total_bits_read = 0;
  (param_1->file_bitstream).end_of_stream_flag = 0;
  (param_1->file_bitstream).error_flag = 0;
  (param_1->file_bitstream).bytes_remaining = (param_1->file_bitstream).stream_length;
  sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_004fd780(&param_1->file_bitstream,0xfff,0xc);
  local_38.header = &local_68;
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004fdc50
            (&param_1->file_bitstream,&local_38.header);
  sound_mp3_cpp_calculateMpegFrame_FUN_004fd150(&local_38);
  fVar4 = (float10)*(double *)
                    (&DAT_006011b8 + local_68.sampling_rate_index * 8 + local_68.mpeg_version * 0x20
                    ) * (float10)_DAT_005ca39f;
  iVar2 = 0;
  round();
  param_1->sample_rate = (int)ROUND(fVar4);
  param_1->num_channels = local_38.channel_count;
  sound_mp3_cpp_CMP3Decoder_seek_FUN_00502bc0(param_1,iVar2);
  return;
}
