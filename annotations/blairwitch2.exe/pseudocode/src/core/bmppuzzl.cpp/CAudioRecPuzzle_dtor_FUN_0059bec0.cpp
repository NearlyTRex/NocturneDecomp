// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_0059bec0
// Address: 0059bec0
// Address Range: [[0059bec0, 0059bf2c]]
// Convention: __cdecl
// Signature: CAudioRecPuzzle * __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_dtor_FUN_0059bec0(CAudioRecPuzzle *this_ptr,uint flags)

#include "nocturne.h"

CAudioRecPuzzle * __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_dtor_FUN_0059bec0(CAudioRecPuzzle *this_ptr,uint flags)

{
  SButtonStruct *pSVar1;
  CAlphaBitmap *pCVar2;
  CAudioRecPuzzle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAudioRecPuzzleTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_bmppuzzl_cpp_SButtonStruct_arrdtor30_FUN_0059bfc0(this_ptr->buttons,0);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440
                     ((CAlphaBitmap *)&pSVar1[-2].bitmap.height,0);
  ptr = (CAudioRecPuzzle *)
        core_bmppuzzl_cpp_CPuzzle_dtor_FUN_0059ab50((CPuzzle *)&pCVar2[-1].height,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
