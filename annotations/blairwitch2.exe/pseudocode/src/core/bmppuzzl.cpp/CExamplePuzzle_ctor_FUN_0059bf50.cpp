// Name: core_bmppuzzl.cpp_CExamplePuzzle_ctor_FUN_0059bf50
// Address: 0059bf50
// Address Range: [[0059bf50, 0059bf63]]
// Convention: __cdecl
// Signature: CExamplePuzzle * __cdecl core_bmppuzzl_cpp_CExamplePuzzle_ctor_FUN_0059bf50(CExamplePuzzle *this_ptr)

#include "nocturne.h"

CExamplePuzzle * __cdecl core_bmppuzzl_cpp_CExamplePuzzle_ctor_FUN_0059bf50(CExamplePuzzle *this_ptr)

{
  CExamplePuzzle *pCVar1;
  
  pCVar1 = (CExamplePuzzle *)core_bmppuzzl_cpp_CPuzzle_ctor_FUN_0059ab30(&this_ptr->base);
  (pCVar1->base).vtable = &g_CExamplePuzzleVTable;
  return pCVar1;
}
