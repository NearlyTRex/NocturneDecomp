// Name: FUN_0055b220
// Address: 0055b220
// Address Range: [[0055b220, 0055b27e]]
// Convention: unknown
// Signature: void FUN_0055b220(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0055b220(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00479180(&DAT_005f1018,param_2,&DAT_005f1015);
  if (iVar1 == 0) {
    FUN_0055b330(param_1);
    FUN_0055b280(param_1,param_2);
    return;
  }
  FUN_005c0b10(&DAT_020b28f4,0x3000,*param_1,iVar1);
  FUN_005c0d10(iVar1);
  return;
}
