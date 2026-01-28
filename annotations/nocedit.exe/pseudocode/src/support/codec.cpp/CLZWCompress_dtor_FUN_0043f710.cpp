// Name: support_codec.cpp_CLZWCompress_dtor_FUN_0043f710
// Address: 0043f710
// Address Range: [[0043f710, 0043f76e]]
// Convention: __cdecl
// Signature: CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_0043f710 (CLZWCompress *this_ptr,uint d1,uint d2,uint d3,uint d4)

#include "nocturne.h"

CLZWCompress * __cdecl
support_codec_cpp_CLZWCompress_dtor_FUN_0043f710
          (CLZWCompress *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  CLZWDictionary *pCVar1;
  CLZWCompress *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLZWCompressTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&this_ptr->dictionary);
  ptr = (CLZWCompress *)
        support_codec_cpp_CCodec_dtor_FUN_0043e9b0
                  ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
