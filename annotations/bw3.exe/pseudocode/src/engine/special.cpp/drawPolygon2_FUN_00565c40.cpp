// Name: engine_special.cpp_drawPolygon2_FUN_00565c40
// Address: 00565c40
// Address Range: [[00565c40, 00565c68]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolygon2_FUN_00565c40(SRenderVertex **vertex_array,int vertex_count,int render_flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_drawPolygon2_FUN_00565c40(SRenderVertex **vertex_array,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02cf6024)(vertex_array,vertex_count,render_flags);
  return iVar1;
}
