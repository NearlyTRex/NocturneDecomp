// Name: FUN_00433ff0
// Address: 00433ff0
// Address Range: [[00433ff0, 00434060]]
// Convention: unknown
// Signature: bool FUN_00433ff0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

#include "nocturne.h"

bool FUN_00433ff0(int *param_1,uint param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte local_24 [20];
  
  FUN_0057d520(local_24,param_2,*param_3);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,local_24,param_4);
  iVar2 = FUN_0057d760(local_24);
  *param_3 = *param_3 - iVar2;
  FUN_0057d5a0(local_24,0);
  return iVar1 == 1;
}
