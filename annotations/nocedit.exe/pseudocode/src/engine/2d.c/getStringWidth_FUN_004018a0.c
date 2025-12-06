// Name: engine_2d.c_getStringWidth_FUN_004018a0
// Address: 004018a0
// Address Range: [[004018a0, 004018f1]]
// Convention: __cdecl
// Signature: int engine_2d.c_getStringWidth_FUN_004018a0(char * text)

#include "nocturne.h"

int __cdecl engine_2d_c_getStringWidth_FUN_004018a0(char *text)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  uVar5 = 0;
  iVar6 = 0;
  pbVar4 = (byte *)text;
  do {
    uVar3 = 0xffffffff;
    pcVar7 = text;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 <= uVar5) {
      return iVar6;
    }
    bVar2 = *pbVar4;
    if ((0x1f < bVar2) && (bVar2 < 0x100)) {
      iVar6 = iVar6 + (byte)(&g_FontTable)[(bVar2 - 0x20) * 0x91] + 1;
    }
    uVar5 = uVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while( true );
}
