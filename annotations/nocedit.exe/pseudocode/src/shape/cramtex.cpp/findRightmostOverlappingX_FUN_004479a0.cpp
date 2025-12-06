// Name: shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
// Address: 004479a0
// Address Range: [[004479a0, 00447a00]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry * bounds_entry)

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry *bounds_entry)

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
      if ((((bounds_entry->assigned_map_number == pSVar1->assigned_map_number) &&
           (iVar3 < pSVar1->final_right)) && (pSVar1->final_right <= bounds_entry->final_left)) &&
         ((pSVar1->final_top < bounds_entry->final_bottom &&
          (bounds_entry->final_top < pSVar1->final_bottom)))) {
        iVar3 = pSVar1->final_right;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}
