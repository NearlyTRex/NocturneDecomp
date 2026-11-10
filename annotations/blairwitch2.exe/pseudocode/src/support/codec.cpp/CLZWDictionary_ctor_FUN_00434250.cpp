// Name: support_codec.cpp_CLZWDictionary_ctor_FUN_00434250
// Address: 00434250
// Address Range: [[00434250, 00434267]]
// Convention: __cdecl
// Signature: CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00434250(CLZWDictionary *this_ptr)

#include "nocturne.h"

CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00434250(CLZWDictionary *this_ptr)

{
  this_ptr->entry_count = 0;
  this_ptr->node_table = (CLZWDictionaryNode *)0x0;
  this_ptr->table_capacity = this_ptr->entry_count;
  return this_ptr;
}
