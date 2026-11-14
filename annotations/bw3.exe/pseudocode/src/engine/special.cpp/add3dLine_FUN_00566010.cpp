// Name: engine_special.cpp_add3dLine_FUN_00566010
// Address: 00566010
// Address Range: [[00566010, 00566038]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_add3dLine_FUN_00566010(void *start_point,void *end_point,int line_style)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_add3dLine_FUN_00566010(void *start_point,void *end_point,int line_style)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf603c)(start_point,end_point,line_style);
  return iVar1;
}
