// Name: engine_2d.c_plotPixel_FUN_00401530
// Address: 00401530
// Address Range: [[00401530, 0040159a]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_plotPixel_FUN_00401530(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_plotPixel_FUN_00401530(int x,int y)

{
  int iVar1;
  
  iVar1 = y * 4;
  if (DAT_005b7624 == 8) {
    *(byte *)(x + *(int *)(&DAT_01bd2fa0 + iVar1)) = DAT_01c00c70;
    return;
  }
  if (DAT_005b7624 == 0x10) {
    *(ushort *)(x * 2 + *(int *)(&DAT_01bd2fa0 + iVar1)) =
         *(ushort *)(&DAT_01bff720 + (_DAT_01c00c70 & 0xff) * 2);
    return;
  }
  *(uint *)(x * 4 + *(int *)(&DAT_01bd2fa0 + iVar1)) =
       *(uint *)((_DAT_01c00c70 & 0xff) * 4 + 0x1bff920);
  return;
}
