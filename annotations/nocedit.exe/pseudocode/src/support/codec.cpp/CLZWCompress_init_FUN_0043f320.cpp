// Name: support_codec.cpp_CLZWCompress_init_FUN_0043f320
// Address: 0043f320
// Address Range: [[0043f320, 0043f358]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWCompress_init_FUN_0043f320(CLZWCompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWCompress_init_FUN_0043f320(CLZWCompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_0043ee60
            (&this_ptr->dictionary,this_ptr->buffer_size,this_ptr->num_bits);
  support_codec_cpp_resetBitBuffer_FUN_0043e510(&(this_ptr->dictionary).bit_state);
  this_ptr->current_code = -1;
  this_ptr->prev_code = -1;
  return;
}
