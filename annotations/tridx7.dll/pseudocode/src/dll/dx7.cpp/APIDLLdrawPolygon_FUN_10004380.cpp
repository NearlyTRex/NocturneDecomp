// Name: dll_dx7.cpp_APIDLLdrawPolygon_FUN_10004380
// Address: 10004380
// Address Range: [[10004380, 100043b3]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLdrawPolygon_FUN_10004380(SRenderVertex *vertices,int vertex_count,int render_flags)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLdrawPolygon_FUN_10004380(SRenderVertex *vertices,int vertex_count,int render_flags)

{
  int iVar1;
  SRenderVertex **ppSVar2;
  
                    /* 0x4380  13  APIDLLdrawPolygon */
  if (0 < vertex_count) {
    ppSVar2 = g_PolygonVertexPtrs;
    iVar1 = vertex_count;
    do {
      *ppSVar2 = vertices;
      ppSVar2 = ppSVar2 + 1;
      vertices = vertices + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = dll_dx7_cpp_APIDLLdrawPolygon2_FUN_100043c0(g_PolygonVertexPtrs,vertex_count,render_flags)
  ;
  return iVar1;
}
