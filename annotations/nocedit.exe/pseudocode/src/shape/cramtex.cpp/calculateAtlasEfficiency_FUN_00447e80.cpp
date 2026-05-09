// Name: shape_cramtex.cpp_calculateAtlasEfficiency_FUN_00447e80
// Address: 00447e80
// Address Range: [[00447e80, 00447f15]]
// Convention: __cdecl
// Signature: float __cdecl shape_cramtex_cpp_calculateAtlasEfficiency_FUN_00447e80(void)

#include "nocturne.h"

float __cdecl shape_cramtex_cpp_calculateAtlasEfficiency_FUN_00447e80(void)

{
  CCramTex *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < g_CramTextureCount) {
    pCVar1 = g_CramSortedTextureEntries;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + ((pCVar1->final_bottom - pCVar1->final_top) - g_CramPaddingCalculation) *
                      ((pCVar1->final_right - pCVar1->final_left) - g_CramPaddingCalculation);
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < g_CramTextureCount);
  }
  return ((float)iVar3 * (float)100) /
         (float)(g_CramCurrentAcceptableSize * g_CramCurrentAcceptableSize * g_CramTotalMaps);
}
