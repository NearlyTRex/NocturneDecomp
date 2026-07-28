// Name: support_codec.cpp_CLZWDictionary_findCode_FUN_004394b0
// Address: 004394b0
// Address Range: [[004394b0, 004394eb]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_findCode_FUN_004394b0(CLZWDictionary *this_ptr,int search_code,int start_index)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_findCode_FUN_004394b0(CLZWDictionary *this_ptr,int search_code,int start_index)

{
  int iVar1;
  CLZWDictionaryNode *pCVar2;
  
  if (start_index < 0) {
    return search_code;
  }
  iVar1 = this_ptr->node_table[start_index].first_child;
  while( true ) {
    if (iVar1 < 0) {
      return -1;
    }
    pCVar2 = this_ptr->node_table + iVar1;
    if (search_code == pCVar2->code) break;
    iVar1 = pCVar2->next_sibling;
  }
  return iVar1;
}
