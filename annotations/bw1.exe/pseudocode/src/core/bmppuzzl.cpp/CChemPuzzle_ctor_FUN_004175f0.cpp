// Name: core_bmppuzzl.cpp_CChemPuzzle_ctor_FUN_004175f0
// Address: 004175f0
// Address Range: [[004175f0, 00417625]]
// Convention: unknown
// Signature: CChemPuzzle * core_bmppuzzl_cpp_CChemPuzzle_ctor_FUN_004175f0(CChemPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CChemPuzzle * core_bmppuzzl_cpp_CChemPuzzle_ctor_FUN_004175f0(CChemPuzzle *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  void *pvVar3;
  
  iVar1 = engine_alphabit_cpp_FUN_00415ba0(this_ptr);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0((CAlphaBitmap *)(iVar1 + 4));
  pvVar3 = __arrinit(&pCVar2[5].act,0x32,(WatcomTypeInfo *)&DAT_005fca90);
  ((CChemPuzzle *)((int)pvVar3 + -0x70))->vtable = &g_CChemPuzzleVTable;
  return (CChemPuzzle *)((int)pvVar3 + -0x70);
}
