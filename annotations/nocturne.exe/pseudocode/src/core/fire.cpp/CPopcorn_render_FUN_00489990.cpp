// Name: core_fire.cpp_CPopcorn_render_FUN_00489990
// Address: 00489990
// Address Range: [[00489990, 00489cf3]]
// Convention: unknown
// Signature: void core_fire_cpp_CPopcorn_render_FUN_00489990(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CPopcorn_render_FUN_00489990(CVector3f *param_1)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  byte bVar2;
  int aiStackY_1048 [996];
  uint uVar3;
  SMRGLHeaderPrimitive local_a0;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  CVector3i local_78;
  CVector3i local_6c;
  uint local_60;
  int aiStack_5c [2];
  CVector3i local_54;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_3c;
  uint local_30;
  int aiStack_2c [2];
  CVector3i local_24;
  CVector3i local_18;
  
  bVar2 = 0;
  vertex_ptr = DAT_005ae704->vertex_buffer_ptr;
  local_3c.x = (int)ROUND(param_1->x * 256.0f);
  local_3c.y = (int)ROUND(param_1->y * 256.0f);
  local_3c.z = (int)ROUND(param_1->z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(&vertex_ptr->projected_vertex,&local_3c);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(DAT_005ae704,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_FUN_00460d90(DAT_005ae704);
  uVar3 = 0;
  local_60 = local_30;
  aiStack_5c[(uint)bVar2 * -2] = aiStack_2c[(uint)bVar2 * -2];
  aiStack_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       aiStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(DAT_005ae704,&local_60,uVar3);
  local_48 = 0xbe000000;
  local_44 = 0xbe000000;
  local_40 = 0;
  local_6c.x = (int)ROUND(256.0f * -0.125);
  local_6c.y = (int)ROUND(256.0f * -0.125);
  local_6c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_6c);
  local_48 = 0x3e000000;
  local_44 = 0xbe000000;
  local_40 = 0;
  local_18.x = (int)ROUND(256.0f * 0.125);
  local_18.y = (int)ROUND(256.0f * -0.125);
  local_18.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_18);
  local_48 = 0x3e000000;
  local_44 = 0x3e000000;
  local_40 = 0;
  local_78.x = (int)ROUND(256.0f * 0.125);
  local_78.y = (int)ROUND(256.0f * 0.125);
  local_78.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_78);
  local_48 = 0xbe000000;
  local_44 = 0x3e000000;
  local_40 = 0;
  local_54.x = (int)ROUND(256.0f * -0.125);
  local_54.y = (int)ROUND(256.0f * 0.125);
  local_54.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_54);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b8ba4);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
  _DAT_005c5030 = 0xf80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c5060 = 0xf80000;
  _DAT_005c508c = 0xf80000;
  DAT_005c502c = 0x80000;
  _DAT_005c5090 = 0x80000;
  DAT_005c5040 = 0xffff - _DAT_01c038f4;
  _DAT_005c50bc = 0x80000;
  _DAT_005c50c0 = 0x80000;
  local_24.x = (int)ROUND(param_1->x * 256.0f);
  local_24.y = (int)ROUND(param_1->y * 256.0f);
  local_24.z = (int)ROUND(param_1->z * 256.0f);
  DAT_005c5070 = DAT_005c5040;
  _DAT_005c50a0 = DAT_005c5040;
  _DAT_005c50d0 = DAT_005c5040;
  core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
            (0x01E57284,&local_24,(CVector3i *)&DAT_01c08d14,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
  local_a0.surface_normal.D.i = 0;
  local_a0.surface_normal.C.i = 0;
  local_a0.surface_normal.B.i = 0;
  local_a0.surface_normal.A.i = 0;
  local_88 = 0;
  local_7c = 3;
  local_a0.base.count = 4;
  local_84 = 1;
  local_80 = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(DAT_005ae704,&local_a0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
