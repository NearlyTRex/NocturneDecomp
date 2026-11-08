// Name: FUN_004cec70
// Address: 004cec70
// Address Range: [[004cec70, 004ced3a]]
// Convention: unknown
// Signature: void FUN_004cec70(void)

#include "nocturne.h"

void FUN_004cec70(void)

{
  byte *puVar1;
  byte *puVar2;
  int iVar3;
  
  puVar1 = &DAT_005fed4c;
  FUN_0046e5e0(DAT_005f2afc,&DAT_005fed34);
  do {
    FUN_0046e5e0(DAT_005f2afc,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_005fedac);
  iVar3 = 0;
  puVar1 = &DAT_005fef2c;
  do {
    puVar2 = &DAT_005fedac + iVar3 * 0x180;
    do {
      FUN_0046e5e0(DAT_005f2afc,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar1);
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 0x180;
  } while (iVar3 < 4);
  iVar3 = 0;
  puVar1 = &DAT_005ff664;
  do {
    puVar2 = &DAT_005ff3ac + iVar3 * 0x2b8;
    do {
      FUN_0046e5e0(DAT_005f2afc,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar1);
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 0x2b8;
  } while (iVar3 < 4);
  FUN_0046e5e0(DAT_005f2afc,&DAT_005ffeac);
  return;
}
