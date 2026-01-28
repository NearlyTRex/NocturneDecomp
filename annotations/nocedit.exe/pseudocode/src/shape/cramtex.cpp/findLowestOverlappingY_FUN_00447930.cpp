// Name: shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
// Address: 00447930
// Address Range: [[00447930, 00447994]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry *bounds_entry)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry *bounds_entry)

{
  SCramWorkingEntry *pSVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  iVar2 = 0;
  iVar3 = g_CramCurrentAcceptableSize;
  if (0 < (int)g_CramTextureCount) {
    pSVar1 = g_CramSortedTextureEntries;
    do {
      if ((((*(int *)(in_stack_00000004 + 0x10) == pSVar1->assigned_map_number) &&
           (pSVar1->final_top < iVar3)) && (*(int *)(in_stack_00000004 + 0x3c) <= pSVar1->final_top)
          ) && ((pSVar1->final_left < *(int *)(in_stack_00000004 + 0x38) &&
                (*(int *)(in_stack_00000004 + 0x30) < pSVar1->final_right)))) {
        iVar3 = pSVar1->final_top;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}
