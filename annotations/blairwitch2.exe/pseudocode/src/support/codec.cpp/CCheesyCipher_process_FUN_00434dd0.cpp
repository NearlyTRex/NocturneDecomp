// Name: support_codec.cpp_CCheesyCipher_process_FUN_00434dd0
// Address: 00434dd0
// Address Range: [[00434dd0, 00434e48]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCheesyCipher_process_FUN_00434dd0(CCheesyCipher *this_ptr,void *istream,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCheesyCipher_process_FUN_00434dd0(CCheesyCipher *this_ptr,void *istream,void *ostream)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  while( true ) {
    iVar1 = (**(code **)(*(int *)istream + 4))(istream);
    if (iVar1 == -1) {
      return 1;
    }
    if (iVar1 < 0) break;
    uVar2 = support_codec_cpp_CCheesyCipher_transformByte_FUN_00434d60(this_ptr,(byte)iVar1);
    iVar1 = (**(code **)(*(int *)ostream + 4))(ostream,uVar2 & 0xff);
    if (iVar1 < 0) {
      iVar3 = (**(code **)(*(int *)istream + 8))(istream,uVar2 & 0xff);
      if ((iVar3 != 0) && (iVar1 == -1)) {
        return 2;
      }
      return 0;
    }
  }
  return 0;
}
