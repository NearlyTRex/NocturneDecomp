// Name: support_codec.cpp_CLZWDecompress_isDictionaryEmpty_FUN_00439bf0
// Address: 00439bf0
// Address Range: [[00439bf0, 00439c00]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDecompress_isDictionaryEmpty_FUN_00439bf0(CLZWDecompress *this_ptr)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDecompress_isDictionaryEmpty_FUN_00439bf0(CLZWDecompress *this_ptr)

{
  return (uint)((this_ptr->lzw_dict).entry_count == 0);
}
