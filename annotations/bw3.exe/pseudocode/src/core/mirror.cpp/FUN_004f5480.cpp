// Name: core_mirror.cpp_FUN_004f5480
// Address: 004f5480
// Address Range: [[004f5480, 004f5609]]
// Convention: unknown
// Signature: int core_mirror_cpp_FUN_004f5480(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_mirror_cpp_FUN_004f5480(void)

{
  int iVar1;
  float *in_stack_00000004;
  SMRGLHeaderPrimitive SStack_64;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  CVector3i CStack_3c;
  CVector3i CStack_30;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  CStack_24.x = (int)ROUND(*in_stack_00000004 * _DAT_005e29c0);
  CStack_24.y = (int)ROUND(in_stack_00000004[1] * _DAT_005e29c0);
  CStack_24.z = (int)ROUND(in_stack_00000004[2] * _DAT_005e29c0);
  engine_special_cpp_FUN_0056356c(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_24);
  CStack_30.x = (int)ROUND(in_stack_00000004[3] * _DAT_005e29c0);
  CStack_30.y = (int)ROUND(in_stack_00000004[4] * _DAT_005e29c0);
  CStack_30.z = (int)ROUND(in_stack_00000004[5] * _DAT_005e29c0);
  engine_special_cpp_FUN_0056356c(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_30);
  CStack_3c.x = (int)ROUND(in_stack_00000004[6] * _DAT_005e29c0);
  CStack_3c.y = (int)ROUND(in_stack_00000004[7] * _DAT_005e29c0);
  CStack_3c.z = (int)ROUND(in_stack_00000004[8] * _DAT_005e29c0);
  engine_special_cpp_FUN_0056356c(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_3c);
  CStack_18.x = (int)ROUND(in_stack_00000004[9] * _DAT_005e29c0);
  CStack_18.y = (int)ROUND(in_stack_00000004[10] * _DAT_005e29c0);
  CStack_18.z = (int)ROUND(in_stack_00000004[0xb] * _DAT_005e29c0);
  engine_special_cpp_FUN_0056356c(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_18);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
  SStack_64.base.count = 4;
  SStack_64.surface_normal.D.i = 0;
  SStack_64.surface_normal.C.i = 0;
  SStack_64.surface_normal.B.i = 0;
  SStack_64.surface_normal.A.i = 0;
  uStack_4c = 0;
  uStack_48 = 1;
  uStack_44 = 2;
  uStack_40 = 3;
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                    (DAT_005f2afc,&SStack_64);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
  return iVar1;
}
