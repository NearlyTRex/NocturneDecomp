// Name: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
// Address: 004d7980
// Address Range: [[004d7980, 004d7b23]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980(CMirror *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980(CMirror *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  SMRGLPrimitivePoly SStack_88;
  
  SStack_88.vertices[5].vertex_index = (int)ROUND((this_ptr->reflection).corner1.x * 256.0f)
  ;
  SStack_88.vertices[5].texture_u = (int)ROUND((this_ptr->reflection).corner1.y * 256.0f);
  SStack_88.vertices[5].texture_v = (int)ROUND((this_ptr->reflection).corner1.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,
             (CVector3i *)(SStack_88.vertices + 5));
  SStack_88.vertices[4].vertex_index = (int)ROUND((this_ptr->reflection).corner2.x * 256.0f)
  ;
  SStack_88.vertices[4].texture_u = (int)ROUND((this_ptr->reflection).corner2.y * 256.0f);
  SStack_88.vertices[4].texture_v = (int)ROUND((this_ptr->reflection).corner2.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)(SStack_88.vertices + 4));
  SStack_88.vertices[7].vertex_index = (int)ROUND((this_ptr->reflection).corner3.x * 256.0f)
  ;
  SStack_88.vertices[7].texture_u = (int)ROUND((this_ptr->reflection).corner3.y * 256.0f);
  SStack_88.vertices[7].texture_v = (int)ROUND((this_ptr->reflection).corner3.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,
             (CVector3i *)(SStack_88.vertices + 7));
  SStack_88.vertices[6].vertex_index = (int)ROUND((this_ptr->reflection).corner4.x * 256.0f)
  ;
  SStack_88.vertices[6].texture_u = (int)ROUND((this_ptr->reflection).corner4.y * 256.0f);
  SStack_88.vertices[6].texture_v = (int)ROUND((this_ptr->reflection).corner4.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)(SStack_88.vertices + 6));
  iVar2 = 0;
  do {
    piVar1 = (int *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x + iVar2
                    );
    *piVar1 = *piVar1 << 4;
    piVar1 = (int *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_y + iVar2
                    );
    *piVar1 = *piVar1 << 4;
    piVar1 = (int *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_z + iVar2
                    );
    *piVar1 = *piVar1 << 4;
    iVar3 = iVar2 + 0x30;
    *(uint *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).inv_z + iVar2) =
         *(uint *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).inv_z + iVar2) >> 4;
    iVar2 = iVar3;
  } while (iVar3 != 0xc0);
  SStack_88.base.base.count = 4;
  SStack_88.base.surface_normal.D.i = 0;
  SStack_88.base.surface_normal.C.i = 0;
  SStack_88.base.surface_normal.B.i = 0;
  SStack_88.vertices[2].vertex_index = 2;
  SStack_88.base.surface_normal.A.i = 0;
  SStack_88.vertices[0].vertex_index = 0;
  SStack_88.vertices[3].vertex_index = 3;
  SStack_88.vertices[1].vertex_index = 1;
  engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(DAT_005ae704,&SStack_88);
  return;
}
