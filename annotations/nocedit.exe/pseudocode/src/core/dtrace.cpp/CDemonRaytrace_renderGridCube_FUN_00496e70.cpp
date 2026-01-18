// Name: core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70
// Address: 00496e70
// Address Range: [[00496e70, 004973a5]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70(CDemonRaytrace * this_ptr, CVector3f * world_pos)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00496e70
          (CDemonRaytrace *this_ptr,CVector3f *world_pos)

{
  uint uVar1;
  SMRGLHeaderPrimitive local_dc;
  uint local_c4;
  uint local_b8;
  uint local_ac;
  uint local_a0;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  float local_70;
  float local_6c;
  float local_68;
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
  
  local_1c = (this_ptr->cell_size).x / 8.0f;
  local_18 = (this_ptr->cell_size).y * 0.125f;
  local_14 = 0.125f * (this_ptr->cell_size).z;
  if (&local_4c != &local_1c) {
    local_4c = local_1c;
    local_48 = local_18;
    local_44 = local_14;
  }
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
            (g_CDemonRendererPtr1,&g_DebugCubeBasePoint);
  local_88.x = (int)ROUND(world_pos->x * 256.0f);
  local_88.y = (int)ROUND(world_pos->y * 256.0f);
  local_88.z = (int)ROUND(world_pos->z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_88);
  local_70 = world_pos->x + local_4c;
  local_6c = world_pos->y;
  local_68 = world_pos->z;
  local_64.x = (int)ROUND(local_70 * 256.0f);
  local_64.y = (int)ROUND(local_6c * 256.0f);
  local_64.z = (int)ROUND(local_68 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_64);
  local_70 = world_pos->x + local_4c;
  local_6c = world_pos->y;
  local_68 = world_pos->z + local_44;
  local_58.x = (int)ROUND(local_70 * 256.0f);
  local_58.y = (int)ROUND(local_6c * 256.0f);
  local_58.z = (int)ROUND(local_68 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_58);
  local_70 = world_pos->x;
  local_6c = world_pos->y;
  local_68 = world_pos->z + local_44;
  local_7c.x = (int)ROUND(local_70 * 256.0f);
  local_7c.y = (int)ROUND(local_6c * 256.0f);
  local_7c.z = (int)ROUND(local_68 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_7c);
  local_70 = world_pos->x;
  local_6c = world_pos->y + local_48;
  local_68 = world_pos->z;
  local_40.x = (int)ROUND(local_70 * 256.0f);
  local_40.y = (int)ROUND(local_6c * 256.0f);
  local_40.z = (int)ROUND(local_68 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[4].projected_vertex,&local_40);
  local_70 = world_pos->x + local_4c;
  local_6c = world_pos->y + local_48;
  local_68 = world_pos->z;
  local_28.x = (int)ROUND(local_70 * 256.0f);
  local_28.y = (int)ROUND(local_6c * 256.0f);
  local_28.z = (int)ROUND(local_68 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[5].projected_vertex,&local_28);
  local_70 = world_pos->x + local_4c;
  local_6c = world_pos->y + local_48;
  local_68 = world_pos->z + local_44;
  local_34.x = (int)ROUND(local_70 * 256.0f);
  local_34.y = (int)ROUND(local_6c * 256.0f);
  local_34.z = (int)ROUND(local_68 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[6].projected_vertex,&local_34);
  local_70 = world_pos->x;
  local_6c = world_pos->y + local_48;
  local_68 = world_pos->z + local_44;
  local_94.x = (int)ROUND(local_70 * 256.0f);
  local_94.y = (int)ROUND(local_6c * 256.0f);
  local_94.z = (int)ROUND(local_68 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[7].projected_vertex,&local_94);
  uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
            (g_CDemonRendererPtr2,uVar1 & 0xff);
  local_dc.base.count = 4;
  local_dc.surface_normal.A = 0;
  local_dc.surface_normal.B = 0;
  local_dc.surface_normal.C = 0;
  local_dc.surface_normal.D = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  local_a0 = 0;
  local_ac = 1;
  local_c4 = 4;
  local_b8 = 5;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr2,&local_dc);
  local_a0 = 2;
  local_ac = 3;
  local_b8 = 7;
  local_c4 = 6;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr2,&local_dc);
  local_b8 = 7;
  local_a0 = 0;
  local_ac = 4;
  local_c4 = 3;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr2,&local_dc);
  local_a0 = 1;
  local_ac = 2;
  local_b8 = 6;
  local_c4 = 5;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr2,&local_dc);
  local_b8 = 6;
  local_a0 = 4;
  local_ac = 5;
  local_c4 = 7;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr2,&local_dc);
  local_ac = 2;
  local_b8 = 1;
  local_a0 = 3;
  local_c4 = 0;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr2,&local_dc);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  return;
}
