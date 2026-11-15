// Name: support_codec.cpp_CLZWDecompress_finalize_FUN_00443790
// Address: 00443790
// Address Range: [[00443790, 00443822]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_00443790(CLZWDecompress *this_ptr,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_00443790(CLZWDecompress *this_ptr,void *ostream)

{
  SBitBuffer *bit_buffer;
  int iVar1;
  
  bit_buffer = (SBitBuffer *)this_ptr->current_code;
  if (-1 < (int)bit_buffer) {
    if (this_ptr->pending_sequence_index < 0) {
      iVar1 = support_codec_cpp_FUN_00443370(&this_ptr->lzw_dict,bit_buffer,ostream);
    }
    else {
      iVar1 = support_codec_cpp_FUN_004433f0
                        (&this_ptr->lzw_dict,bit_buffer,(_istream *)this_ptr->pending_sequence_index
                         ,ostream);
    }
    if (iVar1 == -1) {
      this_ptr->pending_sequence_index = -1;
      return 0;
    }
    if (iVar1 < 0) {
      this_ptr->pending_sequence_index = -2 - iVar1;
      return 2;
    }
    this_ptr->pending_sequence_index = -1;
    if (-1 < this_ptr->previous_code) {
      iVar1 = support_codec_cpp_CLZWDictionary_addNode_FUN_00443110
                        (&this_ptr->lzw_dict,iVar1,this_ptr->previous_code);
      if (iVar1 != 0) {
        this_ptr->current_code = -1;
      }
    }
    iVar1 = this_ptr->current_code;
    this_ptr->current_code = -1;
    this_ptr->previous_code = iVar1;
  }
  return 1;
}
