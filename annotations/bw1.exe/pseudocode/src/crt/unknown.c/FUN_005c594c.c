// Name: crt_unknown.c_FUN_005c594c
// Address: 005c594c
// Address Range: [[005c594c, 005c5aaf]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c594c(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c594c(int param_1,int *param_2)

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
  while (uVar4 = FUN_005c5430(param_1),
        ((&DAT_00626114)[(byte)((char)uVar4 + 1)] & 2) != 0) {
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
            if ((_DAT_02c9f6e0 != 0) && ((*(byte *)((uVar4 & 0xff) + 0x2c9f6f1) & 1) != 0)) {
              local_1b = FUN_005c5430(param_1);
            }
            iVar5 = FUN_005cb6f0(local_20,&local_1c,2);
            if (iVar5 == -1) {
              return 0;
            }
            *unaff_EDI = local_20._0_2_;
          }
          unaff_EDI = (ushort *)((int)unaff_EDI + (uint)local_18);
        }
        uVar4 = FUN_005c6418(param_1);
        if (uVar4 == 0xffffffff) goto LAB_005c5a88;
      } while (((&DAT_00626114)[(byte)((char)uVar4 + 1)] & 2) == 0);
    }
    FUN_005c543c(uVar4,param_1);
  }
  else {
    iVar7 = 0;
  }
LAB_005c5a88:
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
