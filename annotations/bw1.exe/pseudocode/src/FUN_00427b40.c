// Name: FUN_00427b40
// Address: 00427b40
// Address Range: [[00427b40, 00427dfc]]
// Convention: unknown
// Signature: void FUN_00427b40(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427b40(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = _DAT_01d06b10;
  *(uint *)(param_1 + 0x12ea8) = 0;
  *(uint *)(param_1 + 0x12ea4) = 0;
  iVar1 = FUN_0040c600(param_2,uVar3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x12ea8) = iVar1 + 0x158;
  }
  iVar1 = FUN_0040c600(param_2,_DAT_01c3f6a0);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x24a8) != '\0')) {
    *(int *)(param_1 + 0x12ea8) = iVar1 + 0x158;
  }
  if (*(int *)(param_1 + 0x12ea8) != 0) {
    *(uint *)(param_1 + 0xc268) = 1;
    *(uint *)(param_1 + 0x12ea4) = param_2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x12ea4) + 100);
    *(uint *)(param_1 + 0x12edc) = 0;
    *(int *)(param_1 + 100) = iVar1 + 1;
    do {
      iVar2 = FUN_00569eb0(*(uint *)(param_1 + 0x12ea8));
      iVar1 = *(int *)(param_1 + 0x12edc);
      if (*(int *)(iVar2 + 0x2c + iVar1 * 4) < 0x2bd) {
        FUN_00445430(PTR_DAT_00611100,">%s swarming on %s at LOD %d\n" + 1,param_1,param_2,iVar1)
        ;
        iVar1 = FUN_00569eb0(*(uint *)(param_1 + 0x12ea8));
        FUN_00425970(param_1,*(uint *)(iVar1 + 0x54 + *(int *)(param_1 + 0x12edc) * 4),
                     *(uint *)(iVar1 + 0x7c + *(int *)(param_1 + 0x12edc) * 4));
        FUN_00569890(*(uint *)(param_1 + 0x12ea8),*(uint *)(param_1 + 0x12edc));
        iVar2 = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x12ea8) + 0x2324);
        if (0 < *(int *)(param_1 + 0x12ee0)) {
          iVar5 = 0;
          do {
            *(int *)((int)&DAT_007c55f4 + iVar5) = iVar2;
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar2 < *(int *)(param_1 + 0x12ee0));
        }
        for (iVar2 = *(int *)(param_1 + 0x12ee0) + -2; -1 < iVar2; iVar2 = iVar2 + -1) {
          if (-1 < iVar2) {
            iVar5 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_007c55f8 + iVar5) * 0xc + 4 + iVar1) <
                  *(int *)(*(int *)((int)&DAT_007c55f4 + iVar5) * 0xc + 4 + iVar1)) {
                uVar3 = *(uint *)((int)&DAT_007c55f4 + iVar5);
                *(uint *)((int)&DAT_007c55f4 + iVar5) =
                     *(uint *)((int)&DAT_007c55f8 + iVar5);
                *(uint *)((int)&DAT_007c55f8 + iVar5) = uVar3;
              }
              iVar5 = iVar5 + 4;
            } while (iVar5 <= iVar2 * 4);
          }
        }
        iVar2 = *(int *)(iVar1 + 4 + DAT_007c55f4 * 0xc);
        iVar7 = 0;
        iVar6 = 0;
        iVar5 = param_1;
        if (*(int *)(param_1 + 0xc26c) < 1) {
          return;
        }
        do {
          *(uint *)(iVar5 + 0xc29c) = 0xffffffff;
          *(int *)(iVar5 + 0xc2a0) = (&DAT_007c55f4)[iVar7];
          uVar3 = FUN_0040cc60(0,(int)(CONCAT44(*(int *)(param_1 + 0x12ee0) >> 0x1f,
                                                *(uint *)(param_1 + 0x12ee0)) / 0xf));
          *(uint *)(iVar5 + 0xc2ac) = uVar3;
          iVar7 = iVar7 + 1;
          if ((*(int *)(param_1 + 0x12ee0) <= iVar7) ||
             (iVar2 + 0x2a < *(int *)(iVar1 + 4 + (&DAT_007c55f4)[iVar7] * 0xc))) {
            iVar7 = 0;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x40;
        } while (iVar6 < *(int *)(param_1 + 0xc26c));
        return;
      }
      *(int *)(param_1 + 0x12edc) = iVar1 + 1;
      piVar4 = (int *)FUN_00569eb0(*(uint *)(param_1 + 0x12ea8));
    } while (*(int *)(param_1 + 0x12edc) < *piVar4);
    *(uint *)(param_1 + 0x12ea8) = 0;
  }
  return;
}
