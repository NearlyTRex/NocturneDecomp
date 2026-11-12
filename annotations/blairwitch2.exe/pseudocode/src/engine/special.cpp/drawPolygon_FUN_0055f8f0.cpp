// Name: engine_special.cpp_drawPolygon_FUN_0055f8f0
// Address: 0055f8f0
// Address Range: [[0055f8f0, 0055f918]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolygon_FUN_0055f8f0(SRenderVertex *vertices,int vertex_count,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawPolygon_FUN_0055f8f0(SRenderVertex *vertices,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bbf4)(vertices,vertex_count,render_flags);
  return iVar1;
}
