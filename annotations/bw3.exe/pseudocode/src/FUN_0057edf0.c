// Name: FUN_0057edf0
// Address: 0057edf0
// Address Range: [[0057edf0, 0057ee25]]
// Convention: unknown
// Signature: void FUN_0057edf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0057edf0(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x24) == 0x13) {
    return;
  }
  FUN_00431470(param_1,param_2,param_3,param_4);
  return;
}
