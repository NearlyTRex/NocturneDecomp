// Name: dll_dx7.cpp_APIDLLdrawPolygon_FUN_10004380
// Address: 10004380
// Address Range: [[10004380, 100043b3]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLdrawPolygon_FUN_10004380(SRenderVertex *vertices,int vertex_count,int render_flags)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLdrawPolygon_FUN_10004380(SRenderVertex *vertices,int vertex_count,int render_flags)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x4380  13  APIDLLdrawPolygon */
  if (0 < vertex_count) {
    piVar2 = &DAT_10138fc0;
    iVar1 = vertex_count;
    do {
      *piVar2 = (int)vertices;
      piVar2 = piVar2 + 1;
      vertices = vertices + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = dll_dx7_cpp_APIDLLdrawPolygon2_FUN_100043c0
                    ((SRenderVertex **)&DAT_10138fc0,vertex_count,render_flags);
  return iVar1;
}
