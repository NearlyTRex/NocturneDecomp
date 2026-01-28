// Name: core_course.cpp_FUN_00443760
// Address: 00443760
// Address Range: [[00443760, 00443bb7]]
// Convention: unknown
// Signature: void core_course_cpp_FUN_00443760(void)

#include "nocturne.h"

void core_course_cpp_FUN_00443760(void)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  CVector3f *in_stack_00000004;
  SLineStrip SStack_ac;
  uint uStack_a4;
  uint uStack_a0;
  float local_9c;
  float local_98;
  float local_94;
  CVector3i local_90;
  CVector3i local_84;
  CVector3i local_78;
  CVector3i local_6c;
  uint local_60;
  uint local_5c;
  uint local_58;
  CVector3f local_54;
  CVector3f local_48;
  SMRGLHeaderPrimitive local_3c;
  int local_24;
  int local_20;
  
  if (&local_48 != in_stack_00000004) {
    local_48.x = in_stack_00000004->x;
    local_48.y = in_stack_00000004->y;
    local_48.z = in_stack_00000004->z;
  }
  uStack_a4 = 0x443794;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004->x);
  local_20 = (int)ROUND(dVar6);
  iVar2 = local_20 >> 0x1f;
  iVar5 = local_20 + iVar2 * -0x10;
  SStack_ac.vertex_count = 0x4437b7;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004->y);
  local_20 = ((int)(iVar5 - (uint)(iVar2 << 3 < 0)) >> 4) << 4;
  local_24 = (int)ROUND(dVar6);
  iVar2 = local_24 >> 0x1f;
  iVar5 = local_24 + iVar2 * -0x10;
  SStack_ac.primitive_type = 0x4437e4;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004->z);
  local_20 = (int)ROUND(dVar6);
  in_stack_00000004->x = (float)local_24;
  in_stack_00000004->y = (float)(((int)(iVar5 - (uint)(iVar2 << 3 < 0)) >> 4) << 4);
  this_ptr = g_CDemonRendererPtr1;
  local_3c.surface_normal.D =
       ((int)((local_20 + (local_20 >> 0x1f) * -0x10) - (uint)((local_20 >> 0x1f) << 3 < 0)) >> 4)
       << 4;
  in_stack_00000004->z = (float)local_3c.surface_normal.D;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (this_ptr,in_stack_00000004);
  local_3c.surface_normal.A = -0x80;
  do {
    local_3c.surface_normal.B = -0x80;
    local_3c.surface_normal.C = local_3c.surface_normal.A;
    do {
      iVar5 = local_3c.surface_normal.B;
      iVar2 = -0x80;
      do {
        local_24 = iVar5;
        local_3c.surface_normal.D = local_3c.surface_normal.C;
        local_9c = (float)local_3c.surface_normal.C + in_stack_00000004->x;
        local_98 = (float)iVar5 + in_stack_00000004->y;
        local_94 = (float)iVar2 + in_stack_00000004->z;
        local_48.x = (float)(int)ROUND(local_9c * 256.0f);
        local_48.y = (float)(int)ROUND(local_98 * 256.0f);
        local_48.z = (float)(int)ROUND(local_94 * 256.0f);
        local_20 = iVar2;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_48
                  );
        pSVar1 = g_CDemonRendererPtr1->vertex_buffer_ptr;
        if ((int)((pSVar1->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar4 = (pSVar1->projected_vertex).transformed_z;
          iVar3 = iVar4 >> 0x1f;
          iVar4 = 0xff - ((int)((iVar4 + iVar3 * -0x80) - (uint)(iVar3 << 6 < 0)) >> 7);
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          g_ActiveRenderColor =
               (int)g_ColorCubeLookup
                    [((int)((iVar4 + (iVar4 >> 0x1f) * -8) - (uint)((iVar4 >> 0x1f) << 2 < 0)) >> 3)
                     * 0x421];
          engine_prim_c_replaceWWithDepth_FUN_00552110(pSVar1,1);
          engine_2d_c_plotPixelWithDepth_FUN_00401290
                    ((pSVar1->projected_vertex).screen_x >> 0x10,
                     (pSVar1->projected_vertex).screen_y >> 0x10,
                     (pSVar1->projected_vertex).transformed_z);
        }
        iVar2 = iVar2 + 0x10;
      } while (iVar2 != 0x90);
      local_3c.surface_normal.B = local_3c.surface_normal.B + 0x10;
    } while (local_3c.surface_normal.B != 0x90);
    local_3c.surface_normal.A = local_3c.surface_normal.A + 0x10;
  } while (local_3c.surface_normal.A != 0x90);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&local_54);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_90.x = (int)ROUND(256.0f * 0.0);
  local_90.y = (int)ROUND(256.0f * 0.0);
  local_90.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_90);
  local_60 = 0x40400000;
  local_5c = 0;
  local_58 = 0;
  local_6c.x = (int)ROUND(256.0f * 3.0);
  local_6c.y = (int)ROUND(256.0f * 0.0);
  local_6c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[1].projected_vertex,&local_6c);
  local_60 = 0;
  local_58 = 0;
  local_5c = 0x40400000;
  local_84.x = (int)ROUND(256.0f * 0.0);
  local_84.y = (int)ROUND(256.0f * 3.0);
  local_84.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[2].projected_vertex,&local_84);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x40400000;
  local_78.x = (int)ROUND(256.0f * 0.0);
  local_78.y = (int)ROUND(256.0f * 0.0);
  local_78.z = (int)ROUND(256.0f * 3.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[3].projected_vertex,&local_78);
  local_3c.base.count = -7;
  SStack_ac.vertex_count = 2;
  uStack_a4 = 0;
  uStack_a0 = 1;
  engine_3d_c_processPolygonColor_FUN_00403e30(&local_3c);
  engine_3d_c_drawLineStrip2D_FUN_00404570(&SStack_ac);
  uStack_a0 = 2;
  engine_3d_c_drawLineStrip2D_FUN_00404570(&SStack_ac);
  uStack_a0 = 3;
  engine_3d_c_drawLineStrip2D_FUN_00404570(&SStack_ac);
  iVar5 = 4;
  pSVar1 = g_CDemonRendererPtr1->vertex_buffer_ptr;
  do {
    if ((int)(pSVar1[1].projected_vertex.screen_x & -0x80000000) == 0) {
      engine_2d_c_drawText_FUN_00401fd0
                (*(char **)(iVar5 + 0x66ec50),pSVar1[1].projected_vertex.screen_x >> 0x10,
                 pSVar1[1].projected_vertex.screen_y >> 0x10);
    }
    iVar5 = iVar5 + 4;
    pSVar1 = pSVar1 + 1;
  } while (iVar5 != 0x10);
  return;
}
