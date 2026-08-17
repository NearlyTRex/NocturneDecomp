// Name: sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
// Address: 004e2ac0
// Address Range: [[004e2ac0, 004e2c32]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream *this_ptr,int num_bits)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream *this_ptr,int num_bits)

{
  SIZE_T SVar1;
  char *buffer;
  int iVar2;
  uint local_14;
  
  local_14 = 0;
  if (0x20 < num_bits) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 614;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("Cannot read or write more than %d bits at a time.  File: %s",0x20,&DAT_01cd8b28);
  }
  this_ptr->total_bits_read = this_ptr->total_bits_read + num_bits;
  do {
    if (num_bits < 1) {
      return local_14;
    }
    if (this_ptr->bits_available == 0) {
      this_ptr->bits_available = 8;
      iVar2 = this_ptr->current_byte_index + -1;
      this_ptr->current_byte_index = iVar2;
      if ((iVar2 < 4) || (iVar2 < this_ptr->end_of_stream_flag)) {
        if (this_ptr->end_of_stream_flag == 0) {
          for (iVar2 = this_ptr->current_byte_index; -1 < iVar2; iVar2 = iVar2 + -1) {
            this_ptr->buffer[((this_ptr->buffer_size + -1) - this_ptr->current_byte_index) + iVar2]
                 = this_ptr->buffer[iVar2];
          }
          iVar2 = (this_ptr->buffer_size + -2) - this_ptr->current_byte_index;
          if (iVar2 < 0) {
LAB_004e2bd1:
            this_ptr->current_byte_index = this_ptr->buffer_size + -1;
          }
          else {
            do {
              while( true ) {
                if (this_ptr->end_of_stream_flag != 0) goto LAB_004e2bd1;
                SVar1 = 0;
                if (0 < this_ptr->bytes_remaining) {
                  buffer = this_ptr->buffer + iVar2;
                  iVar2 = iVar2 + -1;
                  SVar1 = _fread(buffer,1,1,this_ptr->file_handle);
                }
                if (SVar1 != 1) break;
                this_ptr->bytes_remaining = this_ptr->bytes_remaining + -1;
                if (iVar2 < 0) {
                  this_ptr->current_byte_index = this_ptr->buffer_size + -1;
                  goto LAB_004e2aec;
                }
              }
              this_ptr->end_of_stream_flag = iVar2 + 1;
            } while (-1 < iVar2);
            this_ptr->current_byte_index = this_ptr->buffer_size + -1;
          }
        }
        else {
          this_ptr->error_flag = 1;
        }
      }
    }
LAB_004e2aec:
    iVar2 = this_ptr->bits_available;
    if (num_bits < iVar2) {
      iVar2 = num_bits;
    }
    num_bits = num_bits - iVar2;
    iVar2 = this_ptr->bits_available - iVar2;
    local_14 = local_14 |
               ((int)((uint)(byte)this_ptr->buffer[this_ptr->current_byte_index] &
                     *(uint *)(&DAT_005bc010 + this_ptr->bits_available * 4)) >>
               ((byte)iVar2 & 0x1f)) << ((byte)num_bits & 0x1f);
    this_ptr->bits_available = iVar2;
  } while( true );
}
