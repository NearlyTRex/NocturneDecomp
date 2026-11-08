// Name: FUN_005bd894
// Address: 005bd894
// Address Range: [[005bd894, 005bd9a6]]
// Convention: unknown
// Signature: int FUN_005bd894(int param_1,int *param_2,undefined4 *param_3)

#include "nocturne.h"

int FUN_005bd894(int param_1,int *param_2,uint *param_3)

{
  byte bVar1;
  undefined6 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *unaff_ESI;
  int iVar7;
  byte abStack_40 [32];
  uint local_20;
  uint local_1c;
  uint local_18;
  
  local_1c = (uint)(*(char *)*param_3 == '^');
  if (local_1c != 0) {
    *param_3 = (char *)*param_3 + 1;
  }
  uVar5 = FUN_005bd84c(*param_3,abStack_40);
  *param_3 = uVar5;
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        puVar3 = (uint *)*param_2;
        *param_2 = (int)(puVar3 + 1);
        unaff_ESI = (byte *)*puVar3;
      }
      else {
        puVar3 = (uint *)*param_2;
        *param_2 = (int)(puVar3 + 1);
        unaff_ESI = (byte *)*puVar3;
      }
    }
    else {
      puVar2 = (undefined6 *)*param_2;
      *param_2 = (int)(puVar2 + 1);
      unaff_ESI = (byte *)*puVar2;
    }
  }
  iVar7 = *(int *)(param_1 + 0xc);
  iVar6 = 0;
  do {
    if (iVar7 == 0) {
LAB_005bd98e:
      if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (0 < iVar6)) {
        *unaff_ESI = 0;
      }
      return iVar6;
    }
    local_18 = FUN_005bd160(param_1);
    uVar4 = local_18;
    if ((*(byte *)(param_1 + 0x10) & 2) != 0) goto LAB_005bd98e;
    local_20 = (uint)abStack_40[(int)local_18 >> 3];
    if ((((&DAT_0061f2f0)[local_18 & 7] & abStack_40[(int)local_18 >> 3]) == 0) != local_1c) {
      FUN_005bd16c(local_18,param_1);
      goto LAB_005bd98e;
    }
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + -1;
    local_18 = uVar4;
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      *unaff_ESI = (byte)local_18;
      unaff_ESI = unaff_ESI + 1;
    }
  } while( true );
}
