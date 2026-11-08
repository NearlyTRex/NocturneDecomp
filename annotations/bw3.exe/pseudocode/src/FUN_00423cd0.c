// Name: FUN_00423cd0
// Address: 00423cd0
// Address Range: [[00423cd0, 00423fac]]
// Convention: unknown
// Signature: void FUN_00423cd0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423cd0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = _DAT_01d5ba70;
  *(uint *)(param_1 + 0x13820) = 0;
  *(uint *)(param_1 + 0x1381c) = 0;
  iVar1 = FUN_0040c840(param_2,uVar3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x13820) = iVar1 + 0x158;
  }
  iVar1 = FUN_0040c840(param_2,_DAT_01c5bc48);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x24a8) != '\0')) {
    *(int *)(param_1 + 0x13820) = iVar1 + 0x158;
  }
  if (*(int *)(param_1 + 0x13820) != 0) {
    *(uint *)(param_1 + 0xd054) = 1;
    *(uint *)(param_1 + 0x1381c) = param_2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1381c) + 100);
    *(uint *)(param_1 + 0x13854) = 0;
    *(int *)(param_1 + 100) = iVar1 + 1;
    FUN_0054ea40(*(uint *)(param_1 + 0x13820));
    do {
      iVar2 = FUN_0054ea40(*(uint *)(param_1 + 0x13820));
      iVar1 = *(int *)(param_1 + 0x13854);
      if (*(int *)(iVar2 + 0x2c + iVar1 * 4) < 0x353) {
        FUN_00441ff0(PTR_DAT_005f1690,">%s swarming on %s at LOD %d\n" + 1,param_1,param_2,iVar1)
        ;
        iVar1 = FUN_0054ea40(*(uint *)(param_1 + 0x13820));
        FUN_00421b00(param_1,*(uint *)(iVar1 + 0x54 + *(int *)(param_1 + 0x13854) * 4),
                     *(uint *)(iVar1 + 0x7c + *(int *)(param_1 + 0x13854) * 4));
        FUN_0054e420(*(uint *)(param_1 + 0x13820),*(uint *)(param_1 + 0x13854));
        iVar2 = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x13820) + 0x2324);
        if (0 < *(int *)(param_1 + 0x13858)) {
          iVar5 = 0;
          do {
            *(int *)((int)&DAT_007e1c94 + iVar5) = iVar2;
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar2 < *(int *)(param_1 + 0x13858));
        }
        for (iVar2 = *(int *)(param_1 + 0x13858) + -2; -1 < iVar2; iVar2 = iVar2 + -1) {
          if (-1 < iVar2) {
            iVar5 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_007e1c98 + iVar5) * 0xc + 4 + iVar1) <
                  *(int *)(*(int *)((int)&DAT_007e1c94 + iVar5) * 0xc + 4 + iVar1)) {
                uVar3 = *(uint *)((int)&DAT_007e1c94 + iVar5);
                *(uint *)((int)&DAT_007e1c94 + iVar5) =
                     *(uint *)((int)&DAT_007e1c98 + iVar5);
                *(uint *)((int)&DAT_007e1c98 + iVar5) = uVar3;
              }
              iVar5 = iVar5 + 4;
            } while (iVar5 <= iVar2 * 4);
          }
        }
        iVar2 = *(int *)(iVar1 + 4 + DAT_007e1c94 * 0xc);
        iVar7 = 0;
        iVar6 = 0;
        iVar5 = param_1;
        if (*(int *)(param_1 + 0xd058) < 1) {
          return;
        }
        do {
          *(uint *)(iVar5 + 0xd088) = 0xffffffff;
          *(int *)(iVar5 + 0xd08c) = (&DAT_007e1c94)[iVar7];
          uVar3 = FUN_0040cea0(0,(int)(CONCAT44(*(int *)(param_1 + 0x13858) >> 0x1f,
                                                *(uint *)(param_1 + 0x13858)) / 0xf));
          *(uint *)(iVar5 + 0xd098) = uVar3;
          iVar7 = iVar7 + 1;
          if ((*(int *)(param_1 + 0x13858) <= iVar7) ||
             (iVar2 + 0x2a < *(int *)(iVar1 + 4 + (&DAT_007e1c94)[iVar7] * 0xc))) {
            iVar7 = 0;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x40;
        } while (iVar6 < *(int *)(param_1 + 0xd058));
        return;
      }
      *(int *)(param_1 + 0x13854) = iVar1 + 1;
      piVar4 = (int *)FUN_0054ea40(*(uint *)(param_1 + 0x13820));
    } while (*(int *)(param_1 + 0x13854) < *piVar4);
    *(uint *)(param_1 + 0x13820) = 0;
  }
  return;
}
