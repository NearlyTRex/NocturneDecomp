// Name: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_00439590
// Address: 00439590
// Address Range: [[00439590, 0043962c]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_00439590(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_00439590(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = this_ptr->entry_count;
  uVar3 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
  if (uVar3 == 0) goto LAB_004395d9;
  do {
    if ((iVar2 - 1U & uVar3) != 0) {
      iVar1 = support_codec_cpp_readBitsFromStream_FUN_00438ab0
                        (bit_buffer,1,istream,bytes_remaining);
      if (iVar1 < 0) {
        return -1;
      }
      if (iVar1 == 0) {
        while( true ) {
          uVar3 = (int)uVar3 >> 1;
LAB_004395d9:
          if (uVar3 == 0) break;
          while( true ) {
            iVar2 = support_codec_cpp_readBitsFromStream_FUN_00438ab0
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
