// Name: support_codec.cpp_CLZWDictionary_init_FUN_004342d0
// Address: 004342d0
// Address Range: [[004342d0, 00434347]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_004342d0(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_004342d0(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits)

{
  CLZWDictionaryNode *pCVar1;
  
  if ((new_dict_size != this_ptr->table_capacity) ||
     (this_ptr->node_table == (CLZWDictionaryNode *)0x0)) {
    this_ptr->table_capacity = new_dict_size;
    pCVar1 = (CLZWDictionaryNode *)realloc(this_ptr->node_table,new_dict_size << 4);
    this_ptr->node_table = pCVar1;
    if (pCVar1 == (CLZWDictionaryNode *)0x0) {
      _DAT_01d046a0 = "..\\support\\codec.cpp";
      _DAT_01d046a4 = 0x342;
      core_main_c_FUN_004e4500("CLZWDictionary::init - out of memory");
      this_ptr->num_bits = new_num_bits;
      support_codec_cpp_CLZWDictionary_initTable_FUN_00434350(this_ptr);
      return;
    }
  }
  this_ptr->num_bits = new_num_bits;
  support_codec_cpp_CLZWDictionary_initTable_FUN_00434350(this_ptr);
  return;
}
