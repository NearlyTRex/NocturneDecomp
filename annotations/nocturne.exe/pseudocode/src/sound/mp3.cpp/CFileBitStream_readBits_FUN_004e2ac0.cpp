// Name: sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
// Address: 004e2ac0
// Address Range: [[004e2ac0, 004e2c32]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream *bitstream,int num_bits)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream *bitstream,int num_bits)

{
  SIZE_T SVar1;
  char *buffer;
  int iVar2;
  uint local_14;
  
  local_14 = 0;
  if (0x20 < num_bits) {
    PTR_01cc4800 = "..\\sound\\mp3.cpp";
    INT_01cc4804 = 0x266;
    core_main_c_FUN_004c8440("Cannot read or write more than %d bits at a time.  File: %s",0x20,&DAT_01cd8b28);
  }
  bitstream->total_bits_read = bitstream->total_bits_read + num_bits;
  do {
    if (num_bits < 1) {
      return local_14;
    }
    if (bitstream->bits_available == 0) {
      bitstream->bits_available = 8;
      iVar2 = bitstream->current_byte_index + -1;
      bitstream->current_byte_index = iVar2;
      if ((iVar2 < 4) || (iVar2 < bitstream->end_of_stream_flag)) {
        if (bitstream->end_of_stream_flag == 0) {
          for (iVar2 = bitstream->current_byte_index; -1 < iVar2; iVar2 = iVar2 + -1) {
            bitstream->buffer
            [((bitstream->buffer_size + -1) - bitstream->current_byte_index) + iVar2] =
                 bitstream->buffer[iVar2];
          }
          iVar2 = (bitstream->buffer_size + -2) - bitstream->current_byte_index;
          if (iVar2 < 0) {
LAB_004e2bd1:
            bitstream->current_byte_index = bitstream->buffer_size + -1;
          }
          else {
            do {
              while( true ) {
                if (bitstream->end_of_stream_flag != 0) goto LAB_004e2bd1;
                SVar1 = 0;
                if (0 < bitstream->bytes_remaining) {
                  buffer = bitstream->buffer + iVar2;
                  iVar2 = iVar2 + -1;
                  SVar1 = _fread(buffer,1,1,bitstream->file_handle);
                }
                if (SVar1 != 1) break;
                bitstream->bytes_remaining = bitstream->bytes_remaining + -1;
                if (iVar2 < 0) {
                  bitstream->current_byte_index = bitstream->buffer_size + -1;
                  goto LAB_004e2aec;
                }
              }
              bitstream->end_of_stream_flag = iVar2 + 1;
            } while (-1 < iVar2);
            bitstream->current_byte_index = bitstream->buffer_size + -1;
          }
        }
        else {
          bitstream->error_flag = 1;
        }
      }
    }
LAB_004e2aec:
    iVar2 = bitstream->bits_available;
    if (num_bits < iVar2) {
      iVar2 = num_bits;
    }
    num_bits = num_bits - iVar2;
    iVar2 = bitstream->bits_available - iVar2;
    local_14 = local_14 |
               ((int)((uint)(byte)bitstream->buffer[bitstream->current_byte_index] &
                     *(uint *)(&DAT_005bc010 + bitstream->bits_available * 4)) >>
               ((byte)iVar2 & 0x1f)) << ((byte)num_bits & 0x1f);
    bitstream->bits_available = iVar2;
  } while( true );
}
