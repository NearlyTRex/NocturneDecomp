// Name: support_codec.cpp_CLZWDecompress_init_FUN_004349d0
// Address: 004349d0
// Address Range: [[004349d0, 00434a0f]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_004349d0(CLZWDecompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_004349d0(CLZWDecompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_004342d0
            (&this_ptr->lzw_dict,this_ptr->buffer_size,this_ptr->num_bits);
  support_codec_cpp_resetBitBuffer_FUN_00433760(&(this_ptr->lzw_dict).bit_state);
  this_ptr->current_code = -1;
  this_ptr->pending_sequence_index = -1;
  this_ptr->previous_code = -1;
  return;
}
