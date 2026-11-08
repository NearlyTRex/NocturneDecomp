// Name: FUN_0048afa0
// Address: 0048afa0
// Address Range: [[0048afa0, 0048afdd]]
// Convention: unknown
// Signature: undefined4 FUN_0048afa0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0048afa0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00479180(&DAT_005db947,param_2,&DAT_005db944);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0048adc0(param_1,iVar1);
  FUN_005c0d10(iVar1);
  return 1;
}
