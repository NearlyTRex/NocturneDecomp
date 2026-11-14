// Name: support_codec.cpp_CLZWDictionary_init_FUN_00442ff0
// Address: 00442ff0
// Address Range: [[00442ff0, 00443067]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_00442ff0(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_00442ff0(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits)

{
  CLZWDictionaryNode *pCVar1;
  
  if ((new_dict_size != this_ptr->table_capacity) ||
     (this_ptr->node_table == (CLZWDictionaryNode *)0x0)) {
    this_ptr->table_capacity = new_dict_size;
    pCVar1 = (CLZWDictionaryNode *)realloc(this_ptr->node_table,new_dict_size << 4);
    this_ptr->node_table = pCVar1;
    if (pCVar1 == (CLZWDictionaryNode *)0x0) {
      _DAT_01d1d400 = "..\\support\\codec.cpp";
      _DAT_01d1d404 = 0x348;
      core_main_c_FUN_005030e0("CLZWDictionary::init - out of memory");
      this_ptr->num_bits = new_num_bits;
      support_codec_cpp_CLZWDictionary_initTable_FUN_00443070(this_ptr);
      return;
    }
  }
  this_ptr->num_bits = new_num_bits;
  support_codec_cpp_CLZWDictionary_initTable_FUN_00443070(this_ptr);
  return;
}
