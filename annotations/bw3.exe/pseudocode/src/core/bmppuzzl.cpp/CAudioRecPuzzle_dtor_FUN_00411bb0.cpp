// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_00411bb0
// Address: 00411bb0
// Address Range: [[00411bb0, 00411c22]]
// Convention: __cdecl
// Signature: CAudioRecPuzzle * __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_dtor_FUN_00411bb0(CAudioRecPuzzle *this_ptr,uint flags)

#include "nocturne.h"

CAudioRecPuzzle * __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_dtor_FUN_00411bb0(CAudioRecPuzzle *this_ptr,uint flags)

{
  SButtonStruct *pSVar1;
  CAlphaBitmap *pCVar2;
  CAudioRecPuzzle *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAudioRecPuzzleTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CAudioRecPuzzleVTable;
  pSVar1 = core_bmppuzzl_cpp_SButtonStruct_arrdtor50_FUN_004144c0(this_ptr->buttons,0);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300
                     ((CAlphaBitmap *)&pSVar1[-2].bitmap.act,0);
  pCVar3 = (CAudioRecPuzzle *)
           core_bmppuzzl_cpp_CPuzzle_dtor_FUN_00411980((CPuzzle *)&pCVar2[-1].height,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005a30c4(pCVar3);
  return pCVar3;
}
