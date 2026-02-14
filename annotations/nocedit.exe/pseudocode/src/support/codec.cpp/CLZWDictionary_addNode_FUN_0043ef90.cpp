// Name: support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
// Address: 0043ef90
// Address Range: [[0043ef90, 0043f021]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90(CLZWDictionary *this_ptr,int code,int parent_index)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90(CLZWDictionary *this_ptr,int code,int parent_index)

{
  if (this_ptr->max_entries < this_ptr->dict_size) {
    if ((this_ptr->max_entries & this_ptr->max_entries - 1U) == 0) {
      this_ptr->current_num_bits = this_ptr->current_num_bits + 1;
    }
    this_ptr->node_table[this_ptr->max_entries].code = code;
    this_ptr->node_table[this_ptr->max_entries].prefix_code = parent_index;
    this_ptr->node_table[this_ptr->max_entries].suffix_char = -1;
    this_ptr->node_table[this_ptr->max_entries].next_link =
         this_ptr->node_table[parent_index].suffix_char;
    this_ptr->node_table[parent_index].suffix_char = this_ptr->max_entries;
    this_ptr->max_entries = this_ptr->max_entries + 1;
    return 0;
  }
  support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(this_ptr);
  return 1;
}
