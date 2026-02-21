// Name: shape_cramtex.cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10
// Address: 00447a10
// Address Range: [[00447a10, 00447a74]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(CCramTex *this_ptr)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(CCramTex *this_ptr)

{
  CCramTex *pCVar1;
  int iVar2;
  int iVar3;
  
  __STK();
  iVar2 = 0;
  iVar3 = g_CramCurrentAcceptableSize;
  if (0 < g_CramTextureCount) {
    pCVar1 = g_CramSortedTextureEntries;
    do {
      if ((((this_ptr->assigned_map_number == pCVar1->assigned_map_number) &&
           (pCVar1->final_left < iVar3)) && (this_ptr->final_right <= pCVar1->final_left)) &&
         ((pCVar1->final_top < this_ptr->final_bottom &&
          (this_ptr->final_top < pCVar1->final_bottom)))) {
        iVar3 = pCVar1->final_left;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < g_CramTextureCount);
  }
  return iVar3;
}
