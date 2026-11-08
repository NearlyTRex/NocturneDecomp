// Name: FUN_00441490
// Address: 00441490
// Address Range: [[00441490, 004414ec]]
// Convention: unknown
// Signature: int FUN_00441490(uint param_1)

#include "nocturne.h"

int FUN_00441490(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x3f;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + iVar3 >> 1;
    if (param_1 == (byte)"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]) {
      return iVar1;
    }
    if ((int)param_1 < (int)(uint)(byte)"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]) {
      iVar3 = iVar1 + -1;
    }
    else {
      iVar2 = iVar1 + 1;
    }
  } while (iVar2 <= iVar3);
  if (param_1 != 0x4f) {
    if ((param_1 != 0x49) && (param_1 != 0x6c)) {
      return -1;
    }
    iVar3 = FUN_00441490(0x31);
    return iVar3;
  }
  iVar3 = FUN_00441490(0x30);
  return iVar3;
}
