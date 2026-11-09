// Name: crt_unknown.c_FUN_005a7e50
// Address: 005a7e50
// Address Range: [[005a7e50, 005a7f2d]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a7e50(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005a7e50(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(*(uint *)(param_1 + 0x10));
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(*(uint *)(param_1 + 0x10));
      return 0;
    }
    *(uint *)(*(int *)(param_1 + 8) + 0xc) = 1;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xcf;
  if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
    FUN_005a9310(param_1);
  }
  bVar5 = (*(byte *)(param_1 + 0xd) & 4) != 0;
  if (bVar5) {
    bVar4 = *(byte *)(param_1 + 0xd) & 0xfa;
    *(byte *)(param_1 + 0xd) = bVar4;
    *(byte *)(param_1 + 0xd) = bVar4 | 1;
  }
  uVar3 = FUN_005a6190(param_1,param_2,param_3,FUN_005a7e30);
  if (bVar5) {
    bVar4 = *(byte *)(param_1 + 0xd) & 0xfa;
    *(byte *)(param_1 + 0xd) = bVar4;
    *(byte *)(param_1 + 0xd) = bVar4 | 4;
    FUN_005a9bc0(param_1);
  }
  if ((*(byte *)(param_1 + 0xc) & 0x20) != 0) {
    uVar3 = 0xffffffff;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | uVar2 & 0x30;
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(*(uint *)(param_1 + 0x10));
  return uVar3;
}
