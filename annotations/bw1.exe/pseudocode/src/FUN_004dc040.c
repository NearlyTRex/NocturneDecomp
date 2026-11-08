// Name: FUN_004dc040
// Address: 004dc040
// Address Range: [[004dc040, 004dc17d]]
// Convention: unknown
// Signature: void FUN_004dc040(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc040(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x1cd0b44;
  do {
    FUN_0040d1c0(puVar1);
    puVar1 = puVar1 + 0x14;
  } while (puVar1 != &DAT_01cd0be4);
  FUN_0040d220(0x1cd0b44,"@cursor" + 1,0x10,0x10);
  FUN_0040d220(0x1cd0b58,"upwhite",0x10,0x10);
  FUN_0040d220(0x1cd0b6c,"downwhite",0x10,0x10);
  FUN_0040d220(0x1cd0b80,"leftwhite",0x10,0x10);
  FUN_0040d220(0x1cd0b94,"rightwhite",0x10,0x10);
  FUN_0040d220(0x1cd0ba8,"crosshairsgreen",0x10,0x10);
  FUN_0040d220(0x1cd0bbc,"crosshairsred",0x10,0x10);
  FUN_0040d220(0x1cd0bd0,&DAT_005e36a0,0x10,0x10);
  _DAT_01cd0c08 = 0;
  _DAT_01cd0c0c = 0x10;
  _DAT_01cd0bf0 = 0;
  _DAT_01cd0bf4 = 0x10;
  _DAT_01cd0be4 = 8;
  _DAT_01cd0c04 = 8;
  _DAT_01cd0be8 = 8;
  _DAT_01cd0bec = 8;
  _DAT_01cd0c10 = 8;
  _DAT_01cd0c14 = 8;
  _DAT_01cd0bf8 = 8;
  _DAT_01cd0c18 = 8;
  _DAT_01cd0bfc = 8;
  _DAT_01cd0c1c = 8;
  _DAT_01cd0c00 = 8;
  _DAT_01cd0c20 = 8;
  return;
}
