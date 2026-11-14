// Name: support_codec.cpp_CLZWCompress_finalize_FUN_00443630
// Address: 00443630
// Address Range: [[00443630, 004436a6]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_00443630(CLZWCompress *this_ptr,COutStream *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_00443630(CLZWCompress *this_ptr,COutStream *ostream)

{
  int iVar1;
  
  if (-1 < this_ptr->current_code) {
    iVar1 = support_codec_cpp_FUN_00443290
                      (&this_ptr->dictionary,this_ptr->current_code,
                       &(this_ptr->dictionary).bit_state,ostream);
    if (iVar1 != 0) {
      if (iVar1 == -1) {
        return 2;
      }
      if (iVar1 == -2) {
        this_ptr->current_code = -1;
        return 2;
      }
      return 0;
    }
  }
  iVar1 = support_codec_cpp_FUN_004427e0(&(this_ptr->dictionary).bit_state,ostream);
  if ((iVar1 != 0) && (iVar1 == -1)) {
    return 2;
  }
  return 1;
}
