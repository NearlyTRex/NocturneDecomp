// Name: FUN_0056f5c0
// Address: 0056f5c0
// Address Range: [[0056f5c0, 0056f621]]
// Convention: unknown
// Signature: undefined4 FUN_0056f5c0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0056f5c0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  iVar1 = FUN_005a5b9c(param_2,"%d.%d.%d.%d",&uStack_14,&uStack_10,&uStack_c,&uStack_8);
  if (iVar1 != 4) {
    return 0;
  }
  uVar2 = FUN_0056f630(param_1,uStack_14,uStack_10,uStack_c,uStack_8);
  return uVar2;
}
