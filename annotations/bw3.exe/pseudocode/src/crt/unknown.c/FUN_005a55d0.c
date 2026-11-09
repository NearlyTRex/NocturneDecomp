// Name: crt_unknown.c_FUN_005a55d0
// Address: 005a55d0
// Address Range: [[005a55d0, 005a5625]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a55d0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005a55d0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_005ac558();
  uVar1 = *param_1;
  FUN_005ac290(0x63df,uVar1,DAT_00607d3c,param_2);
  iVar2 = FUN_005abf84(param_2);
  if (iVar2 != 0) {
    FUN_005ac290(0x63df,uVar1,DAT_00607d3c - DAT_00607d44,param_2);
  }
  return param_2;
}
