// Name: support_codec.cpp_CLZWCompress_init_FUN_004347c0
// Address: 004347c0
// Address Range: [[004347c0, 00434806]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWCompress_init_FUN_004347c0(CLZWCompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWCompress_init_FUN_004347c0(CLZWCompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_004342d0
            (&this_ptr->dictionary,this_ptr->buffer_size,this_ptr->num_bits);
  support_codec_cpp_resetBitBuffer_FUN_00433760(&(this_ptr->dictionary).bit_state);
  this_ptr->current_code = -1;
  this_ptr->pending_code = -1;
  this_ptr->prev_code = -1;
  this_ptr->pending_char_code = -1;
  return;
}
