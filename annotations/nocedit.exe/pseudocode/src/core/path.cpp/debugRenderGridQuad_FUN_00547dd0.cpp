// Name: core_path.cpp_debugRenderGridQuad_FUN_00547dd0
// Address: 00547dd0
// Address Range: [[00547dd0, 00547fb9]]
// Convention: __cdecl
// Signature: void core_path.cpp_debugRenderGridQuad_FUN_00547dd0(int grid_x, int grid_y, int grid_z, int color, int fog, float w_recip)

#include "nocturne.h"

void __cdecl
core_path_cpp_debugRenderGridQuad_FUN_00547dd0
          (int grid_x,int grid_y,int grid_z,int color,int fog,float w_recip)

{
  CDemonRenderer *pCVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  CVector3i *pCVar11;
  float local_2c;
  
  pCVar1 = g_CDemonRendererPtr;
  fVar2 = g_CDemonRaytraceInstance.adjusted_size.x * 256f;
  fVar5 = (float10)256;
  fVar6 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar5;
  fVar7 = (float10)grid_y * (float10)(g_CDemonRaytraceInstance.adjusted_size.y * 256f);
  fVar8 = (float10)grid_z * (float10)(g_CDemonRaytraceInstance.adjusted_size.z * 256f);
  crt_math_c_round_FUN_005fe6b0((double)((float)grid_x * fVar2));
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  pCVar11 = (CVector3i *)0x547e77;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)(fVar5 + fVar6 + fVar7));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr->projected_vertex,pCVar11);
  pCVar1 = g_CDemonRendererPtr;
  pCVar11 = (CVector3i *)0x547eaa;
  crt_math_c_round_FUN_005fe6b0((double)((float)(int)ROUND(dVar10) + local_2c));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[1].projected_vertex,pCVar11);
  pCVar1 = g_CDemonRendererPtr;
  pCVar11 = (CVector3i *)0x547ee0;
  crt_math_c_round_FUN_005fe6b0((double)((float)(int)ROUND(dVar9) + fVar2));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[2].projected_vertex,pCVar11);
  pCVar1 = g_CDemonRendererPtr;
  pCVar11 = (CVector3i *)0x547f16;
  crt_math_c_round_FUN_005fe6b0((double)((float)(int)ROUND(dVar10) - local_2c));
  fVar2 = (float)(color << 8);
  iVar3 = fog << 8;
  fVar4 = (float)((int)w_recip << 8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[3].projected_vertex,pCVar11);
  pCVar1 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = fVar2;
  pCVar1->vertex_buffer_ptr->color = iVar3;
  pCVar1->vertex_buffer_ptr->fog = fVar4;
  pCVar1->vertex_buffer_ptr->w_recip = (float)fog;
  pCVar1->vertex_buffer_ptr[1].light = fVar2;
  pCVar1->vertex_buffer_ptr[1].color = iVar3;
  pCVar1->vertex_buffer_ptr[1].fog = fVar4;
  pCVar1->vertex_buffer_ptr[1].w_recip = (float)fog;
  pCVar1->vertex_buffer_ptr[2].light = fVar2;
  pCVar1->vertex_buffer_ptr[2].color = iVar3;
  pCVar1->vertex_buffer_ptr[2].fog = fVar4;
  pCVar1->vertex_buffer_ptr[2].w_recip = (float)fog;
  pCVar1->vertex_buffer_ptr[3].light = fVar2;
  pCVar1->vertex_buffer_ptr[3].color = iVar3;
  pCVar1->vertex_buffer_ptr[3].fog = fVar4;
  pCVar1->vertex_buffer_ptr[3].w_recip = (float)fog;
  engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0(pCVar1,&DAT_030d4fd0);
  return;
}
