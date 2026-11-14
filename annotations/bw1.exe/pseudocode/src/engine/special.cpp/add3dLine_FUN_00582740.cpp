// Name: engine_special.cpp_add3dLine_FUN_00582740
// Address: 00582740
// Address Range: [[00582740, 00582768]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_add3dLine_FUN_00582740(void *start_point,void *end_point,int line_style)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_add3dLine_FUN_00582740(void *start_point,void *end_point,int line_style)

{
  int iVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02c833e0)(start_point,end_point,line_style);
  return iVar1;
}
