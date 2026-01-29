// Name: sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
// Address: 0052ee50
// Address Range: [[0052ee50, 0052ef3b]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream *this_ptr)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream *this_ptr)

{
  byte bVar1;
  uint uVar2;
  SIZE_T SVar3;
  char *buffer;
  int iVar4;
  
  this_ptr->total_bits_read = this_ptr->total_bits_read + 1;
  if (this_ptr->bits_available == 0) {
    this_ptr->bits_available = 8;
    iVar4 = this_ptr->current_byte_index + -1;
    this_ptr->current_byte_index = iVar4;
    if ((iVar4 < 4) || (iVar4 < this_ptr->end_of_stream_flag)) {
      if (this_ptr->end_of_stream_flag == 0) {
        for (iVar4 = this_ptr->current_byte_index; -1 < iVar4; iVar4 = iVar4 + -1) {
          this_ptr->buffer[((this_ptr->buffer_size + -1) - this_ptr->current_byte_index) + iVar4] =
               this_ptr->buffer[iVar4];
        }
        iVar4 = (this_ptr->buffer_size + -2) - this_ptr->current_byte_index;
        while ((-1 < iVar4 && (this_ptr->end_of_stream_flag == 0))) {
          SVar3 = 0;
          if (0 < this_ptr->bytes_remaining) {
            buffer = this_ptr->buffer + iVar4;
            iVar4 = iVar4 + -1;
            SVar3 = _fread(buffer,1,1,this_ptr->file_handle);
          }
          if (SVar3 == 1) {
            this_ptr->bytes_remaining = this_ptr->bytes_remaining + -1;
          }
          else {
            this_ptr->end_of_stream_flag = iVar4 + 1;
          }
        }
        this_ptr->current_byte_index = this_ptr->buffer_size + -1;
      }
      else {
        this_ptr->error_flag = 1;
      }
    }
  }
  iVar4 = this_ptr->bits_available + -1;
  bVar1 = this_ptr->buffer[this_ptr->current_byte_index];
  uVar2 = g_MpegBitMaskTableSingleBit[iVar4];
  this_ptr->bits_available = iVar4;
  return (uVar2 & bVar1) >> ((byte)iVar4 & 0x1f);
}
