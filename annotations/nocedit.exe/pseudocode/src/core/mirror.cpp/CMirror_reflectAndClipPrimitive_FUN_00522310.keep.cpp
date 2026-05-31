// Name: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
// Address: 00522310
// MANUAL RECONSTRUCTION
// Address Range: [[00522310, 0052255c]]
// Convention: __cdecl
// Signature: uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

{
  SRenderVertex *pSVar1;
  int iVar1;
  CVector3f *pCVar4;
  int iVar5;
  CVector3f *pCVar2;
  int local_14;
  
  g_MirrorInputVertexCount = (primitive->base).count;
  iVar5 = 0;
  if (0 < (primitive->base).count) {
    pCVar4 = g_MirrorInputVertices;
    do {
      pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr + ((int *)(primitive + 1))[iVar5];
      pCVar4->x = (float)(pSVar1->projected_vertex).transformed_x * 0.00390625f;
      pCVar4->y = (float)(pSVar1->projected_vertex).transformed_y * 0.00390625f;
      pCVar4->z = (float)(pSVar1->projected_vertex).transformed_z * 0.00390625f;
      iVar5 = iVar5 + 1;
      pCVar4 = pCVar4 + 1;
    } while (iVar5 < (primitive->base).count);
  }
  core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
            (this_ptr->clip_planes,g_MirrorInputVertices,g_MirrorInputVertexCount,
             g_MirrorOutputVertices,&g_MirrorOutputVertexCount);
  if ((((2 < g_MirrorOutputVertexCount) &&
       (core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                  (this_ptr->clip_planes + 1,g_MirrorOutputVertices,g_MirrorOutputVertexCount,
                   g_MirrorInputVertices,&g_MirrorInputVertexCount), 2 < g_MirrorInputVertexCount))
      && (core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                    (this_ptr->clip_planes + 2,g_MirrorInputVertices,g_MirrorInputVertexCount,
                     g_MirrorOutputVertices,&g_MirrorOutputVertexCount),
         2 < g_MirrorOutputVertexCount)) &&
     ((core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                 (this_ptr->clip_planes + 3,g_MirrorOutputVertices,g_MirrorOutputVertexCount,
                  g_MirrorInputVertices,&g_MirrorInputVertexCount), 2 < g_MirrorInputVertexCount &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                 (this_ptr->clip_planes + 4,g_MirrorInputVertices,g_MirrorInputVertexCount,
                  g_MirrorOutputVertices,&g_MirrorOutputVertexCount),
      iVar1 = g_MirrorOutputVertexCount, 2 < g_MirrorOutputVertexCount)))) {
    (this_ptr->clip_primitive).base.base.count = g_MirrorOutputVertexCount;
    (this_ptr->clip_primitive).base.surface_normal = primitive->surface_normal;
    local_14 = 0;
    if (0 < iVar1) {
      pCVar2 = g_MirrorOutputVertices;
      do {
        /* 0x4e00 = reserved scratch base = last 32 slots of g_RenderVertexBuffer[20000] */
        pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr + (0x4e00 + local_14);
        (pSVar1->projected_vertex).transformed_x = (int)ROUND(pCVar2->x * 256.0f);
        (pSVar1->projected_vertex).transformed_y = (int)ROUND(pCVar2->y * 256.0f);
        (pSVar1->projected_vertex).transformed_z = (int)ROUND(pCVar2->z * 256.0f);
        (pSVar1->projected_vertex).screen_x = -1;
        this_ptr->clip_primitive.vertices[local_14] = local_14 + 0x4e00;
        engine_matrix_c_projectCachedPoint_FUN_0050cda0(local_14 + 0x4e00);
        pCVar2 = pCVar2 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < g_MirrorOutputVertexCount);
    }
    return 1;
  }
  return 0;
}
