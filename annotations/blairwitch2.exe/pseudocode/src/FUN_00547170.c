// Name: FUN_00547170
// Address: 00547170
// Address Range: [[00547170, 005471eb]]
// Convention: unknown
// Signature: void FUN_00547170(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_00547170(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  if (param_2 < 0) {
    uVar1 = FUN_00547810(param_1,param_1 + 0x2238);
    param_2 = FUN_00543d00(uVar1);
  }
  FUN_00547280(param_1,param_2);
  if (param_4 == 0) {
    if (((int)param_3 < 0) || ((param_3 & 0x100) == 0)) {
      FUN_00547320(param_1,param_2);
    }
  }
  else {
    FUN_005472d0(param_1,param_2);
  }
  FUN_00547370(param_1,param_3,param_5);
  return;
}
