// Name: engine_special.cpp_add3dLine_FUN_00532950
// Address: 00532950
// Address Range: [[00532950, 00532978]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_add3dLine_FUN_00532950(void *start_point,void *end_point,int line_style)

#include "nocturne.h"

int __cdecl engine_special_cpp_add3dLine_FUN_00532950(void *start_point,void *end_point,int line_style)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_add3dLine)(start_point,end_point,line_style);
  return iVar1;
}
