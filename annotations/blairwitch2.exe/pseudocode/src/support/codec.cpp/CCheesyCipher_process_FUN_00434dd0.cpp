// Name: support_codec.cpp_CCheesyCipher_process_FUN_00434dd0
// Address: 00434dd0
// Address Range: [[00434dd0, 00434e48]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CCheesyCipher_process_FUN_00434dd0(CCheesyCipher *this_ptr,int *param_2,int *param_3)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CCheesyCipher_process_FUN_00434dd0(CCheesyCipher *this_ptr,int *param_2,int *param_3)

{
  byte uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    uVar2 = (**(code **)(*param_2 + 4))(param_2);
    if (uVar2 == 0xffffffff) {
      return 1;
    }
    if ((int)uVar2 < 0) break;
    uVar1 = support_codec_cpp_FUN_00434d60(this_ptr,uVar2 & 0xff);
    iVar3 = (**(code **)(*param_3 + 4))(param_3,uVar1);
    if (iVar3 < 0) {
      iVar4 = (**(code **)(*param_2 + 8))(param_2,uVar1);
      if ((iVar4 != 0) && (iVar3 == -1)) {
        return 2;
      }
      return 0;
    }
  }
  return 0;
}
