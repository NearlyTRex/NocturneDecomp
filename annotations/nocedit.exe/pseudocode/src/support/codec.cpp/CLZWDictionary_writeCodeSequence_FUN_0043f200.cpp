// Name: support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
// Address: 0043f200
// Address Range: [[0043f200, 0043f260]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200 (CLZWDictionary *this_ptr,int code,_FILE *output_file)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
          (CLZWDictionary *this_ptr,int code,_FILE *output_file)

{
  int iVar1;
  
  iVar1 = this_ptr->node_table[code].prefix_code;
  if (-1 < iVar1) {
    iVar1 = support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
                      (this_ptr,iVar1,output_file);
    _fputc(output_file,(uint)(byte)this_ptr->node_table[code].code);
    return iVar1;
  }
  _fputc(output_file,(uint)(byte)this_ptr->node_table[code].code);
  return this_ptr->node_table[code].code;
}
