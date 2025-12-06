// Name: wincore_windll.cpp_drawPolygon2_FUN_005b7610
// Address: 005b7610
// Address Range: [[005b7610, 005b7638]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_drawPolygon2_FUN_005b7610(SRenderVertex * * vertex_array, int vertex_count, int render_flags)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_drawPolygon2_FUN_005b7610
          (SRenderVertex **vertex_array,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_drawPolygon2)(vertex_array,vertex_count,render_flags);
  return iVar1;
}
