// Name: FUN_00558060
// Address: 00558060
// Address Range: [[00558060, 005580a8]]
// Convention: unknown
// Signature: undefined4 FUN_00558060(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 ,undefined4 param_6)

#include "nocturne.h"

uint FUN_00558060(int param_1,uint param_2,uint param_3,uint param_4,uint param_5 ,uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_005584d0(param_1,0xffffffff,0xffffffff);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005580b0(param_1,*(uint *)(param_1 + 4),param_2,param_3,param_4,param_5,param_6);
  return 0;
}
