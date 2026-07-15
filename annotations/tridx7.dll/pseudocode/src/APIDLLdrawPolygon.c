// Name: APIDLLdrawPolygon
// Address: 10004380
// Address Range: [[10004380, 100043b3]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLdrawPolygon(SRenderVertex *vertices,int vertex_count,int render_flags)

#include "nocturne.h"

int __cdecl APIDLLdrawPolygon(SRenderVertex *vertices,int vertex_count,int render_flags)

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
  iVar1 = APIDLLdrawPolygon2((SRenderVertex **)&DAT_10138fc0,vertex_count,render_flags);
  return iVar1;
}
