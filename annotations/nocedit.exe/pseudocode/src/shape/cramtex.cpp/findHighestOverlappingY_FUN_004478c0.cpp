// Name: shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
// Address: 004478c0
// Address Range: [[004478c0, 00447920]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry *reference_entry)

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry *reference_entry)

{
  SCramWorkingEntry *pSVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  iVar2 = 0;
  iVar3 = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar1 = g_CramSortedTextureEntries;
    do {
      if ((((*(int *)(in_stack_00000004 + 0x10) == pSVar1->assigned_map_number) &&
           (iVar3 < pSVar1->final_bottom)) &&
          (pSVar1->final_bottom <= *(int *)(in_stack_00000004 + 0x34))) &&
         ((pSVar1->final_left < *(int *)(in_stack_00000004 + 0x38) &&
          (*(int *)(in_stack_00000004 + 0x30) < pSVar1->final_right)))) {
        iVar3 = pSVar1->final_bottom;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}
