// Name: FUN_00483e10
// Address: 00483e10
// Address Range: [[00483e10, 00483e94]]
// Convention: unknown
// Signature: void FUN_00483e10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00483e10(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_004814c0(param_1,param_2,param_3);
  iVar1 = FUN_00483aa0(param_1,param_2);
  iVar2 = FUN_00483aa0(param_1,param_3);
  if (iVar1 != iVar2) {
    FUN_004839d0(param_1,param_2,iVar2);
    FUN_004839d0(param_1,param_3,iVar1);
  }
  iVar1 = FUN_00483bd0(param_1,param_2);
  iVar2 = FUN_00483bd0(param_1,param_3);
  if (iVar1 == iVar2) {
    return;
  }
  FUN_00483b00(param_1,param_2,iVar2);
  FUN_00483b00(param_1,param_3,iVar1);
  return;
}
