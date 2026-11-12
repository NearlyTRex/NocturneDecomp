// Name: core_bmppuzzl.cpp_CExamplePuzzle_dtor_FUN_0059bf70
// Address: 0059bf70
// Address Range: [[0059bf70, 0059bfbd]]
// Convention: unknown
// Signature: CExamplePuzzle * core_bmppuzzl_cpp_CExamplePuzzle_dtor_FUN_0059bf70(CExamplePuzzle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CExamplePuzzle * core_bmppuzzl_cpp_CExamplePuzzle_dtor_FUN_0059bf70(CExamplePuzzle *this_ptr,uint flags)

{
  CExamplePuzzle *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CExamplePuzzleTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CExamplePuzzle *)core_zombie_cpp_FUN_0059ab50(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
