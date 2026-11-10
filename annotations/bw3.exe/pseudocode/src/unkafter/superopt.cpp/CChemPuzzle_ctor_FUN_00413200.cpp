// Name: unkafter_superopt.cpp_CChemPuzzle_ctor_FUN_00413200
// Address: 00413200
// Address Range: [[00413200, 00413235]]
// Convention: unknown
// Signature: CChemPuzzle * unkafter_superopt_cpp_CChemPuzzle_ctor_FUN_00413200(CChemPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CChemPuzzle * unkafter_superopt_cpp_CChemPuzzle_ctor_FUN_00413200(CChemPuzzle *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  
  iVar1 = unkafter_alphabit_cpp_FUN_00411960(this_ptr);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0((CAlphaBitmap *)(iVar1 + 4));
  iVar1 = __arrinit(&pCVar2[5].act,0x32,&DAT_005dbfa0);
  *(byte ***)(iVar1 + -0x70) = &g_CChemPuzzleVTable;
  return (CChemPuzzle *)(iVar1 + -0x70);
}
