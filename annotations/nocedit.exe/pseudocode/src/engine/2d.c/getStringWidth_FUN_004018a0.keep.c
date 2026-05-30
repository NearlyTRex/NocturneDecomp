// Name: engine_2d.c_getStringWidth_FUN_004018a0
// Address: 004018a0
// MANUAL RECONSTRUCTION
// Address Range: [[004018a0, 004018f1]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_getStringWidth_FUN_004018a0(char *text)

#include "nocturne.h"

int __cdecl engine_2d_c_getStringWidth_FUN_004018a0(char *text)

{
  uint bVar2;
  byte *pbVar4;
  uint uVar5;
  int iVar6;

  uVar5 = 0;
  iVar6 = 0;
  pbVar4 = (byte *)text;
  do {
    if (strlen(text) <= uVar5) {
      return iVar6;
    }
    bVar2 = *pbVar4;
    if ((0x1f < bVar2) && (bVar2 < 0x100)) {
      iVar6 = iVar6 + g_FontTable[bVar2 - 0x20].width + 1;
    }
    uVar5 = uVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while( true );
}
