// Name: shape_cramtex.cpp_addTextureEntry_FUN_00446100
// Address: 00446100
// Address Range: [[00446100, 0044613a]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_addTextureEntry_FUN_00446100(SCramWorkingEntry *texture_entry)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_addTextureEntry_FUN_00446100(SCramWorkingEntry *texture_entry)

{
  int iVar1;
  SCramWorkingEntry *in_stack_00000004;
  
  __STK(8);
  iVar1 = shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160(in_stack_00000004);
  if (0 < iVar1) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}
