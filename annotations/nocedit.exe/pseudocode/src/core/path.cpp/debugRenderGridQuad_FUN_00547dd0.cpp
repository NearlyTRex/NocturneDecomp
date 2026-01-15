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
  float10 fVar8;
  double dVar9;
  double dVar10;
  CVector3i *pCVar11;
  int *piVar12;
  int iStack_3c;
  float fStack_38;
  float local_2c;
  
  fVar4 = (float10)256;
  fVar5 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar4;
  fVar6 = (float10)grid_y * (float10)(g_CDemonRaytraceInstance.adjusted_size.y * 256f);
  fVar7 = (float10)grid_z * (float10)(g_CDemonRaytraceInstance.adjusted_size.z * 256f);
  fStack_38 = 7.759508e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)grid_x *
                             g_CDemonRaytraceInstance.adjusted_size.x * 256f));
  fVar8 = (float10)dVar9;
  iStack_3c = 0x547e61;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  fStack_38 = (float)(int)ROUND(fVar8);
  pCVar11 = (CVector3i *)0x547e77;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)(fVar4 + fVar5 + fVar6));
  fStack_38 = (float)(int)ROUND(dVar10);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)*extraout_EAX,pCVar11);
  piVar12 = &iStack_3c;
  pCVar11 = (CVector3i *)0x547eaa;
  crt_math_c_round_FUN_005fe6b0((double)((float)iStack_3c + (float)(int)ROUND(dVar9)));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*extraout_EDX + 0x30),pCVar11);
  pCVar11 = (CVector3i *)0x547ee0;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float)(int)fStack_38 + local_2c));
  iStack_3c = (int)ROUND(dVar9);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*extraout_EDX_00 + 0x60),pCVar11);
  pCVar11 = (CVector3i *)0x547f16;
  crt_math_c_round_FUN_005fe6b0((double)((float)(int)piVar12 - fStack_38));
  fVar1 = (float)(color << 8);
  iVar2 = fog << 8;
  fVar3 = (float)((int)w_recip << 8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*extraout_EDX_01 + 0x90),pCVar11);
  this_ptr = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = fVar1;
  this_ptr->vertex_buffer_ptr->color = iVar2;
  this_ptr->vertex_buffer_ptr->fog = fVar3;
  this_ptr->vertex_buffer_ptr->w_recip = (float)grid_x;
  this_ptr->vertex_buffer_ptr[1].light = fVar1;
  this_ptr->vertex_buffer_ptr[1].color = iVar2;
  this_ptr->vertex_buffer_ptr[1].fog = fVar3;
  this_ptr->vertex_buffer_ptr[1].w_recip = (float)grid_x;
  this_ptr->vertex_buffer_ptr[2].light = fVar1;
  this_ptr->vertex_buffer_ptr[2].color = iVar2;
  this_ptr->vertex_buffer_ptr[2].fog = fVar3;
  this_ptr->vertex_buffer_ptr[2].w_recip = (float)grid_x;
  this_ptr->vertex_buffer_ptr[3].light = fVar1;
  this_ptr->vertex_buffer_ptr[3].color = iVar2;
  this_ptr->vertex_buffer_ptr[3].fog = fVar3;
  this_ptr->vertex_buffer_ptr[3].w_recip = (float)grid_x;
  engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0(this_ptr,&DAT_030d4fd0)
  ;
  return;
}
