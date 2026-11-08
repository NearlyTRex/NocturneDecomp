// Name: FUN_005c5760
// Address: 005c5760
// Address Range: [[005c5760, 005c57ac]]
// Convention: unknown
// Signature: void FUN_005c5760(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005c5760(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_005c5e20(2);
  FUN_005c5e50(*(uint *)(&DAT_0061f7d0 + param_1 * 4),uVar1);
  FUN_005c5e50(&DAT_005f20f1,uVar1);
  FUN_005c5e50(param_2,uVar1);
  FUN_005bab40(10,uVar1);
  return;
}
