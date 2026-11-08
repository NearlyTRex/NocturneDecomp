// Name: FUN_005b90b0
// Address: 005b90b0
// Address Range: [[005b90b0, 005b9108]]
// Convention: unknown
// Signature: undefined4 FUN_005b90b0(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005b90b0(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  iVar1 = FUN_005b8e60(param_2,&local_10);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_005be750(0);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_005b8f9c(param_1,*param_2,iVar1,local_10,param_3,iVar2);
    }
  }
  return uVar3;
}
