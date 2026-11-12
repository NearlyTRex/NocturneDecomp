// Name: core_path.cpp_renderGridQuad_FUN_00513720
// Address: 00513720
// Address Range: [[00513720, 00513942]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderGridQuad_FUN_00513720(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_renderGridQuad_FUN_00513720(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr;
  uint *puVar3;
  int extraout_ECX;
  int iVar4;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  CVector3i *pCVar12;
  CVector3i CStack_1c;
  int iStack_8;
  
  fVar1 = g_CDemonRaytraceInstance.adjusted_size.x * _DAT_005e1829;
  fVar2 = g_CDemonRaytraceInstance.adjusted_size.z * _DAT_005e1829;
  fVar7 = (float10)_DAT_005e1831;
  fVar8 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar7;
  fVar9 = (float10)grid_x * (float10)fVar1;
  fVar10 = (float10)grid_y * (float10)(g_CDemonRaytraceInstance.adjusted_size.y * _DAT_005e1829);
  fVar11 = (float10)grid_z * (float10)fVar2;
  iVar4 = red << 8;
  pCVar12 = &CStack_1c;
  round();
  round();
  CStack_1c.x = (int)ROUND(fVar9);
  fVar7 = fVar8 + fVar10 + fVar7;
  CStack_1c.z = (int)ROUND(fVar11);
  puVar3 = (uint *)round();
  CStack_1c.y = (int)ROUND(fVar7);
  iVar5 = blue << 8;
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)*puVar3,pCVar12);
  iStack_8 = CStack_1c.x;
  pCVar12 = &CStack_1c;
  fVar8 = (float10)CStack_1c.x + (float10)fVar1;
  round();
  CStack_1c.x = (int)ROUND(fVar8);
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)(*extraout_EDX + 0x30),pCVar12);
  iStack_8 = CStack_1c.z;
  pCVar12 = &CStack_1c;
  fVar8 = (float10)CStack_1c.z + (float10)fVar2;
  round();
  CStack_1c.z = (int)ROUND(fVar8);
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)(*extraout_EDX_00 + 0x60),pCVar12);
  iStack_8 = CStack_1c.x;
  pCVar12 = &CStack_1c;
  fVar8 = (float10)CStack_1c.x - (float10)fVar1;
  round();
  CStack_1c.x = (int)ROUND(fVar8);
  iVar6 = alpha << 8;
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)(*extraout_EDX_01 + 0x90),pCVar12);
  this_ptr = DAT_0060b280;
  DAT_0060b280->vertex_buffer_ptr->r = iVar4;
  this_ptr->vertex_buffer_ptr->g = extraout_ECX;
  this_ptr->vertex_buffer_ptr->b = iVar5;
  this_ptr->vertex_buffer_ptr->a = iVar6;
  this_ptr->vertex_buffer_ptr[1].r = iVar4;
  this_ptr->vertex_buffer_ptr[1].g = extraout_ECX;
  this_ptr->vertex_buffer_ptr[1].b = iVar5;
  this_ptr->vertex_buffer_ptr[1].a = iVar6;
  this_ptr->vertex_buffer_ptr[2].r = iVar4;
  this_ptr->vertex_buffer_ptr[2].g = extraout_ECX;
  this_ptr->vertex_buffer_ptr[2].b = iVar5;
  this_ptr->vertex_buffer_ptr[2].a = iVar6;
  this_ptr->vertex_buffer_ptr[3].r = iVar4;
  this_ptr->vertex_buffer_ptr[3].g = extraout_ECX;
  this_ptr->vertex_buffer_ptr[3].b = iVar5;
  this_ptr->vertex_buffer_ptr[3].a = iVar6;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
            (this_ptr,(SMRGLPrimitivePoly *)0x1e613f0);
  return;
}
