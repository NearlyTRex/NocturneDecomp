// Name: core_bmppuzzl.cpp_CChemPuzzle_ctor_FUN_00413200
// Address: 00413200
// Address Range: [[00413200, 00413235]]
// Convention: __cdecl
// Signature: CChemPuzzle * __cdecl core_bmppuzzl_cpp_CChemPuzzle_ctor_FUN_00413200(CChemPuzzle *this_ptr)

#include "nocturne.h"

CChemPuzzle * __cdecl core_bmppuzzl_cpp_CChemPuzzle_ctor_FUN_00413200(CChemPuzzle *this_ptr)

{
  CPuzzle *pCVar1;
  CAlphaBitmap *pCVar2;
  void *pvVar3;
  
  pCVar1 = core_bmppuzzl_cpp_CPuzzle_ctor_FUN_00411960(&this_ptr->base);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0((CAlphaBitmap *)(pCVar1 + 1));
  pvVar3 = __arrinit(&pCVar2[5].act,0x32,(WatcomTypeInfo *)&DAT_005dbfa0);
  (((CChemPuzzle *)((int)pvVar3 + -0x70))->base).vtable = &g_CChemPuzzleVTable;
  return (CChemPuzzle *)((int)pvVar3 + -0x70);
}
