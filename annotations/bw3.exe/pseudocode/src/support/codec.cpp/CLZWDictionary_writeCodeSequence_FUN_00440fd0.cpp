// Name: support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_00440fd0
// Address: 00440fd0
// Address Range: [[00440fd0, 00441049]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00440fd0(CLZWDictionary *this_ptr,int code,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00440fd0(CLZWDictionary *this_ptr,int code,void *ostream)

{
  int iVar1;
  int iVar2;
  
  iVar2 = this_ptr->node_table[code].parent_index;
  if (iVar2 < 0) {
    iVar2 = this_ptr->node_table[code].code;
  }
  else {
    iVar2 = support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00440fd0(this_ptr,iVar2,ostream);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  iVar1 = (**(code **)(*(int *)ostream + 4))(ostream,(char)this_ptr->node_table[code].code);
  if (-1 < iVar1) {
    return iVar2;
  }
  if (iVar1 == -1) {
    return -2 - code;
  }
  return -1;
}
