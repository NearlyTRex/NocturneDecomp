// Name: core_dtrace.cpp_FUN_0048c510
// Address: 0048c510
// Address Range: [[0048c510, 0048ca33]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_FUN_0048c510(CDemonRaytrace *this_ptr,CVector3f *world_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_FUN_0048c510(CDemonRaytrace *this_ptr,CVector3f *world_pos)

{
  uint uVar1;
  SMRGLPrimitivePoly SStack_e8;
  CVector3i CStack_70;
  CVector3i CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3i CStack_40;
  CVector3i CStack_34;
  CVector3i CStack_28;
  CVector3i CStack_1c;
  
  fStack_58 = (this_ptr->cell_size).x * _DAT_005db964;
  fStack_54 = (this_ptr->cell_size).y * _DAT_005db964;
  fStack_50 = (this_ptr->cell_size).z * _DAT_005db964;
  if (SStack_e8.vertices + 4 != (SMRGLVertex *)&fStack_4c) {
    SStack_e8.vertices[4].vertex_index = (int)fStack_58;
    SStack_e8.vertices[4].texture_u = (int)fStack_54;
    SStack_e8.vertices[4].texture_v = (int)fStack_50;
  }
  fStack_4c = fStack_58;
  fStack_48 = fStack_54;
  fStack_44 = fStack_50;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780
            (0x01BC120C,(CVector3i *)0x1c3d424);
  SStack_e8.vertices[5].vertex_index = (int)ROUND(world_pos->x * _DAT_005ff620);
  SStack_e8.vertices[5].texture_u = (int)ROUND(world_pos->y * _DAT_005ff620);
  SStack_e8.vertices[5].texture_v = (int)ROUND(world_pos->z * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr->projected_vertex,
             (CVector3i *)(SStack_e8.vertices + 5));
  SStack_e8.vertices[7].vertex_index =
       (int)(world_pos->x + (float)SStack_e8.vertices[4].vertex_index);
  SStack_e8.vertices[7].texture_u = (int)world_pos->y;
  SStack_e8.vertices[7].texture_v = (int)world_pos->z;
  CStack_70.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005ff620);
  CStack_70.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005ff620);
  CStack_70.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005ff620);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_70);
  SStack_e8.vertices[7].vertex_index =
       (int)(world_pos->x + (float)SStack_e8.vertices[4].vertex_index);
  SStack_e8.vertices[7].texture_u = (int)world_pos->y;
  SStack_e8.vertices[7].texture_v = (int)(world_pos->z + (float)SStack_e8.vertices[4].texture_v);
  CStack_40.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005ff620);
  CStack_40.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005ff620);
  CStack_40.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005ff620);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_40);
  SStack_e8.vertices[7].vertex_index = (int)world_pos->x;
  SStack_e8.vertices[7].texture_u = (int)world_pos->y;
  SStack_e8.vertices[7].texture_v = (int)(world_pos->z + (float)SStack_e8.vertices[4].texture_v);
  CStack_64.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005ff620);
  CStack_64.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005ff620);
  CStack_64.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005ff620);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_64);
  SStack_e8.vertices[7].vertex_index = (int)world_pos->x;
  SStack_e8.vertices[7].texture_u = (int)(world_pos->y + (float)SStack_e8.vertices[4].texture_u);
  SStack_e8.vertices[7].texture_v = (int)world_pos->z;
  CStack_34.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005ff620);
  CStack_34.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005ff620);
  CStack_34.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005ff620);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[4].projected_vertex,&CStack_34);
  SStack_e8.vertices[7].vertex_index =
       (int)(world_pos->x + (float)SStack_e8.vertices[4].vertex_index);
  SStack_e8.vertices[7].texture_u = (int)(world_pos->y + (float)SStack_e8.vertices[4].texture_u);
  SStack_e8.vertices[7].texture_v = (int)world_pos->z;
  SStack_e8.vertices[6].vertex_index =
       (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005ff620);
  SStack_e8.vertices[6].texture_u =
       (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005ff620);
  SStack_e8.vertices[6].texture_v =
       (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[5].projected_vertex,
             (CVector3i *)(SStack_e8.vertices + 6));
  SStack_e8.vertices[7].vertex_index =
       (int)(world_pos->x + (float)SStack_e8.vertices[4].vertex_index);
  SStack_e8.vertices[7].texture_u = (int)(world_pos->y + (float)SStack_e8.vertices[4].texture_u);
  SStack_e8.vertices[7].texture_v = (int)(world_pos->z + (float)SStack_e8.vertices[4].texture_v);
  CStack_1c.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005ff620);
  CStack_1c.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005ff620);
  CStack_1c.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005ff620);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[6].projected_vertex,&CStack_1c);
  SStack_e8.vertices[7].vertex_index = (int)world_pos->x;
  SStack_e8.vertices[7].texture_u = (int)(world_pos->y + (float)SStack_e8.vertices[4].texture_u);
  SStack_e8.vertices[7].texture_v = (int)(world_pos->z + (float)SStack_e8.vertices[4].texture_v);
  CStack_28.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005ff620);
  CStack_28.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005ff620);
  CStack_28.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005ff620);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[7].projected_vertex,&CStack_28);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(DAT_00612560,uVar1 & 0xff);
  SStack_e8.base.base.count = 4;
  SStack_e8.base.surface_normal.A.i = 0;
  SStack_e8.base.surface_normal.B.i = 0;
  SStack_e8.base.surface_normal.C.i = 0;
  SStack_e8.base.surface_normal.D.i = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  SStack_e8.vertices[3].vertex_index = 0;
  SStack_e8.vertices[2].vertex_index = 1;
  SStack_e8.vertices[0].vertex_index = 4;
  SStack_e8.vertices[1].vertex_index = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,&SStack_e8);
  SStack_e8.vertices[3].vertex_index = 2;
  SStack_e8.vertices[2].vertex_index = 3;
  SStack_e8.vertices[1].vertex_index = 7;
  SStack_e8.vertices[0].vertex_index = 6;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,&SStack_e8);
  SStack_e8.vertices[1].vertex_index = 7;
  SStack_e8.vertices[3].vertex_index = 0;
  SStack_e8.vertices[2].vertex_index = 4;
  SStack_e8.vertices[0].vertex_index = 3;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,&SStack_e8);
  SStack_e8.vertices[3].vertex_index = 1;
  SStack_e8.vertices[2].vertex_index = 2;
  SStack_e8.vertices[1].vertex_index = 6;
  SStack_e8.vertices[0].vertex_index = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,&SStack_e8);
  SStack_e8.vertices[1].vertex_index = 6;
  SStack_e8.vertices[3].vertex_index = 4;
  SStack_e8.vertices[2].vertex_index = 5;
  SStack_e8.vertices[0].vertex_index = 7;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,&SStack_e8);
  SStack_e8.vertices[2].vertex_index = 2;
  SStack_e8.vertices[1].vertex_index = 1;
  SStack_e8.vertices[3].vertex_index = 3;
  SStack_e8.vertices[0].vertex_index = 0;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,&SStack_e8);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  return;
}
