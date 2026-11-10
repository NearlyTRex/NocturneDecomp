// Name: support_codec.cpp_CLZWCompress_init_FUN_00441140
// Address: 00441140
// Address Range: [[00441140, 00441186]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWCompress_init_FUN_00441140(CLZWCompress *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWCompress_init_FUN_00441140(CLZWCompress *this_ptr)

{
  support_codec_cpp_CLZWDictionary_init_FUN_00440c50
            (&this_ptr->dictionary,this_ptr->buffer_size,this_ptr->num_bits);
  support_codec_cpp_resetBitBuffer_FUN_004400d0(&(this_ptr->dictionary).bit_state);
  *(uint *)&this_ptr->field_0x30 = 0xffffffff;
  *(uint *)&this_ptr->field_0x34 = 0xffffffff;
  *(uint *)&this_ptr->field_0x38 = 0xffffffff;
  *(uint *)&this_ptr->field_0x3c = 0xffffffff;
  return;
}
