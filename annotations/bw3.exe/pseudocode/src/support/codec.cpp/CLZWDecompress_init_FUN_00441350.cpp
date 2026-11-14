// Name: support_codec.cpp_CLZWDecompress_init_FUN_00441350
// Address: 00441350
// Address Range: [[00441350, 0044138f]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_00441350(CLZWDecompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_00441350(CLZWDecompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_00440c50
            (&this_ptr->lzw_dict,this_ptr->buffer_size,this_ptr->num_bits);
  support_codec_cpp_resetBitBuffer_FUN_004400d0(&(this_ptr->lzw_dict).bit_state);
  this_ptr->current_code = -1;
  this_ptr->pending_sequence_index = -1;
  this_ptr->previous_code = -1;
  return;
}
