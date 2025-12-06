// Name: shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
// Address: 004478c0
// Address Range: [[004478c0, 00447920]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry * reference_entry)

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry *reference_entry)

{
  SCramWorkingEntry *pSVar1;
  int iVar2;
  int iVar3;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  iVar2 = 0;
  iVar3 = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar1 = g_CramSortedTextureEntries;
    do {
      if ((((reference_entry->assigned_map_number == pSVar1->assigned_map_number) &&
           (iVar3 < pSVar1->final_bottom)) && (pSVar1->final_bottom <= reference_entry->final_top))
         && ((pSVar1->final_left < reference_entry->final_right &&
             (reference_entry->final_left < pSVar1->final_right)))) {
        iVar3 = pSVar1->final_bottom;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}
