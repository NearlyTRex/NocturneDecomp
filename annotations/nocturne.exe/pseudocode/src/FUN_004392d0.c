// Name: FUN_004392d0
// Address: 004392d0
// Address Range: [[004392d0, 00439347]]
// Convention: unknown
// Signature: undefined4 FUN_004392d0(int *param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

uint FUN_004392d0(int *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  byte local_8c [72];
  byte local_44 [56];
  
  FUN_00564d92(local_8c,0,param_2,*param_3,2);
  uVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_44);
  iVar2 = FUN_00564e6b(local_44);
  *param_3 = *param_3 - iVar2;
  FUN_00564e98(local_8c,0);
  return uVar1;
}
