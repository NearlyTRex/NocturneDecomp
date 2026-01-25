// Name: core_bugs.cpp_FUN_00425340
// Address: 00425340
// Address Range: [[00425340, 004254aa]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425340()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_FUN_00425340(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  CVector3i local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_28 = 0;
  local_2c = in_stack_00000004;
  do {
    fVar2 = (float)local_28 * 0.5f;
    fVar1 = *(float *)(in_stack_00000004 + 0x199ec);
    local_1c = local_28 * 0x30;
    iVar3 = 0;
    iVar5 = local_2c;
    do {
      local_3c.x = (int)ROUND((fVar2 + fVar1) * _DAT_0065b5b0);
      local_3c.y = (int)ROUND((*(float *)(iVar5 + 0x128b8) + (float)0.25) * _DAT_0065b5b0
                             );
      local_3c.z = (int)ROUND(((float)iVar3 * 0.5f +
                              *(float *)(in_stack_00000004 + 0x199f0)) * _DAT_0065b5b0);
      local_18 = iVar3;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 local_1c),&local_3c);
      iVar5 = iVar5 + 4;
      local_1c = local_1c + 0x240;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    local_28 = local_28 + 1;
    local_2c = local_2c + 0x30;
  } while (local_28 < 0xc);
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,-1);
  local_24 = 0xc;
  do {
    local_20 = local_24;
    iVar4 = 1;
    iVar5 = local_24;
    iVar3 = local_24 + -0xb;
    do {
      local_30 = local_20 + iVar4;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,local_30,iVar5);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,local_30,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar4 < 0xc);
    local_24 = local_24 + 0xc;
  } while (local_24 != 0x90);
  return;
}
