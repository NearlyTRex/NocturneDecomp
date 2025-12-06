// Name: wincore_windll.cpp_drawPolygon_FUN_005b75e0
// Address: 005b75e0
// Address Range: [[005b75e0, 005b7608]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_drawPolygon_FUN_005b75e0(SRenderVertex * vertices, int vertex_count, int render_flags)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_drawPolygon_FUN_005b75e0
          (SRenderVertex *vertices,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_drawPolygon)(vertices,vertex_count,render_flags);
  return iVar1;
}
