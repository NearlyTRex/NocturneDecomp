// Name: support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0
// Address: 0043edd0
// Address Range: [[0043edd0, 0043ede7]]
// Convention: __cdecl
// Signature: CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0(CLZWDictionary * this_ptr)

#include "nocturne.h"

CLZWDictionary * __cdecl
support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0(CLZWDictionary *this_ptr)

{
  this_ptr->max_entries = 0;
  this_ptr->node_table = (CLZWDictionaryNode *)0x0;
  this_ptr->dict_size = this_ptr->max_entries;
  return this_ptr;
}
