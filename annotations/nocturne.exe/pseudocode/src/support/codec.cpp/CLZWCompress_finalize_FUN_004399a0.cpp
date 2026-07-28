// Name: support_codec.cpp_CLZWCompress_finalize_FUN_004399a0
// Address: 004399a0
// Address Range: [[004399a0, 004399e4]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_004399a0(CLZWCompress *this_ptr,_ostream *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_004399a0(CLZWCompress *this_ptr,_ostream *ostream)

{
  if (-1 < this_ptr->current_code) {
    support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_004396d0
              (&this_ptr->dictionary,this_ptr->current_code,&(this_ptr->dictionary).bit_state,
               ostream);
    this_ptr->current_code = -1;
  }
  support_codec_cpp_flushBitBuffer_FUN_00438d60(&(this_ptr->dictionary).bit_state,ostream);
  return 1;
}
