// Name: FUN_005c0428
// Address: 005c0428
// Address Range: [[005c0428, 005c04ac]]
// Convention: unknown
// Signature: undefined4 FUN_005c0428(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005c0428(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte *puStack_24;
  byte *puStack_20;
  int iStack_1c;
  
  (*(code *)PTR_FUN_00626600)(*(uint *)(param_1 + 0x10));
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_00626604)(*(uint *)(param_1 + 0x10));
      return 0;
    }
    *(uint *)(*(int *)(param_1 + 8) + 0xc) = 1;
  }
  puStack_20 = &LAB_005c0410;
  iStack_1c = param_1;
  puStack_24 = &LAB_005c03f0;
  uVar2 = FUN_005c5450(&puStack_24,param_2,param_3);
  (*(code *)PTR_FUN_00626604)(*(uint *)(param_1 + 0x10));
  return uVar2;
}
