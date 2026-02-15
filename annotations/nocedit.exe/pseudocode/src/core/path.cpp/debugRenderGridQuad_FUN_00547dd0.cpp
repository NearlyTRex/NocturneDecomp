// Name: core_path.cpp_debugRenderGridQuad_FUN_00547dd0
// Address: 00547dd0
// Address Range: [[00547dd0, 00547fb9]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_debugRenderGridQuad_FUN_00547dd0(int grid_x,int grid_y,int grid_z,int color,int fog,float w_recip)

#include "nocturne.h"

void __cdecl core_path_cpp_debugRenderGridQuad_FUN_00547dd0(int grid_x,int grid_y,int grid_z,int color,int fog,float w_recip)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  double dVar11;
  CVector3i *pCVar12;
  int *piVar13;
  int iStack_3c;
  float fStack_38;
  float local_2c;
  
  pCVar1 = g_CDemonRendererPtr2;
  fVar5 = (float10)256;
  fVar6 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar5;
  fVar7 = (float10)grid_y * (float10)(g_CDemonRaytraceInstance.adjusted_size.y * 256.0f);
  fVar8 = (float10)grid_z * (float10)(g_CDemonRaytraceInstance.adjusted_size.z * 256.0f);
  fStack_38 = 7.759508e-39;
  dVar10 = round
                     ((double)((float)grid_x *
                              g_CDemonRaytraceInstance.adjusted_size.x * 256.0f));
  fVar9 = (float10)dVar10;
  iStack_3c = 0x547e61;
  dVar10 = round((double)fVar8);
  fStack_38 = (float)(int)ROUND(fVar9);
  pCVar12 = (CVector3i *)0x547e77;
  dVar11 = round((double)(fVar5 + fVar6 + fVar7));
  fStack_38 = (float)(int)ROUND(dVar11);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr->projected_vertex,pCVar12);
  pCVar1 = g_CDemonRendererPtr2;
  piVar13 = &iStack_3c;
  pCVar12 = (CVector3i *)0x547eaa;
  round((double)((float)iStack_3c + (float)(int)ROUND(dVar10)));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[1].projected_vertex,pCVar12);
  pCVar1 = g_CDemonRendererPtr2;
  pCVar12 = (CVector3i *)0x547ee0;
  dVar10 = round((double)((float)(int)fStack_38 + local_2c));
  iStack_3c = (int)ROUND(dVar10);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[2].projected_vertex,pCVar12);
  pCVar1 = g_CDemonRendererPtr2;
  pCVar12 = (CVector3i *)0x547f16;
  round((double)((float)(int)piVar13 - fStack_38));
  iVar2 = color << 8;
  iVar3 = fog << 8;
  iVar4 = (int)w_recip << 8;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[3].projected_vertex,pCVar12);
  pCVar1 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr->light = iVar2;
  pCVar1->vertex_buffer_ptr->color = iVar3;
  pCVar1->vertex_buffer_ptr->fog = iVar4;
  pCVar1->vertex_buffer_ptr->w_recip = (float)grid_x;
  pCVar1->vertex_buffer_ptr[1].light = iVar2;
  pCVar1->vertex_buffer_ptr[1].color = iVar3;
  pCVar1->vertex_buffer_ptr[1].fog = iVar4;
  pCVar1->vertex_buffer_ptr[1].w_recip = (float)grid_x;
  pCVar1->vertex_buffer_ptr[2].light = iVar2;
  pCVar1->vertex_buffer_ptr[2].color = iVar3;
  pCVar1->vertex_buffer_ptr[2].fog = iVar4;
  pCVar1->vertex_buffer_ptr[2].w_recip = (float)grid_x;
  pCVar1->vertex_buffer_ptr[3].light = iVar2;
  pCVar1->vertex_buffer_ptr[3].color = iVar3;
  pCVar1->vertex_buffer_ptr[3].fog = iVar4;
  pCVar1->vertex_buffer_ptr[3].w_recip = (float)grid_x;
  engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
            (pCVar1,&SMRGLPrimitiveQuad_030d4fd0.base);
  return;
}
