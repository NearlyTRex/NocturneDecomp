// Name: FUN_004be970
// Address: 004be970
// Address Range: [[004be970, 004bebb1]]
// Convention: unknown
// Signature: void FUN_004be970(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004be970(int param_1)

{
  int *piVar1;
  int iVar2;
  byte *puVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cc55cc) {
    puVar3 = &DAT_01cc55d0;
    do {
      FUN_004bc450(puVar3);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x970;
    } while (iVar2 < _DAT_01cc55cc);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar2 = 0x1cc7ba8;
    FUN_0040d1c0(0x1cc7b94);
    do {
      FUN_0040d1c0(iVar2);
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != 0x1cc7c20);
    FUN_0040d1c0(0x1cc7c20);
    FUN_0040d1c0(0x1cc7c34);
    FUN_0040d1c0(0x1cc7c48);
    FUN_0040d1c0(0x1cc7c5c);
    FUN_0040d1c0(0x1cc7c84);
    FUN_0040d1c0(0x1cc7c98);
    FUN_0040d1c0(0x1cc7cac);
    FUN_0040d1c0(0x1cc7cc0);
    _DAT_01cc8000 = 0;
    DAT_0061d2e0 = 1;
    _DAT_01cc7f1c = 0;
    DAT_0061d310 = 0xffffffff;
    DAT_01cc7f38 = 0;
    return;
  }
  if ((*(int *)(0x01CCF390 + 0x244) == 0) &&
     ((**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200), (DAT_01c43544 & 1) != 0)) {
    iVar2 = FUN_004ba490(_DAT_01c4353c,_DAT_01c43540);
    if (-1 < iVar2) {
      _DAT_01cc7b90 = *(int *)(&DAT_01cc45b4 + iVar2 * 0x2e4);
    }
    iVar2 = FUN_004ba540(_DAT_01c4353c,_DAT_01c43540);
    _DAT_01cc7b90 = _DAT_01cc7b90 + iVar2;
    if ((((0x00000262 <= _DAT_01c4353c) && (0x000001C0 <= _DAT_01c43540)) &&
        (_DAT_01c4353c < 0x00000262 + _DAT_01cc7cb8)) &&
       (_DAT_01c43540 < _DAT_01cc7cbc + 0x000001C0)) {
      *(uint *)(param_1 + 0x40) = 0;
    }
    piVar1 = (int *)FUN_004bb110(_DAT_01cc7d10 + _DAT_01cc7b90 * 0x144,_DAT_01c4353c,_DAT_01c43540);
    if (piVar1 != (int *)0x0) {
      (**(code **)(piVar1[5] + 8))(piVar1,1,_DAT_01c4353c - *piVar1,_DAT_01c43540 - piVar1[1]);
    }
    DAT_01c43544 = DAT_01c43544 & 0xfe;
    return;
  }
  return;
}
