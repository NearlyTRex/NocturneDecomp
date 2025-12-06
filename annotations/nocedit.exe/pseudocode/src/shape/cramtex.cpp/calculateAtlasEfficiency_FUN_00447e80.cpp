// Name: shape_cramtex.cpp_calculateAtlasEfficiency_FUN_00447e80
// Address: 00447e80
// Address Range: [[00447e80, 00447f15]]
// Convention: __cdecl
// Signature: double shape_cramtex.cpp_calculateAtlasEfficiency_FUN_00447e80(void)

#include "nocturne.h"

double __cdecl shape_cramtex_cpp_calculateAtlasEfficiency_FUN_00447e80(void)

{
  SCramWorkingEntry *pSVar1;
  int iVar2;
  int iVar3;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x20);
  iVar2 = 0;
  iVar3 = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar1 = g_CramSortedTextureEntries;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + ((pSVar1->final_bottom - pSVar1->final_top) - g_CramPaddingCalculation) *
                      ((pSVar1->final_right - pSVar1->final_left) - g_CramPaddingCalculation);
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return (double)CONCAT44 /* combine 2-byte values */(g_CramTextureCount,
                          ((float)iVar3 * (float)100) /
                          (float)(g_CramCurrentAcceptableSize * g_CramCurrentAcceptableSize *
                                 g_CramTotalMaps));
}
