// Name: FUN_00423790
// Address: 00423790
// Address Range: [[00423790, 00423a4c]]
// Convention: unknown
// Signature: void FUN_00423790(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423790(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = _DAT_01cae124;
  *(uint *)(param_1 + 0x12964) = 0;
  *(uint *)(param_1 + 0x12960) = 0;
  iVar1 = FUN_0040d890(param_2,uVar3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x12964) = iVar1 + 0x150;
  }
  iVar1 = FUN_0040d890(param_2,_DAT_01bcdef4);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x23b0) != '\0')) {
    *(int *)(param_1 + 0x12964) = iVar1 + 0x150;
  }
  if (*(int *)(param_1 + 0x12964) != 0) {
    *(uint *)(param_1 + 0xbd24) = 1;
    *(uint *)(param_1 + 0x12960) = param_2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x12960) + 100);
    *(uint *)(param_1 + 0x12998) = 0;
    *(int *)(param_1 + 100) = iVar1 + 1;
    do {
      iVar2 = FUN_0051e020(*(uint *)(param_1 + 0x12964));
      iVar1 = *(int *)(param_1 + 0x12998);
      if (*(int *)(iVar2 + 0x2c + iVar1 * 4) < 0x2bd) {
        FUN_0043ac60(PTR_DAT_005ad350,">%s swarming on %s at LOD %d\n" + 1,param_1,param_2,
                     iVar1);
        iVar1 = FUN_0051e020(*(uint *)(param_1 + 0x12964));
        FUN_004219f0(param_1,*(uint *)(iVar1 + 0x54 + *(int *)(param_1 + 0x12998) * 4),
                     *(uint *)(iVar1 + 0x7c + *(int *)(param_1 + 0x12998) * 4));
        FUN_0051da50(*(uint *)(param_1 + 0x12964),*(uint *)(param_1 + 0x12998));
        iVar2 = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x12964) + 0x2234);
        if (0 < *(int *)(param_1 + 0x1299c)) {
          iVar5 = 0;
          do {
            *(int *)((int)&DAT_00764d98 + iVar5) = iVar2;
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar2 < *(int *)(param_1 + 0x1299c));
        }
        for (iVar2 = *(int *)(param_1 + 0x1299c) + -2; -1 < iVar2; iVar2 = iVar2 + -1) {
          if (-1 < iVar2) {
            iVar5 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_00764d9c + iVar5) * 0xc + 4 + iVar1) <
                  *(int *)(*(int *)((int)&DAT_00764d98 + iVar5) * 0xc + 4 + iVar1)) {
                uVar3 = *(uint *)((int)&DAT_00764d98 + iVar5);
                *(uint *)((int)&DAT_00764d98 + iVar5) =
                     *(uint *)((int)&DAT_00764d9c + iVar5);
                *(uint *)((int)&DAT_00764d9c + iVar5) = uVar3;
              }
              iVar5 = iVar5 + 4;
            } while (iVar5 <= iVar2 * 4);
          }
        }
        iVar2 = *(int *)(iVar1 + 4 + DAT_00764d98 * 0xc);
        iVar7 = 0;
        iVar6 = 0;
        iVar5 = param_1;
        if (*(int *)(param_1 + 0xbd28) < 1) {
          return;
        }
        do {
          *(uint *)(iVar5 + 0xbd58) = 0xffffffff;
          *(int *)(iVar5 + 0xbd5c) = (&DAT_00764d98)[iVar7];
          uVar3 = FUN_0040de00(0,(int)(CONCAT44(*(int *)(param_1 + 0x1299c) >> 0x1f,
                                                *(uint *)(param_1 + 0x1299c)) / 0xf));
          *(uint *)(iVar5 + 0xbd68) = uVar3;
          iVar7 = iVar7 + 1;
          if ((*(int *)(param_1 + 0x1299c) <= iVar7) ||
             (iVar2 + 0x2a < *(int *)(iVar1 + 4 + (&DAT_00764d98)[iVar7] * 0xc))) {
            iVar7 = 0;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x40;
        } while (iVar6 < *(int *)(param_1 + 0xbd28));
        return;
      }
      *(int *)(param_1 + 0x12998) = iVar1 + 1;
      piVar4 = (int *)FUN_0051e020(*(uint *)(param_1 + 0x12964));
    } while (*(int *)(param_1 + 0x12998) < *piVar4);
    *(uint *)(param_1 + 0x12964) = 0;
  }
  return;
}
