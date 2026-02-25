// Name: support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590
// Address: 0043f590
// Address Range: [[0043f590, 0043f5c2]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_0043f590(CLZWDecompress *this_ptr,_ostream *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_0043f590(CLZWDecompress *this_ptr,_ostream *ostream)

{
  if (this_ptr->current_code < 0) {
    return 1;
  }
  support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
            (&this_ptr->lzw_dict,this_ptr->current_code,ostream);
  this_ptr->current_code = -1;
  return 1;
}
