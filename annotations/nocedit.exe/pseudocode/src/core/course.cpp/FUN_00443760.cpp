// Name: core_course.cpp_FUN_00443760
// Address: 00443760
// Address Range: [[00443760, 00443bb7]]
// Convention: unknown
// Signature: undefined core_course.cpp_FUN_00443760()

#include "nocturne.h"

void core_course_cpp_FUN_00443760(void)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  double dVar6;
  CVector3f *in_stack_00000004;
  CVector3i local_74;
  byte local_64 [8];
  int local_5c;
  int local_58;
  uint local_54;
  byte local_50 [12];
  CVector3i local_44;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if ((CVector3f *)(local_50 + 8) != in_stack_00000004) {
    local_50._8_4_ = in_stack_00000004->x;
    local_44.x = (int)in_stack_00000004->y;
    local_44.y = (int)in_stack_00000004->z;
  }
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004->x);
  local_20 = (int)ROUND(dVar6);
  iVar2 = local_20 >> 0x1f;
  iVar5 = local_20 + iVar2 * -0x10;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004->y);
  local_20 = ((int)(iVar5 - (uint)(iVar2 << 3 < 0)) >> 4) << 4;
  local_24 = (int)ROUND(dVar6);
  iVar2 = local_24 >> 0x1f;
  iVar5 = local_24 + iVar2 * -0x10;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004->z);
  local_20 = (int)ROUND(dVar6);
  in_stack_00000004->x = (float)local_24;
  in_stack_00000004->y = (float)(((int)(iVar5 - (uint)(iVar2 << 3 < 0)) >> 4) << 4);
  this_ptr = g_CDemonRendererPtr;
  local_28 = ((int)((local_20 + (local_20 >> 0x1f) * -0x10) - (uint)((local_20 >> 0x1f) << 3 < 0))
             >> 4) << 4;
  in_stack_00000004->z = (float)local_28;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (this_ptr,in_stack_00000004);
  local_30 = -0x80;
  do {
    local_2c = -0x80;
    local_28 = local_30;
    do {
      iVar5 = local_2c;
      iVar2 = -0x80;
      do {
        local_20 = iVar5;
        local_24 = local_28;
        local_44.x = (int)ROUND(((float)local_28 + in_stack_00000004->x) * 256f);
        local_44.y = (int)ROUND(((float)iVar5 + in_stack_00000004->y) * 256f);
        local_44.z = (int)ROUND(((float)iVar2 + in_stack_00000004->z) * 256f);
        local_1c = iVar2;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_44);
        pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
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
      local_2c = local_2c + 0x10;
    } while (local_2c != 0x90);
    local_30 = local_30 + 0x10;
  } while (local_30 != 0x90);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)local_50);
  local_58 = 0;
  local_54 = 0;
  local_50._0_4_ = 0.0;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&stack0xffffff78
            );
  local_54 = 0x40400000;
  local_50._0_4_ = 0.0;
  local_50._4_4_ = 0.0;
  local_64._4_4_ = (uint)ROUND(256f * 3.0);
  local_5c = (int)ROUND(256f * 0.0);
  local_58 = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)(local_64 + 4)
            );
  local_50._0_4_ = 0.0;
  local_50._8_4_ = 0.0;
  local_50._4_4_ = 3.0;
  local_74.x = (int)ROUND(256f * 0.0);
  local_74.y = (int)ROUND(256f * 3.0);
  local_74.z = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_74);
  local_50._4_4_ = 0.0;
  local_50._8_4_ = 0.0;
  local_44.x = 0x40400000;
  local_64._0_4_ = (uint)ROUND(256f * 0.0);
  local_64._4_4_ = (uint)ROUND(256f * 0.0);
  local_5c = (int)ROUND(256f * 3.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_64);
  local_20 = -7;
  engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&local_24);
  engine_3d_c_drawLineStrip2D_FUN_00404570((SLineStrip *)&stack0xffffff70);
  engine_3d_c_drawLineStrip2D_FUN_00404570((SLineStrip *)&stack0xffffff74);
  engine_3d_c_drawLineStrip2D_FUN_00404570((SLineStrip *)&stack0xffffff78);
  iVar5 = 4;
  pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
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
