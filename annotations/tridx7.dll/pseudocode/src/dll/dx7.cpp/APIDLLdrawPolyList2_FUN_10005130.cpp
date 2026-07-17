// Name: dll_dx7.cpp_APIDLLdrawPolyList2_FUN_10005130
// Address: 10005130
// Address Range: [[10005130, 10005256] [1000525a, 10005278]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLdrawPolyList2_FUN_10005130(SRenderVertex *vertex_buffer,ushort **polygons,int polygon_count,int render_flags)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLdrawPolyList2_FUN_10005130(SRenderVertex *vertex_buffer,ushort **polygons,int polygon_count,int render_flags)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  SMRGLVertex local_10;
  int local_4;
  
                    /* 0x5130  12  APIDLLdrawPolyList2 */
  if (g_InScene == 0) {
    return 0;
  }
  dll_dx7_cpp_applyRenderState_FUN_10003f10(render_flags);
  g_CurrentBatchStamp = g_CurrentBatchStamp + 1;
  if (0 < polygon_count) {
    local_4 = polygon_count;
    do {
      puVar1 = *polygons;
      local_10.vertex_index = (int)*puVar1;
      local_10.texture_u = (uint)puVar1[3] << 8;
      local_10.texture_v = (uint)puVar1[6] << 8;
      uVar3 = dll_dx7_cpp_getOrAddVertex_FUN_10005010(&local_10,vertex_buffer,render_flags);
      g_IndexBuffer[g_PendingIndexCount] = (WORD)uVar3;
      local_10.vertex_index = (int)puVar1[1];
      local_10.texture_u = (uint)puVar1[4] << 8;
      local_10.texture_v = (uint)puVar1[7] << 8;
      uVar3 = dll_dx7_cpp_getOrAddVertex_FUN_10005010(&local_10,vertex_buffer,render_flags);
      g_IndexBuffer[g_PendingIndexCount + 1] = (WORD)uVar3;
      local_10.vertex_index = (int)puVar1[2];
      local_10.texture_u = (uint)puVar1[5] << 8;
      local_10.texture_v = (uint)puVar1[8] << 8;
      uVar3 = dll_dx7_cpp_getOrAddVertex_FUN_10005010(&local_10,vertex_buffer,render_flags);
      iVar2 = g_PendingIndexCount;
      g_PendingIndexCount = g_PendingIndexCount + 3;
      g_IndexBuffer[iVar2 + 2] = (WORD)uVar3;
      if (0x3e76 < g_PendingIndexCount) {
                    /* WARNING: Subroutine does not return */
        dll_dx7_cpp_fatalError_FUN_10002340("You're shoving too many faces");
      }
      polygons = polygons + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  dll_dx7_cpp_flushBatch_FUN_100047b0();
  return 1;
}
