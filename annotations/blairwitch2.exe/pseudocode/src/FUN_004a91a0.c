// Name: FUN_004a91a0
// Address: 004a91a0
// Address Range: [[004a91a0, 004a91d9]]
// Convention: unknown
// Signature: void FUN_004a91a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_004a91a0(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_004aaf00(param_1,param_6,param_3,param_4,param_5,param_6);
  FUN_004a90b0(param_1,(param_2 - iVar1) + 1);
  return;
}
