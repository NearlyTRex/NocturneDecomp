// Name: core_fire.cpp_CSpark_render_FUN_004838c0
// Address: 004838c0
// Address Range: [[004838c0, 00483fd8]]
// Convention: unknown
// Signature: void core_fire_cpp_CSpark_render_FUN_004838c0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00483fc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CSpark_render_FUN_004838c0(CVector3f *param_1)

{
  SRenderVertex *vertex_ptr;
  float fVar1;
  longlong lVar2;
  int iVar3;
  SMRGLTextureBasic *texture;
  float local_d8;
  float local_d4;
  CVector3i local_d0;
  CVector3i local_c4;
  CVector3i local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3i local_64;
  CVector3f local_58;
  float local_4c;
  float local_48;
  uint local_44;
  CVector3i local_40 [2];
  float local_20;
  float local_1c;
  float local_18;
  
  vertex_ptr = DAT_005ae704->vertex_buffer_ptr;
  local_70.x = (int)ROUND(param_1->x * 256.0f);
  local_70.y = (int)ROUND(param_1->y * 256.0f);
  local_70.z = (int)ROUND(param_1->z * 256.0f);
  local_20 = 0.4;
  engine_special_cpp_transformPoint_FUN_00530a25(&vertex_ptr->projected_vertex,&local_70);
  iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(DAT_005ae704,vertex_ptr);
  if (iVar3 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(DAT_005ae704,&DAT_01c08d08,0);
  local_4c = -0.4;
  local_48 = -0.4;
  local_44 = 0;
  local_64.x = (int)ROUND(256.0f * -0.4);
  local_64.y = (int)ROUND(256.0f * -0.4);
  local_64.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_64);
  local_4c = 0.4;
  local_44 = 0;
  local_48 = -0.4;
  local_b8.x = (int)ROUND(256.0f * 0.4);
  local_b8.y = (int)ROUND(256.0f * -0.4);
  local_b8.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_b8);
  local_4c = 0.4;
  local_48 = 0.4;
  local_44 = 0;
  local_94.x = (int)ROUND(256.0f * 0.4);
  local_94.y = (int)ROUND(256.0f * 0.4);
  local_94.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_94);
  local_4c = -0.4;
  local_48 = 0.4;
  local_44 = 0;
  local_7c.x = (int)ROUND(256.0f * -0.4);
  local_7c.y = (int)ROUND(256.0f * 0.4);
  local_7c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_7c);
  fVar1 = param_1[5].z;
  if (fVar1 == 0.0) {
    texture = (SMRGLTextureBasic *)&DAT_005b84cc;
  }
  else if ((uint)fVar1 < 2) {
    texture = (SMRGLTextureBasic *)&DAT_005b84e4;
  }
  else {
    if (fVar1 != 2.8026e-45) goto LAB_0048394f;
    texture = (SMRGLTextureBasic *)&DAT_005b84fc;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
LAB_0048394f:
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
  lVar2 = (longlong)(int)param_1[4].z * (longlong)(0xffff - _DAT_01c038f4);
  DAT_005c5040 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  DAT_005c5034 = 0xffff;
  DAT_005c5038 = 0xffff;
  DAT_005c503c = 0xffff;
  DAT_005c5064 = 0xffff;
  DAT_005c5068 = 0xffff;
  DAT_005c506c = 0xffff;
  DAT_005c5094 = 0xffff;
  DAT_005c5098 = 0xffff;
  DAT_005c509c = 0xffff;
  DAT_005c50c4 = 0xffff;
  DAT_005c50c8 = 0xffff;
  DAT_005c50cc = 0xffff;
  DAT_005c5070 = DAT_005c5040;
  _DAT_005c50a0 = DAT_005c5040;
  _DAT_005c50d0 = DAT_005c5040;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
            (DAT_005ae704,(SMRGLHeaderPrimitive *)0x1c08d20);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  local_58.x = param_1->x;
  local_58.y = param_1->y;
  local_58.z = param_1->z;
  local_a0 = param_1[1].x;
  local_9c = param_1[1].y;
  local_98 = param_1[1].z;
  local_d4 = 1.0;
  iVar3 = 0;
  local_d8 = 0.025;
  do {
    local_d8 = local_d8 * (float)0.69999999999999996;
    local_d4 = (float)0.69999999999999996 * local_d4;
    local_ac = local_a0 * local_d8;
    local_9c = local_9c - local_d8 * param_1[2].y;
    local_a4 = local_98 * local_d8;
    local_a8 = local_9c * local_d8;
    local_58.x = local_58.x - local_ac;
    local_58.z = local_58.z - local_a4;
    local_58.y = local_58.y - local_a8;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&local_58);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
              (DAT_005ae704,&DAT_01c08d08,0);
    local_4c = -local_20 * local_d4;
    local_44 = 0;
    local_40[0].x = (int)ROUND(local_4c * 256.0f);
    local_40[0].y = (int)ROUND(local_4c * 256.0f);
    local_40[0].z = (int)ROUND(256.0f * 0.0);
    local_48 = local_4c;
    local_1c = local_4c;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,local_40);
    local_4c = local_20 * local_d4;
    local_48 = local_1c;
    local_44 = 0;
    local_c4.x = (int)ROUND(local_4c * 256.0f);
    local_c4.y = (int)ROUND(local_1c * 256.0f);
    local_c4.z = (int)ROUND(256.0f * 0.0);
    local_18 = local_4c;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_c4);
    local_44 = 0;
    local_4c = local_18;
    local_48 = local_18;
    local_88.x = (int)ROUND(local_18 * 256.0f);
    local_88.y = (int)ROUND(local_18 * 256.0f);
    local_88.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_88);
    local_4c = local_1c;
    local_48 = local_18;
    local_44 = 0;
    local_d0.x = (int)ROUND(local_1c * 256.0f);
    local_d0.y = (int)ROUND(local_18 * 256.0f);
    local_d0.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_d0);
    core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
    lVar2 = (longlong)(int)param_1[4].z * (longlong)(0xffff - _DAT_01c038f4);
    DAT_005c5040 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    DAT_005c5034 = 0xffff;
    DAT_005c5038 = 0xffff;
    DAT_005c503c = 0xffff;
    DAT_005c5064 = 0xffff;
    DAT_005c5068 = 0xffff;
    DAT_005c506c = 0xffff;
    DAT_005c5094 = 0xffff;
    DAT_005c5098 = 0xffff;
    DAT_005c509c = 0xffff;
    DAT_005c50c4 = 0xffff;
    DAT_005c50c8 = 0xffff;
    DAT_005c50cc = 0xffff;
    DAT_005c5070 = DAT_005c5040;
    _DAT_005c50a0 = DAT_005c5040;
    _DAT_005c50d0 = DAT_005c5040;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
              (DAT_005ae704,(SMRGLHeaderPrimitive *)0x1c08d20);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  } while (iVar3 < 3);
  return;
}
