// Name: engine_special.cpp_add3dLine_FUN_00582740
// Address: 00582740
// Address Range: [[00582740, 00582768]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_add3dLine_FUN_00582740(void *start_point,void *end_point,int line_style)

#include "nocturne.h"

int __cdecl engine_special_cpp_add3dLine_FUN_00582740(void *start_point,void *end_point,int line_style)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_add3dLine)(start_point,end_point,line_style);
  return iVar1;
}
