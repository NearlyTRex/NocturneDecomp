// Name: core_path.cpp_renderGridQuad_FUN_0050c750
// Address: 0050c750
// Address Range: [[0050c750, 0050c972]]
// Convention: unknown
// Signature: void core_path_cpp_renderGridQuad_FUN_0050c750(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_renderGridQuad_FUN_0050c750(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,int param_7)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr;
  uint *puVar3;
  int extraout_ECX;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  CVector3i *pCVar9;
  CVector3i CStack_1c;
  int iStack_8;
  
  fVar1 = g_CDemonRaytraceInstance.adjusted_size.x * _DAT_005cb8ec;
  fVar2 = g_CDemonRaytraceInstance.adjusted_size.z * _DAT_005cb8ec;
  fVar4 = (float10)_DAT_005cb8f4;
  fVar5 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar4;
  fVar6 = (float10)param_1 * (float10)fVar1;
  fVar7 = (float10)param_2 * (float10)(g_CDemonRaytraceInstance.adjusted_size.y * _DAT_005cb8ec);
  fVar8 = (float10)param_3 * (float10)fVar2;
  param_4 = param_4 << 8;
  pCVar9 = &CStack_1c;
  round();
  round();
  CStack_1c.x = (int)ROUND(fVar6);
  fVar4 = fVar5 + fVar7 + fVar4;
  CStack_1c.z = (int)ROUND(fVar8);
  puVar3 = (uint *)round();
  CStack_1c.y = (int)ROUND(fVar4);
  param_6 = param_6 << 8;
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)*puVar3,pCVar9);
  iStack_8 = CStack_1c.x;
  pCVar9 = &CStack_1c;
  fVar5 = (float10)CStack_1c.x + (float10)fVar1;
  round();
  CStack_1c.x = (int)ROUND(fVar5);
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*extraout_EDX + 0x30),pCVar9);
  iStack_8 = CStack_1c.z;
  pCVar9 = &CStack_1c;
  fVar5 = (float10)CStack_1c.z + (float10)fVar2;
  round();
  CStack_1c.z = (int)ROUND(fVar5);
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*extraout_EDX_00 + 0x60),pCVar9);
  iStack_8 = CStack_1c.x;
  pCVar9 = &CStack_1c;
  fVar5 = (float10)CStack_1c.x - (float10)fVar1;
  round();
  CStack_1c.x = (int)ROUND(fVar5);
  param_7 = param_7 << 8;
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*extraout_EDX_01 + 0x90),pCVar9);
  this_ptr = DAT_005f2afc;
  DAT_005f2afc->vertex_buffer_ptr->r = param_4;
  this_ptr->vertex_buffer_ptr->g = extraout_ECX;
  this_ptr->vertex_buffer_ptr->b = param_6;
  this_ptr->vertex_buffer_ptr->a = param_7;
  this_ptr->vertex_buffer_ptr[1].r = param_4;
  this_ptr->vertex_buffer_ptr[1].g = extraout_ECX;
  this_ptr->vertex_buffer_ptr[1].b = param_6;
  this_ptr->vertex_buffer_ptr[1].a = param_7;
  this_ptr->vertex_buffer_ptr[2].r = param_4;
  this_ptr->vertex_buffer_ptr[2].g = extraout_ECX;
  this_ptr->vertex_buffer_ptr[2].b = param_6;
  this_ptr->vertex_buffer_ptr[2].a = param_7;
  this_ptr->vertex_buffer_ptr[3].r = param_4;
  this_ptr->vertex_buffer_ptr[3].g = extraout_ECX;
  this_ptr->vertex_buffer_ptr[3].b = param_6;
  this_ptr->vertex_buffer_ptr[3].a = param_7;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0
            (this_ptr,(SMRGLPrimitivePoly *)0x1ed2a30);
  return;
}
