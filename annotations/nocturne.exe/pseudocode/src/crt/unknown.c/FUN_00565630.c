// Name: crt_unknown.c_FUN_00565630
// Address: 00565630
// Address Range: [[00565630, 00565688]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_00565630(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_00565630(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  iVar1 = FUN_005653e0(param_2,&local_10);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_00568560(0);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_0056551c(param_1,*param_2,iVar1,local_10,param_3,iVar2);
    }
  }
  return uVar3;
}
