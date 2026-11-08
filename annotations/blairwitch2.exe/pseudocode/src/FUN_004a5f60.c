// Name: FUN_004a5f60
// Address: 004a5f60
// Address Range: [[004a5f60, 004a61a1]]
// Convention: unknown
// Signature: void FUN_004a5f60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a5f60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cacb4c) {
    iVar3 = 0x1cacb50;
    do {
      FUN_004a3a60(iVar3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x970;
    } while (iVar2 < _DAT_01cacb4c);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar2 = 0x1caf128;
    FUN_0040d540(0x1caf114);
    do {
      FUN_0040d540(iVar2);
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != 0x1caf1a0);
    FUN_0040d540(0x1caf1a0);
    FUN_0040d540(0x1caf1b4);
    FUN_0040d540(0x1caf1c8);
    FUN_0040d540(0x1caf1dc);
    FUN_0040d540(0x1caf1f0);
    FUN_0040d540(0x1caf204);
    FUN_0040d540(0x1caf218);
    FUN_0040d540(0x1caf22c);
    _DAT_01caf568 = 0;
    DAT_00616010 = 1;
    _DAT_01caf488 = 0;
    DAT_00616040 = 0xffffffff;
    DAT_01caf4a0 = 0;
    return;
  }
  if ((*(int *)(0x01CB6900 + 0x244) == 0) &&
     ((**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x200), (DAT_01c2a384 & 1) != 0)) {
    iVar2 = FUN_004a1bb0(_DAT_01c2a37c,_DAT_01c2a380);
    if (-1 < iVar2) {
      _DAT_01caf110 = *(int *)(&DAT_01cabb34 + iVar2 * 0x2e4);
    }
    iVar2 = FUN_004a1c60(_DAT_01c2a37c,_DAT_01c2a380);
    _DAT_01caf110 = _DAT_01caf110 + iVar2;
    if ((((0x00000262 <= _DAT_01c2a37c) && (0x000001C0 <= _DAT_01c2a380)) &&
        (_DAT_01c2a37c < 0x00000262 + _DAT_01caf224)) &&
       (_DAT_01c2a380 < _DAT_01caf228 + 0x000001C0)) {
      *(uint *)(param_1 + 0x40) = 0;
    }
    piVar1 = (int *)FUN_004a2730(_DAT_01caf27c + _DAT_01caf110 * 0x144,_DAT_01c2a37c,_DAT_01c2a380);
    if (piVar1 != (int *)0x0) {
      (**(code **)(piVar1[5] + 8))(piVar1,1,_DAT_01c2a37c - *piVar1,_DAT_01c2a380 - piVar1[1]);
    }
    DAT_01c2a384 = DAT_01c2a384 & 0xfe;
    return;
  }
  return;
}
