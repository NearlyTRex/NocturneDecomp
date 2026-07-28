// Name: core_manpuz.cpp_FUN_004ca790
// Address: 004ca790
// Address Range: [[004ca790, 004cabe3]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004ca790(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_manpuz_cpp_FUN_004ca790(int param_1,int param_2)

{
  SRenderVertex *pSVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr;
  int iVar4;
  float *pfVar5;
  double dVar6;
  double dVar7;
  UIntegerFloat fog_scale;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_20;
  int local_1c;
  
  pfVar5 = (float *)(param_1 + 0xa98 + param_2 * 0xb8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,(CVector3f *)(pfVar5 + 0xc),(CVector3f *)(pfVar5 + 9));
  fVar2 = pfVar5[1] * 256.0f;
  fVar3 = *pfVar5 * 256.0f;
  dVar6 = round((double)(pfVar5[2] * 256.0f));
  dVar7 = round((double)fVar2);
  local_2c = (int)ROUND(dVar6);
  fog_scale.f = 7.039807e-39;
  local_1c = (int)ROUND(dVar7);
  dVar6 = round((double)fVar3);
  local_20 = (int)ROUND(dVar6);
  core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340
            (0x01E57284,local_20,(int)ROUND(dVar7),fog_scale.i);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            ((CKeyFramedModelInstance *)(param_1 + 0x2cc),0.0,-1);
  core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(0x01E57284,0x10000,0x10000,0x10000);
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if ((iVar4 == 0) &&
     ((((float)0.01 < pfVar5[3] || ((float)0.01 < pfVar5[4])) ||
      ((float)0.01 < pfVar5[5])))) {
    local_3c = -1.4;
    local_34 = -1.4;
    local_38 = 0.2;
    local_54.x = (int)ROUND(_DAT_005a0020 * -1.4);
    local_54.y = (int)ROUND(_DAT_005a0020 * 0.2);
    local_54.z = (int)ROUND(_DAT_005a0020 * -1.4);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_54);
    local_3c = -local_3c;
    local_6c.x = (int)ROUND(local_3c * _DAT_005a0020);
    local_6c.y = (int)ROUND(local_38 * _DAT_005a0020);
    local_6c.z = (int)ROUND(local_34 * _DAT_005a0020);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_6c);
    local_34 = -local_34;
    local_60.x = (int)ROUND(local_3c * _DAT_005a0020);
    local_60.y = (int)ROUND(local_38 * _DAT_005a0020);
    local_60.z = (int)ROUND(local_34 * _DAT_005a0020);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_60);
    local_3c = -local_3c;
    local_48.x = (int)ROUND(local_3c * _DAT_005a0020);
    local_48.y = (int)ROUND(local_38 * _DAT_005a0020);
    local_48.z = (int)ROUND(local_34 * _DAT_005a0020);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_48);
    this_ptr = DAT_005ae704;
    fVar2 = pfVar5[4] * 256.0f;
    fVar3 = pfVar5[5] * 256.0f;
    pSVar1 = DAT_005ae704->vertex_buffer_ptr;
    dVar6 = round((double)(pfVar5[3] * 256.0f));
    local_30 = (int)ROUND(dVar6);
    pSVar1->r = local_30;
    dVar6 = round((double)fVar2);
    local_30 = (int)ROUND(dVar6);
    this_ptr->vertex_buffer_ptr->g = local_30;
    dVar6 = round((double)fVar3);
    local_30 = (int)ROUND(dVar6);
    this_ptr->vertex_buffer_ptr->b = local_30;
    this_ptr->vertex_buffer_ptr->a = 0xffff;
    this_ptr->vertex_buffer_ptr[1].r = (int)local_38;
    this_ptr->vertex_buffer_ptr[1].g = (int)local_34;
    this_ptr->vertex_buffer_ptr[1].b = local_30;
    this_ptr->vertex_buffer_ptr[1].a = 0xffff;
    this_ptr->vertex_buffer_ptr[2].r = (int)local_38;
    this_ptr->vertex_buffer_ptr[2].g = (int)local_34;
    this_ptr->vertex_buffer_ptr[2].b = local_30;
    this_ptr->vertex_buffer_ptr[2].a = 0xffff;
    this_ptr->vertex_buffer_ptr[3].r = (int)local_38;
    this_ptr->vertex_buffer_ptr[3].g = (int)local_34;
    this_ptr->vertex_buffer_ptr[3].b = local_30;
    this_ptr->vertex_buffer_ptr[3].a = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (this_ptr,(SMRGLTextureBasic *)(param_1 + 0x14b8));
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150
              (DAT_005ae704,(SMRGLPrimitivePoly *)&stack0xffffff40);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
