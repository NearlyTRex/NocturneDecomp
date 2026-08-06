// Name: core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00468d00
// Address: 00468d00
// Address Range: [[00468d00, 00469235]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00468d00(CDemonRaytrace *this_ptr,CVector3f *world_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00468d00(CDemonRaytrace *this_ptr,CVector3f *world_pos)

{
  uint uVar1;
  SMRGLPrimitivePoly local_dc;
  CVector3i local_64;
  CVector3i local_58;
  float local_4c;
  float local_48;
  float local_44;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = (this_ptr->cell_size).x / 131072.094299316._4_4_;
  local_18 = (this_ptr->cell_size).y * _DAT_0057e1f6;
  local_14 = _DAT_0057e1f6 * (this_ptr->cell_size).z;
  if (&local_4c != &local_1c) {
    local_4c = local_1c;
    local_48 = local_18;
    local_44 = local_14;
  }
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0
            ((CDemonRenderer *)PTR_DAT_005ae700,(CVector3f *)0x1bc9950);
  local_dc.vertices[5].vertex_index = (int)ROUND(world_pos->x * _DAT_0059c8a0);
  local_dc.vertices[5].texture_u = (int)ROUND(world_pos->y * _DAT_0059c8a0);
  local_dc.vertices[5].texture_v = (int)ROUND(world_pos->z * _DAT_0059c8a0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,
             (CVector3i *)(local_dc.vertices + 5));
  local_dc.vertices[7].vertex_index = (int)(world_pos->x + local_4c);
  local_dc.vertices[7].texture_u = (int)world_pos->y;
  local_dc.vertices[7].texture_v = (int)world_pos->z;
  local_64.x = (int)ROUND((float)local_dc.vertices[7].vertex_index * _DAT_0059c8a0);
  local_64.y = (int)ROUND((float)local_dc.vertices[7].texture_u * _DAT_0059c8a0);
  local_64.z = (int)ROUND((float)local_dc.vertices[7].texture_v * _DAT_0059c8a0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_64);
  local_dc.vertices[7].vertex_index = (int)(world_pos->x + local_4c);
  local_dc.vertices[7].texture_u = (int)world_pos->y;
  local_dc.vertices[7].texture_v = (int)(world_pos->z + local_44);
  local_58.x = (int)ROUND((float)local_dc.vertices[7].vertex_index * _DAT_0059c8a0);
  local_58.y = (int)ROUND((float)local_dc.vertices[7].texture_u * _DAT_0059c8a0);
  local_58.z = (int)ROUND((float)local_dc.vertices[7].texture_v * _DAT_0059c8a0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_58);
  local_dc.vertices[7].vertex_index = (int)world_pos->x;
  local_dc.vertices[7].texture_u = (int)world_pos->y;
  local_dc.vertices[7].texture_v = (int)(world_pos->z + local_44);
  local_dc.vertices[6].vertex_index =
       (int)ROUND((float)local_dc.vertices[7].vertex_index * _DAT_0059c8a0);
  local_dc.vertices[6].texture_u = (int)ROUND((float)local_dc.vertices[7].texture_u * _DAT_0059c8a0)
  ;
  local_dc.vertices[6].texture_v = (int)ROUND((float)local_dc.vertices[7].texture_v * _DAT_0059c8a0)
  ;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)(local_dc.vertices + 6));
  local_dc.vertices[7].vertex_index = (int)world_pos->x;
  local_dc.vertices[7].texture_u = (int)(world_pos->y + local_48);
  local_dc.vertices[7].texture_v = (int)world_pos->z;
  local_40.x = (int)ROUND((float)local_dc.vertices[7].vertex_index * _DAT_0059c8a0);
  local_40.y = (int)ROUND((float)local_dc.vertices[7].texture_u * _DAT_0059c8a0);
  local_40.z = (int)ROUND((float)local_dc.vertices[7].texture_v * _DAT_0059c8a0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[4].projected_vertex,&local_40);
  local_dc.vertices[7].vertex_index = (int)(world_pos->x + local_4c);
  local_dc.vertices[7].texture_u = (int)(world_pos->y + local_48);
  local_dc.vertices[7].texture_v = (int)world_pos->z;
  local_28.x = (int)ROUND((float)local_dc.vertices[7].vertex_index * _DAT_0059c8a0);
  local_28.y = (int)ROUND((float)local_dc.vertices[7].texture_u * _DAT_0059c8a0);
  local_28.z = (int)ROUND((float)local_dc.vertices[7].texture_v * _DAT_0059c8a0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[5].projected_vertex,&local_28);
  local_dc.vertices[7].vertex_index = (int)(world_pos->x + local_4c);
  local_dc.vertices[7].texture_u = (int)(world_pos->y + local_48);
  local_dc.vertices[7].texture_v = (int)(world_pos->z + local_44);
  local_34.x = (int)ROUND((float)local_dc.vertices[7].vertex_index * _DAT_0059c8a0);
  local_34.y = (int)ROUND((float)local_dc.vertices[7].texture_u * _DAT_0059c8a0);
  local_34.z = (int)ROUND((float)local_dc.vertices[7].texture_v * _DAT_0059c8a0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[6].projected_vertex,&local_34);
  local_dc.vertices[7].vertex_index = (int)world_pos->x;
  local_dc.vertices[7].texture_u = (int)(world_pos->y + local_48);
  local_dc.vertices[7].texture_v = (int)(world_pos->z + local_44);
  local_dc.vertices[4].vertex_index =
       (int)ROUND((float)local_dc.vertices[7].vertex_index * _DAT_0059c8a0);
  local_dc.vertices[4].texture_u = (int)ROUND((float)local_dc.vertices[7].texture_u * _DAT_0059c8a0)
  ;
  local_dc.vertices[4].texture_v = (int)ROUND((float)local_dc.vertices[7].texture_v * _DAT_0059c8a0)
  ;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[7].projected_vertex,
             (CVector3i *)(local_dc.vertices + 4));
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
            (g_CDemonRenderer_PTR_005ae704,uVar1 & 0xff);
  local_dc.base.base.count = 4;
  local_dc.base.surface_normal.A.i = 0;
  local_dc.base.surface_normal.B.i = 0;
  local_dc.base.surface_normal.C.i = 0;
  local_dc.base.surface_normal.D.i = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,1);
  local_dc.vertices[3].vertex_index = 0;
  local_dc.vertices[2].vertex_index = 1;
  local_dc.vertices[0].vertex_index = 4;
  local_dc.vertices[1].vertex_index = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
            (g_CDemonRenderer_PTR_005ae704,&local_dc);
  local_dc.vertices[3].vertex_index = 2;
  local_dc.vertices[2].vertex_index = 3;
  local_dc.vertices[1].vertex_index = 7;
  local_dc.vertices[0].vertex_index = 6;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
            (g_CDemonRenderer_PTR_005ae704,&local_dc);
  local_dc.vertices[1].vertex_index = 7;
  local_dc.vertices[3].vertex_index = 0;
  local_dc.vertices[2].vertex_index = 4;
  local_dc.vertices[0].vertex_index = 3;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
            (g_CDemonRenderer_PTR_005ae704,&local_dc);
  local_dc.vertices[3].vertex_index = 1;
  local_dc.vertices[2].vertex_index = 2;
  local_dc.vertices[1].vertex_index = 6;
  local_dc.vertices[0].vertex_index = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
            (g_CDemonRenderer_PTR_005ae704,&local_dc);
  local_dc.vertices[1].vertex_index = 6;
  local_dc.vertices[3].vertex_index = 4;
  local_dc.vertices[2].vertex_index = 5;
  local_dc.vertices[0].vertex_index = 7;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
            (g_CDemonRenderer_PTR_005ae704,&local_dc);
  local_dc.vertices[2].vertex_index = 2;
  local_dc.vertices[1].vertex_index = 1;
  local_dc.vertices[3].vertex_index = 3;
  local_dc.vertices[0].vertex_index = 0;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
            (g_CDemonRenderer_PTR_005ae704,&local_dc);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,0);
  return;
}
