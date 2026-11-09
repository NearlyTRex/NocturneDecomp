// Name: support_codec.cpp_CLZWDictionary_addNode_FUN_004343f0
// Address: 004343f0
// Address Range: [[004343f0, 00434481]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_004343f0(CLZWDictionary *this_ptr,int code,int parent_index)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_004343f0(CLZWDictionary *this_ptr,int code,int parent_index)

{
  if (*(int *)(this_ptr + 0xc) < *(int *)this_ptr) {
    if ((*(uint *)(this_ptr + 0xc) & *(int *)(this_ptr + 0xc) - 1U) == 0) {
      *(int *)(this_ptr + 8) = *(int *)(this_ptr + 8) + 1;
    }
    *(int *)(*(int *)(this_ptr + 0xc) * 0x10 + *(int *)(this_ptr + 0x10)) = code;
    *(int *)(*(int *)(this_ptr + 0x10) + 4 + *(int *)(this_ptr + 0xc) * 0x10) = parent_index;
    *(uint *)(*(int *)(this_ptr + 0xc) * 0x10 + 8 + *(int *)(this_ptr + 0x10)) = 0xffffffff;
    *(uint *)(*(int *)(this_ptr + 0xc) * 0x10 + *(int *)(this_ptr + 0x10) + 0xc) =
         *(uint *)(*(int *)(this_ptr + 0x10) + parent_index * 0x10 + 8);
    *(uint *)(parent_index * 0x10 + *(int *)(this_ptr + 0x10) + 8) =
         *(uint *)(this_ptr + 0xc);
    *(int *)(this_ptr + 0xc) = *(int *)(this_ptr + 0xc) + 1;
    return 0;
  }
  support_codec_cpp_CLZWDictionary_initTable_FUN_00434350(this_ptr);
  return 1;
}
