// Name: crt_unknown.c_FUN_005632c8
// Address: 005632c8
// Address Range: [[005632c8, 0056334c]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005632c8(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005632c8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  code *pcStack_24;
  code *pcStack_20;
  int iStack_1c;
  
  (*(code *)PTR_FUN_005c1ac0)(*(uint *)(param_1 + 0x10));
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_005c1ac4)(*(uint *)(param_1 + 0x10));
      return 0;
    }
    *(uint *)(*(int *)(param_1 + 8) + 0xc) = 1;
  }
  pcStack_20 = FUN_005632b0;
  iStack_1c = param_1;
  pcStack_24 = FUN_00563290;
  uVar2 = FUN_00567560(&pcStack_24,param_2,param_3);
  (*(code *)PTR_FUN_005c1ac4)(*(uint *)(param_1 + 0x10));
  return uVar2;
}
