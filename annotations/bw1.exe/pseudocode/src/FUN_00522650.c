// Name: FUN_00522650
// Address: 00522650
// Address Range: [[00522650, 0052269b]]
// Convention: unknown
// Signature: void FUN_00522650(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_00522650(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00567580(param_3);
  FUN_00569890(param_3,0);
  iVar1 = *(int *)(param_3 + 0x2320);
  iVar2 = FUN_00569eb0(param_3);
  FUN_00522540(param_1,param_2,*(uint *)(param_3 + 0x2324),0,
               *(uint *)(iVar2 + 0x2c + iVar1 * 4));
  return;
}
