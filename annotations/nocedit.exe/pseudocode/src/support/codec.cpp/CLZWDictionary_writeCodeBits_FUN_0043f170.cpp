// Name: support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
// Address: 0043f170
// Address Range: [[0043f170, 0043f1f2]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_0043f170(CLZWDictionary *this_ptr,int code_value,SBitBuffer *bit_buffer,_ostream *ostream)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_0043f170(CLZWDictionary *this_ptr,int code_value,SBitBuffer *bit_buffer,_ostream *ostream)

{
  uint uVar3;
  uint uVar2;
  int iVar1;
  
  iVar1 = this_ptr->entry_count;
  uVar3 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
  if (uVar3 != 0) {
    do {
      if ((iVar1 - 1U & uVar3) != 0) {
        if ((code_value & uVar3) == 0) break;
        support_codec_cpp_writeBitsToStream_FUN_0043e6c0(bit_buffer,1,1,ostream);
      }
      uVar3 = (int)uVar3 >> 1;
      if (uVar3 == 0) {
        return;
      }
    } while( true );
  }
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 & code_value;
      uVar3 = (int)uVar3 >> 1;
      support_codec_cpp_writeBitsToStream_FUN_0043e6c0(bit_buffer,1,(uint)(uVar2 != 0),ostream);
    } while (uVar3 != 0);
    return;
  }
  return;
}
