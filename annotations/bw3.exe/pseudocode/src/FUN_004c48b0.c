// Name: FUN_004c48b0
// Address: 004c48b0
// Address Range: [[004c48b0, 004c49ed]]
// Convention: unknown
// Signature: void FUN_004c48b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c48b0(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x1d22b4c;
  do {
    FUN_0040d400(puVar1);
    puVar1 = puVar1 + 0x14;
  } while (puVar1 != &DAT_01d22bec);
  FUN_0040d460(0x1d22b4c,"@cursor" + 1,0x10,0x10);
  FUN_0040d460(0x1d22b60,"upwhite",0x10,0x10);
  FUN_0040d460(0x1d22b74,"downwhite",0x10,0x10);
  FUN_0040d460(0x1d22b88,"leftwhite",0x10,0x10);
  FUN_0040d460(0x1d22b9c,"rightwhite",0x10,0x10);
  FUN_0040d460(0x1d22bb0,"crosshairsgreen",0x10,0x10);
  FUN_0040d460(0x1d22bc4,"crosshairsred",0x10,0x10);
  FUN_0040d460(0x1d22bd8,&DAT_005c3cac,0x10,0x10);
  _DAT_01d22c10 = 0;
  _DAT_01d22c14 = 0x10;
  _DAT_01d22bf8 = 0;
  _DAT_01d22bfc = 0x10;
  _DAT_01d22bec = 8;
  _DAT_01d22c0c = 8;
  _DAT_01d22bf0 = 8;
  _DAT_01d22bf4 = 8;
  _DAT_01d22c18 = 8;
  _DAT_01d22c1c = 8;
  _DAT_01d22c00 = 8;
  _DAT_01d22c20 = 8;
  _DAT_01d22c04 = 8;
  _DAT_01d22c24 = 8;
  _DAT_01d22c08 = 8;
  _DAT_01d22c28 = 8;
  return;
}
