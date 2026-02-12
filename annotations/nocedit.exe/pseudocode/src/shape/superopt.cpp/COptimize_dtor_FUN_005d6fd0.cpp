// Name: shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0
// Address: 005d6fd0
// Address Range: [[005d6fd0, 005d6ff1]]
// Convention: __cdecl
// Signature: COptimize * __cdecl shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0(COptimize *this_ptr,uint flags)

#include "nocturne.h"

COptimize * __cdecl shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0(COptimize *this_ptr,uint flags)

{
  COptimize *pCVar1;
  
  this_ptr->vtable = &g_COptimizeVTable;
  shape_superopt_cpp_COptimize_FUN_005d7000(this_ptr);
  pCVar1 = (COptimize *)shape_superopt_cpp_CObj_dtor_FUN_005d2260(&this_ptr->obj,0);
  return pCVar1;
}
