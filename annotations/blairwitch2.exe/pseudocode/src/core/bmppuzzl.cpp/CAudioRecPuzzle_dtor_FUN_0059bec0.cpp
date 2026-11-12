// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_0059bec0
// Address: 0059bec0
// Address Range: [[0059bec0, 0059bf2c]]
// Convention: unknown
// Signature: CAudioRecPuzzle * core_bmppuzzl_cpp_CAudioRecPuzzle_dtor_FUN_0059bec0(CAudioRecPuzzle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAudioRecPuzzle * core_bmppuzzl_cpp_CAudioRecPuzzle_dtor_FUN_0059bec0(CAudioRecPuzzle *this_ptr,uint flags)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  CAudioRecPuzzle *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CAudioRecPuzzleTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  iVar1 = core_bmppuzzl_cpp_FUN_0059bfc0(this_ptr->buttons,0);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440((CAlphaBitmap *)(iVar1 + -0x48),0);
  pCVar3 = (CAudioRecPuzzle *)core_zombie_cpp_FUN_0059ab50(&pCVar2[-1].height,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005b7fdc(pCVar3);
  return pCVar3;
}
