// Name: support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
// Address: 0043f0d0
// Address Range: [[0043f0d0, 0043f16c]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0 (CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,byte *output_stream,int *bytes_remaining, int code_value)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
          (CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,byte *output_stream,int *bytes_remaining,
          int code_value)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = this_ptr->max_entries;
  uVar3 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
  if (uVar3 == 0) goto LAB_0043f119;
  do {
    if ((iVar2 - 1U & uVar3) != 0) {
      iVar1 = support_codec_cpp_extractBitsFromBuffer_FUN_0043e840
                        (bit_buffer,1,(byte **)output_stream,bytes_remaining);
      if (iVar1 < 0) {
        return -1;
      }
      if (iVar1 == 0) {
        while( true ) {
          uVar3 = (int)uVar3 >> 1;
LAB_0043f119:
          if (uVar3 == 0) break;
          while( true ) {
            iVar2 = support_codec_cpp_extractBitsFromBuffer_FUN_0043e840
                              (bit_buffer,1,(byte **)output_stream,bytes_remaining);
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
