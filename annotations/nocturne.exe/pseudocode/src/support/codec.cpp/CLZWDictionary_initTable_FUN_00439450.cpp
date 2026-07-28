// Name: support_codec.cpp_CLZWDictionary_initTable_FUN_00439450
// Address: 00439450
// Address Range: [[00439450, 004394a5]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_00439450(CLZWDictionary *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_00439450(CLZWDictionary *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1 << ((byte)this_ptr->num_bits & 0x1f);
  iVar2 = 0;
  this_ptr->entry_count = iVar1;
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      *(int *)((int)&this_ptr->node_table->code + iVar1) = iVar2;
      *(uint *)((int)&this_ptr->node_table->parent_index + iVar1) = 0xffffffff;
      *(uint *)((int)&this_ptr->node_table->first_child + iVar1) = 0xffffffff;
      *(uint *)((int)&this_ptr->node_table->next_sibling + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < this_ptr->entry_count);
  }
  this_ptr->current_num_bits = this_ptr->num_bits;
  return;
}
