// Name: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
// Address: 0043f030
// Address Range: [[0043f030, 0043f0cc]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining)

{
  int iVar3;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = this_ptr->entry_count;
  uVar3 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
  if (uVar3 == 0) goto LAB_0043f079;
  do {
    if ((iVar3 - 1U & uVar3) != 0) {
      iVar1 = support_codec_cpp_readBitsFromStream_FUN_0043e530
                        (bit_buffer,1,istream,bytes_remaining);
      if (iVar1 < 0) {
        return -1;
      }
      if (iVar1 == 0) {
        while( true ) {
          uVar3 = (int)uVar3 >> 1;
LAB_0043f079:
          if (uVar3 == 0) break;
          while( true ) {
            iVar2 = support_codec_cpp_readBitsFromStream_FUN_0043e530
                              (bit_buffer,1,istream,bytes_remaining);
            if (iVar2 < 0) {
              return -1;
            }
            if (iVar2 == 0) break;
            uVar4 = uVar4 | uVar3;
            uVar3 = (int)uVar3 >> 1;
            if (uVar3 == 0) {
              return uVar4;
            }
          }
        }
        return uVar4;
      }
      uVar4 = uVar4 | uVar3;
    }
    uVar3 = (int)uVar3 >> 1;
    if (uVar3 == 0) {
      return uVar4;
    }
  } while( true );
}
