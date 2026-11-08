// Name: FUN_004c9b00
// Address: 004c9b00
// Address Range: [[004c9b00, 004c9bca]]
// Convention: unknown
// Signature: void FUN_004c9b00(void)

#include "nocturne.h"

void FUN_004c9b00(void)

{
  byte *puVar1;
  byte *puVar2;
  int iVar3;
  
  puVar1 = &DAT_00616808;
  FUN_0046ca00(DAT_0060b280,&DAT_006167f0);
  do {
    FUN_0046ca00(DAT_0060b280,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_00616868);
  iVar3 = 0;
  puVar1 = &DAT_006169e8;
  do {
    puVar2 = &DAT_00616868 + iVar3 * 0x180;
    do {
      FUN_0046ca00(DAT_0060b280,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar1);
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 0x180;
  } while (iVar3 < 4);
  iVar3 = 0;
  puVar1 = &DAT_00617120;
  do {
    puVar2 = &DAT_00616e68 + iVar3 * 0x2b8;
    do {
      FUN_0046ca00(DAT_0060b280,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar1);
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 0x2b8;
  } while (iVar3 < 4);
  FUN_0046ca00(DAT_0060b280,&DAT_00617968);
  return;
}
