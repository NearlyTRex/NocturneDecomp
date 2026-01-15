// Name: wincore_windll.cpp_setColorTable16_FUN_005b7579
// Address: 005b7579
// Address Range: [[005b7579, 005b75ae]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_setColorTable16_FUN_005b7579(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_setColorTable16_FUN_005b7579(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setColorTable16)(g_SourcePaletteData,g_ColorTable16);
  if (iVar1 != 0) {
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
  }
  return iVar1;
}
