// Name: crt_unknown.c_FUN_005a4390
// Address: 005a4390
// Address Range: [[005a4390, 005a43e8]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a4390(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005a4390(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  iVar1 = FUN_005a4140(param_2,&local_10);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_005a9890(0);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_005a427c(param_1,*param_2,iVar1,local_10,param_3,iVar2);
    }
  }
  return uVar3;
}
