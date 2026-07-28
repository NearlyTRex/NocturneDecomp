// Name: support_codec.cpp_CLZWDecompress_init_FUN_00439a30
// Address: 00439a30
// Address Range: [[00439a30, 00439a68]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_00439a30(CLZWDecompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_00439a30(CLZWDecompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_004393d0
            (&this_ptr->lzw_dict,this_ptr->buffer_size,this_ptr->num_bits);
  support_codec_cpp_resetBitBuffer_FUN_00438a90(&(this_ptr->lzw_dict).bit_state);
  this_ptr->current_code = -1;
  this_ptr->previous_code = -1;
  return;
}
