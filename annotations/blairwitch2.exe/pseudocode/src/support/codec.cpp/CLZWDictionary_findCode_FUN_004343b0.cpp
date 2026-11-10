// Name: support_codec.cpp_CLZWDictionary_findCode_FUN_004343b0
// Address: 004343b0
// Address Range: [[004343b0, 004343eb]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_findCode_FUN_004343b0(CLZWDictionary *this_ptr,int search_code,int start_index)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_findCode_FUN_004343b0(CLZWDictionary *this_ptr,int search_code,int start_index)

{
  int iVar1;
  CLZWDictionaryNode *pCVar2;
  
  if (start_index < 0) {
    return search_code;
  }
  iVar1 = *(int *)(this_ptr->node_table + start_index * 0x10 + 8);
  while( true ) {
    if (iVar1 < 0) {
      return -1;
    }
    pCVar2 = this_ptr->node_table + iVar1 * 0x10;
    if (search_code == *(int *)pCVar2) break;
    iVar1 = *(int *)(pCVar2 + 0xc);
  }
  return iVar1;
}
