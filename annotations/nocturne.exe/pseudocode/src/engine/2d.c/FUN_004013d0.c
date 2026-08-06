// Name: engine_2d.c_FUN_004013d0
// Address: 004013d0
// Address Range: [[004013d0, 00401492]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_FUN_004013d0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6 ,byte param_7)

#include "nocturne.h"

int __cdecl engine_2d_c_FUN_004013d0(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6 ,byte param_7)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  engine_2d_c_FUN_004012d0(param_1,param_2,param_3);
  if ((0x1f < param_1) && (param_1 < 0x80)) {
    iVar5 = param_3 * 4;
    iVar1 = g_FontCharWidths[param_1];
    iVar2 = iVar5 + 0x5c;
    pbVar6 = g_FontGlyphPtrs[param_1];
    do {
      iVar4 = 0;
      puVar3 = (uchar *)(*(int *)(&DAT_01bd2fa0 + iVar5) + param_5);
      if (0 < iVar1) {
        do {
          if (*pbVar6 != 0) {
            *puVar3 = g_ColorCubeLookup[((int)(uint)*pbVar6 >> (param_7 & 0x1f) & 0xffU) * 0x421];
          }
          pbVar6 = pbVar6 + 1;
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar4 < iVar1);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != iVar2);
    return iVar1;
  }
  return 0;
}
