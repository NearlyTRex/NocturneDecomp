// Name: engine_special.cpp_drawPolygon2_FUN_00582370
// Address: 00582370
// Address Range: [[00582370, 00582398]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolygon2_FUN_00582370(SRenderVertex **vertex_array,int vertex_count,int render_flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_drawPolygon2_FUN_00582370(SRenderVertex **vertex_array,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_drawPolygon2)(vertex_array,vertex_count,render_flags);
  return iVar1;
}
