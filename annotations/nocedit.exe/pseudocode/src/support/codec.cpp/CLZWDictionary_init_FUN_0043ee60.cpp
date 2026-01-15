// Name: support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
// Address: 0043ee60
// Address Range: [[0043ee60, 0043eee1]]
// Convention: __cdecl
// Signature: void support_codec.cpp_CLZWDictionary_init_FUN_0043ee60(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits, int normal_code_width, int fallback_code_width)

#include "nocturne.h"

void __cdecl
support_codec_cpp_CLZWDictionary_init_FUN_0043ee60
          (CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits,int normal_code_width,
          int fallback_code_width)

{
  CLZWDictionaryNode *pCVar1;
  
  if ((new_dict_size != this_ptr->dict_size) || (this_ptr->node_table == (CLZWDictionaryNode *)0x0))
  {
    this_ptr->dict_size = new_dict_size;
    pCVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->node_table,new_dict_size << 4,"..\\support\\codec.cpp",0x2c6);
    this_ptr->node_table = pCVar1;
    if (pCVar1 == (CLZWDictionaryNode *)0x0) {
      g_CurrentFilename = "..\\support\\codec.cpp";
      g_CurrentLineNumber = 0x2c7;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CLZWDictionary::init - out of memory");
      this_ptr->num_bits = new_num_bits;
      support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(this_ptr);
      return;
    }
  }
  this_ptr->num_bits = new_num_bits;
  support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(this_ptr);
  return;
}
