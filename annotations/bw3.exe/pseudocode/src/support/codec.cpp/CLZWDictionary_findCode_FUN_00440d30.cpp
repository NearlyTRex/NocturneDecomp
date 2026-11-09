// Name: support_codec.cpp_CLZWDictionary_findCode_FUN_00440d30
// Address: 00440d30
// Address Range: [[00440d30, 00440d6b]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_findCode_FUN_00440d30(CLZWDictionary *this_ptr,int search_code,int start_index)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_findCode_FUN_00440d30(CLZWDictionary *this_ptr,int search_code,int start_index)

{
  int iVar1;
  int *piVar2;
  
  if (start_index < 0) {
    return search_code;
  }
  iVar1 = *(int *)(*(int *)(this_ptr + 0x10) + 8 + start_index * 0x10);
  while( true ) {
    if (iVar1 < 0) {
      return -1;
    }
    piVar2 = (int *)(iVar1 * 0x10 + *(int *)(this_ptr + 0x10));
    if (search_code == *piVar2) break;
    iVar1 = piVar2[3];
  }
  return iVar1;
}
