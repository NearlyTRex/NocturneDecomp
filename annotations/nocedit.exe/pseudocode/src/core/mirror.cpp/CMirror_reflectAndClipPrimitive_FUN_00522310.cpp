// Name: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
// Address: 00522310
// Address Range: [[00522310, 0052255c]]
// Convention: __cdecl
// Signature: uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)

#include "nocturne.h"

uint __cdecl
core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
          (CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

{
  SRenderVertex *pSVar1;
  int *piVar2;
  SMRGLHeaderPrimitive *pSVar3;
  CVector3f *pCVar4;
  int iVar5;
  int iVar6;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  g_MirrorInputVertexCount = (primitive->base).count;
  iVar5 = 0;
  if (0 < (primitive->base).count) {
    pCVar4 = g_MirrorInputVertices;
    pSVar3 = primitive;
    do {
      pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr + pSVar3[1].base.type;
      pCVar4->x = (float)(pSVar1->projected_vertex).transformed_x * 0.00390625f;
      pCVar4->y = (float)(pSVar1->projected_vertex).transformed_y * 0.00390625f;
      pCVar4->z = (float)(pSVar1->projected_vertex).transformed_z * 0.00390625f;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->base).count;
      iVar5 = iVar5 + 1;
      pCVar4 = pCVar4 + 1;
    } while (iVar5 < (primitive->base).count);
  }
  core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
            (this_ptr->clip_planes,g_MirrorInputVertices,g_MirrorInputVertexCount,
             g_MirrorOutputVertices,&g_MirrorOutputVertexCount);
  if ((((2 < g_MirrorOutputVertexCount) &&
       (core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                  ((SClipPlane *)(primitive + 7),g_MirrorOutputVertices,g_MirrorOutputVertexCount,
                   g_MirrorInputVertices,&g_MirrorInputVertexCount), 2 < g_MirrorInputVertexCount))
      && (core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                    ((SClipPlane *)(in_stack_0000000c + 0xb8),g_MirrorInputVertices,
                     g_MirrorInputVertexCount,g_MirrorOutputVertices,&g_MirrorOutputVertexCount),
         2 < g_MirrorOutputVertexCount)) &&
     ((core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                 ((SClipPlane *)(in_stack_00000010 + 200),g_MirrorOutputVertices,
                  g_MirrorOutputVertexCount,g_MirrorInputVertices,&g_MirrorInputVertexCount),
      2 < g_MirrorInputVertexCount &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
                 ((SClipPlane *)(in_stack_00000014 + 0xd8),g_MirrorInputVertices,
                  g_MirrorInputVertexCount,g_MirrorOutputVertices,&g_MirrorOutputVertexCount),
      iVar5 = g_MirrorOutputVertexCount, 2 < g_MirrorOutputVertexCount)))) {
    *(int *)(in_stack_00000018 + 0xec) = g_MirrorOutputVertexCount;
    *(uint *)(in_stack_00000018 + 0xf0) = *(uint *)(in_stack_0000001c + 8);
    *(uint *)(in_stack_00000018 + 0xf4) = *(uint *)(in_stack_0000001c + 0xc);
    *(uint *)(in_stack_00000018 + 0xf8) = *(uint *)(in_stack_0000001c + 0x10);
    iVar6 = 0;
    *(uint *)(in_stack_00000018 + 0xfc) = *(uint *)(in_stack_0000001c + 0x14);
    if (0 < iVar5) {
      pCVar4 = g_MirrorOutputVertices;
      iVar5 = 0xea000;
      do {
        piVar2 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                               transformed_x + iVar5);
        *piVar2 = (int)ROUND(pCVar4->x * 256f);
        piVar2[1] = (int)ROUND(pCVar4->y * 256f);
        piVar2[2] = (int)ROUND(pCVar4->z * 256f);
        *(uint *)
         ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x + iVar5) =
             0xffffffff;
        *(int *)(in_stack_00000018 + 0x100) = iVar6 + 0x4e00;
        engine_matrix_c_projectCachedPoint_FUN_0050cda0(iVar6 + 0x4e00);
        pCVar4 = pCVar4 + 1;
        iVar5 = iVar5 + 0x30;
        iVar6 = iVar6 + 1;
        in_stack_00000018 = in_stack_00000018 + 4;
      } while (iVar6 < g_MirrorOutputVertexCount);
    }
    return 1;
  }
  return 0;
}
