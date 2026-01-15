// Name: support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
// Address: 0043f5d0
// Address Range: [[0043f5d0, 0043f68f]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0(CLZWDecompress * this_ptr, byte * input, int * input_length, byte * output, int * output_length, int enable_callback)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
          (CLZWDecompress *this_ptr,byte *input,int *input_length,byte *output,int *output_length,
          int enable_callback)

{
  int iVar1;
  byte *local_14;
  
  local_14 = output;
  if (this_ptr->current_code < 0) goto LAB_0043f633;
  do {
    iVar1 = support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
                      (&this_ptr->lzw_dict,this_ptr->current_code,(char **)&local_14);
    if (-1 < this_ptr->previous_code) {
      iVar1 = support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90
                        (&this_ptr->lzw_dict,iVar1,this_ptr->previous_code);
      if (iVar1 != 0) {
        this_ptr->current_code = -1;
      }
    }
    iVar1 = this_ptr->current_code;
    this_ptr->current_code = -1;
    this_ptr->previous_code = iVar1;
LAB_0043f633:
    iVar1 = support_codec_cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
                      (&this_ptr->lzw_dict,&(this_ptr->lzw_dict).bit_state,&stack0xffffffe8,
                       input_length,(int)input);
    this_ptr->current_code = iVar1;
  } while (-1 < iVar1);
  *output_length = *output_length - ((int)local_14 - (int)output);
  if (enable_callback != 0) {
    iVar1 = (*((this_ptr->base_codec).vtable)->finalizeBuffer)();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
