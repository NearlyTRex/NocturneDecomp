// Name: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0
// Address: 004d74a0
// Address Range: [[004d74a0, 004d76dc]]
// Convention: __cdecl
// Signature: uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

{
  SMRGLHeaderPrimitive *pSVar1;
  SRenderVertex *pSVar2;
  CVector3f *pCVar3;
  int *piVar4;
  int iVar5;
  SMRGLHeaderPrimitive *pSVar6;
  int iVar7;
  CVector3f *local_14;
  
  _DAT_01cc9120 = (primitive->base).count;
  iVar5 = 0;
  if (0 < _DAT_01cc9120) {
    pCVar3 = g_CVector3f_ARRAY_01cc9124;
    pSVar6 = primitive;
    do {
      pSVar1 = pSVar6 + 1;
      pSVar6 = (SMRGLHeaderPrimitive *)&(pSVar6->base).count;
      pSVar2 = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr + (pSVar1->base).type;
      iVar5 = iVar5 + 1;
      pCVar3->x = (float)(pSVar2->projected_vertex).transformed_x * 0.00390625f;
      pCVar3->y = (float)(pSVar2->projected_vertex).transformed_y * 0.00390625f;
      pCVar3->z = (float)(pSVar2->projected_vertex).transformed_z * 0.00390625f;
      pCVar3 = pCVar3 + 1;
    } while (iVar5 < (primitive->base).count);
  }
  core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420
            (this_ptr->clip_planes,g_CVector3f_ARRAY_01cc9124,_DAT_01cc9120,
             g_CVector3f_ARRAY_01cc92a8,(int *)&DAT_01cc92a4);
  if ((((2 < _DAT_01cc92a4) &&
       (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420
                  (this_ptr->clip_planes + 1,g_CVector3f_ARRAY_01cc92a8,_DAT_01cc92a4,
                   g_CVector3f_ARRAY_01cc9124,(int *)&DAT_01cc9120), 2 < _DAT_01cc9120)) &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420
                 (this_ptr->clip_planes + 2,g_CVector3f_ARRAY_01cc9124,_DAT_01cc9120,
                  g_CVector3f_ARRAY_01cc92a8,(int *)&DAT_01cc92a4), 2 < _DAT_01cc92a4)) &&
     ((core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420
                 (this_ptr->clip_planes + 3,g_CVector3f_ARRAY_01cc92a8,_DAT_01cc92a4,
                  g_CVector3f_ARRAY_01cc9124,(int *)&DAT_01cc9120), 2 < _DAT_01cc9120 &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420
                 (this_ptr->clip_planes + 4,g_CVector3f_ARRAY_01cc9124,_DAT_01cc9120,
                  g_CVector3f_ARRAY_01cc92a8,(int *)&DAT_01cc92a4), 2 < _DAT_01cc92a4)))) {
    (this_ptr->clip_primitive).base.base.count = _DAT_01cc92a4;
    (this_ptr->clip_primitive).base.surface_normal.A = (primitive->surface_normal).A;
    (this_ptr->clip_primitive).base.surface_normal.B = (primitive->surface_normal).B;
    (this_ptr->clip_primitive).base.surface_normal.C = (primitive->surface_normal).C;
    (this_ptr->clip_primitive).base.surface_normal.D = (primitive->surface_normal).D;
    iVar5 = 0;
    if (0 < _DAT_01cc92a4) {
      local_14 = g_CVector3f_ARRAY_01cc92a8;
      iVar7 = 0xea000;
      do {
        piVar4 = (int *)((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                               transformed_x + iVar7);
        *piVar4 = (int)ROUND(local_14->x * 256.0f);
        piVar4[1] = (int)ROUND(local_14->y * 256.0f);
        piVar4[2] = (int)ROUND(local_14->z * 256.0f);
        *(uint *)
         ((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).screen_x +
         iVar7) = 0xffffffff;
        (this_ptr->clip_primitive).vertices[0] = iVar5 + 0x4e00;
        engine_matrix_c_projectCachedPoint_FUN_004cd240(iVar5 + 0x4e00);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x30;
        local_14 = local_14 + 1;
        this_ptr = (CMirror *)&(this_ptr->reflection).corner1.y;
      } while (iVar5 < _DAT_01cc92a4);
    }
    return 1;
  }
  return 0;
}
