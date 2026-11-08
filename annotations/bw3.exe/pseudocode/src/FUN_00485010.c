// Name: FUN_00485010
// Address: 00485010
// Address Range: [[00485010, 00485094]]
// Convention: unknown
// Signature: void FUN_00485010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00485010(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_004826c0(param_1,param_2,param_3);
  iVar1 = FUN_00484ca0(param_1,param_2);
  iVar2 = FUN_00484ca0(param_1,param_3);
  if (iVar1 != iVar2) {
    FUN_00484bd0(param_1,param_2,iVar2);
    FUN_00484bd0(param_1,param_3,iVar1);
  }
  iVar1 = FUN_00484dd0(param_1,param_2);
  iVar2 = FUN_00484dd0(param_1,param_3);
  if (iVar1 == iVar2) {
    return;
  }
  FUN_00484d00(param_1,param_2,iVar2);
  FUN_00484d00(param_1,param_3,iVar1);
  return;
}
