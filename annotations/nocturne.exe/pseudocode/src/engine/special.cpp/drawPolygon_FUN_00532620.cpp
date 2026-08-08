// Name: engine_special.cpp_drawPolygon_FUN_00532620
// Address: 00532620
// Address Range: [[00532620, 00532648]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolygon_FUN_00532620(SRenderVertex *vertices,int vertex_count,int render_flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_drawPolygon_FUN_00532620(SRenderVertex *vertices,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_drawPolygon)(vertices,vertex_count,render_flags);
  return iVar1;
}
