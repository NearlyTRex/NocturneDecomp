// Name: support_codec.cpp_CLZWDecompress_process_FUN_00443730
// Address: 00443730
// Address Range: [[00443730, 00443789]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDecompress_process_FUN_00443730(CLZWDecompress *this_ptr,void *istream,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDecompress_process_FUN_00443730(CLZWDecompress *this_ptr,void *istream,void *ostream)

{
  int iVar1;
  
  do {
    if (this_ptr->current_code < 0) {
      iVar1 = support_codec_cpp_FUN_004431b0
                        (&this_ptr->lzw_dict,&(this_ptr->lzw_dict).bit_state,istream);
      if (iVar1 < 0) {
        if (iVar1 == -1) {
          return 1;
        }
        return 0;
      }
      this_ptr->current_code = iVar1;
    }
    iVar1 = (**(code **)((int)(this_ptr->base).vtable + 0xc))(this_ptr,ostream);
  } while (iVar1 == 1);
  return iVar1;
}
