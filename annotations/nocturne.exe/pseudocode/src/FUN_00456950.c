// Name: FUN_00456950
// Address: 00456950
// Address Range: [[00456950, 0045699a]]
// Convention: unknown
// Signature: bool FUN_00456950(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_00456950(uint param_1,uint param_2)

{
  int iVar1;
  byte auStack_50 [26];
  uint uStack_36;
  uint uStack_8;
  uint uStack_4;
  
  uStack_8 = param_2;
  uStack_4 = param_2;
  iVar1 = thunk_FUN_0056c864(param_1,auStack_50);
  if (iVar1 == 0) {
    uStack_8 = uStack_36;
  }
  iVar1 = thunk_FUN_0056cb60(param_1,&uStack_8);
  return iVar1 == 0;
}
