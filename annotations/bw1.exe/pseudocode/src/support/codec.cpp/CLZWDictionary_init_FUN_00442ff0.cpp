// Name: support_codec.cpp_CLZWDictionary_init_FUN_00442ff0
// Address: 00442ff0
// Address Range: [[00442ff0, 00443067]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_00442ff0(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_00442ff0(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits)

{
  void *pvVar1;
  
  if ((new_dict_size != *(int *)this_ptr) || (*(int *)(this_ptr + 0x10) == 0)) {
    *(int *)this_ptr = new_dict_size;
    pvVar1 = realloc(*(void **)(this_ptr + 0x10),new_dict_size << 4);
    *(void **)(this_ptr + 0x10) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      _DAT_01d1d400 = "..\\support\\codec.cpp";
      _DAT_01d1d404 = 0x348;
      core_main_c_FUN_005030e0("CLZWDictionary::init - out of memory");
      *(int *)(this_ptr + 4) = new_num_bits;
      support_codec_cpp_CLZWDictionary_initTable_FUN_00443070(this_ptr);
      return;
    }
  }
  *(int *)(this_ptr + 4) = new_num_bits;
  support_codec_cpp_CLZWDictionary_initTable_FUN_00443070(this_ptr);
  return;
}
