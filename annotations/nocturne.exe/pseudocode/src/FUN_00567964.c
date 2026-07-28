// Name: FUN_00567964
// Address: 00567964
// Address Range: [[00567964, 00567a58]]
// Convention: unknown
// Signature: int FUN_00567964(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00567964(int param_1,int *param_2)

{
  byte bVar1;
  undefined6 *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  byte *unaff_EBX;
  int iVar6;
  int iVar7;
  wchar_t local_1c [2];
  byte local_18;
  byte local_17;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        puVar3 = (uint *)*param_2;
        *param_2 = (int)(puVar3 + 1);
        unaff_EBX = (byte *)*puVar3;
      }
      else {
        puVar3 = (uint *)*param_2;
        *param_2 = (int)(puVar3 + 1);
        unaff_EBX = (byte *)*puVar3;
      }
    }
    else {
      puVar2 = (undefined6 *)*param_2;
      *param_2 = (int)(puVar2 + 1);
      unaff_EBX = (byte *)*puVar2;
    }
  }
  iVar7 = *(int *)(param_1 + 0xc);
  iVar6 = 0;
  if (iVar7 == -1) {
    iVar7 = 1;
  }
  while( true ) {
    if (iVar7 < 1) {
      return iVar6;
    }
    bVar4 = FUN_00567540(param_1);
    bVar1 = *(byte *)(param_1 + 0x10);
    if ((bVar1 & 2) != 0) break;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + -1;
    if ((bVar1 & 1) != 0) {
      if ((bVar1 & 0x20) == 0) {
        *unaff_EBX = bVar4;
        unaff_EBX = unaff_EBX + 1;
      }
      else {
        local_18 = bVar4;
        if ((_DAT_02de5c30 != 0) && ((*(byte *)(bVar4 + 0x2de5c41) & 1) != 0)) {
          local_17 = FUN_00567540(param_1);
        }
        iVar5 = mbtowc(local_1c,(char *)&local_18,2);
        if (iVar5 == -1) {
          return 0;
        }
        *(short *)unaff_EBX = local_1c[0];
        unaff_EBX = unaff_EBX + 2;
      }
    }
  }
  return iVar6;
}
