// Name: core_path.cpp_debugRenderGridQuad_FUN_00547dd0
// Address: 00547dd0
// Address Range: [[00547dd0, 00547fb9]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_debugRenderGridQuad_FUN_00547dd0(int grid_x,int grid_y,int grid_z,int color,int fog,float w_recip)

#include "nocturne.h"

void __cdecl core_path_cpp_debugRenderGridQuad_FUN_00547dd0(int grid_x,int grid_y,int grid_z,int color,int fog,float w_recip)

{
  float fVar1;
  float fVar2;
  double dVar3;
  CDemonRenderer *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  CVector3i *pCVar11;
  int *piVar12;
  int iStack_3c;
  float fStack_38;
  float local_2c;
  
  pCVar4 = g_CDemonRendererPtr2;
  dVar3 = 256;
  fVar1 = g_CDemonRaytraceInstance.adjusted_size.y * 256.0f;
  fVar2 = g_CDemonRaytraceInstance.adjusted_size.z * 256.0f;
  dVar10 = (double)g_CDemonRaytraceInstance.bbox_min.y * 256;
  fStack_38 = 7.759508e-39;
  dVar8 = round
                    ((double)((float)grid_x *
                             g_CDemonRaytraceInstance.adjusted_size.x * 256.0f));
  iStack_3c = 0x547e61;
  dVar9 = round((double)((float)grid_z * fVar2));
  fStack_38 = (float)(int)ROUND(dVar8);
  pCVar11 = (CVector3i *)0x547e77;
  dVar10 = round(dVar3 + dVar10 + (double)grid_y * (double)fVar1);
  fStack_38 = (float)(int)ROUND(dVar10);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar4->vertex_buffer_ptr->projected_vertex,pCVar11);
  pCVar4 = g_CDemonRendererPtr2;
  piVar12 = &iStack_3c;
  pCVar11 = (CVector3i *)0x547eaa;
  round((double)((float)iStack_3c + (float)(int)ROUND(dVar9)));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar4->vertex_buffer_ptr[1].projected_vertex,pCVar11);
  pCVar4 = g_CDemonRendererPtr2;
  pCVar11 = (CVector3i *)0x547ee0;
  dVar10 = round((double)((float)(int)fStack_38 + local_2c));
  iStack_3c = (int)ROUND(dVar10);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar4->vertex_buffer_ptr[2].projected_vertex,pCVar11);
  pCVar4 = g_CDemonRendererPtr2;
  pCVar11 = (CVector3i *)0x547f16;
  round((double)((float)(int)piVar12 - fStack_38));
  iVar5 = color << 8;
  iVar6 = fog << 8;
  iVar7 = (int)w_recip << 8;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar4->vertex_buffer_ptr[3].projected_vertex,pCVar11);
  pCVar4 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr->light = iVar5;
  pCVar4->vertex_buffer_ptr->color = iVar6;
  pCVar4->vertex_buffer_ptr->fog = iVar7;
  pCVar4->vertex_buffer_ptr->w_recip = (float)grid_x;
  pCVar4->vertex_buffer_ptr[1].light = iVar5;
  pCVar4->vertex_buffer_ptr[1].color = iVar6;
  pCVar4->vertex_buffer_ptr[1].fog = iVar7;
  pCVar4->vertex_buffer_ptr[1].w_recip = (float)grid_x;
  pCVar4->vertex_buffer_ptr[2].light = iVar5;
  pCVar4->vertex_buffer_ptr[2].color = iVar6;
  pCVar4->vertex_buffer_ptr[2].fog = iVar7;
  pCVar4->vertex_buffer_ptr[2].w_recip = (float)grid_x;
  pCVar4->vertex_buffer_ptr[3].light = iVar5;
  pCVar4->vertex_buffer_ptr[3].color = iVar6;
  pCVar4->vertex_buffer_ptr[3].fog = iVar7;
  pCVar4->vertex_buffer_ptr[3].w_recip = (float)grid_x;
  engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
            (pCVar4,&SMRGLPrimitiveQuad_030d4fd0.base);
  return;
}
