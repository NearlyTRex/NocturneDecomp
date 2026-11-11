// Name: core_manpuz.cpp_FUN_00505060
// Address: 00505060
// Address Range: [[00505060, 005054b3]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_00505060(CMansionPuzzleCircle *this_ptr,int gem_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_FUN_00505060(CMansionPuzzleCircle *this_ptr,int gem_index)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int *extraout_EDX;
  CDemonRenderer *this_ptr_00;
  SGem *pSVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  SMRGLPrimitivePoly SStack_a8;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  pSVar3 = this_ptr->gems + gem_index;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&pSVar3->rotation,&pSVar3->position);
  fVar4 = (float10)_DAT_005e7475;
  fVar5 = (float10)(pSVar3->color).b * fVar4;
  fVar6 = (float10)(pSVar3->color).g * fVar4;
  fVar4 = (float10)(pSVar3->color).r * fVar4;
  round();
  round();
  iVar2 = (int)ROUND(fVar5);
  iStack_24 = iVar2;
  iStack_14 = (int)ROUND(fVar6);
  round();
  iStack_14 = (int)ROUND(fVar4);
  core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(g_CDemonSetPtr,iStack_14,(int)ROUND(fVar6),iVar2)
  ;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            (&this_ptr->gem_model,0.0,-1);
  core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(g_CDemonSetPtr,0x10000,0x10000,0x10000);
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if ((iVar2 == 0) &&
     ((((float)_DAT_005e747d < (pSVar3->hum_color).r ||
       ((float)_DAT_005e747d < (pSVar3->hum_color).g)) ||
      ((float)_DAT_005e747d < (pSVar3->hum_color).b)))) {
    fStack_30 = -1.4;
    fStack_28 = -1.4;
    fStack_2c = 0.2;
    SStack_a8.vertices[6].vertex_index = (int)ROUND(_DAT_00603420 * -1.4);
    SStack_a8.vertices[6].texture_u = (int)ROUND(_DAT_00603420 * 0.2);
    SStack_a8.vertices[6].texture_v = (int)ROUND(_DAT_00603420 * -1.4);
    engine_special_cpp_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)(SStack_a8.vertices + 6));
    fStack_30 = -fStack_30;
    SStack_a8.vertices[4].vertex_index = (int)ROUND(fStack_30 * _DAT_00603420);
    SStack_a8.vertices[4].texture_u = (int)ROUND(fStack_2c * _DAT_00603420);
    SStack_a8.vertices[4].texture_v = (int)ROUND(fStack_28 * _DAT_00603420);
    engine_special_cpp_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)(SStack_a8.vertices + 4));
    fStack_28 = -fStack_28;
    SStack_a8.vertices[5].vertex_index = (int)ROUND(fStack_30 * _DAT_00603420);
    SStack_a8.vertices[5].texture_u = (int)ROUND(fStack_2c * _DAT_00603420);
    SStack_a8.vertices[5].texture_v = (int)ROUND(fStack_28 * _DAT_00603420);
    engine_special_cpp_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(SStack_a8.vertices + 5));
    fStack_30 = -fStack_30;
    SStack_a8.vertices[7].vertex_index = (int)ROUND(fStack_30 * _DAT_00603420);
    SStack_a8.vertices[7].texture_u = (int)ROUND(fStack_2c * _DAT_00603420);
    SStack_a8.vertices[7].texture_v = (int)ROUND(fStack_28 * _DAT_00603420);
    engine_special_cpp_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)(SStack_a8.vertices + 7));
    SStack_a8.base.base.count = 4;
    SStack_a8.vertices[0].vertex_index = 0;
    SStack_a8.vertices[0].texture_u = 0;
    SStack_a8.vertices[0].texture_v = 0;
    SStack_a8.vertices[1].vertex_index = 1;
    SStack_a8.vertices[1].texture_v = 0;
    SStack_a8.vertices[2].vertex_index = 2;
    SStack_a8.vertices[3].texture_u = 0;
    SStack_a8.vertices[1].texture_u = 0x1000000;
    SStack_a8.vertices[2].texture_u = 0x1000000;
    SStack_a8.vertices[2].texture_v = 0x1000000;
    SStack_a8.vertices[3].texture_v = 0x1000000;
    SStack_a8.vertices[3].vertex_index = 3;
    fVar4 = (float10)_DAT_005e7475;
    fVar5 = (float10)(pSVar3->hum_color).r * fVar4;
    fVar6 = (float10)(pSVar3->hum_color).g * fVar4;
    fVar4 = (float10)(pSVar3->hum_color).b * fVar4;
    pSVar1 = DAT_00612560->vertex_buffer_ptr;
    round();
    iStack_20 = (int)ROUND(fVar5);
    pSVar1->r = iStack_20;
    round();
    iStack_1c = (int)ROUND(fVar6);
    *(int *)(*extraout_EDX + 0x24) = iStack_1c;
    round();
    iStack_18 = (int)ROUND(fVar4);
    this_ptr_00->vertex_buffer_ptr->b = iStack_18;
    this_ptr_00->vertex_buffer_ptr->a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].r = iStack_20;
    this_ptr_00->vertex_buffer_ptr[1].g = iStack_1c;
    this_ptr_00->vertex_buffer_ptr[1].b = iStack_18;
    this_ptr_00->vertex_buffer_ptr[1].a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].r = iStack_20;
    this_ptr_00->vertex_buffer_ptr[2].g = iStack_1c;
    this_ptr_00->vertex_buffer_ptr[2].b = iStack_18;
    this_ptr_00->vertex_buffer_ptr[2].a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].r = iStack_20;
    this_ptr_00->vertex_buffer_ptr[3].g = iStack_1c;
    this_ptr_00->vertex_buffer_ptr[3].b = iStack_18;
    this_ptr_00->vertex_buffer_ptr[3].a = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (this_ptr_00,(SMRGLTextureBasic *)&this_ptr->light_texture);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00(DAT_00612560,&SStack_a8);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  }
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
