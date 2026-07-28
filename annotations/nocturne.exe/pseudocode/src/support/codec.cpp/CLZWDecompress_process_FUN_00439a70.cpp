// Name: support_codec.cpp_CLZWDecompress_process_FUN_00439a70
// Address: 00439a70
// Address Range: [[00439a70, 00439ae5]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDecompress_process_FUN_00439a70(CLZWDecompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDecompress_process_FUN_00439a70(CLZWDecompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)

{
  int iVar1;
  
  if (this_ptr->current_code < 0) goto LAB_00439abc;
  do {
    iVar1 = support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00439760
                      (&this_ptr->lzw_dict,this_ptr->current_code,ostream);
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
LAB_00439abc:
    iVar1 = support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_00439590
                      (&this_ptr->lzw_dict,&(this_ptr->lzw_dict).bit_state,istream,byte_count);
    this_ptr->current_code = iVar1;
  } while (-1 < iVar1);
  return 1;
}
