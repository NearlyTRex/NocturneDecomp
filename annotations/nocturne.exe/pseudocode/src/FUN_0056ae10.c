// Name: FUN_0056ae10
// Address: 0056ae10
// Address Range: [[0056ae10, 0056aeed]]
// Convention: unknown
// Signature: undefined4 FUN_0056ae10(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0056ae10(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)
            (*(uint *)(param_1 + 0x10));
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)
                (*(uint *)(param_1 + 0x10));
      return 0;
    }
    *(uint *)(*(int *)(param_1 + 8) + 0xc) = 1;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xcf;
  if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
    FUN_00568ed0(param_1);
  }
  bVar5 = (*(byte *)(param_1 + 0xd) & 4) != 0;
  if (bVar5) {
    bVar4 = *(byte *)(param_1 + 0xd) & 0xfa;
    *(byte *)(param_1 + 0xd) = bVar4;
    *(byte *)(param_1 + 0xd) = bVar4 | 1;
  }
  uVar3 = FUN_00569040(param_1,param_2,param_3,FUN_0056adf0);
  if (bVar5) {
    bVar4 = *(byte *)(param_1 + 0xd) & 0xfa;
    *(byte *)(param_1 + 0xd) = bVar4;
    *(byte *)(param_1 + 0xd) = bVar4 | 4;
    FUN_00568890(param_1);
  }
  if ((*(byte *)(param_1 + 0xc) & 0x20) != 0) {
    uVar3 = 0xffffffff;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | uVar2 & 0x30;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)
            (*(uint *)(param_1 + 0x10));
  return uVar3;
}
