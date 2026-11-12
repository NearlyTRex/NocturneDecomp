// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_0059bec0
// Address: 0059bec0
// Address Range: [[0059bec0, 0059bf2c]]
// Convention: unknown
// Signature: CAudioRecPuzzle * core_bmppuzzl_cpp_CAudioRecPuzzle_dtor_FUN_0059bec0(CAudioRecPuzzle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAudioRecPuzzle * core_bmppuzzl_cpp_CAudioRecPuzzle_dtor_FUN_0059bec0(CAudioRecPuzzle *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  CAudioRecPuzzle *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAudioRecPuzzleTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_bmppuzzl_cpp_CAlphaBitmap_arrdtor30_FUN_0059bfc0(&this_ptr->buttons[0].bitmap,0);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440((CAlphaBitmap *)&pCVar1[-4].act,0);
  pCVar2 = (CAudioRecPuzzle *)core_zombie_cpp_FUN_0059ab50(&pCVar1[-1].height,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
