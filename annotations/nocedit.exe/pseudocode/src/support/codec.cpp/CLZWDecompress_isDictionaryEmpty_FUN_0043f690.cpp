// Name: support_codec.cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690
// Address: 0043f690
// Address Range: [[0043f690, 0043f6a0]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690(CLZWDecompress *this_ptr)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690(CLZWDecompress *this_ptr)

{
  return (uint)((this_ptr->lzw_dict).max_entries == 0);
}
