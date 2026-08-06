// Name: engine_3d.c_lookupLitColor_FUN_00404680
// Address: 00404680
// Address Range: [[00404680, 0040470d]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_lookupLitColor_FUN_00404680(int color_index,int light_level)

#include "nocturne.h"

int __cdecl engine_3d_c_lookupLitColor_FUN_00404680(int color_index,int light_level)

{
  uchar uVar1;
  int iVar2;
  
  if (-1 < color_index) {
    iVar2 = *(int *)(&DAT_005acbc4 + color_index * 4) * 3;
    uVar1 = g_LightTable[light_level >> 8]
            [g_ColorCubeLookup
             [(uint)(g_SourcePaletteData[iVar2 + 1] >> 3) * 0x20 +
              (uint)(g_SourcePaletteData[iVar2] >> 3) * 0x400 +
              (uint)(g_SourcePaletteData[iVar2 + 2] >> 3)]];
    return CONCAT13(uVar1,CONCAT12(uVar1,CONCAT11(uVar1,uVar1)));
  }
  return color_index * -0x1010101;
}
