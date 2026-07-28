// Name: support_codec.cpp_CLZWDictionary_free_FUN_00439390
// Address: 00439390
// Address Range: [[00439390, 004393c7]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_00439390(CLZWDictionary *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_00439390(CLZWDictionary *this_ptr)

{
  if (this_ptr->node_table == (CLZWDictionaryNode *)0x0) {
    this_ptr->entry_count = 0;
    this_ptr->table_capacity = this_ptr->entry_count;
    return;
  }
  FUN_005638d0(this_ptr->node_table);
  this_ptr->node_table = (CLZWDictionaryNode *)0x0;
  this_ptr->entry_count = 0;
  this_ptr->table_capacity = this_ptr->entry_count;
  return;
}
