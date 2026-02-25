// Name: support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
// Address: 0043ef90
// Address Range: [[0043ef90, 0043f021]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90(CLZWDictionary *this_ptr,int code,int parent_index)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90(CLZWDictionary *this_ptr,int code,int parent_index)

{
  if (this_ptr->entry_count < this_ptr->table_capacity) {
    if ((this_ptr->entry_count & this_ptr->entry_count - 1U) == 0) {
      this_ptr->current_num_bits = this_ptr->current_num_bits + 1;
    }
    this_ptr->node_table[this_ptr->entry_count].code = code;
    this_ptr->node_table[this_ptr->entry_count].parent_index = parent_index;
    this_ptr->node_table[this_ptr->entry_count].first_child = -1;
    this_ptr->node_table[this_ptr->entry_count].next_sibling =
         this_ptr->node_table[parent_index].first_child;
    this_ptr->node_table[parent_index].first_child = this_ptr->entry_count;
    this_ptr->entry_count = this_ptr->entry_count + 1;
    return 0;
  }
  support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(this_ptr);
  return 1;
}
