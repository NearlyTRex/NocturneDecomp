// Name: sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0
// Address: 00525be0
// Address Range: [[00525be0, 00525ccb]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream *this_ptr)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream *this_ptr)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  this_ptr->total_bits_read = this_ptr->total_bits_read + 1;
  if (this_ptr->bits_available == 0) {
    this_ptr->bits_available = 8;
    iVar5 = this_ptr->current_byte_index + -1;
    this_ptr->current_byte_index = iVar5;
    if ((iVar5 < 4) || (iVar5 < this_ptr->end_of_stream_flag)) {
      if (this_ptr->end_of_stream_flag == 0) {
        for (iVar5 = this_ptr->current_byte_index; -1 < iVar5; iVar5 = iVar5 + -1) {
          this_ptr->buffer[((this_ptr->buffer_size + -1) - this_ptr->current_byte_index) + iVar5] =
               this_ptr->buffer[iVar5];
        }
        iVar5 = (this_ptr->buffer_size + -2) - this_ptr->current_byte_index;
        while ((-1 < iVar5 && (this_ptr->end_of_stream_flag == 0))) {
          iVar3 = 0;
          if (0 < this_ptr->bytes_remaining) {
            pcVar4 = this_ptr->buffer + iVar5;
            iVar5 = iVar5 + -1;
            iVar3 = _fread(pcVar4,1,1,this_ptr->file_handle);
          }
          if (iVar3 == 1) {
            this_ptr->bytes_remaining = this_ptr->bytes_remaining + -1;
          }
          else {
            this_ptr->end_of_stream_flag = iVar5 + 1;
          }
        }
        this_ptr->current_byte_index = this_ptr->buffer_size + -1;
      }
      else {
        this_ptr->error_flag = 1;
      }
    }
  }
  iVar5 = this_ptr->bits_available + -1;
  bVar1 = this_ptr->buffer[this_ptr->current_byte_index];
  uVar2 = *(uint *)(&DAT_00620690 + iVar5 * 4);
  this_ptr->bits_available = iVar5;
  return (uVar2 & bVar1) >> ((byte)iVar5 & 0x1f);
}
