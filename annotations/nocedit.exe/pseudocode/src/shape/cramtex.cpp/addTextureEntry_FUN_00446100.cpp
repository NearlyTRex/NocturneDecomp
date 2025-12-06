// Name: shape_cramtex.cpp_addTextureEntry_FUN_00446100
// Address: 00446100
// Address Range: [[00446100, 0044613a]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_addTextureEntry_FUN_00446100(SCramWorkingEntry * texture_entry)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_addTextureEntry_FUN_00446100(SCramWorkingEntry *texture_entry)

{
  int iVar1;
  SCramWorkingEntry *pSStack00000004;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(8);
  pSStack00000004 = g_CramSortedTextureEntries + g_CramPlacedTextureCount;
  iVar1 = shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160(texture_entry);
  if (0 < iVar1) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}
