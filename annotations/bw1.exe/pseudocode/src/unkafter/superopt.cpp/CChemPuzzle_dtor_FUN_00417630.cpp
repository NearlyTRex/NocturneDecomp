// Name: unkafter_superopt.cpp_CChemPuzzle_dtor_FUN_00417630
// Address: 00417630
// Address Range: [[00417630, 004176a2]]
// Convention: unknown
// Signature: CChemPuzzle * unkafter_superopt_cpp_CChemPuzzle_dtor_FUN_00417630(CChemPuzzle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CChemPuzzle * unkafter_superopt_cpp_CChemPuzzle_dtor_FUN_00417630(CChemPuzzle *this_ptr,uint flags)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  CChemPuzzle *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CChemPuzzleTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CChemPuzzleVTable;
  iVar1 = unkafter_superopt_cpp_FUN_00418890(this_ptr->buttons,0);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0((CAlphaBitmap *)(iVar1 + -0x6c),0);
  pCVar3 = (CChemPuzzle *)unkafter_alphabit_cpp_FUN_00415bc0(&pCVar2[-1].height,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005c0344(pCVar3);
  return pCVar3;
}
