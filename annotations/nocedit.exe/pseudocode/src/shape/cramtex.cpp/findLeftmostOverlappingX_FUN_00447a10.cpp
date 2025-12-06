// Name: shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
// Address: 00447a10
// Address Range: [[00447a10, 00447a74]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry *bounds_entry)

{
  SCramWorkingEntry *pSVar1;
  int iVar2;
  int iVar3;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  iVar2 = 0;
  iVar3 = g_CramCurrentAcceptableSize;
  if (0 < (int)g_CramTextureCount) {
    pSVar1 = g_CramSortedTextureEntries;
    do {
      if ((((bounds_entry->assigned_map_number == pSVar1->assigned_map_number) &&
           (pSVar1->final_left < iVar3)) && (bounds_entry->final_right <= pSVar1->final_left)) &&
         ((pSVar1->final_top < bounds_entry->final_bottom &&
          (bounds_entry->final_top < pSVar1->final_bottom)))) {
        iVar3 = pSVar1->final_left;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}
