// Name: core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_00425340
// Address: 00425340
// Address Range: [[00425340, 004254aa]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_00425340(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_00425340(CBugs *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CBugs *pCVar5;
  int vertex_index2;
  CVector3i local_3c;
  int local_30;
  CBugs *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_28 = 0;
  local_2c = this_ptr;
  do {
    fVar2 = (float)local_28 * 0.5f;
    fVar1 = this_ptr->grid_origin_x;
    local_1c = local_28 * 0x30;
    iVar3 = 0;
    pCVar5 = local_2c;
    do {
      local_3c.x = (int)ROUND((fVar2 + fVar1) * 256.0f);
      local_3c.y = (int)ROUND((pCVar5->ground_heights[0][0] + (float)0.25) *
                              256.0f);
      local_3c.z = (int)ROUND(((float)iVar3 * 0.5f + this_ptr->grid_origin_z) *
                              256.0f);
      local_18 = iVar3;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 local_1c),&local_3c);
      pCVar5 = (CBugs *)((pCVar5->base).base.base.actor_name + 4);
      local_1c = local_1c + 0x240;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    local_28 = local_28 + 1;
    local_2c = (CBugs *)&(local_2c->base).base.base.orient;
  } while (local_28 < 0xc);
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,-1);
  local_24 = 0xc;
  do {
    local_20 = local_24;
    iVar4 = 1;
    iVar3 = local_24;
    vertex_index2 = local_24 + -0xb;
    do {
      local_30 = local_20 + iVar4;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,local_30,iVar3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 1;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,local_30,vertex_index2);
      vertex_index2 = vertex_index2 + 1;
    } while (iVar4 < 0xc);
    local_24 = local_24 + 0xc;
  } while (local_24 != 0x90);
  return;
}
