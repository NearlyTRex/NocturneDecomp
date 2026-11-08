// Name: FUN_00442f00
// Address: 00442f00
// Address Range: [[00442f00, 00442f69]]
// Convention: unknown
// Signature: bool FUN_00442f00(int *param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

bool FUN_00442f00(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte auStack_28 [24];
  
  FUN_005a1ad0(auStack_28,param_2,*param_3);
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_28);
  iVar2 = FUN_005a1d10(auStack_28);
  *param_3 = *param_3 - iVar2;
  FUN_005a1b60(auStack_28,0);
  return iVar1 == 1;
}
