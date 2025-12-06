// Name: support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
// Address: 0043eef0
// Address Range: [[0043eef0, 0043ef45]]
// Convention: __cdecl
// Signature: void support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary * this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1 << ((byte)this_ptr->num_bits & 0x1f);
  iVar2 = 0;
  this_ptr->max_entries = iVar1;
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      *(int *)((int)&this_ptr->node_table->code + iVar1) = iVar2;
      *(uint *)((int)&this_ptr->node_table->prefix_code + iVar1) = 0xffffffff;
      *(uint *)((int)&this_ptr->node_table->suffix_char + iVar1) = 0xffffffff;
      *(uint *)((int)&this_ptr->node_table->next_link + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < this_ptr->max_entries);
  }
  this_ptr->current_num_bits = this_ptr->num_bits;
  return;
}
