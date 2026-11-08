// Name: FUN_00421b10
// Address: 00421b10
// Address Range: [[00421b10, 00421dcc]]
// Convention: unknown
// Signature: void FUN_00421b10(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421b10(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = _DAT_01cedf50;
  *(uint *)(param_1 + 0x17738) = 0;
  *(uint *)(param_1 + 0x17734) = 0;
  iVar1 = FUN_0040c8f0(param_2,uVar3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x17738) = iVar1 + 0x2b4;
  }
  iVar1 = FUN_0040c8f0(param_2,_DAT_01c264e0);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x2514) != '\0')) {
    *(int *)(param_1 + 0x17738) = iVar1 + 0x2b4;
  }
  if (*(int *)(param_1 + 0x17738) != 0) {
    *(uint *)(param_1 + 0x10af8) = 1;
    *(uint *)(param_1 + 0x17734) = param_2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x17734) + 100);
    *(uint *)(param_1 + 0x1776c) = 0;
    *(int *)(param_1 + 100) = iVar1 + 1;
    do {
      iVar2 = FUN_00547810(*(uint *)(param_1 + 0x17738));
      iVar1 = *(int *)(param_1 + 0x1776c);
      if (*(int *)(iVar2 + 0x2c + iVar1 * 4) < 0x2bd) {
        FUN_00436710(PTR_DAT_00609ed0,">%s swarming on %s at LOD %d\n" + 1,param_1,param_2,iVar1)
        ;
        iVar1 = FUN_00547810(*(uint *)(param_1 + 0x17738));
        FUN_0041f940(param_1,*(uint *)(iVar1 + 0x54 + *(int *)(param_1 + 0x1776c) * 4),
                     *(uint *)(iVar1 + 0x7c + *(int *)(param_1 + 0x1776c) * 4));
        FUN_005471f0(*(uint *)(param_1 + 0x17738),*(uint *)(param_1 + 0x1776c));
        iVar2 = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x17738) + 0x2234);
        if (0 < *(int *)(param_1 + 0x17770)) {
          iVar5 = 0;
          do {
            *(int *)((int)&DAT_007bcf48 + iVar5) = iVar2;
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar2 < *(int *)(param_1 + 0x17770));
        }
        for (iVar2 = *(int *)(param_1 + 0x17770) + -2; -1 < iVar2; iVar2 = iVar2 + -1) {
          if (-1 < iVar2) {
            iVar5 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_007bcf4c + iVar5) * 0xc + 4 + iVar1) <
                  *(int *)(*(int *)((int)&DAT_007bcf48 + iVar5) * 0xc + 4 + iVar1)) {
                uVar3 = *(uint *)((int)&DAT_007bcf48 + iVar5);
                *(uint *)((int)&DAT_007bcf48 + iVar5) =
                     *(uint *)((int)&DAT_007bcf4c + iVar5);
                *(uint *)((int)&DAT_007bcf4c + iVar5) = uVar3;
              }
              iVar5 = iVar5 + 4;
            } while (iVar5 <= iVar2 * 4);
          }
        }
        iVar2 = *(int *)(iVar1 + 4 + DAT_007bcf48 * 0xc);
        iVar7 = 0;
        iVar6 = 0;
        iVar5 = param_1;
        if (*(int *)(param_1 + 0x10afc) < 1) {
          return;
        }
        do {
          *(uint *)(iVar5 + 0x10b2c) = 0xffffffff;
          *(int *)(iVar5 + 0x10b30) = (&DAT_007bcf48)[iVar7];
          uVar3 = FUN_0040cfc0(0,(int)(CONCAT44(*(int *)(param_1 + 0x17770) >> 0x1f,
                                                *(uint *)(param_1 + 0x17770)) / 0xf));
          *(uint *)(iVar5 + 0x10b3c) = uVar3;
          iVar7 = iVar7 + 1;
          if ((*(int *)(param_1 + 0x17770) <= iVar7) ||
             (iVar2 + 0x2a < *(int *)(iVar1 + 4 + (&DAT_007bcf48)[iVar7] * 0xc))) {
            iVar7 = 0;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x40;
        } while (iVar6 < *(int *)(param_1 + 0x10afc));
        return;
      }
      *(int *)(param_1 + 0x1776c) = iVar1 + 1;
      piVar4 = (int *)FUN_00547810(*(uint *)(param_1 + 0x17738));
    } while (*(int *)(param_1 + 0x1776c) < *piVar4);
    *(uint *)(param_1 + 0x17738) = 0;
  }
  return;
}
