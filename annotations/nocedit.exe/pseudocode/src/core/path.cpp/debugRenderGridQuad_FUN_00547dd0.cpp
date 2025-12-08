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
  CDemonRenderer *this_ptr;
  uint *extraout_EAX;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  float fVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  CVector3i *pCVar10;
  float local_2c;
  
  fVar1 = g_CDemonRaytraceInstance.adjusted_size.x * 256f;
  fVar4 = (float10)256;
  fVar5 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar4;
  fVar6 = (float10)grid_y * (float10)(g_CDemonRaytraceInstance.adjusted_size.y * 256f);
  fVar7 = (float10)grid_z * (float10)(g_CDemonRaytraceInstance.adjusted_size.z * 256f);
  crt_math_c_round_FUN_005fe6b0((double)((float)grid_x * fVar1));
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  pCVar10 = (CVector3i *)0x547e77;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)(fVar4 + fVar5 + fVar6));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)*extraout_EAX,pCVar10);
  pCVar10 = (CVector3i *)0x547eaa;
  crt_math_c_round_FUN_005fe6b0((double)((float)(int)ROUND(dVar9) + local_2c));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*extraout_EDX + 0x30),pCVar10);
  pCVar10 = (CVector3i *)0x547ee0;
  crt_math_c_round_FUN_005fe6b0((double)((float)(int)ROUND(dVar8) + fVar1));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*extraout_EDX_00 + 0x60),pCVar10);
  pCVar10 = (CVector3i *)0x547f16;
  crt_math_c_round_FUN_005fe6b0((double)((float)(int)ROUND(dVar9) - local_2c));
  fVar1 = (float)(color << 8);
  iVar2 = fog << 8;
  fVar3 = (float)((int)w_recip << 8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*extraout_EDX_01 + 0x90),pCVar10);
  this_ptr = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = fVar1;
  this_ptr->vertex_buffer_ptr->color = iVar2;
  this_ptr->vertex_buffer_ptr->fog = fVar3;
  this_ptr->vertex_buffer_ptr->w_recip = (float)fog;
  this_ptr->vertex_buffer_ptr[1].light = fVar1;
  this_ptr->vertex_buffer_ptr[1].color = iVar2;
  this_ptr->vertex_buffer_ptr[1].fog = fVar3;
  this_ptr->vertex_buffer_ptr[1].w_recip = (float)fog;
  this_ptr->vertex_buffer_ptr[2].light = fVar1;
  this_ptr->vertex_buffer_ptr[2].color = iVar2;
  this_ptr->vertex_buffer_ptr[2].fog = fVar3;
  this_ptr->vertex_buffer_ptr[2].w_recip = (float)fog;
  this_ptr->vertex_buffer_ptr[3].light = fVar1;
  this_ptr->vertex_buffer_ptr[3].color = iVar2;
  this_ptr->vertex_buffer_ptr[3].fog = fVar3;
  this_ptr->vertex_buffer_ptr[3].w_recip = (float)fog;
  engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0(this_ptr,&DAT_030d4fd0)
  ;
  return;
}
