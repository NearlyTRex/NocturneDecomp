// Name: FUN_00414dd0
// Address: 00414dd0
// Address Range: [[00414dd0, 00414e47]]
// Convention: unknown
// Signature: void FUN_00414dd0(int param_1)

#include "nocturne.h"

void FUN_00414dd0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00487eb0(param_1);
  FUN_00547480(param_1 + 0x2b4);
  FUN_0044fd00(param_1 + 0x10af8);
  iVar1 = param_1 + 0x10c7c;
  FUN_005b6f80(iVar1,0,param_1 + 0x2b4);
  uVar2 = FUN_0044fd20(param_1 + 0x10af8,0);
  FUN_005b6fc0(iVar1,1,uVar2);
  FUN_005b71d0(iVar1);
  *(uint *)(param_1 + 0x10c74) = 0;
  *(uint *)(param_1 + 0x10c78) = 0;
  return;
}
