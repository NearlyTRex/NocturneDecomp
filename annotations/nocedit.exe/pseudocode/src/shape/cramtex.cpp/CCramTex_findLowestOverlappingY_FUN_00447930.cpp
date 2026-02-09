// Name: shape_cramtex.cpp_CCramTex_findLowestOverlappingY_FUN_00447930
// Address: 00447930
// Address Range: [[00447930, 00447994]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(CCramTex *this_ptr)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(CCramTex *this_ptr)

{
  CCramTex *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  __STK();
  iVar2 = 0;
  iVar3 = g_CramCurrentAcceptableSize;
  if (0 < (int)g_CramTextureCount) {
    pCVar1 = g_CramSortedTextureEntries;
    do {
      if ((((*(int *)(in_stack_00000004 + 0x10) == pCVar1->assigned_map_number) &&
           (pCVar1->final_top < iVar3)) && (*(int *)(in_stack_00000004 + 0x3c) <= pCVar1->final_top)
          ) && ((pCVar1->final_left < *(int *)(in_stack_00000004 + 0x38) &&
                (*(int *)(in_stack_00000004 + 0x30) < pCVar1->final_right)))) {
        iVar3 = pCVar1->final_top;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}
