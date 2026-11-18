// Name: core_path.cpp_renderGridQuad_FUN_00513720
// Address: 00513720
// Address Range: [[00513720, 00513942]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderGridQuad_FUN_00513720(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha)

#include "nocturne.h"

void __cdecl core_path_cpp_renderGridQuad_FUN_00513720(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha)

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
  
  pCVar5 = g_CDemonRenderer_PTR_0060b280;
  dVar4 = 256;
  fVar1 = g_CDemonRaytraceInstance.adjusted_size.x * 256.0f;
  fVar2 = g_CDemonRaytraceInstance.adjusted_size.y * 256.0f;
  fVar3 = g_CDemonRaytraceInstance.adjusted_size.z * 256.0f;
  dVar7 = (double)g_CDemonRaytraceInstance.bbox_min.y * 256;
  round((double)((float)grid_x * fVar1));
  round((double)((float)grid_z * fVar3));
  pCVar8 = (CVector3i *)0x5137cf;
  dVar7 = round(dVar7 + (double)grid_y * (double)fVar2 + dVar4);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&pCVar5->vertex_buffer_ptr->projected_vertex,pCVar8);
  pCVar5 = g_CDemonRenderer_PTR_0060b280;
  pCVar8 = (CVector3i *)0x51380d;
  round((double)((float)(int)fVar1 + unaff_EBX));
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&pCVar5->vertex_buffer_ptr[1].projected_vertex,pCVar8);
  pCVar5 = g_CDemonRenderer_PTR_0060b280;
  pCVar8 = (CVector3i *)0x513843;
  round((double)((float)(int)ROUND(dVar7) + unaff_ESI));
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&pCVar5->vertex_buffer_ptr[2].projected_vertex,pCVar8);
  pCVar5 = g_CDemonRenderer_PTR_0060b280;
  pCVar8 = (CVector3i *)0x513879;
  round((double)((float)(int)fVar2 - 7.458656e-39));
  iVar6 = alpha << 8;
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&pCVar5->vertex_buffer_ptr[3].projected_vertex,pCVar8);
  pCVar5 = g_CDemonRenderer_PTR_0060b280;
  g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->r = iStack_8;
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
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
            (pCVar5,(SMRGLPrimitivePoly *)&g_PathMapQuad);
  return;
}
