// Name: support_codec.cpp_CLZWDecompress_processBuffer_FUN_00439b30
// Address: 00439b30
// Address Range: [[00439b30, 00439bef]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDecompress_processBuffer_FUN_00439b30(CLZWDecompress *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDecompress_processBuffer_FUN_00439b30(CLZWDecompress *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

{
  int iVar1;
  char *local_18;
  char *local_14;
  
  local_14 = output;
  local_18 = input;
  if (this_ptr->current_code < 0) goto LAB_00439b93;
  do {
    iVar1 = support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0
                      (&this_ptr->lzw_dict,this_ptr->current_code,&local_14);
    if (-1 < this_ptr->previous_code) {
      iVar1 = support_codec_cpp_CLZWDictionary_addNode_FUN_004394f0
                        (&this_ptr->lzw_dict,iVar1,this_ptr->previous_code);
      if (iVar1 != 0) {
        this_ptr->current_code = -1;
      }
    }
    iVar1 = this_ptr->current_code;
    this_ptr->current_code = -1;
    this_ptr->previous_code = iVar1;
LAB_00439b93:
    iVar1 = support_codec_cpp_CLZWDictionary_readCodeFromBuffer_FUN_00439630
                      (&this_ptr->lzw_dict,&(this_ptr->lzw_dict).bit_state,&local_18,input_length);
    this_ptr->current_code = iVar1;
  } while (-1 < iVar1);
  *output_length = *output_length - ((int)local_14 - (int)output);
  if (enable_callback != 0) {
    iVar1 = (*((this_ptr->base).vtable)->finalizeBuffer)(&this_ptr->base,local_14,output_length);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
