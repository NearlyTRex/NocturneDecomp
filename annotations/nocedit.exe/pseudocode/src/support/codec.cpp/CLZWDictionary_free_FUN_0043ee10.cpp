// Name: support_codec.cpp_CLZWDictionary_free_FUN_0043ee10
// Address: 0043ee10
// Address Range: [[0043ee10, 0043ee51]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_0043ee10(CLZWDictionary *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_0043ee10(CLZWDictionary *this_ptr)

{
  if (this_ptr->node_table == (CLZWDictionaryNode *)0x0) {
    this_ptr->max_entries = 0;
    this_ptr->dict_size = this_ptr->max_entries;
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->node_table,"..\\support\\codec.cpp",0x2b5);
  this_ptr->node_table = (CLZWDictionaryNode *)0x0;
  this_ptr->max_entries = 0;
  this_ptr->dict_size = this_ptr->max_entries;
  return;
}
