// Name: wincore_windll.cpp_add3dLine_FUN_005b79d3
// Address: 005b79d3
// Address Range: [[005b79d3, 005b7a08]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_add3dLine_FUN_005b79d3(void *start_point,void *end_point,int line_style)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_add3dLine_FUN_005b79d3(void *start_point,void *end_point,int line_style)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_add3dLine)(start_point,end_point,line_style);
  return iVar1;
}
