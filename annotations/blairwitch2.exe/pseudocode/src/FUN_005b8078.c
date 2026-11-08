// Name: FUN_005b8078
// Address: 005b8078
// Address Range: [[005b8078, 005b80fc]]
// Convention: unknown
// Signature: undefined4 FUN_005b8078(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005b8078(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte *puStack_24;
  byte *puStack_20;
  int iStack_1c;
  
  (*(code *)PTR_FUN_0061f2a8)(*(uint *)(param_1 + 0x10));
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_0061f2ac)(*(uint *)(param_1 + 0x10));
      return 0;
    }
    *(uint *)(*(int *)(param_1 + 8) + 0xc) = 1;
  }
  puStack_20 = &LAB_005b8060;
  iStack_1c = param_1;
  puStack_24 = &LAB_005b8040;
  uVar2 = FUN_005bd180(&puStack_24,param_2,param_3);
  (*(code *)PTR_FUN_0061f2ac)(*(uint *)(param_1 + 0x10));
  return uVar2;
}
