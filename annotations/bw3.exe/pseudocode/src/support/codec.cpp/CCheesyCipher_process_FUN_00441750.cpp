// Name: support_codec.cpp_CCheesyCipher_process_FUN_00441750
// Address: 00441750
// Address Range: [[00441750, 004417c8]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CCheesyCipher_process_FUN_00441750(CCheesyCipher *this_ptr,int *param_2,int *param_3)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CCheesyCipher_process_FUN_00441750(CCheesyCipher *this_ptr,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  while( true ) {
    iVar1 = (**(code **)(*param_2 + 4))(param_2);
    if (iVar1 == -1) {
      return 1;
    }
    if (iVar1 < 0) break;
    uVar2 = support_codec_cpp_CCheesyCipher_transformByte_FUN_004416e0(this_ptr,(byte)iVar1);
    iVar1 = (**(code **)(*param_3 + 4))(param_3,uVar2 & 0xff);
    if (iVar1 < 0) {
      iVar3 = (**(code **)(*param_2 + 8))(param_2,uVar2 & 0xff);
      if ((iVar3 != 0) && (iVar1 == -1)) {
        return 2;
      }
      return 0;
    }
  }
  return 0;
}
