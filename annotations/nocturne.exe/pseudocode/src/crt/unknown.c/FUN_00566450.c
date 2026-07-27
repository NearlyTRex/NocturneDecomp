// Name: crt_unknown.c_FUN_00566450
// Address: 00566450
// Address Range: [[00566450, 00566497]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00566450(int param_1,undefined4 param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_00566450(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_4 < param_3) {
      param_3 = param_4;
    }
    uVar1 = FUN_0056db40(param_2,param_3);
    FUN_0056db80(param_1,param_2,uVar1);
    iVar2 = FUN_0056dbb0(param_1,uVar1);
    *(byte *)(param_1 + iVar2) = 0;
  }
  return;
}
