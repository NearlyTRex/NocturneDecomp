// Name: support_codec.cpp_CLZWCompress_finalize_FUN_0043f440
// Address: 0043f440
// Address Range: [[0043f440, 0043f484]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_0043f440(CLZWCompress *this_ptr,_FILE *output_file)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_0043f440(CLZWCompress *this_ptr,_FILE *output_file)

{
  if (-1 < this_ptr->current_code) {
    support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
              (&this_ptr->dictionary,this_ptr->current_code,&(this_ptr->dictionary).bit_state,
               output_file);
    this_ptr->current_code = -1;
  }
  support_codec_cpp_flushBitBuffer_FUN_0043e7e0(&(this_ptr->dictionary).bit_state,output_file);
  return 1;
}
