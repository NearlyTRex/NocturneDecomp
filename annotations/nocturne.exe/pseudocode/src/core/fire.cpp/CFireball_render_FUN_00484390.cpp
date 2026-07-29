// Name: core_fire.cpp_CFireball_render_FUN_00484390
// Address: 00484390
// Address Range: [[00484390, 00484b5b]]
// Convention: unknown
// Signature: void core_fire_cpp_CFireball_render_FUN_00484390(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CFireball_render_FUN_00484390(CVector3f *param_1)

{
  float *pfVar1;
  longlong lVar2;
  CKeyFramedModel *pCVar3;
  int iVar4;
  CKeyFramedModelInstance *this_ptr;
  SMRGLTextureBasic *texture;
  float local_e8;
  float local_e4;
  CBoundingBox3D local_e0;
  CVector3i local_c8;
  CVector3i local_bc;
  CVector3i local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3i local_98;
  CVector3i local_8c;
  CVector3i local_80;
  float local_74;
  float local_70;
  uint local_6c;
  CVector3i local_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3i local_44 [2];
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = 0.5;
  if (param_1[5].z == 0.0) {
    local_20 = 4.0;
  }
  if (param_1[5].z == 2.8026e-45) {
    local_20 = 0.666;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
            (DAT_005ae704,(CVector3i *)&param_1[6].y,(CVector3i *)0x0);
  if (param_1[5].z == 0.0) {
    this_ptr = (CKeyFramedModelInstance *)0x1c08ec4;
  }
  else if (param_1[5].z == 1.4013e-45) {
    this_ptr = (CKeyFramedModelInstance *)0x1c09040;
  }
  else {
    this_ptr = (CKeyFramedModelInstance *)0x1c091bc;
  }
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(this_ptr);
  pfVar1 = (float *)pCVar3->texture_list[7].textures[2].base.count;
  local_e0.min.x = *pfVar1;
  local_e0.min.y = pfVar1[1];
  local_e0.min.z = pfVar1[2];
  local_e0.max.x = pfVar1[3];
  local_e0.max.y = pfVar1[4];
  local_e0.max.z = pfVar1[5];
  iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(&local_e0);
  if (iVar4 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (0x01E57284,param_1,(UOrientationVector *)&DAT_02dd1184,&local_e0.min,&local_e0.max,
               (CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(this_ptr,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  if ((iVar4 != 0) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar4 == 0)
     ) {
    DAT_005c502c = 0x80000;
    _DAT_005c5030 = 0xf80000;
    _DAT_005c505c = 0xf80000;
    _DAT_005c5060 = 0xf80000;
    _DAT_005c508c = 0xf80000;
    _DAT_005c5090 = 0x80000;
    _DAT_005c50bc = 0x80000;
    _DAT_005c50c0 = 0x80000;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
              (DAT_005ae704,(CVector3i *)&DAT_01c08d08,(CVector3i *)0x0);
    local_74 = -local_20;
    local_6c = 0;
    local_68.x = (int)ROUND(local_74 * 256.0f);
    local_68.y = (int)ROUND(local_74 * 256.0f);
    local_68.z = (int)ROUND(256.0f * 0.0);
    local_70 = local_74;
    local_28 = local_74;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_68);
    local_6c = 0;
    local_74 = local_20;
    local_70 = local_28;
    local_c8.x = (int)ROUND(local_20 * 256.0f);
    local_c8.y = (int)ROUND(local_28 * 256.0f);
    local_c8.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_c8);
    local_74 = local_20;
    local_70 = local_20;
    local_6c = 0;
    local_b0.x = (int)ROUND(local_20 * 256.0f);
    local_b0.y = (int)ROUND(local_20 * 256.0f);
    local_b0.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_b0);
    local_74 = local_28;
    local_70 = local_20;
    local_6c = 0;
    local_80.x = (int)ROUND(local_28 * 256.0f);
    local_80.y = (int)ROUND(local_20 * 256.0f);
    local_80.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_80);
    if (param_1[5].z == 1.4013e-45) {
      texture = (SMRGLTextureBasic *)&DAT_005b8514;
    }
    else if (param_1[5].z == 2.8026e-45) {
      texture = (SMRGLTextureBasic *)&DAT_005b84fc;
    }
    else {
      texture = (SMRGLTextureBasic *)&DAT_005b84cc;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
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
    if ((param_1[5].z != 1.4013e-45) && (param_1[5].z != 2.8026e-45)) {
      local_50.x = param_1->x;
      local_50.y = param_1->y;
      local_50.z = param_1->z;
      local_a4 = param_1[1].x;
      local_a0 = param_1[1].y;
      iVar4 = 0;
      local_e4 = 0.1;
      local_9c = param_1[1].z;
      local_e8 = 1.0;
      do {
        local_e4 = local_e4 * (float)0.69999999999999996;
        local_e8 = (float)0.69999999999999996 * local_e8;
        local_5c = local_a4 * local_e4;
        local_a0 = local_a0 - local_e4 * param_1[2].y;
        local_54 = local_9c * local_e4;
        local_58 = local_a0 * local_e4;
        local_50.x = local_50.x - local_5c;
        local_50.z = local_50.z - local_54;
        local_50.y = local_50.y - local_58;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&local_50);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
                  (DAT_005ae704,(CVector3i *)&DAT_01c08d08,(CVector3i *)0x0);
        local_74 = -local_20 * local_e8;
        local_6c = 0;
        local_98.x = (int)ROUND(local_74 * 256.0f);
        local_98.y = (int)ROUND(local_74 * 256.0f);
        local_98.z = (int)ROUND(256.0f * 0.0);
        local_70 = local_74;
        local_1c = local_74;
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_98);
        local_74 = local_20 * local_e8;
        local_6c = 0;
        local_70 = local_1c;
        local_bc.x = (int)ROUND(local_74 * 256.0f);
        local_bc.y = (int)ROUND(local_1c * 256.0f);
        local_bc.z = (int)ROUND(256.0f * 0.0);
        local_18 = local_74;
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_bc);
        local_6c = 0;
        local_74 = local_18;
        local_70 = local_18;
        local_44[0].x = (int)ROUND(local_18 * 256.0f);
        local_44[0].y = (int)ROUND(local_18 * 256.0f);
        local_44[0].z = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,local_44);
        local_74 = local_1c;
        local_70 = local_18;
        local_6c = 0;
        local_8c.x = (int)ROUND(local_1c * 256.0f);
        local_8c.y = (int)ROUND(local_18 * 256.0f);
        local_8c.z = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_8c);
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
        iVar4 = iVar4 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
      } while (iVar4 < 3);
    }
  }
  return;
}
