// Name: FUN_00567a5c
// Address: 00567a5c
// Address Range: [[00567a5c, 00567bbf]]
// Convention: unknown
// Signature: int FUN_00567a5c(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00567a5c(int param_1,int *param_2)

{
  byte bVar1;
  undefined6 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  char *unaff_EDI;
  wchar_t local_20 [2];
  char local_1c;
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
        unaff_EDI = (char *)*puVar3;
      }
      else {
        puVar3 = (uint *)*param_2;
        *param_2 = (int)(puVar3 + 1);
        unaff_EDI = (char *)*puVar3;
      }
    }
    else {
      puVar2 = (undefined6 *)*param_2;
      *param_2 = (int)(puVar2 + 1);
      unaff_EDI = (char *)*puVar2;
    }
  }
  iVar7 = 0;
  while (uVar4 = FUN_00567540(param_1), ((&DAT_005c168c)[(byte)((char)uVar4 + 1)] & 2) != 0) {
    iVar7 = iVar7 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar5 + -1;
    if (iVar5 != 0) {
      do {
        iVar7 = iVar7 + 1;
        if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
          cVar6 = (char)uVar4;
          if (local_18 == 1) {
            *unaff_EDI = cVar6;
          }
          else {
            local_1c = cVar6;
            if ((_DAT_02de5c30 != 0) && ((*(byte *)((uVar4 & 0xff) + 0x2de5c41) & 1) != 0)) {
              local_1b = FUN_00567540(param_1);
            }
            iVar5 = mbtowc(local_20,&local_1c,2);
            if (iVar5 == -1) {
              return 0;
            }
            *(short *)unaff_EDI = local_20[0];
          }
          unaff_EDI = unaff_EDI + local_18;
        }
        uVar4 = FUN_00568528(param_1);
        if (uVar4 == 0xffffffff) goto LAB_00567b98;
      } while (((&DAT_005c168c)[(byte)((char)uVar4 + 1)] & 2) == 0);
    }
    FUN_0056754c(uVar4,param_1);
  }
  else {
    iVar7 = 0;
  }
LAB_00567b98:
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (0 < iVar7)) {
    if (local_18 == 1) {
      *unaff_EDI = '\0';
    }
    else {
      unaff_EDI[0] = '\0';
      unaff_EDI[1] = '\0';
    }
  }
  return iVar7;
}
