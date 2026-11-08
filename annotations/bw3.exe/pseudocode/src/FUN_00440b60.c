// Name: FUN_00440b60
// Address: 00440b60
// Address Range: [[00440b60, 00440bc9]]
// Convention: unknown
// Signature: bool FUN_00440b60(int *param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

bool FUN_00440b60(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte auStack_28 [24];
  
  FUN_00574ac0(auStack_28,param_2,*param_3);
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_28);
  iVar2 = FUN_00574d00(auStack_28);
  *param_3 = *param_3 - iVar2;
  FUN_00574b50(auStack_28,0);
  return iVar1 == 1;
}
