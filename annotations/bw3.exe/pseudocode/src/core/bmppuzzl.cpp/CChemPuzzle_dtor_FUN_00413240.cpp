// Name: core_bmppuzzl.cpp_CChemPuzzle_dtor_FUN_00413240
// Address: 00413240
// Address Range: [[00413240, 004132b2]]
// Convention: unknown
// Signature: CChemPuzzle * core_bmppuzzl_cpp_CChemPuzzle_dtor_FUN_00413240(CChemPuzzle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CChemPuzzle * core_bmppuzzl_cpp_CChemPuzzle_dtor_FUN_00413240(CChemPuzzle *this_ptr,uint flags)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  CChemPuzzle *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CChemPuzzleTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CChemPuzzleVTable;
  iVar1 = core_bmppuzzl_cpp_FUN_004144a0(this_ptr->buttons,0);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300((CAlphaBitmap *)(iVar1 + -0x6c),0);
  pCVar3 = (CChemPuzzle *)core_bmppuzzl_cpp_FUN_00411980(&pCVar2[-1].height,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005a30c4(pCVar3);
  return pCVar3;
}
