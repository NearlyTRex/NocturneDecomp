// Name: engine_special.cpp_setColorTable16_FUN_005325c0
// Address: 005325c0
// Address Range: [[005325c0, 005325ee]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setColorTable16_FUN_005325c0(uchar *source_palette,ushort *color_table)

#include "nocturne.h"

int __cdecl engine_special_cpp_setColorTable16_FUN_005325c0(uchar *source_palette,ushort *color_table)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setColorTable16)(g_SourcePaletteData,g_ColorTable16);
  if (iVar1 != 0) {
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0();
  }
  return iVar1;
}
