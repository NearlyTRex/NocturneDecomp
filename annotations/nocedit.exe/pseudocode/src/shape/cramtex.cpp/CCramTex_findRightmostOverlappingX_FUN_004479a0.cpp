// Name: shape_cramtex.cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0
// Address: 004479a0
// Address Range: [[004479a0, 00447a00]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(CCramTex *this_ptr)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(CCramTex *this_ptr)

{
  CCramTex *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  __STK();
  iVar2 = 0;
  iVar3 = 0;
  if (0 < (int)g_CramTextureCount) {
    pCVar1 = g_CramSortedTextureEntries;
    do {
      if ((((*(int *)(in_stack_00000004 + 0x10) == pCVar1->assigned_map_number) &&
           (iVar3 < pCVar1->final_right)) &&
          (pCVar1->final_right <= *(int *)(in_stack_00000004 + 0x30))) &&
         ((pCVar1->final_top < *(int *)(in_stack_00000004 + 0x3c) &&
          (*(int *)(in_stack_00000004 + 0x34) < pCVar1->final_bottom)))) {
        iVar3 = pCVar1->final_right;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}
