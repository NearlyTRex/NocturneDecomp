// Name: sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00509db0
// Address: 00509db0
// Address Range: [[00509db0, 00509f2e]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00509db0(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00509db0(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size)

{
  CFileBitStream *pCVar1;
  long lVar2;
  char *pcVar3;
  double dVar4;
  int iVar5;
  SMpegFrameHeader local_68;
  SMpegFrame local_38;
  int local_1c;
  ulong local_18;
  _FILE *local_14;
  
  sound_mp3_cpp_CMP3Decoder_free_FUN_00509f30(this_ptr);
  pCVar1 = &this_ptr->file_bitstream;
  local_18 = 0x1000;
  local_14 = file_handle;
  local_1c = file_size;
  if (pCVar1->file_handle != (_FILE *)0x0) {
    _fclose(pCVar1->file_handle);
    pCVar1->file_handle = (_FILE *)0x0;
  }
  pcVar3 = (this_ptr->file_bitstream).buffer;
  if (pcVar3 != (char *)0x0) {
    FUN_005b86a0(pcVar3);
    (this_ptr->file_bitstream).buffer = (char *)0x0;
  }
  pCVar1->file_handle = local_14;
  lVar2 = _ftell(local_14);
  (this_ptr->file_bitstream).stream_start_position = lVar2;
  (this_ptr->file_bitstream).stream_length = local_1c;
  (this_ptr->file_bitstream).buffer_size = local_18;
  pcVar3 = (char *)malloc(local_18);
  (this_ptr->file_bitstream).buffer = pcVar3;
  if (pcVar3 == (char *)0x0) {
    _DAT_01d046a0 = "..\\sound\\mp3.cpp";
    _DAT_01d046a4 = 0x23d;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Out of memory.  File: %s");
  }
  _fseek(pCVar1->file_handle,(this_ptr->file_bitstream).stream_start_position,0);
  (this_ptr->file_bitstream).current_byte_index = 0;
  (this_ptr->file_bitstream).bits_available = 0;
  (this_ptr->file_bitstream).total_bits_read = 0;
  (this_ptr->file_bitstream).end_of_stream_flag = 0;
  (this_ptr->file_bitstream).error_flag = 0;
  (this_ptr->file_bitstream).bytes_remaining = (this_ptr->file_bitstream).stream_length;
  sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_00504ca0(&this_ptr->file_bitstream,0xfff,0xc);
  local_38.header = &local_68;
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_00505170
            (&this_ptr->file_bitstream,&local_38.header);
  sound_mp3_cpp_calculateMpegFrame_FUN_00504670(&local_38);
  iVar5 = 0x509ecd;
  dVar4 = round
                    (*(double *)
                      (&DAT_00618e88 +
                      local_68.sampling_rate_index * 8 + local_68.mpeg_version * 0x20) *
                     _DAT_005e0333);
  this_ptr->sample_rate = (int)ROUND(dVar4);
  this_ptr->num_channels = local_38.table_index;
  iVar5 = sound_mp3_cpp_CMP3Decoder_seek_FUN_0050a0e0(this_ptr,iVar5);
  return iVar5;
}
