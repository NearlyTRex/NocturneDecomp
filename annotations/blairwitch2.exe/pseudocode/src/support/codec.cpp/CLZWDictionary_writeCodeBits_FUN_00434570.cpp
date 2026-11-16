// Name: support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_00434570
// Address: 00434570
// Address Range: [[00434570, 00434641]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_00434570(CLZWDictionary *this_ptr,int code_value,SBitBuffer *bit_buffer,void *ostream)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_00434570(CLZWDictionary *this_ptr,int code_value,SBitBuffer *bit_buffer,void *ostream)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = support_codec_cpp_writeWholeBytesToStream_FUN_00433a90(bit_buffer,ostream);
  if (-1 < iVar1) {
    iVar1 = this_ptr->entry_count;
    uVar3 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
    if (uVar3 != 0) {
      do {
        if ((iVar1 - 1U & uVar3) != 0) {
          if ((code_value & uVar3) == 0) break;
          iVar2 = support_codec_cpp_writeBitsToStream_FUN_004338f0(bit_buffer,1,1,ostream);
          if ((iVar2 < 0) && (iVar2 != -2)) {
            return;
          }
        }
        uVar3 = (int)uVar3 >> 1;
        if (uVar3 == 0) {
          return;
        }
      } while( true );
    }
    if (uVar3 != 0) {
      while( true ) {
        while( true ) {
          iVar1 = support_codec_cpp_writeBitsToStream_FUN_004338f0
                            (bit_buffer,1,(uint)((uVar3 & code_value) != 0),ostream);
          uVar3 = (int)uVar3 >> 1;
          if (iVar1 < 0) break;
          if (uVar3 == 0) {
            return;
          }
        }
        if (iVar1 != -2) break;
        if (uVar3 == 0) {
          return;
        }
      }
    }
  }
  return;
}
