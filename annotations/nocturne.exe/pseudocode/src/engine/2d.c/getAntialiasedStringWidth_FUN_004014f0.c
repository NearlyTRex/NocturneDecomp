// Name: engine_2d.c_getAntialiasedStringWidth_FUN_004014f0
// Address: 004014f0
// Address Range: [[004014f0, 00401525]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_getAntialiasedStringWidth_FUN_004014f0(uchar *text)

#include "nocturne.h"

int __cdecl engine_2d_c_getAntialiasedStringWidth_FUN_004014f0(uchar *text)

{
  uchar uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  
  uVar5 = 0;
  iVar6 = 0;
  pbVar4 = text;
  do {
    uVar3 = 0xffffffff;
    puVar7 = text;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (uVar1 != '\0');
    if (~uVar3 - 1 <= uVar5) {
      return iVar6;
    }
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + g_FontCharWidths[bVar2];
  } while( true );
}
