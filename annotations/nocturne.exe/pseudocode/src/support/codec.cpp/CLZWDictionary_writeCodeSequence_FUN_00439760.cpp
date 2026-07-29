// Name: support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_00439760
// Address: 00439760
// Address Range: [[00439760, 004397c0]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00439760(CLZWDictionary *this_ptr,int code,_ostream *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00439760(CLZWDictionary *this_ptr,int code,_ostream *ostream)

{
  int iVar1;
  
  iVar1 = this_ptr->node_table[code].parent_index;
  if (-1 < iVar1) {
    iVar1 = support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00439760(this_ptr,iVar1,ostream);
    crt_iostream_cpp_ostream_put_FUN_00564ce5(ostream,(uint)(byte)this_ptr->node_table[code].code);
    return iVar1;
  }
  crt_iostream_cpp_ostream_put_FUN_00564ce5(ostream,(uint)(byte)this_ptr->node_table[code].code);
  return this_ptr->node_table[code].code;
}
