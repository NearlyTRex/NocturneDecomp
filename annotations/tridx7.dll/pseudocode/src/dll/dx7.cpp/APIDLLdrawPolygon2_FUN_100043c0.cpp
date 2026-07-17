// Name: dll_dx7.cpp_APIDLLdrawPolygon2_FUN_100043c0
// Address: 100043c0
// Address Range: [[100043c0, 100044ac]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLdrawPolygon2_FUN_100043c0(SRenderVertex **vertex_array,int vertex_count,int render_flags)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLdrawPolygon2_FUN_100043c0(SRenderVertex **vertex_array,int vertex_count,int render_flags)

{
  WORD WVar1;
  short sVar2;
  WORD *pWVar3;
  int iVar4;
  SRenderVertex **ppSVar5;
  int iVar6;
  int iVar7;
  
                    /* 0x43c0  14  APIDLLdrawPolygon2 */
  if (g_InScene == 0) {
    return 0;
  }
  dll_dx7_cpp_applyRenderState_FUN_10003f10(render_flags);
  iVar6 = ((*vertex_array)->projected_vertex).transformed_z;
  if (1 < vertex_count) {
    iVar4 = vertex_count + -1;
    ppSVar5 = vertex_array;
    do {
      ppSVar5 = ppSVar5 + 1;
      iVar7 = ((*ppSVar5)->projected_vertex).transformed_z;
      if (iVar6 < iVar7) {
        iVar6 = iVar7;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  if (0 < vertex_count) {
    do {
      iVar7 = iVar4 + 1;
      dll_dx7_cpp_FUN_100044b0
                (vertex_array[iVar4],g_VertexBuffer + g_PendingVertexCount + iVar4,render_flags,
                 iVar6);
      iVar4 = iVar7;
    } while (iVar7 < vertex_count);
  }
  iVar4 = 0;
  iVar6 = vertex_count + -2;
  if (0 < iVar6) {
    WVar1 = (WORD)g_PendingVertexCount;
    pWVar3 = g_IndexBuffer + g_PendingIndexCount;
    g_PendingIndexCount = g_PendingIndexCount + iVar6 * 3;
    do {
      *pWVar3 = WVar1;
      sVar2 = (short)iVar4;
      pWVar3[1] = WVar1 + 1 + sVar2;
      iVar4 = iVar4 + 1;
      pWVar3[2] = WVar1 + 2 + sVar2;
      pWVar3 = pWVar3 + 3;
    } while (iVar4 < iVar6);
  }
  g_PendingVertexCount = g_PendingVertexCount + vertex_count;
  if (0x3e76 < g_PendingVertexCount) {
    dll_dx7_cpp_flushBatch_FUN_100047b0();
  }
  if (0x3e76 < g_PendingIndexCount) {
    dll_dx7_cpp_flushBatch_FUN_100047b0();
  }
  return 1;
}
