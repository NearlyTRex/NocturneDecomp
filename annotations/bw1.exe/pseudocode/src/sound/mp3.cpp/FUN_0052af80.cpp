// Name: sound_mp3.cpp_FUN_0052af80
// Address: 0052af80
// Address Range: [[0052af80, 0052b0fe]]
// Convention: unknown
// Signature: void sound_mp3_cpp_FUN_0052af80(CMP3Decoder *param_1,_FILE *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_mp3_cpp_FUN_0052af80(CMP3Decoder *param_1,_FILE *param_2,int param_3)

{
  CFileBitStream *pCVar1;
  long lVar2;
  char *pcVar3;
  float10 fVar4;
  int sample_offset;
  SMpegFrameHeader local_68;
  SMpegFrame local_38;
  int local_1c;
  ulong local_18;
  _FILE *local_14;
  
  sound_mp3_cpp_CMP3Decoder_free_FUN_0052b100(param_1);
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
    FUN_005c09f0(pcVar3);
    (param_1->file_bitstream).buffer = (char *)0x0;
  }
  pCVar1->file_handle = local_14;
  lVar2 = _ftell(local_14);
  (param_1->file_bitstream).stream_start_position = lVar2;
  (param_1->file_bitstream).stream_length = local_1c;
  (param_1->file_bitstream).buffer_size = local_18;
  pcVar3 = (char *)malloc(local_18);
  (param_1->file_bitstream).buffer = pcVar3;
  if (pcVar3 == (char *)0x0) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0x23d;
    core_main_c_FUN_005030e0("Out of memory.  File: %s",&DAT_01d404c8);
  }
  _fseek(pCVar1->file_handle,(param_1->file_bitstream).stream_start_position,0);
  (param_1->file_bitstream).current_byte_index = 0;
  (param_1->file_bitstream).bits_available = 0;
  (param_1->file_bitstream).total_bits_read = 0;
  (param_1->file_bitstream).end_of_stream_flag = 0;
  (param_1->file_bitstream).error_flag = 0;
  (param_1->file_bitstream).bytes_remaining = (param_1->file_bitstream).stream_length;
  sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_00525e70(&param_1->file_bitstream,0xfff,0xc);
  local_38.header = &local_68;
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_00526340
            (&param_1->file_bitstream,&local_38.header);
  sound_mp3_cpp_calculateMpegFrame_FUN_00525840(&local_38);
  fVar4 = (float10)*(double *)
                    (&DAT_006202e8 + local_68.sampling_rate_index * 8 + local_68.mpeg_version * 0x20
                    ) * (float10)_DAT_005eb58e;
  sample_offset = 0;
  round();
  param_1->sample_rate = (int)ROUND(fVar4);
  param_1->num_channels = local_38.channel_count;
  sound_mp3_cpp_CMP3Decoder_seek_FUN_0052b2b0(param_1,sample_offset);
  return;
}
