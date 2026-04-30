// Name: support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
// Address: 0043eef0
// MANUAL RECONSTRUCTION
// Address Range: [[0043eef0, 0043ef45]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary *this_ptr)

{
  int iVar1;
  int iVar2;

  iVar1 = 1 << ((byte)this_ptr->num_bits & 0x1f);
  iVar2 = 0;
  this_ptr->entry_count = iVar1;
  if (0 < iVar1) {
    do {
      this_ptr->node_table[iVar2].code = iVar2;
      this_ptr->node_table[iVar2].parent_index = -1;
      this_ptr->node_table[iVar2].first_child = -1;
      this_ptr->node_table[iVar2].next_sibling = -1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->entry_count);
  }
  this_ptr->current_num_bits = this_ptr->num_bits;
  return;
}
