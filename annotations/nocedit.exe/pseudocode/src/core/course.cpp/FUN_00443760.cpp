// Name: core_course.cpp_FUN_00443760
// Address: 00443760
// Address Range: [[00443760, 00443bb7]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_FUN_00443760(void)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_course_cpp_FUN_00443760(void)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CVector3f *in_stack_00000004;
  SLineStrip SStack_a0;
  uint local_98;
  uint local_94;
  float local_90;
  float local_8c;
  float local_88;
  CVector3i local_84;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  CVector3f local_48;
  CVector3i local_3c;
  SMRGLHeaderPrimitive local_30;
  int local_18;
  int local_14;
  
  if (&local_48 != in_stack_00000004) {
    local_48.x = in_stack_00000004->x;
    local_48.y = in_stack_00000004->y;
    local_48.z = in_stack_00000004->z;
  }
  iVar2 = (int)ROUND(ROUND(in_stack_00000004->x)) >> 0x1f;
  local_18 = ((int)(((int)ROUND(ROUND(in_stack_00000004->x)) + iVar2 * -0x10) -
                   (uint)(iVar2 << 3 < 0)) >> 4) << 4;
  iVar2 = (int)ROUND(ROUND(in_stack_00000004->y)) >> 0x1f;
  local_14 = (int)ROUND(ROUND(in_stack_00000004->z));
  in_stack_00000004->x = (float)local_18;
  in_stack_00000004->y =
       (float)(((int)(((int)ROUND(ROUND(in_stack_00000004->y)) + iVar2 * -0x10) -
                     (uint)(iVar2 << 3 < 0)) >> 4) << 4);
  this_ptr = g_CDemonRendererPtr1;
  local_30.surface_normal.D =
       ((int)((local_14 + (local_14 >> 0x1f) * -0x10) - (uint)((local_14 >> 0x1f) << 3 < 0)) >> 4)
       << 4;
  in_stack_00000004->z = (float)local_30.surface_normal.D;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (this_ptr,in_stack_00000004);
  local_30.surface_normal.A = -0x80;
  do {
    local_30.surface_normal.B = -0x80;
    local_30.surface_normal.C = local_30.surface_normal.A;
    do {
      iVar2 = local_30.surface_normal.B;
      iVar5 = -0x80;
      do {
        local_18 = iVar2;
        local_30.surface_normal.D = local_30.surface_normal.C;
        local_90 = (float)local_30.surface_normal.C + in_stack_00000004->x;
        local_8c = (float)iVar2 + in_stack_00000004->y;
        local_88 = (float)iVar5 + in_stack_00000004->z;
        local_3c.x = (int)ROUND(local_90 * 256.0f);
        local_3c.y = (int)ROUND(local_8c * 256.0f);
        local_3c.z = (int)ROUND(local_88 * 256.0f);
        local_14 = iVar5;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_3c);
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
        iVar5 = iVar5 + 0x10;
      } while (iVar5 != 0x90);
      local_30.surface_normal.B = local_30.surface_normal.B + 0x10;
    } while (local_30.surface_normal.B != 0x90);
    local_30.surface_normal.A = local_30.surface_normal.A + 0x10;
  } while (local_30.surface_normal.A != 0x90);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&local_48);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_84.x = (int)ROUND(256.0f * 0.0);
  local_84.y = (int)ROUND(256.0f * 0.0);
  local_84.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_84);
  local_54 = 0x40400000;
  local_50 = 0;
  local_4c = 0;
  local_60.x = (int)ROUND(256.0f * 3.0);
  local_60.y = (int)ROUND(256.0f * 0.0);
  local_60.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[1].projected_vertex,&local_60);
  local_54 = 0;
  local_4c = 0;
  local_50 = 0x40400000;
  local_78.x = (int)ROUND(256.0f * 0.0);
  local_78.y = (int)ROUND(256.0f * 3.0);
  local_78.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[2].projected_vertex,&local_78);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0x40400000;
  local_6c.x = (int)ROUND(256.0f * 0.0);
  local_6c.y = (int)ROUND(256.0f * 0.0);
  local_6c.z = (int)ROUND(256.0f * 3.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[3].projected_vertex,&local_6c);
  local_30.base.count = -7;
  SStack_a0.vertex_count = 2;
  local_98 = 0;
  local_94 = 1;
  engine_3d_c_processPolygonColor_FUN_00403e30(&local_30);
  engine_3d_c_drawLineStrip2D_FUN_00404570(&SStack_a0);
  local_94 = 2;
  engine_3d_c_drawLineStrip2D_FUN_00404570(&SStack_a0);
  local_94 = 3;
  engine_3d_c_drawLineStrip2D_FUN_00404570(&SStack_a0);
  iVar2 = 4;
  pSVar1 = g_CDemonRendererPtr1->vertex_buffer_ptr;
  do {
    if ((int)(pSVar1[1].projected_vertex.screen_x & -0x80000000) == 0) {
      engine_2d_c_drawText_FUN_00401fd0
                (*(char **)(iVar2 + 0x66ec50),pSVar1[1].projected_vertex.screen_x >> 0x10,
                 pSVar1[1].projected_vertex.screen_y >> 0x10);
    }
    iVar2 = iVar2 + 4;
    pSVar1 = pSVar1 + 1;
  } while (iVar2 != 0x10);
  return;
}
