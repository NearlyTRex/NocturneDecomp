// Name: engine_special.cpp_drawPolygon2_FUN_0055f920
// Address: 0055f920
// Address Range: [[0055f920, 0055f948]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolygon2_FUN_0055f920(SRenderVertex **vertex_array,int vertex_count,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawPolygon2_FUN_0055f920(SRenderVertex **vertex_array,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bbf8)(vertex_array,vertex_count,render_flags);
  return iVar1;
}
