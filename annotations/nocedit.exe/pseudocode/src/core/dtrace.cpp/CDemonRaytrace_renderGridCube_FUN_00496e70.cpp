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
  BADSPACEBASE *in_ESP;
  CVector3i local_84;
  uint local_78;
  byte local_74 [12];
  float local_68;
  float local_64;
  float local_60;
  CVector3i local_5c;
  float local_50;
  CVector3i local_4c;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  CVector3i local_2c;
  CVector3i local_1c;
  
  local_1c.x = (int)((this_ptr->cell_size).x / 8f);
  local_1c.y = (int)((this_ptr->cell_size).y * 0.125f);
  local_1c.z = (int)(0.125f * (this_ptr->cell_size).z);
  if (&local_4c != &local_1c) {
    local_4c.x = local_1c.x;
    local_4c.y = local_1c.y;
    local_4c.z = local_1c.z;
  }
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
            (g_CDemonRendererPtr,&g_DebugCubeBasePoint);
  local_84.x = (int)ROUND(world_pos->y * 256f);
  local_84.y = (int)ROUND(world_pos->z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_84);
  local_68 = world_pos->x + (float)local_4c.z;
  local_64 = world_pos->y;
  local_60 = world_pos->z;
  local_5c.x = (int)ROUND(local_68 * 256f);
  local_5c.y = (int)ROUND(local_64 * 256f);
  local_5c.z = (int)ROUND(local_60 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_5c);
  local_64 = world_pos->x + local_40;
  local_60 = world_pos->y;
  local_5c.x = (int)(world_pos->z + local_38);
  local_4c.x = (int)ROUND(local_64 * 256f);
  local_4c.y = (int)ROUND(local_60 * 256f);
  local_4c.z = (int)ROUND((float)local_5c.x * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_4c);
  local_60 = world_pos->x;
  local_5c.x = (int)world_pos->y;
  local_5c.y = (int)(world_pos->z + local_34);
  local_74._8_4_ = (uint)ROUND(local_60 * 256f);
  local_68 = (float)(int)ROUND((float)local_5c.x * 256f);
  local_64 = (float)(int)ROUND((float)local_5c.y * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)(local_74 + 8)
            );
  local_5c.x = (int)world_pos->x;
  local_5c.y = (int)(world_pos->y + local_34);
  local_5c.z = (int)world_pos->z;
  local_2c.x = (int)ROUND((float)local_5c.x * 256f);
  local_2c.y = (int)ROUND((float)local_5c.y * 256f);
  local_2c.z = (int)ROUND((float)local_5c.z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,&local_2c);
  local_5c.y = (int)(world_pos->x + local_34);
  local_5c.z = (int)(world_pos->y + local_30);
  local_50 = world_pos->z;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,
             (CVector3i *)&stack0xfffffff0);
  local_5c.z = (int)(world_pos->x + local_30);
  local_50 = world_pos->y + (float)local_2c.x;
  local_4c.x = (int)(world_pos->z + (float)local_2c.y);
  local_1c.y = (int)ROUND((float)local_5c.z * 256f);
  local_1c.z = (int)ROUND(local_50 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,(CVector3i *)&local_1c.y);
  local_50 = world_pos->x;
  local_4c.x = (int)(world_pos->y + (float)local_2c.y);
  local_4c.y = (int)(world_pos->z + (float)local_2c.z);
  local_74._0_4_ = (uint)ROUND(local_50 * 256f);
  local_74._4_4_ = (uint)ROUND((float)local_4c.x * 256f);
  local_74._8_4_ = (uint)ROUND((float)local_4c.y * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,(CVector3i *)local_74);
  uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
            (g_CDemonRendererPtr,uVar1 & 0xff);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  local_74._4_4_ = 0;
  local_84.z = 1;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff54);
  local_74._8_4_ = 2;
  local_78 = 3;
  local_84.x = 7;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff58);
  local_84.y = 7;
  local_68 = 0.0;
  local_74._0_4_ = 4;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff5c);
  local_64 = 1.4013e-45;
  local_74._4_4_ = 2;
  local_84.z = 6;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff60);
  local_78 = 6;
  local_60 = 5.60519e-45;
  local_74._8_4_ = 5;
  local_84.x = 7;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff64);
  local_68 = 2.8026e-45;
  local_74._0_4_ = 1;
  local_5c.x = 3;
  local_84.y = 0;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff68);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}
