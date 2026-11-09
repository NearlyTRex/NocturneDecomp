// Name: unkafter_alphabit.cpp_CAudioRecPuzzle_dtor_FUN_00411bb0
// Address: 00411bb0
// Address Range: [[00411bb0, 00411c22]]
// Convention: unknown
// Signature: CAudioRecPuzzle * unkafter_alphabit_cpp_CAudioRecPuzzle_dtor_FUN_00411bb0(CAudioRecPuzzle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAudioRecPuzzle * unkafter_alphabit_cpp_CAudioRecPuzzle_dtor_FUN_00411bb0(CAudioRecPuzzle *this_ptr,uint flags)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  CAudioRecPuzzle *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CAudioRecPuzzleTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  *(byte ***)this_ptr = &g_CAudioRecPuzzleVTable;
  iVar1 = unkafter_superopt_cpp_FUN_004144c0(&this_ptr->field_0x54,0);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300((CAlphaBitmap *)(iVar1 + -0x50),0);
  pCVar3 = (CAudioRecPuzzle *)unkafter_alphabit_cpp_FUN_00411980(&pCVar2[-1].field_0x10,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005a30c4(pCVar3);
  return pCVar3;
}
