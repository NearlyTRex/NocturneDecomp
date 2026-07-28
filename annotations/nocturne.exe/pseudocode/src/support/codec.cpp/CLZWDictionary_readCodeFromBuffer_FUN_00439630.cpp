// Name: support_codec.cpp_CLZWDictionary_readCodeFromBuffer_FUN_00439630
// Address: 00439630
// Address Range: [[00439630, 004396cc]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_readCodeFromBuffer_FUN_00439630(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,char **input_buffer,int *bytes_remaining)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_readCodeFromBuffer_FUN_00439630(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,char **input_buffer,int *bytes_remaining)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = this_ptr->entry_count;
  uVar3 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
  if (uVar3 == 0) goto LAB_00439679;
  do {
    if ((iVar2 - 1U & uVar3) != 0) {
      iVar1 = support_codec_cpp_extractBitsFromBuffer_FUN_00438dc0
                        (bit_buffer,1,input_buffer,bytes_remaining);
      if (iVar1 < 0) {
        return -1;
      }
      if (iVar1 == 0) {
        while( true ) {
          uVar3 = (int)uVar3 >> 1;
LAB_00439679:
          if (uVar3 == 0) break;
          while( true ) {
            iVar2 = support_codec_cpp_extractBitsFromBuffer_FUN_00438dc0
                              (bit_buffer,1,input_buffer,bytes_remaining);
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
