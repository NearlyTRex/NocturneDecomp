// Name: FUN_005c9448
// Address: 005c9448
// Address Range: [[005c9448, 005c9476]]
// Convention: unknown
// Signature: void FUN_005c9448(byte *param_1,int *param_2)

#include "nocturne.h"

void FUN_005c9448(byte *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = *param_1;
  iVar3 = 0;
  while ((0x2f < bVar1 && (*param_1 < 0x3a))) {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    iVar3 = iVar3 * 10 + (uint)bVar2 + -0x30;
  }
  *param_2 = iVar3;
  return;
}
