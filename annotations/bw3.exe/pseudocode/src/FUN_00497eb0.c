// Name: FUN_00497eb0
// Address: 00497eb0
// Address Range: [[00497eb0, 00497f66]]
// Convention: unknown
// Signature: void FUN_00497eb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497eb0(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    *(uint *)(param_1 + 0x48) = 1;
  }
  else {
    lVar1 = (longlong)_DAT_01c5fad0 * (longlong)*(int *)(param_1 + 0x50);
    lVar1 = (longlong)*(int *)(param_1 + 0x44) *
            (longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    iVar2 = *(int *)(param_1 + 0x40) -
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    *(int *)(param_1 + 0x40) = iVar2;
    if (iVar2 < 0) {
      *(uint *)(param_1 + 0x24) = 0;
      *(uint *)(param_1 + 0x40) = 0;
    }
  }
  uVar3 = *(uint *)(0x01D2130C + 0x314);
  lVar1 = (longlong)*(int *)(param_1 + 0x50) * (longlong)_DAT_01c5fad0;
  FUN_004bf3a0(0x01D2130C,
               (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
               (float)_DAT_005c0518,uVar3);
  FUN_00509f30(param_1);
  FUN_004bf3a0(0x01D2130C,uVar3);
  return;
}
