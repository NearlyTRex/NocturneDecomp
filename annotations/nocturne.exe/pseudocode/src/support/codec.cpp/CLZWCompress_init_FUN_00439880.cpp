// Name: support_codec.cpp_CLZWCompress_init_FUN_00439880
// Address: 00439880
// Address Range: [[00439880, 004398b8]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWCompress_init_FUN_00439880(CLZWCompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWCompress_init_FUN_00439880(CLZWCompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_004393d0
            (&this_ptr->dictionary,this_ptr->buffer_size,this_ptr->num_bits);
  support_codec_cpp_resetBitBuffer_FUN_00438a90(&(this_ptr->dictionary).bit_state);
  this_ptr->current_code = -1;
  this_ptr->prev_code = -1;
  return;
}
