// Name: support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0
// Address: 0043f4d0
// Address Range: [[0043f4d0, 0043f508]]
// Convention: __cdecl
// Signature: void support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0(CLZWDecompress * this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_0043f4d0(CLZWDecompress *this_ptr)

{
  int unaff_EBX;
  int unaff_retaddr;
  
  support_codec_cpp_CLZWDictionary_init_FUN_0043ee60
            (&this_ptr->lzw_dict,this_ptr->buffer_size,this_ptr->num_bits,unaff_EBX,unaff_retaddr);
  support_codec_cpp_resetDictionary_FUN_0043e510((CLZWDictionary *)&(this_ptr->lzw_dict).bit_state);
  this_ptr->current_code = -1;
  this_ptr->previous_code = -1;
  return;
}
