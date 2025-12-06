// Name: core_course.cpp_FUN_00443760
// Address: 00443760
// Address Range: [[00443760, 00443bb7]]
// Convention: unknown
// Signature: undefined core_course.cpp_FUN_00443760()

#include "nocturne.h"

void core_course_cpp_FUN_00443760
               (uint param_1,uint param_2,uint param_3,uint param_4,
               CVector3f *param_5)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  CVector3f *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int unaff_EDI;
  float10 fVar8;
  double dVar9;
  CVector3i local_5c;
  byte local_4c [8];
  float local_44;
  CVector3f *local_40;
  uint local_3c;
  CVector3f local_38;
  CVector3i local_2c;
  int local_18;
  int local_14;
  
  pCVar3 = (CVector3f *)(local_4c + 4);
  if (pCVar3 != param_5) {
    local_4c._4_4_ = param_5->x;
    local_44 = param_5->y;
    pCVar3 = (CVector3f *)param_5->z;
    local_40 = pCVar3;
  }
  fVar8 = (float10)param_5->x;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(param_2,pCVar3));
  local_18 = (int)ROUND(fVar8);
  iVar4 = local_18 >> 0x1f;
  fVar8 = (float10)param_5->y;
  crt_math_c_round_FUN_005fe6b0
            ((double)CONCAT44 /* combine 2-byte values */(iVar4 * 0x10,
                              (int)((local_18 + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >> 4));
  local_14 = (int)ROUND(fVar8);
  iVar4 = local_14 >> 0x1f;
  fVar8 = (float10)param_5->z;
  dVar9 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */(iVar4 * 0x10,
                                      (int)((local_14 + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >>
                                      4));
  iVar4 = (int)ROUND(fVar8) >> 0x1f;
  param_5->x = (float)unaff_EDI;
  param_5->y = (float)(SUB84 /* extract 2-byte value */(dVar9,0) << 4);
  this_ptr = g_CDemonRendererPtr;
  param_5->z = (float)(((int)(((int)ROUND(fVar8) + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >> 4) <<
                      4);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(this_ptr,param_5);
  local_18 = -0x80;
  do {
    iVar4 = local_18;
    local_14 = -0x80;
    do {
      iVar2 = local_14;
      iVar7 = -0x80;
      do {
        local_2c.x = (int)ROUND(((float)iVar4 + param_5->x) * 256f);
        local_2c.y = (int)ROUND(((float)iVar2 + param_5->y) * 256f);
        local_2c.z = (int)ROUND(((float)iVar7 + param_5->z) * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_2c);
        pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
        if ((int)((pSVar1->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar6 = (pSVar1->projected_vertex).transformed_z;
          iVar5 = iVar6 >> 0x1f;
          iVar6 = 0xff - ((int)((iVar6 + iVar5 * -0x80) - (uint)(iVar5 << 6 < 0)) >> 7);
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0xff < iVar6) {
            iVar6 = 0xff;
          }
          g_ActiveRenderColor =
               (int)g_ColorCubeLookup
                    [((int)((iVar6 + (iVar6 >> 0x1f) * -8) - (uint)((iVar6 >> 0x1f) << 2 < 0)) >> 3)
                     * 0x421];
          engine_prim_c_replaceWWithDepth_FUN_00552110(pSVar1,1);
          engine_2d_c_plotPixelWithDepth_FUN_00401290
                    ((pSVar1->projected_vertex).screen_x >> 0x10,
                     (pSVar1->projected_vertex).screen_y >> 0x10,
                     (pSVar1->projected_vertex).transformed_z);
        }
        iVar7 = iVar7 + 0x10;
      } while (iVar7 != 0x90);
      local_14 = local_14 + 0x10;
    } while (local_14 != 0x90);
    local_18 = local_18 + 0x10;
  } while (local_18 != 0x90);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&local_38);
  local_40 = (CVector3f *)0x0;
  local_3c = 0;
  local_38.x = 0.0;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&stack0xffffff90
            );
  local_3c = 0x40400000;
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_4c._4_4_ = (uint)ROUND(256f * 3.0);
  local_44 = (float)(int)ROUND(256f * 0.0);
  local_40 = (CVector3f *)(int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)(local_4c + 4)
            );
  local_38.x = 0.0;
  local_38.z = 0.0;
  local_38.y = 3.0;
  local_5c.x = (int)ROUND(256f * 0.0);
  local_5c.y = (int)ROUND(256f * 3.0);
  local_5c.z = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_5c);
  local_38.y = 0.0;
  local_38.z = 0.0;
  local_2c.x = 0x40400000;
  local_4c._0_4_ = (uint)ROUND(256f * 0.0);
  local_4c._4_4_ = (uint)ROUND(256f * 0.0);
  local_44 = (float)(int)ROUND(256f * 3.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_4c);
  engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xfffffff4);
  engine_3d_c_drawLineStrip2D_FUN_00404570((SLineStrip *)&stack0xffffff88);
  engine_3d_c_drawLineStrip2D_FUN_00404570((SLineStrip *)&stack0xffffff8c);
  engine_3d_c_drawLineStrip2D_FUN_00404570((SLineStrip *)&stack0xffffff90);
  iVar4 = 4;
  pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
  do {
    if ((int)(pSVar1[1].projected_vertex.screen_x & -0x80000000) == 0) {
      engine_2d_c_drawText_FUN_00401fd0
                (*(char **)(iVar4 + 0x66ec50),pSVar1[1].projected_vertex.screen_x >> 0x10,
                 pSVar1[1].projected_vertex.screen_y >> 0x10);
    }
    iVar4 = iVar4 + 4;
    pSVar1 = pSVar1 + 1;
  } while (iVar4 != 0x10);
  return;
}
