// Name: FUN_004e6310
// Address: 004e6310
// Address Range: [[004e6310, 004e63da]]
// Convention: unknown
// Signature: void FUN_004e6310(void)

#include "nocturne.h"

void FUN_004e6310(void)

{
  byte *puVar1;
  byte *puVar2;
  int iVar3;
  
  puVar1 = &DAT_0061dccc;
  FUN_00484f00(DAT_00612560,&DAT_0061dcb4);
  do {
    FUN_00484f00(DAT_00612560,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_0061dd2c);
  iVar3 = 0;
  puVar1 = &DAT_0061deac;
  do {
    puVar2 = &DAT_0061dd2c + iVar3 * 0x180;
    do {
      FUN_00484f00(DAT_00612560,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar1);
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 0x180;
  } while (iVar3 < 4);
  iVar3 = 0;
  puVar1 = &DAT_0061e5e4;
  do {
    puVar2 = &DAT_0061e32c + iVar3 * 0x2b8;
    do {
      FUN_00484f00(DAT_00612560,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar1);
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 0x2b8;
  } while (iVar3 < 4);
  FUN_00484f00(DAT_00612560,&DAT_0061ee2c);
  return;
}
