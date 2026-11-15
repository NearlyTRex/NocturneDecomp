// Name: support_codec.cpp_CLZWCompress_finalize_FUN_00434910
// Address: 00434910
// Address Range: [[00434910, 00434986]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_00434910(CLZWCompress *this_ptr,COutStream *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_00434910(CLZWCompress *this_ptr,COutStream *ostream)

{
  int extraout_EAX;
  int iVar1;
  
  if (-1 < this_ptr->current_code) {
    support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_00434570
              (&this_ptr->dictionary,this_ptr->current_code,&(this_ptr->dictionary).bit_state,
               ostream);
    if (extraout_EAX != 0) {
      if (extraout_EAX == -1) {
        return 2;
      }
      if (extraout_EAX == -2) {
        this_ptr->current_code = -1;
        return 2;
      }
      return 0;
    }
  }
  iVar1 = support_codec_cpp_flushBitBuffer_FUN_00433ad0(&(this_ptr->dictionary).bit_state,ostream);
  if ((iVar1 != 0) && (iVar1 == -1)) {
    return 2;
  }
  return 1;
}
