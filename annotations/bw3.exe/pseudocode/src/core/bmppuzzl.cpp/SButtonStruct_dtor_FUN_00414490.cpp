// Name: core_bmppuzzl.cpp_SButtonStruct_dtor_FUN_00414490
// Address: 00414490
// Address Range: [[00414490, 0041449f]]
// Convention: __cdecl
// Signature: SButtonStruct * __cdecl core_bmppuzzl_cpp_SButtonStruct_dtor_FUN_00414490(SButtonStruct *this_ptr,uint flags)

#include "nocturne.h"

SButtonStruct * __cdecl core_bmppuzzl_cpp_SButtonStruct_dtor_FUN_00414490(SButtonStruct *this_ptr,uint flags)

{
  SButtonStruct *pSVar1;
  
  pSVar1 = (SButtonStruct *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&this_ptr->bitmap,0);
  return pSVar1;
}
