// Name: support_codec.cpp_CLZWDictionary_initTable_FUN_00434350
// Address: 00434350
// Address Range: [[00434350, 004343a5]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_00434350(CLZWDictionary *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_00434350(CLZWDictionary *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1 << ((byte)*(uint *)(this_ptr + 4) & 0x1f);
  iVar2 = 0;
  *(int *)(this_ptr + 0xc) = iVar1;
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      *(int *)(*(int *)(this_ptr + 0x10) + iVar1) = iVar2;
      *(uint *)(*(int *)(this_ptr + 0x10) + 4 + iVar1) = 0xffffffff;
      *(uint *)(*(int *)(this_ptr + 0x10) + 8 + iVar1) = 0xffffffff;
      *(uint *)(*(int *)(this_ptr + 0x10) + 0xc + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < *(int *)(this_ptr + 0xc));
  }
  *(uint *)(this_ptr + 8) = *(uint *)(this_ptr + 4);
  return;
}
