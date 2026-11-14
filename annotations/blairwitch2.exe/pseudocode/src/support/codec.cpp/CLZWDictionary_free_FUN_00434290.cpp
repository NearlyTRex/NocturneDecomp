// Name: support_codec.cpp_CLZWDictionary_free_FUN_00434290
// Address: 00434290
// Address Range: [[00434290, 004342c7]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_00434290(CLZWDictionary *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_00434290(CLZWDictionary *this_ptr)

{
  if (this_ptr->node_table == (CLZWDictionaryNode *)0x0) {
    this_ptr->entry_count = 0;
    this_ptr->table_capacity = this_ptr->entry_count;
    return;
  }
  FUN_005b86a0(this_ptr->node_table);
  this_ptr->node_table = (CLZWDictionaryNode *)0x0;
  this_ptr->entry_count = 0;
  this_ptr->table_capacity = this_ptr->entry_count;
  return;
}
