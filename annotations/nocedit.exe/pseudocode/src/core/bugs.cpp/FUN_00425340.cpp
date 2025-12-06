// Name: core_bugs.cpp_FUN_00425340
// Address: 00425340
// Address Range: [[00425340, 004254aa]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425340()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_FUN_00425340(void)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  float fVar4;
  CVector3i local_3c;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int iStack_14;
  
  local_28 = 0;
  local_2c = in_stack_00000004;
  do {
    fVar4 = (float)local_28 * _DAT_0065b5c8 + *(float *)(in_stack_00000004 + 0x199ec);
    local_1c = local_28 * 0x30;
    iVar1 = 0;
    iVar3 = local_2c;
    do {
      local_3c.x = (int)ROUND(fVar4 * _DAT_0065b5b0);
      local_3c.y = (int)ROUND((*(float *)(iVar3 + 0x128b8) + (float)0.25) * _DAT_0065b5b0
                             );
      local_3c.z = (int)ROUND(((float)iVar1 * _DAT_0065b5c8 +
                              *(float *)(in_stack_00000004 + 0x199f0)) * _DAT_0065b5b0);
      local_18 = iVar1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 local_1c),&local_3c);
      iVar3 = iVar3 + 4;
      local_18 = local_18 + 0x240;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    local_24 = local_24 + 1;
    local_28 = local_28 + 0x30;
  } while (local_24 < 0xc);
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,-1);
  local_1c = 0xc;
  do {
    local_18 = local_1c;
    iVar2 = 1;
    iVar3 = local_1c;
    iVar1 = local_1c + -0xb;
    do {
      local_28 = local_18 + iVar2;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,local_28,iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,local_24,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar2 < 0xc);
    iStack_14 = iStack_14 + 0xc;
  } while (iStack_14 != 0x90);
  return;
}
