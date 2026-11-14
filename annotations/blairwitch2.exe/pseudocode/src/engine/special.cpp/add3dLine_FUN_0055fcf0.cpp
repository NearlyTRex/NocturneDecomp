// Name: engine_special.cpp_add3dLine_FUN_0055fcf0
// Address: 0055fcf0
// Address Range: [[0055fcf0, 0055fd18]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_add3dLine_FUN_0055fcf0(void *start_point,void *end_point,int line_style)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_add3dLine_FUN_0055fcf0(void *start_point,void *end_point,int line_style)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc10)(start_point,end_point,line_style);
  return iVar1;
}
