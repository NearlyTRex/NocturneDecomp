// Name: support_codec.cpp_FUN_004433f0
// Address: 004433f0
// Address Range: [[004433f0, 00443487]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_FUN_004433f0(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining)

#include "nocturne.h"

int __cdecl support_codec_cpp_FUN_004433f0(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)((int)bit_buffer * 0x10 + *(int *)(this_ptr + 0x10));
  if (-1 < piVar1[1]) {
    if (bit_buffer != (SBitBuffer *)istream) {
      iVar3 = support_codec_cpp_FUN_004433f0
                        (this_ptr,(SBitBuffer *)piVar1[1],istream,bytes_remaining);
      if (iVar3 < 0) {
        return iVar3;
      }
      goto LAB_00443430;
    }
    do {
      piVar1 = (int *)((int)istream * 0x10 + *(int *)(this_ptr + 0x10));
      istream = (_istream *)piVar1[1];
    } while (-1 < (int)istream);
  }
  iVar3 = *piVar1;
LAB_00443430:
  iVar2 = (**(code **)(*bytes_remaining + 4))
                    (bytes_remaining,
                     *(byte *)((int)bit_buffer * 0x10 + *(int *)(this_ptr + 0x10)));
  if (-1 < iVar2) {
    return iVar3;
  }
  if (iVar2 != -1) {
    return -1;
  }
  return -2 - (int)bit_buffer;
}
