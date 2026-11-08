// Name: FUN_004f9f50
// Address: 004f9f50
// Address Range: [[004f9f50, 004f9f9b]]
// Convention: unknown
// Signature: void FUN_004f9f50(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_004f9f50(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_0054c110(param_3);
  FUN_0054e420(param_3,0);
  iVar1 = *(int *)(param_3 + 0x2320);
  iVar2 = FUN_0054ea40(param_3);
  FUN_004f9e40(param_1,param_2,*(uint *)(param_3 + 0x2324),0,
               *(uint *)(iVar2 + 0x2c + iVar1 * 4));
  return;
}
