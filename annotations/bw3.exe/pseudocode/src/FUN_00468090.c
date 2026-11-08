// Name: FUN_00468090
// Address: 00468090
// Address Range: [[00468090, 00468180]]
// Convention: unknown
// Signature: void FUN_00468090(uint param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468090(uint param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (DAT_005fba20 != 8) {
    if (DAT_005fba20 == 0x10) {
      puVar1 = (uint *)(*(int *)(&DAT_01c5faec + param_3 * 4) + param_1 * 2);
      puVar2 = puVar1;
      if ((param_1 & 1) != 0) {
        puVar2 = (uint *)((int)puVar1 + 2);
        param_1 = param_1 + 1;
        *(ushort *)puVar1 = (ushort)*puVar1 >> (DAT_01bdd7cc & 0x1f) & (ushort)_DAT_01bdd7dc;
      }
      for (; (int)param_1 < (int)param_2; param_1 = param_1 + 2) {
        *puVar2 = *puVar2 >> (DAT_01bdd7cc & 0x1f) & _DAT_01bdd7e0;
        puVar2 = puVar2 + 1;
      }
      if (param_1 == param_2) {
        *(ushort *)puVar2 = (ushort)*puVar2 >> (DAT_01bdd7cc & 0x1f) & (ushort)_DAT_01bdd7dc;
        return;
      }
    }
    else if ((DAT_005fba20 == 0x20) &&
            (puVar2 = (uint *)(param_1 * 4 + *(int *)(&DAT_01c5faec + param_3 * 4)),
            (int)param_1 <= (int)param_2)) {
      do {
        param_1 = param_1 + 1;
        *puVar2 = *puVar2 >> (DAT_01bdd7cc & 0x1f) & _DAT_01bdd7dc;
        puVar2 = puVar2 + 1;
      } while ((int)param_1 <= (int)param_2);
      return;
    }
  }
  return;
}
