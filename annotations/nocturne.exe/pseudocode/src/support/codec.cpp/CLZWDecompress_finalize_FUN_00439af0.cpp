// Name: support_codec.cpp_CLZWDecompress_finalize_FUN_00439af0
// Address: 00439af0
// Address Range: [[00439af0, 00439b22]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_00439af0(CLZWDecompress *this_ptr,_ostream *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_00439af0(CLZWDecompress *this_ptr,_ostream *ostream)

{
  if (this_ptr->current_code < 0) {
    return 1;
  }
  support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00439760
            (&this_ptr->lzw_dict,this_ptr->current_code,ostream);
  this_ptr->current_code = -1;
  return 1;
}
