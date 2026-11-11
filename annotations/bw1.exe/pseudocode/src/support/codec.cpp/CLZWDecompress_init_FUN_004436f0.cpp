// Name: support_codec.cpp_CLZWDecompress_init_FUN_004436f0
// Address: 004436f0
// Address Range: [[004436f0, 0044372f]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_004436f0(CLZWDecompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_004436f0(CLZWDecompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_00442ff0
            (&this_ptr->lzw_dict,this_ptr->buffer_size,this_ptr->num_bits);
  support_codec_cpp_resetBitBuffer_FUN_00442470(&(this_ptr->lzw_dict).bit_state);
  this_ptr->current_code = -1;
  this_ptr->pending_sequence_index = -1;
  this_ptr->previous_code = -1;
  return;
}
