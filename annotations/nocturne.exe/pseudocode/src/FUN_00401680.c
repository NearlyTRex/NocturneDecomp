// Name: FUN_00401680
// Address: 00401680
// Address Range: [[00401680, 00401705]]
// Convention: unknown
// Signature: void FUN_00401680(int param_1,int param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401680(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_005b7624;
  param_2 = param_2 * 4;
  puVar2 = (uint *)(*(int *)(&DAT_01bd4260 + param_2) + param_1 * 4);
  if (*puVar2 < param_3) {
    *puVar2 = param_3;
    if (iVar1 == 8) {
      *(byte *)(*(int *)(&DAT_01bd2fa0 + param_2) + param_1) = DAT_01c00c70;
      return;
    }
    if (iVar1 != 0x10) {
      *(uint *)(param_1 * 4 + *(int *)(&DAT_01bd2fa0 + param_2)) =
           *(uint *)((_DAT_01c00c70 & 0xff) * 4 + 0x1bff920);
      return;
    }
    *(ushort *)(param_1 * 2 + *(int *)(&DAT_01bd2fa0 + param_2)) =
         *(ushort *)(&DAT_01bff720 + (_DAT_01c00c70 & 0xff) * 2);
  }
  return;
}
