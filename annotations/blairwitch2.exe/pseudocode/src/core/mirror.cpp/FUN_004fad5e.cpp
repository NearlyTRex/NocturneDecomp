// Name: core_mirror.cpp_FUN_004fad5e
// Address: 004fad5e
// Address Range: [[004fad5e, 004faee9]]
// Convention: unknown
// Signature: int core_mirror_cpp_FUN_004fad5e(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_mirror_cpp_FUN_004fad5e(float *param_1)

{
  int iVar1;
  SMRGLHeaderPrimitive SStack_64;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  CVector3i CStack_3c;
  CVector3i CStack_30;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  CStack_24.x = (int)ROUND(*param_1 * _DAT_005fa1b0);
  CStack_24.y = (int)ROUND(param_1[1] * _DAT_005fa1b0);
  CStack_24.z = (int)ROUND(param_1[2] * _DAT_005fa1b0);
  engine_special_cpp_FUN_0055d9ec((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&CStack_24);
  CStack_30.x = (int)ROUND(param_1[3] * _DAT_005fa1b0);
  CStack_30.y = (int)ROUND(param_1[4] * _DAT_005fa1b0);
  CStack_30.z = (int)ROUND(param_1[5] * _DAT_005fa1b0);
  engine_special_cpp_FUN_0055d9ec
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&CStack_30);
  CStack_3c.x = (int)ROUND(param_1[6] * _DAT_005fa1b0);
  CStack_3c.y = (int)ROUND(param_1[7] * _DAT_005fa1b0);
  CStack_3c.z = (int)ROUND(param_1[8] * _DAT_005fa1b0);
  engine_special_cpp_FUN_0055d9ec
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&CStack_3c);
  CStack_18.x = (int)ROUND(param_1[9] * _DAT_005fa1b0);
  CStack_18.y = (int)ROUND(param_1[10] * _DAT_005fa1b0);
  CStack_18.z = (int)ROUND(param_1[0xb] * _DAT_005fa1b0);
  engine_special_cpp_FUN_0055d9ec
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&CStack_18);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  SStack_64.base.count = 4;
  SStack_64.surface_normal.D.i = 0;
  SStack_64.surface_normal.C.i = 0;
  SStack_64.surface_normal.B.i = 0;
  SStack_64.surface_normal.A.i = 0;
  uStack_4c = 0;
  uStack_48 = 1;
  uStack_44 = 2;
  uStack_40 = 3;
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
                    (DAT_0060b280,&SStack_64);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  return iVar1;
}
