// Name: engine_2d.c_plotPixelWithDepth_FUN_00401680
// Address: 00401680
// Address Range: [[00401680, 00401705]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401680(int x_coord,int y_coord,uint depth_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401680(int x_coord,int y_coord,uint depth_value)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  iVar1 = DAT_005b7624;
  iVar2 = y_coord * 4;
  puVar3 = (uint *)(*(int *)(&DAT_01bd4260 + iVar2) + x_coord * 4);
  if (*puVar3 < depth_value) {
    *puVar3 = depth_value;
    if (iVar1 == 8) {
      *(byte *)(*(int *)(&DAT_01bd2fa0 + iVar2) + x_coord) = DAT_01c00c70;
      return;
    }
    if (iVar1 != 0x10) {
      *(uint *)(x_coord * 4 + *(int *)(&DAT_01bd2fa0 + iVar2)) =
           *(uint *)((_DAT_01c00c70 & 0xff) * 4 + 0x1bff920);
      return;
    }
    *(ushort *)(x_coord * 2 + *(int *)(&DAT_01bd2fa0 + iVar2)) =
         *(ushort *)(&DAT_01bff720 + (_DAT_01c00c70 & 0xff) * 2);
  }
  return;
}
