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
  if (DAT_006141c0 == 8) {
    *(byte *)(x + *(int *)(&DAT_01c2a38c + iVar1)) = DAT_01c35e60;
    return;
  }
  if (DAT_006141c0 == 0x10) {
    *(ushort *)(x * 2 + *(int *)(&DAT_01c2a38c + iVar1)) =
         *(ushort *)(&DAT_01c34910 + (_DAT_01c35e60 & 0xff) * 2);
    return;
  }
  *(uint *)(x * 4 + *(int *)(&DAT_01c2a38c + iVar1)) =
       *(uint *)((_DAT_01c35e60 & 0xff) * 4 + 0x1c34b10);
  return;
}
