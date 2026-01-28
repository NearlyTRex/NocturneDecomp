// Name: shape_cramtex.cpp_qsortByLargestDimension_FUN_004457f0
// Address: 004457f0
// Address Range: [[004457f0, 0044581d]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0 (SCramWorkingEntry *entry_a,SCramWorkingEntry *entry_b)

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0
          (SCramWorkingEntry *entry_a,SCramWorkingEntry *entry_b)

{
  int iVar1;
  
  iVar1 = entry_b->height;
  if (entry_b->height < entry_b->width) {
    iVar1 = entry_b->width;
  }
  if (entry_a->height < entry_a->width) {
    return iVar1 - entry_a->width;
  }
  return iVar1 - entry_a->height;
}
