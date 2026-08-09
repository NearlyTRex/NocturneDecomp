// Name: dll_dx7.cpp_APIDLLdrawPolyList_FUN_10004f00
// Address: 10004f00
// MANUAL RECONSTRUCTION
// Address Range: [[10004f00, 10004fe4] [10004fe8, 10005008]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLdrawPolyList_FUN_10004f00(SRenderVertex *vertex_buffer,SMRGLPrimitiveQuad **polygons,int polygon_count,int render_flags)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLdrawPolyList_FUN_10004f00(SRenderVertex *vertex_buffer,SMRGLPrimitiveQuad **polygons,int polygon_count,int render_flags)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  uint uVar3;
  SMRGLVertex *poly_vertex;
  int local_c;
  SMRGLPrimitiveQuad **local_8;
  int local_4;
  
                    /* 0x4f00  11  APIDLLdrawPolyList */
  if (g_InScene == 0) {
    return 0;
  }
  dll_dx7_cpp_applyRenderState_FUN_10003f10(render_flags);
  g_CurrentBatchStamp = g_CurrentBatchStamp + 1;
  if (0 < polygon_count) {
    local_8 = polygons;
    local_4 = polygon_count;
    do {
      local_c = 0;
      pSVar1 = *local_8;
      iVar2 = (pSVar1->base).base.count;
      if (iVar2 != 2 && -1 < iVar2 + -2) {
        poly_vertex = pSVar1->vertices + 1;
        do {
          uVar3 = dll_dx7_cpp_getOrAddVertex_FUN_10005010
                            (pSVar1->vertices,vertex_buffer,render_flags);
          g_IndexBuffer[g_PendingIndexCount] = (WORD)uVar3;
          uVar3 = dll_dx7_cpp_getOrAddVertex_FUN_10005010(poly_vertex,vertex_buffer,render_flags);
          g_IndexBuffer[g_PendingIndexCount + 1] = (WORD)uVar3;
          uVar3 = dll_dx7_cpp_getOrAddVertex_FUN_10005010
                            (poly_vertex + 1,vertex_buffer,render_flags);
          iVar2 = g_PendingIndexCount;
          local_c = local_c + 1;
          g_PendingIndexCount = g_PendingIndexCount + 3;
          g_IndexBuffer[iVar2 + 2] = (WORD)uVar3;
          poly_vertex = poly_vertex + 1;
        } while (local_c < (pSVar1->base).base.count + -2);
      }
      if (0x3e76 < g_PendingIndexCount) {
        dll_dx7_cpp_fatalError_FUN_10002340("You're shoving too many faces");
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  dll_dx7_cpp_flushBatch_FUN_100047b0();
  return 1;
}
