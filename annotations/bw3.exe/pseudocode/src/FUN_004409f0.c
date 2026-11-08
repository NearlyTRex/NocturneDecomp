// Name: FUN_004409f0
// Address: 004409f0
// Address Range: [[004409f0, 00440a60]]
// Convention: unknown
// Signature: undefined4 FUN_004409f0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

uint FUN_004409f0(int *param_1,uint param_2,int *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  byte local_24 [20];
  
  FUN_00574150(local_24,param_2,*param_3);
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_24,param_4,param_5,param_6);
  iVar2 = FUN_005743a0(local_24);
  *param_3 = *param_3 - iVar2;
  FUN_005741d0(local_24,0);
  return uVar1;
}
