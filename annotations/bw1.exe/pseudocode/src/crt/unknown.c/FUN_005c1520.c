// Name: crt_unknown.c_FUN_005c1520
// Address: 005c1520
// Address Range: [[005c1520, 005c1578]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c1520(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005c1520(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  iVar1 = FUN_005c12d0(param_2,&local_10);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_005c6a20(0);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_005c140c(param_1,*param_2,iVar1,local_10,param_3,iVar2);
    }
  }
  return uVar3;
}
