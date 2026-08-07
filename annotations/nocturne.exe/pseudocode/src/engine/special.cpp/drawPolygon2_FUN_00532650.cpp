// Name: engine_special.cpp_drawPolygon2_FUN_00532650
// Address: 00532650
// Address Range: [[00532650, 00532678]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolygon2_FUN_00532650(SRenderVertex **vertex_array,int vertex_count,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawPolygon2_FUN_00532650(SRenderVertex **vertex_array,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02dc9dac)(vertex_array,vertex_count,render_flags);
  return iVar1;
}
