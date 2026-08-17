// Name: core_fire.cpp_CSpark_render_FUN_004838c0
// Address: 004838c0
// Address Range: [[004838c0, 00483fd8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSpark_render_FUN_004838c0(CSpark *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00483fc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSpark_render_FUN_004838c0(CSpark *this_ptr)

{
  SRenderVertex *vertex_ptr;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  SMRGLTextureBasic *texture;
  float local_d4;
  float local_d0;
  CVector3i local_cc;
  byte local_c0 [12];
  int local_b4;
  int local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3i local_94;
  byte local_84 [12];
  int local_78;
  int local_74;
  CVector3i local_70;
  CVector3i local_64;
  CVector3f local_54;
  float local_48;
  float local_44;
  uint local_40;
  CVector3i local_3c [2];
  uint local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  vertex_ptr = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
  local_70.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_70.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_70.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  local_20 = 0x3ecccccd;
  engine_special_cpp_transformPoint_FUN_00530a25(&vertex_ptr->projected_vertex,&local_70);
  iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80
                    (g_CDemonRenderer_PTR_005ae704,vertex_ptr);
  if (iVar3 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
            (g_CDemonRenderer_PTR_005ae704,(CVector3i *)&DAT_01c08d08,(CVector3i *)0x0);
  local_54.z = -0.4;
  local_48 = -0.4;
  local_44 = 0.0;
  local_64.x = (int)ROUND(256.0f * -0.4);
  local_64.y = (int)ROUND(256.0f * -0.4);
  local_64.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_64);
  local_54.z = 0.4;
  local_44 = 0.0;
  local_48 = -0.4;
  local_c0._8_4_ = (uint)ROUND(256.0f * 0.4);
  local_b4 = (int)ROUND(256.0f * -0.4);
  local_b0 = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)(local_c0 + 8));
  local_54.z = 0.4;
  local_48 = 0.4;
  local_44 = 0.0;
  local_94.x = (int)ROUND(256.0f * 0.4);
  local_94.y = (int)ROUND(256.0f * 0.4);
  local_94.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_94);
  local_54.z = -0.4;
  local_48 = 0.4;
  local_44 = 0.0;
  local_84._8_4_ = (uint)ROUND(256.0f * -0.4);
  local_78 = (int)ROUND(256.0f * 0.4);
  local_74 = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)(local_84 + 8));
  uVar1 = this_ptr->spark_type;
  if (uVar1 == 0) {
    texture = (SMRGLTextureBasic *)&DAT_005b84cc;
  }
  else if (uVar1 < 2) {
    texture = (SMRGLTextureBasic *)&DAT_005b84e4;
  }
  else {
    if (uVar1 != 2) goto LAB_0048394f;
    texture = (SMRGLTextureBasic *)&DAT_005b84fc;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,texture);
LAB_0048394f:
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
            (_DAT_007f7370,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
  lVar2 = (longlong)this_ptr->intensity_current * (longlong)(0xffff - _DAT_01c038f4);
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
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
            (g_CDemonRenderer_PTR_005ae704,(SMRGLHeaderPrimitive *)0x1c08d20);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  local_54.x = (this_ptr->base).position.x;
  local_54.y = (this_ptr->base).position.y;
  local_54.z = (this_ptr->base).position.z;
  local_9c = (this_ptr->base).velocity.x;
  local_98 = (this_ptr->base).velocity.y;
  local_94.x = (int)(this_ptr->base).velocity.z;
  local_d0 = 1.0;
  iVar3 = 0;
  local_d4 = 0.025;
  do {
    local_d4 = local_d4 * (float)0.69999999999999996;
    local_d0 = (float)0.69999999999999996 * local_d0;
    local_a8 = local_9c * local_d4;
    local_98 = local_98 - local_d4 * (this_ptr->base).gravity_acceleration;
    local_a0 = (float)local_94.x * local_d4;
    local_a4 = local_98 * local_d4;
    local_54.x = local_54.x - local_a8;
    local_54.z = local_54.z - local_a0;
    local_54.y = local_54.y - local_a4;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (g_CDemonRenderer_PTR_005ae704,&local_54);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
              (g_CDemonRenderer_PTR_005ae704,(CVector3i *)&DAT_01c08d08,(CVector3i *)0x0);
    local_48 = -local_1c * local_d0;
    local_40 = 0;
    local_3c[0].x = (int)ROUND(local_48 * 256.0f);
    local_3c[0].y = (int)ROUND(local_48 * 256.0f);
    local_3c[0].z = (int)ROUND(256.0f * 0.0);
    local_44 = local_48;
    local_18 = local_48;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,local_3c);
    local_48 = local_1c * local_d0;
    local_44 = local_18;
    local_40 = 0;
    local_c0._0_4_ = (uint)ROUND(local_48 * 256.0f);
    local_c0._4_4_ = (uint)ROUND(local_18 * 256.0f);
    local_c0._8_4_ = (uint)ROUND(256.0f * 0.0);
    fStack_14 = local_48;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)local_c0);
    local_40 = 0;
    local_48 = fStack_14;
    local_44 = fStack_14;
    local_84._0_4_ = (uint)ROUND(fStack_14 * 256.0f);
    local_84._4_4_ = (uint)ROUND(fStack_14 * 256.0f);
    local_84._8_4_ = (uint)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)local_84);
    local_48 = local_18;
    local_44 = fStack_14;
    local_40 = 0;
    local_cc.x = (int)ROUND(local_18 * 256.0f);
    local_cc.y = (int)ROUND(fStack_14 * 256.0f);
    local_cc.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_cc);
    core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
              (_DAT_007f7370,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
    lVar2 = (longlong)this_ptr->intensity_current * (longlong)(0xffff - _DAT_01c038f4);
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
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
              (g_CDemonRenderer_PTR_005ae704,(SMRGLHeaderPrimitive *)0x1c08d20);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  } while (iVar3 < 3);
  return;
}
