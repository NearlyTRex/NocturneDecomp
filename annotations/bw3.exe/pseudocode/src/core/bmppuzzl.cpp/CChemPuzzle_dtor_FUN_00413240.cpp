// Name: core_bmppuzzl.cpp_CChemPuzzle_dtor_FUN_00413240
// Address: 00413240
// Address Range: [[00413240, 004132b2]]
// Convention: __cdecl
// Signature: CChemPuzzle * __cdecl core_bmppuzzl_cpp_CChemPuzzle_dtor_FUN_00413240(CChemPuzzle *this_ptr,uint flags)

#include "nocturne.h"

CChemPuzzle * __cdecl core_bmppuzzl_cpp_CChemPuzzle_dtor_FUN_00413240(CChemPuzzle *this_ptr,uint flags)

{
  SButtonStruct *pSVar1;
  CAlphaBitmap *pCVar2;
  CChemPuzzle *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CChemPuzzleTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CChemPuzzleVTable;
  pSVar1 = core_bmppuzzl_cpp_SButtonStruct_arrdtor50Chem_FUN_004144a0(this_ptr->buttons,0);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300((CAlphaBitmap *)&pSVar1[-3].x,0);
  pCVar3 = (CChemPuzzle *)
           core_bmppuzzl_cpp_CPuzzle_dtor_FUN_00411980((CPuzzle *)&pCVar2[-1].height,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005a30c4(pCVar3);
  return pCVar3;
}
