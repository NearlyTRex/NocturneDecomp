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
  BADSPACEBASE *in_ESP;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  CVector3i local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  local_24 = 0;
  local_28 = in_stack_00000004;
  do {
    fVar2 = (float)local_24 * _DAT_0065b5c8;
    fVar1 = *(float *)(in_stack_00000004 + 0x199ec);
    local_18 = local_24 * 0x30;
    iVar3 = 0;
    iVar5 = local_28;
    do {
      local_38.x = (int)ROUND((fVar2 + fVar1) * _DAT_0065b5b0);
      local_38.y = (int)ROUND((*(float *)(iVar5 + 0x128b8) + (float)0.25) * _DAT_0065b5b0
                             );
      local_38.z = (int)ROUND(((float)iVar3 * _DAT_0065b5c8 +
                              *(float *)(in_stack_00000004 + 0x199f0)) * _DAT_0065b5b0);
      iStack_14 = iVar3;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 local_18),&local_38);
      iVar5 = iVar5 + 4;
      local_18 = local_18 + 0x240;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    local_24 = local_24 + 1;
    local_28 = local_28 + 0x30;
  } while (local_24 < 0xc);
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,-1);
  local_20 = 0xc;
  do {
    local_1c = local_20;
    iVar4 = 1;
    iVar5 = local_20;
    iVar3 = local_20 + -0xb;
    do {
      local_2c = local_1c + iVar4;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,local_2c,iVar5);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,local_2c,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar4 < 0xc);
    local_20 = local_20 + 0xc;
  } while (local_20 != 0x90);
  return;
}
