// Name: core_path.cpp_renderGridQuad_FUN_00534a70
// Address: 00534a70
// Address Range: [[00534a70, 00534c92]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderGridQuad_FUN_00534a70(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_renderGridQuad_FUN_00534a70(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  CDemonRenderer *pCVar5;
  float unaff_EBX;
  int unaff_EBP;
  int iVar6;
  float unaff_ESI;
  double dVar7;
  int unaff_retaddr;
  CVector3i *pCVar8;
  int iStack_8;
  
  pCVar5 = DAT_00612560;
  dVar4 = _DAT_005eca8c;
  fVar1 = g_CDemonRaytraceInstance.adjusted_size.x * _DAT_005eca84;
  fVar2 = g_CDemonRaytraceInstance.adjusted_size.y * _DAT_005eca84;
  fVar3 = g_CDemonRaytraceInstance.adjusted_size.z * _DAT_005eca84;
  dVar7 = (double)g_CDemonRaytraceInstance.bbox_min.y * _DAT_005eca8c;
  round((double)((float)grid_x * fVar1));
  round((double)((float)grid_z * fVar3));
  pCVar8 = (CVector3i *)0x534b1f;
  dVar7 = round(dVar7 + (double)grid_y * (double)fVar2 + dVar4);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&pCVar5->vertex_buffer_ptr->projected_vertex,pCVar8);
  pCVar5 = DAT_00612560;
  pCVar8 = (CVector3i *)0x534b5d;
  round((double)((float)(int)fVar1 + unaff_EBX));
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&pCVar5->vertex_buffer_ptr[1].projected_vertex,pCVar8);
  pCVar5 = DAT_00612560;
  pCVar8 = (CVector3i *)0x534b93;
  round((double)((float)(int)ROUND(dVar7) + unaff_ESI));
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&pCVar5->vertex_buffer_ptr[2].projected_vertex,pCVar8);
  pCVar5 = DAT_00612560;
  pCVar8 = (CVector3i *)0x534bc9;
  round((double)((float)(int)fVar2 - 7.649255e-39));
  iVar6 = alpha << 8;
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&pCVar5->vertex_buffer_ptr[3].projected_vertex,pCVar8);
  pCVar5 = DAT_00612560;
  DAT_00612560->vertex_buffer_ptr->r = iStack_8;
  pCVar5->vertex_buffer_ptr->g = unaff_EBP;
  pCVar5->vertex_buffer_ptr->b = unaff_retaddr;
  pCVar5->vertex_buffer_ptr->a = iVar6;
  pCVar5->vertex_buffer_ptr[1].r = iStack_8;
  pCVar5->vertex_buffer_ptr[1].g = unaff_EBP;
  pCVar5->vertex_buffer_ptr[1].b = unaff_retaddr;
  pCVar5->vertex_buffer_ptr[1].a = iVar6;
  pCVar5->vertex_buffer_ptr[2].r = iStack_8;
  pCVar5->vertex_buffer_ptr[2].g = unaff_EBP;
  pCVar5->vertex_buffer_ptr[2].b = unaff_retaddr;
  pCVar5->vertex_buffer_ptr[2].a = iVar6;
  pCVar5->vertex_buffer_ptr[3].r = iStack_8;
  pCVar5->vertex_buffer_ptr[3].g = unaff_EBP;
  pCVar5->vertex_buffer_ptr[3].b = unaff_retaddr;
  pCVar5->vertex_buffer_ptr[3].a = iVar6;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00
            (pCVar5,(SMRGLPrimitivePoly *)0x1e7d360);
  return;
}
