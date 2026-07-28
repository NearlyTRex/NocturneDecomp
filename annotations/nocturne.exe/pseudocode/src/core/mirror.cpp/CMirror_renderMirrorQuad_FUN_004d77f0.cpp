// Name: core_mirror.cpp_CMirror_renderMirrorQuad_FUN_004d77f0
// Address: 004d77f0
// Address Range: [[004d77f0, 004d7979]]
// Convention: unknown
// Signature: int core_mirror_cpp_CMirror_renderMirrorQuad_FUN_004d77f0(float *param_1)

#include "nocturne.h"

int core_mirror_cpp_CMirror_renderMirrorQuad_FUN_004d77f0(float *param_1)

{
  int iVar1;
  SMRGLHeaderPrimitive local_64;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3i local_24;
  CVector3i local_18;
  
  local_24.x = (int)ROUND(*param_1 * 256.0f);
  local_24.y = (int)ROUND(param_1[1] * 256.0f);
  local_24.z = (int)ROUND(param_1[2] * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_24);
  local_30.x = (int)ROUND(param_1[3] * 256.0f);
  local_30.y = (int)ROUND(param_1[4] * 256.0f);
  local_30.z = (int)ROUND(param_1[5] * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_30);
  local_3c.x = (int)ROUND(param_1[6] * 256.0f);
  local_3c.y = (int)ROUND(param_1[7] * 256.0f);
  local_3c.z = (int)ROUND(param_1[8] * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_3c);
  local_18.x = (int)ROUND(param_1[9] * 256.0f);
  local_18.y = (int)ROUND(param_1[10] * 256.0f);
  local_18.z = (int)ROUND(param_1[0xb] * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_18);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  local_64.base.count = 4;
  local_64.surface_normal.D.i = 0;
  local_64.surface_normal.C.i = 0;
  local_64.surface_normal.B.i = 0;
  local_64.surface_normal.A.i = 0;
  local_4c = 0;
  local_48 = 1;
  local_44 = 2;
  local_40 = 3;
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                    (DAT_005ae704,&local_64);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  return iVar1;
}
