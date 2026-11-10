// Name: support_codec.cpp_FUN_004346d0
// Address: 004346d0
// Address Range: [[004346d0, 00434767]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_FUN_004346d0(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining)

#include "nocturne.h"

int __cdecl support_codec_cpp_FUN_004346d0(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining)

{
  CLZWDictionaryNode *pCVar1;
  int iVar2;
  int iVar3;
  
  pCVar1 = this_ptr->node_table + (int)bit_buffer * 0x10;
  if (-1 < (int)*(SBitBuffer **)(pCVar1 + 4)) {
    if (bit_buffer != (SBitBuffer *)istream) {
      iVar3 = support_codec_cpp_FUN_004346d0
                        (this_ptr,*(SBitBuffer **)(pCVar1 + 4),istream,bytes_remaining);
      if (iVar3 < 0) {
        return iVar3;
      }
      goto LAB_00434710;
    }
    do {
      pCVar1 = this_ptr->node_table + (int)istream * 0x10;
      istream = *(_istream **)(pCVar1 + 4);
    } while (-1 < (int)istream);
  }
  iVar3 = *(int *)pCVar1;
LAB_00434710:
  iVar2 = (**(code **)(*bytes_remaining + 4))
                    (bytes_remaining,this_ptr->node_table[(int)bit_buffer * 0x10]);
  if (-1 < iVar2) {
    return iVar3;
  }
  if (iVar2 != -1) {
    return -1;
  }
  return -2 - (int)bit_buffer;
}
