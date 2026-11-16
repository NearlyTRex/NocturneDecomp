// Name: support_codec.cpp_CLZWDecompress_process_FUN_00434a10
// Address: 00434a10
// Address Range: [[00434a10, 00434a69]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDecompress_process_FUN_00434a10(CLZWDecompress *this_ptr,void *istream,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDecompress_process_FUN_00434a10(CLZWDecompress *this_ptr,void *istream,void *ostream)

{
  int iVar1;
  uint uVar2;
  
  do {
    if (this_ptr->current_code < 0) {
      uVar2 = support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_00434490
                        (&this_ptr->lzw_dict,&(this_ptr->lzw_dict).bit_state,istream);
      if ((int)uVar2 < 0) {
        if (uVar2 == 0xffffffff) {
          return 1;
        }
        return 0;
      }
      this_ptr->current_code = uVar2;
    }
    iVar1 = (**(code **)((int)(this_ptr->base).vtable + 0xc))(this_ptr,ostream);
  } while (iVar1 == 1);
  return iVar1;
}
