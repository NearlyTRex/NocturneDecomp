// Name: shape_cramtex.cpp_CCramTex_addTextureEntry_FUN_00446100
// Address: 00446100
// Address Range: [[00446100, 0044613a]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_CCramTex_addTextureEntry_FUN_00446100(CCramTex *this_ptr)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_CCramTex_addTextureEntry_FUN_00446100(CCramTex *this_ptr)

{
  int iVar1;
  
  __STK();
  iVar1 = shape_cramtex_cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160
                    (g_CramSortedTextureEntries + g_CramPlacedTextureCount);
  if (0 < iVar1) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}
