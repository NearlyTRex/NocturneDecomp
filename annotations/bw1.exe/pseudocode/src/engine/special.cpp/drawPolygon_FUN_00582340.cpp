// Name: engine_special.cpp_drawPolygon_FUN_00582340
// Address: 00582340
// Address Range: [[00582340, 00582368]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolygon_FUN_00582340(SRenderVertex *vertices,int vertex_count,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawPolygon_FUN_00582340(SRenderVertex *vertices,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02c833c4)(vertices,vertex_count,render_flags);
  return iVar1;
}
