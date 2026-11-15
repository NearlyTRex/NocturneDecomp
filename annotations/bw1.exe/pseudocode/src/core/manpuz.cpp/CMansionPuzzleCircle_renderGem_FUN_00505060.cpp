// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderGem_FUN_00505060
// Address: 00505060
// Address Range: [[00505060, 005054b3]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderGem_FUN_00505060(CMansionPuzzleCircle *this_ptr,int gem_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderGem_FUN_00505060(CMansionPuzzleCircle *this_ptr,int gem_index)

{
  SRenderVertex *pSVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  SGem *pSVar5;
  double dVar6;
  double dVar7;
  UIntegerFloat fog_scale;
  CVector3i CStack_6c;
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_20;
  int iStack_1c;
  
  pSVar5 = this_ptr->gems + gem_index;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&pSVar5->rotation,&pSVar5->position);
  fVar2 = (pSVar5->color).g * _DAT_005e7475;
  fVar3 = (pSVar5->color).r * _DAT_005e7475;
  dVar6 = round((double)((pSVar5->color).b * _DAT_005e7475));
  dVar7 = round((double)fVar2);
  iStack_2c = (int)ROUND(dVar6);
  fog_scale.f = 7.375872e-39;
  iStack_1c = (int)ROUND(dVar7);
  dVar6 = round((double)fVar3);
  iStack_20 = (int)ROUND(dVar6);
  core_set_cpp_CDemonSet_setFlatColor_FUN_00555770
            (g_CDemonSetPtr,iStack_20,(int)ROUND(dVar7),fog_scale.i);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            (&this_ptr->gem_model,0.0,-1);
  core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(g_CDemonSetPtr,0x10000,0x10000,0x10000);
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if ((iVar4 == 0) &&
     ((((float)_DAT_005e747d < (pSVar5->hum_color).r ||
       ((float)_DAT_005e747d < (pSVar5->hum_color).g)) ||
      ((float)_DAT_005e747d < (pSVar5->hum_color).b)))) {
    fStack_3c = -1.4;
    fStack_34 = -1.4;
    fStack_38 = 0.2;
    CStack_54.x = (int)ROUND(_DAT_00603420 * -1.4);
    CStack_54.y = (int)ROUND(_DAT_00603420 * 0.2);
    CStack_54.z = (int)ROUND(_DAT_00603420 * -1.4);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_54);
    fStack_3c = -fStack_3c;
    CStack_6c.x = (int)ROUND(fStack_3c * _DAT_00603420);
    CStack_6c.y = (int)ROUND(fStack_38 * _DAT_00603420);
    CStack_6c.z = (int)ROUND(fStack_34 * _DAT_00603420);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_6c);
    fStack_34 = -fStack_34;
    CStack_60.x = (int)ROUND(fStack_3c * _DAT_00603420);
    CStack_60.y = (int)ROUND(fStack_38 * _DAT_00603420);
    CStack_60.z = (int)ROUND(fStack_34 * _DAT_00603420);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_60);
    fStack_3c = -fStack_3c;
    CStack_48.x = (int)ROUND(fStack_3c * _DAT_00603420);
    CStack_48.y = (int)ROUND(fStack_38 * _DAT_00603420);
    CStack_48.z = (int)ROUND(fStack_34 * _DAT_00603420);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_48);
    this_ptr_00 = DAT_00612560;
    fVar2 = (pSVar5->hum_color).g * _DAT_005e7475;
    fVar3 = (pSVar5->hum_color).b * _DAT_005e7475;
    pSVar1 = DAT_00612560->vertex_buffer_ptr;
    dVar6 = round((double)((pSVar5->hum_color).r * _DAT_005e7475));
    iStack_30 = (int)ROUND(dVar6);
    pSVar1->r = iStack_30;
    dVar6 = round((double)fVar2);
    iStack_30 = (int)ROUND(dVar6);
    this_ptr_00->vertex_buffer_ptr->g = iStack_30;
    dVar6 = round((double)fVar3);
    iStack_30 = (int)ROUND(dVar6);
    this_ptr_00->vertex_buffer_ptr->b = iStack_30;
    this_ptr_00->vertex_buffer_ptr->a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].r = (int)fStack_38;
    this_ptr_00->vertex_buffer_ptr[1].g = (int)fStack_34;
    this_ptr_00->vertex_buffer_ptr[1].b = iStack_30;
    this_ptr_00->vertex_buffer_ptr[1].a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].r = (int)fStack_38;
    this_ptr_00->vertex_buffer_ptr[2].g = (int)fStack_34;
    this_ptr_00->vertex_buffer_ptr[2].b = iStack_30;
    this_ptr_00->vertex_buffer_ptr[2].a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].r = (int)fStack_38;
    this_ptr_00->vertex_buffer_ptr[3].g = (int)fStack_34;
    this_ptr_00->vertex_buffer_ptr[3].b = iStack_30;
    this_ptr_00->vertex_buffer_ptr[3].a = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (this_ptr_00,(SMRGLTextureBasic *)&this_ptr->light_texture);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00
              (DAT_00612560,(SMRGLPrimitivePoly *)&stack0xffffff40);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  }
  engine_drender_cpp_pop_FUN_004839a0();
  return;
}
