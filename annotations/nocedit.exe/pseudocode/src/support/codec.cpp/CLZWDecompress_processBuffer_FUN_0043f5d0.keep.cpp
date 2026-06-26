// Name: support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
// Address: 0043f5d0
// MANUAL RECONSTRUCTION
// Address Range: [[0043f5d0, 0043f68f]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDecompress_processBuffer_FUN_0043f5d0(CLZWDecompress *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDecompress_processBuffer_FUN_0043f5d0(CLZWDecompress *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)

{
  int iVar1;
  int iVar2;
  char *local_18;
  char *local_14;
  
  local_14 = output;
  local_18 = input;
  if (this_ptr->current_code < 0) goto LAB_0043f633;
  do {
    iVar1 = support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
                      (&this_ptr->lzw_dict,this_ptr->current_code,&local_14);
    if (-1 < this_ptr->previous_code) {
      iVar2 = support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90
                        (&this_ptr->lzw_dict,iVar1,this_ptr->previous_code);
      if (iVar2 != 0) {
        this_ptr->current_code = -1;
      }
    }
    iVar2 = this_ptr->current_code;
    this_ptr->current_code = -1;
    this_ptr->previous_code = iVar2;
LAB_0043f633:
    iVar2 = support_codec_cpp_CLZWDictionary_readCodeFromBuffer_FUN_0043f0d0
                      (&this_ptr->lzw_dict,&(this_ptr->lzw_dict).bit_state,&local_18,input_length);
    this_ptr->current_code = iVar2;
  } while (-1 < iVar2);
  *output_length = *output_length - ((intptr_t)local_14 - (intptr_t)output);
  if (enable_callback != 0) {
    iVar2 = (*((this_ptr->base).vtable)->finalizeBuffer)(&this_ptr->base,local_14,output_length);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}
