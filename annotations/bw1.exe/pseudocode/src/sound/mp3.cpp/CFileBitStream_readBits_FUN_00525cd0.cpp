// Name: sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0
// Address: 00525cd0
// Address Range: [[00525cd0, 00525e42]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream *this_ptr,int num_bits)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_mp3_cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream *this_ptr,int num_bits)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint local_14;
  
  local_14 = 0;
  if (0x20 < num_bits) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0x2ab;
    core_main_c_FUN_005030e0("Cannot read or write more than %d bits at a time.  File: %s",0x20,&DAT_01d404c8);
  }
  this_ptr->total_bits_read = this_ptr->total_bits_read + num_bits;
  do {
    if (num_bits < 1) {
      return local_14;
    }
    if (this_ptr->bits_available == 0) {
      this_ptr->bits_available = 8;
      iVar3 = this_ptr->current_byte_index + -1;
      this_ptr->current_byte_index = iVar3;
      if ((iVar3 < 4) || (iVar3 < this_ptr->end_of_stream_flag)) {
        if (this_ptr->end_of_stream_flag == 0) {
          for (iVar3 = this_ptr->current_byte_index; -1 < iVar3; iVar3 = iVar3 + -1) {
            this_ptr->buffer[((this_ptr->buffer_size + -1) - this_ptr->current_byte_index) + iVar3]
                 = this_ptr->buffer[iVar3];
          }
          iVar3 = (this_ptr->buffer_size + -2) - this_ptr->current_byte_index;
          if (iVar3 < 0) {
LAB_00525de1:
            this_ptr->current_byte_index = this_ptr->buffer_size + -1;
          }
          else {
            do {
              while( true ) {
                if (this_ptr->end_of_stream_flag != 0) goto LAB_00525de1;
                iVar1 = 0;
                if (0 < this_ptr->bytes_remaining) {
                  pcVar2 = this_ptr->buffer + iVar3;
                  iVar3 = iVar3 + -1;
                  iVar1 = _fread(pcVar2,1,1,this_ptr->file_handle);
                }
                if (iVar1 != 1) break;
                this_ptr->bytes_remaining = this_ptr->bytes_remaining + -1;
                if (iVar3 < 0) {
                  this_ptr->current_byte_index = this_ptr->buffer_size + -1;
                  goto LAB_00525cfc;
                }
              }
              this_ptr->end_of_stream_flag = iVar3 + 1;
            } while (-1 < iVar3);
            this_ptr->current_byte_index = this_ptr->buffer_size + -1;
          }
        }
        else {
          this_ptr->error_flag = 1;
        }
      }
    }
LAB_00525cfc:
    iVar3 = this_ptr->bits_available;
    if (num_bits < iVar3) {
      iVar3 = num_bits;
    }
    num_bits = num_bits - iVar3;
    iVar3 = this_ptr->bits_available - iVar3;
    local_14 = local_14 |
               ((int)((uint)(byte)this_ptr->buffer[this_ptr->current_byte_index] &
                     *(uint *)(&DAT_006206b0 + this_ptr->bits_available * 4)) >>
               ((byte)iVar3 & 0x1f)) << ((byte)num_bits & 0x1f);
    this_ptr->bits_available = iVar3;
  } while( true );
}
