// Name: shape_cramtex.cpp_CCramTex_findHighestOverlappingY_FUN_004478c0
// Address: 004478c0
// Address Range: [[004478c0, 00447920]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(CCramTex *this_ptr)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(CCramTex *this_ptr)

{
  CCramTex *pCVar1;
  int iVar2;
  int iVar3;
  
  __STK();
  iVar2 = 0;
  iVar3 = 0;
  if (0 < g_CramTextureCount) {
    pCVar1 = g_CramSortedTextureEntries;
    do {
      if ((((this_ptr->assigned_map_number == pCVar1->assigned_map_number) &&
           (iVar3 < pCVar1->final_bottom)) && (pCVar1->final_bottom <= this_ptr->final_top)) &&
         ((pCVar1->final_left < this_ptr->final_right &&
          (this_ptr->final_left < pCVar1->final_right)))) {
        iVar3 = pCVar1->final_bottom;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < g_CramTextureCount);
  }
  return iVar3;
}
