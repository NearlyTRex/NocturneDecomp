// Name: core_fire.cpp_CPopcorn_render_FUN_00489990
// Address: 00489990
// Address Range: [[00489990, 00489cf3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CPopcorn_render_FUN_00489990(CPopcorn *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CPopcorn_render_FUN_00489990(CPopcorn *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  byte bVar2;
  int aiStackY_1048 [996];
  CVector3i *rotation;
  SMRGLHeaderPrimitive local_a0;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_3c;
  int local_30;
  int aiStack_2c [2];
  CVector3i local_24;
  CVector3i local_18;
  
  bVar2 = 0;
  vertex_ptr = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
  local_3c.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_3c.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_3c.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(&vertex_ptr->projected_vertex,&local_3c);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80
                    (g_CDemonRenderer_PTR_005ae704,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)this_ptr);
  engine_drender_cpp_FUN_00460d90(g_CDemonRenderer_PTR_005ae704);
  rotation = (CVector3i *)0x0;
  local_60.x = local_30;
  *(int *)((int)&local_60 + (uint)bVar2 * -8 + 4) = aiStack_2c[(uint)bVar2 * -2];
  *(int *)((int)&local_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       aiStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
            (g_CDemonRenderer_PTR_005ae704,&local_60,rotation);
  local_48 = 0xbe000000;
  local_44 = 0xbe000000;
  local_40 = 0;
  local_6c.x = (int)ROUND(256.0f * -0.125);
  local_6c.y = (int)ROUND(256.0f * -0.125);
  local_6c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_6c);
  local_48 = 0x3e000000;
  local_44 = 0xbe000000;
  local_40 = 0;
  local_18.x = (int)ROUND(256.0f * 0.125);
  local_18.y = (int)ROUND(256.0f * -0.125);
  local_18.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_18);
  local_48 = 0x3e000000;
  local_44 = 0x3e000000;
  local_40 = 0;
  local_78.x = (int)ROUND(256.0f * 0.125);
  local_78.y = (int)ROUND(256.0f * 0.125);
  local_78.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_78);
  local_48 = 0xbe000000;
  local_44 = 0x3e000000;
  local_40 = 0;
  local_54.x = (int)ROUND(256.0f * -0.125);
  local_54.y = (int)ROUND(256.0f * 0.125);
  local_54.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_54);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005b8ba4);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
            (_DAT_007f7370,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
  _DAT_005c5030 = 0xf80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c5060 = 0xf80000;
  _DAT_005c508c = 0xf80000;
  DAT_005c502c = 0x80000;
  _DAT_005c5090 = 0x80000;
  DAT_005c5040 = 0xffff - _DAT_01c038f4;
  _DAT_005c50bc = 0x80000;
  _DAT_005c50c0 = 0x80000;
  local_24.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_24.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_24.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  DAT_005c5070 = DAT_005c5040;
  _DAT_005c50a0 = DAT_005c5040;
  _DAT_005c50d0 = DAT_005c5040;
  core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
            (g_CDemonSet_PTR_005be368,&local_24,(CVector3i *)&DAT_01c08d14,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,1);
  local_a0.surface_normal.D.i = 0;
  local_a0.surface_normal.C.i = 0;
  local_a0.surface_normal.B.i = 0;
  local_a0.surface_normal.A.i = 0;
  local_88 = 0;
  local_7c = 3;
  local_a0.base.count = 4;
  local_84 = 1;
  local_80 = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
            (g_CDemonRenderer_PTR_005ae704,&local_a0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  return;
}
