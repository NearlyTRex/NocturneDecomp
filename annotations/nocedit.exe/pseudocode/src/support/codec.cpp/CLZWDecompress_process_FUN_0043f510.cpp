// Name: support_codec.cpp_CLZWDecompress_process_FUN_0043f510
// Address: 0043f510
// Address Range: [[0043f510, 0043f585]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDecompress_process_FUN_0043f510(CLZWDecompress * this_ptr, FILE * input_file, int byte_count, FILE * output_file)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDecompress_process_FUN_0043f510
          (CLZWDecompress *this_ptr,FILE *input_file,int byte_count,FILE *output_file)

{
  int iVar1;
  
  if (this_ptr->current_code < 0) goto LAB_0043f55c;
  do {
    iVar1 = support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
                      (&this_ptr->lzw_dict,this_ptr->current_code,output_file);
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
LAB_0043f55c:
    iVar1 = support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
                      (&this_ptr->lzw_dict,&(this_ptr->lzw_dict).bit_state,input_file,
                       (int *)byte_count);
    this_ptr->current_code = iVar1;
  } while (-1 < iVar1);
  return 1;
}
