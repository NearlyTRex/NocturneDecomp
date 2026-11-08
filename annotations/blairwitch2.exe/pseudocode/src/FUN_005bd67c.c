// Name: FUN_005bd67c
// Address: 005bd67c
// Address Range: [[005bd67c, 005bd7df]]
// Convention: unknown
// Signature: int FUN_005bd67c(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005bd67c(int param_1,int *param_2)

{
  byte bVar1;
  undefined6 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  byte uVar6;
  int iVar7;
  ushort *unaff_EDI;
  byte local_20 [4];
  byte local_1c;
  byte local_1b;
  byte local_18;
  
  if ((*(byte *)(param_1 + 0x10) & 0x20) == 0) {
    local_18 = 1;
  }
  else {
    local_18 = 2;
  }
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        puVar3 = (uint *)*param_2;
        *param_2 = (int)(puVar3 + 1);
        unaff_EDI = (ushort *)*puVar3;
      }
      else {
        puVar3 = (uint *)*param_2;
        *param_2 = (int)(puVar3 + 1);
        unaff_EDI = (ushort *)*puVar3;
      }
    }
    else {
      puVar2 = (undefined6 *)*param_2;
      *param_2 = (int)(puVar2 + 1);
      unaff_EDI = (ushort *)*puVar2;
    }
  }
  iVar7 = 0;
  while (uVar4 = FUN_005bd160(param_1), ((&DAT_0061ed94)[(byte)((char)uVar4 + 1)] & 2) != 0) {
    iVar7 = iVar7 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar5 + -1;
    if (iVar5 != 0) {
      do {
        iVar7 = iVar7 + 1;
        if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
          uVar6 = (byte)uVar4;
          if (local_18 == 1) {
            *(byte *)unaff_EDI = uVar6;
          }
          else {
            local_1c = uVar6;
            if ((_DAT_026807f0 != 0) && ((*(byte *)((uVar4 & 0xff) + 0x2680801) & 1) != 0)) {
              local_1b = FUN_005bd160(param_1);
            }
            iVar5 = FUN_005c33f0(local_20,&local_1c,2);
            if (iVar5 == -1) {
              return 0;
            }
            *unaff_EDI = local_20._0_2_;
          }
          unaff_EDI = (ushort *)((int)unaff_EDI + (uint)local_18);
        }
        uVar4 = FUN_005be148(param_1);
        if (uVar4 == 0xffffffff) goto LAB_005bd7b8;
      } while (((&DAT_0061ed94)[(byte)((char)uVar4 + 1)] & 2) == 0);
    }
    FUN_005bd16c(uVar4,param_1);
  }
  else {
    iVar7 = 0;
  }
LAB_005bd7b8:
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (0 < iVar7)) {
    if (local_18 == 1) {
      *(byte *)unaff_EDI = 0;
    }
    else {
      *unaff_EDI = 0;
    }
  }
  return iVar7;
}
