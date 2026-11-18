// Name: engine_special.cpp_drawPolygon_FUN_00565c10
// Address: 00565c10
// Address Range: [[00565c10, 00565c38]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolygon_FUN_00565c10(SRenderVertex *vertices,int vertex_count,int render_flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_drawPolygon_FUN_00565c10(SRenderVertex *vertices,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_drawPolygon)(vertices,vertex_count,render_flags);
  return iVar1;
}
