// Name: support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0
// Address: 004397d0
// Address Range: [[004397d0, 0043982f]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0(CLZWDictionary *this_ptr,int code,char **buffer_ptr_ptr)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0(CLZWDictionary *this_ptr,int code,char **buffer_ptr_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = code;
  do {
    iVar4 = iVar4 + 1;
    iVar1 = this_ptr->node_table[iVar2].code;
    iVar2 = this_ptr->node_table[iVar2].parent_index;
    iVar3 = iVar4;
  } while (-1 < iVar2);
  do {
    (*buffer_ptr_ptr)[iVar3 + -1] = (char)this_ptr->node_table[code].code;
    code = this_ptr->node_table[code].parent_index;
    iVar3 = iVar3 + -1;
  } while (-1 < code);
  *buffer_ptr_ptr = *buffer_ptr_ptr + iVar4;
  return iVar1;
}
