// Name: core_fire.cpp_CFireball_render_FUN_00484390
// Address: 00484390
// Address Range: [[00484390, 00484b5b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireball_render_FUN_00484390(CFireball *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireball_render_FUN_00484390(CFireball *this_ptr)

{
  CBoundingBox3D *pCVar1;
  longlong lVar2;
  float fVar3;
  CKeyFramedModel *pCVar4;
  int iVar5;
  CKeyFramedModelInstance *this_ptr_00;
  SMRGLTextureBasic *texture;
  CBoundingBox3D local_e0;
  CVector3i local_c4;
  byte local_b4 [12];
  int local_a8;
  int local_a4;
  float local_9c;
  float local_98;
  float local_94;
  CVector3i local_90;
  byte local_84 [12];
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  CVector3i local_64;
  float local_54;
  float local_50;
  float local_4c;
  CVector3f local_48;
  CVector3i local_3c [2];
  float fStack_24;
  uint local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  local_20 = 0x3f000000;
  if (this_ptr->lighting_active == 0) {
    local_20 = 0x40800000;
  }
  if (this_ptr->lighting_active == 2) {
    local_20 = 0x3f2a7efa;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
            (g_CDemonRenderer_PTR_005ae704,(CVector3i *)&this_ptr->rotation_angle1,(CVector3i *)0x0)
  ;
  if (this_ptr->lighting_active == 0) {
    this_ptr_00 = &g_CKeyFramedModelInstance_01c08ec4;
  }
  else if (this_ptr->lighting_active == 1) {
    this_ptr_00 = &g_CKeyFramedModelInstance_01c09040;
  }
  else {
    this_ptr_00 = &g_CKeyFramedModelInstance_01c091bc;
  }
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(this_ptr_00);
  pCVar1 = pCVar4->frame_bounds;
  local_e0.min.x = (pCVar1->min).x;
  local_e0.min.y = (pCVar1->min).y;
  local_e0.min.z = (pCVar1->min).z;
  local_e0.max.x = (pCVar1->max).x;
  local_e0.max.y = (pCVar1->max).y;
  local_e0.max.z = (pCVar1->max).z;
  iVar5 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(&local_e0);
  if (iVar5 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (g_CDemonSet_PTR_005be368,(CVector3f *)this_ptr,(UOrientationVector *)&DAT_02dd1184,
               &local_e0.min,&local_e0.max,(CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(this_ptr_00,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  if ((iVar5 != 0) &&
     (iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                        (g_CDemonRenderer_PTR_005ae704), iVar5 == 0)) {
    DAT_005c502c = 0x80000;
    _DAT_005c5030 = 0xf80000;
    _DAT_005c505c = 0xf80000;
    _DAT_005c5060 = 0xf80000;
    _DAT_005c508c = 0xf80000;
    _DAT_005c5090 = 0x80000;
    _DAT_005c50bc = 0x80000;
    _DAT_005c50c0 = 0x80000;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
              (g_CDemonRenderer_PTR_005ae704,(CVector3i *)&DAT_01c08d08,(CVector3i *)0x0);
    local_70 = -local_1c;
    local_68 = 0.0;
    local_64.x = (int)ROUND(local_70 * 256.0f);
    local_64.y = (int)ROUND(local_70 * 256.0f);
    local_64.z = (int)ROUND(256.0f * 0.0);
    local_6c = local_70;
    fStack_24 = local_70;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_64);
    local_68 = 0.0;
    local_70 = local_1c;
    local_6c = fStack_24;
    local_c4.x = (int)ROUND(local_1c * 256.0f);
    local_c4.y = (int)ROUND(fStack_24 * 256.0f);
    local_c4.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_c4);
    local_70 = local_1c;
    local_6c = local_1c;
    local_68 = 0.0;
    local_b4._8_4_ = (uint)ROUND(local_1c * 256.0f);
    local_a8 = (int)ROUND(local_1c * 256.0f);
    local_a4 = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(local_b4 + 8));
    local_70 = fStack_24;
    local_6c = local_1c;
    local_68 = 0.0;
    local_84._8_4_ = (uint)ROUND(fStack_24 * 256.0f);
    local_78 = (int)ROUND(local_1c * 256.0f);
    local_74 = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)(local_84 + 8));
    if (this_ptr->lighting_active == 1) {
      texture = (SMRGLTextureBasic *)&DAT_005b8514;
    }
    else if (this_ptr->lighting_active == 2) {
      texture = (SMRGLTextureBasic *)&DAT_005b84fc;
    }
    else {
      texture = (SMRGLTextureBasic *)&DAT_005b84cc;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,texture);
    lVar2 = (longlong)this_ptr->timer * (longlong)(0xffff - _DAT_01c038f4);
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
    if ((this_ptr->lighting_active != 1) && (this_ptr->lighting_active != 2)) {
      local_48.x = (this_ptr->base).position.x;
      local_48.y = (this_ptr->base).position.y;
      local_48.z = (this_ptr->base).position.z;
      local_9c = (this_ptr->base).velocity.x;
      local_98 = (this_ptr->base).velocity.y;
      iVar5 = 0;
      local_e0.min.y = 0.1;
      local_94 = (this_ptr->base).velocity.z;
      local_e0.min.x = 1.0;
      do {
        local_e0.min.y = local_e0.min.y * (float)0.69999999999999996;
        local_e0.min.x = (float)0.69999999999999996 * local_e0.min.x;
        local_54 = local_9c * local_e0.min.y;
        local_98 = local_98 - local_e0.min.y * (this_ptr->base).gravity_acceleration;
        local_4c = local_94 * local_e0.min.y;
        local_50 = local_98 * local_e0.min.y;
        local_48.x = local_48.x - local_54;
        local_48.z = local_48.z - local_4c;
        local_48.y = local_48.y - local_50;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (g_CDemonRenderer_PTR_005ae704,&local_48);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
                  (g_CDemonRenderer_PTR_005ae704,(CVector3i *)&DAT_01c08d08,(CVector3i *)0x0);
        local_6c = -local_18 * local_e0.min.x;
        local_64.x = 0;
        local_90.x = (int)ROUND(local_6c * 256.0f);
        local_90.y = (int)ROUND(local_6c * 256.0f);
        local_90.z = (int)ROUND(256.0f * 0.0);
        local_68 = local_6c;
        fStack_14 = local_6c;
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_90);
        fVar3 = local_18 * local_e0.min.x;
        local_64.x = 0;
        local_68 = fStack_14;
        local_b4._0_4_ = (uint)ROUND(fVar3 * 256.0f);
        local_b4._4_4_ = (uint)ROUND(fStack_14 * 256.0f);
        local_b4._8_4_ = (uint)ROUND(256.0f * 0.0);
        local_6c = fVar3;
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)local_b4);
        local_64.x = 0;
        local_3c[0].x = (int)ROUND(fVar3 * 256.0f);
        local_3c[0].y = (int)ROUND(fVar3 * 256.0f);
        local_3c[0].z = (int)ROUND(256.0f * 0.0);
        local_6c = fVar3;
        local_68 = fVar3;
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,local_3c);
        local_6c = fStack_14;
        local_64.x = 0;
        local_84._0_4_ = (uint)ROUND(fStack_14 * 256.0f);
        local_84._4_4_ = (uint)ROUND(fVar3 * 256.0f);
        local_84._8_4_ = (uint)ROUND(256.0f * 0.0);
        local_68 = fVar3;
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)local_84);
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
                  (_DAT_007f7370,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
        lVar2 = (longlong)this_ptr->timer * (longlong)(0xffff - _DAT_01c038f4);
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
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,1)
        ;
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
                  (g_CDemonRenderer_PTR_005ae704,(SMRGLHeaderPrimitive *)0x1c08d20);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0)
        ;
        iVar5 = iVar5 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
      } while (iVar5 < 3);
    }
  }
  return;
}
