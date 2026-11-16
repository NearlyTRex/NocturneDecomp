// Name: core_bmppuzzl.cpp_CExamplePuzzle_dtor_FUN_0059bf70
// Address: 0059bf70
// Address Range: [[0059bf70, 0059bfbd]]
// Convention: __cdecl
// Signature: CExamplePuzzle * __cdecl core_bmppuzzl_cpp_CExamplePuzzle_dtor_FUN_0059bf70(CExamplePuzzle *this_ptr,uint flags)

#include "nocturne.h"

CExamplePuzzle * __cdecl core_bmppuzzl_cpp_CExamplePuzzle_dtor_FUN_0059bf70(CExamplePuzzle *this_ptr,uint flags)

{
  CExamplePuzzle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CExamplePuzzleTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CExamplePuzzle *)core_bmppuzzl_cpp_CPuzzle_dtor_FUN_0059ab50(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
