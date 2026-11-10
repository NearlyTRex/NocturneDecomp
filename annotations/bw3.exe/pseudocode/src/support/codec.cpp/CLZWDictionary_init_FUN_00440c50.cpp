// Name: support_codec.cpp_CLZWDictionary_init_FUN_00440c50
// Address: 00440c50
// Address Range: [[00440c50, 00440cc7]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_00440c50(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_00440c50(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits)

{
  CLZWDictionaryNode *pCVar1;
  
  if ((new_dict_size != this_ptr->table_capacity) ||
     (this_ptr->node_table == (CLZWDictionaryNode *)0x0)) {
    this_ptr->table_capacity = new_dict_size;
    pCVar1 = (CLZWDictionaryNode *)realloc(this_ptr->node_table,new_dict_size << 4);
    this_ptr->node_table = pCVar1;
    if (pCVar1 == (CLZWDictionaryNode *)0x0) {
      _DAT_01d71de0 = "..\\support\\codec.cpp";
      _DAT_01d71de4 = 0x348;
      core_main_c_FUN_004e4330("CLZWDictionary::init - out of memory");
      this_ptr->num_bits = new_num_bits;
      support_codec_cpp_CLZWDictionary_initTable_FUN_00440cd0(this_ptr);
      return;
    }
  }
  this_ptr->num_bits = new_num_bits;
  support_codec_cpp_CLZWDictionary_initTable_FUN_00440cd0(this_ptr);
  return;
}
