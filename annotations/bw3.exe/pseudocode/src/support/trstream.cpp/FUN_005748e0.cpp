// Name: support_trstream.cpp_FUN_005748e0
// Address: 005748e0
// Address Range: [[005748e0, 00574920]]
// Convention: unknown
// Signature: int support_trstream_cpp_FUN_005748e0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

int support_trstream_cpp_FUN_005748e0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = _fwrite(param_2,1,param_3,*(int *)(param_1 + 4));
    if ((iVar1 == param_3) || ((*(byte *)(*(int *)(param_1 + 4) + 0xc) & 0x20) == 0)) {
      return iVar1;
    }
  }
  return -2;
}
