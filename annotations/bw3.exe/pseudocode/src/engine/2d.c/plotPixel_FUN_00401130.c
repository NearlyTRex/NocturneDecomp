// Name: engine_2d.c_plotPixel_FUN_00401130
// Address: 00401130
// Address Range: [[00401130, 0040119a]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_plotPixel_FUN_00401130(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_plotPixel_FUN_00401130(int x,int y)

{
  int iVar1;
  
  iVar1 = y * 4;
  if (DAT_005fba20 == 8) {
    *(byte *)(x + *(int *)(&DAT_01c5faec + iVar1)) = DAT_01c6b5c0;
    return;
  }
  if (DAT_005fba20 == 0x10) {
    *(ushort *)(x * 2 + *(int *)(&DAT_01c5faec + iVar1)) =
         *(ushort *)(&DAT_01c6a070 + (_DAT_01c6b5c0 & 0xff) * 2);
    return;
  }
  *(uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar1)) =
       *(uint *)((_DAT_01c6b5c0 & 0xff) * 4 + 0x1c6a270);
  return;
}
