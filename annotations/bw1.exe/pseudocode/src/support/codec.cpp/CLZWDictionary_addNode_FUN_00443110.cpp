// Name: support_codec.cpp_CLZWDictionary_addNode_FUN_00443110
// Address: 00443110
// Address Range: [[00443110, 004431a1]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_00443110(CLZWDictionary *this_ptr,int code,int parent_index)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_00443110(CLZWDictionary *this_ptr,int code,int parent_index)

{
  if (this_ptr->entry_count < this_ptr->table_capacity) {
    if ((this_ptr->entry_count & this_ptr->entry_count - 1U) == 0) {
      this_ptr->current_num_bits = this_ptr->current_num_bits + 1;
    }
    *(int *)(this_ptr->node_table + this_ptr->entry_count * 0x10) = code;
    *(int *)(this_ptr->node_table + this_ptr->entry_count * 0x10 + 4) = parent_index;
    *(uint *)(this_ptr->node_table + this_ptr->entry_count * 0x10 + 8) = 0xffffffff;
    *(uint *)(this_ptr->node_table + this_ptr->entry_count * 0x10 + 0xc) =
         *(uint *)(this_ptr->node_table + parent_index * 0x10 + 8);
    *(int *)(this_ptr->node_table + parent_index * 0x10 + 8) = this_ptr->entry_count;
    this_ptr->entry_count = this_ptr->entry_count + 1;
    return 0;
  }
  support_codec_cpp_CLZWDictionary_initTable_FUN_00443070(this_ptr);
  return 1;
}
