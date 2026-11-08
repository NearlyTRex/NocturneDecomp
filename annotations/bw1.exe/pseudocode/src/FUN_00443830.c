// Name: FUN_00443830
// Address: 00443830
// Address Range: [[00443830, 0044388c]]
// Convention: unknown
// Signature: int FUN_00443830(uint param_1)

#include "nocturne.h"

int FUN_00443830(uint param_1)

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
    iVar3 = FUN_00443830(0x31);
    return iVar3;
  }
  iVar3 = FUN_00443830(0x30);
  return iVar3;
}
