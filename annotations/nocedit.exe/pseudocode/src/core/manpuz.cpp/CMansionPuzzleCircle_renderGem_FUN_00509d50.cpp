// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderGem_FUN_00509d50
// Address: 00509d50
// Address Range: [[00509d50, 0050a1ec]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderGem_FUN_00509d50(CMansionPuzzleCircle *this_ptr,int gem_index)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderGem_FUN_00509d50(CMansionPuzzleCircle *this_ptr,int gem_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SGem *pSVar4;
  SMRGLPrimitiveQuad SStack_a8;
  CVector3i local_60;
  CVector3i local_54;
  float local_48;
  float local_44;
  float local_40;
  CVector3i local_3c;
  CVector3i local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  
  pSVar4 = this_ptr->gems + gem_index;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&pSVar4->rotation,&pSVar4->position);
  if ((g_CDemonMissionPtr->is_in_editor != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 == 0)) {
    if (g_MansionPuzzleSlewType == 2) {
      shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
    }
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
  }
  core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0
            (g_CDemonSetPtr,(int)ROUND(ROUND((pSVar4->color).r * 256.0f)),
             (int)ROUND(ROUND((pSVar4->color).g * 256.0f)),
             (int)ROUND(ROUND((pSVar4->color).b * 256.0f)));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&this_ptr->gem_model,0.0,-1);
  core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0(g_CDemonSetPtr,0x10000,0x10000,0x10000);
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if ((iVar4 == 0) &&
     ((((float)0.01 < (pSVar4->hum_color).r ||
       ((float)0.01 < (pSVar4->hum_color).g)) ||
      ((float)0.01 < (pSVar4->hum_color).b)))) {
    local_54.x = (int)ROUND(256.0f * -1.4);
    local_54.y = (int)ROUND(256.0f * 0.2);
    local_54.z = (int)ROUND(256.0f * -1.4);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_54);
    local_60.x = (int)ROUND(256.0f * 1.4);
    local_60.y = (int)ROUND(256.0f * 0.2);
    local_60.z = (int)ROUND(256.0f * -1.4);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_60);
    local_3c.x = (int)ROUND(256.0f * 1.4);
    local_3c.y = (int)ROUND(256.0f * 0.2);
    local_3c.z = (int)ROUND(256.0f * 1.4);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_30.x = (int)ROUND(256.0f * -1.4);
    local_30.y = (int)ROUND(256.0f * 0.2);
    local_30.z = (int)ROUND(256.0f * 1.4);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_30);
    this_ptr_00 = g_CDemonRendererPtr2;
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
    fVar1 = (pSVar4->hum_color).g * 256.0f;
    fVar2 = (pSVar4->hum_color).b * 256.0f;
    iVar4 = (int)ROUND(ROUND((pSVar4->hum_color).r * 256.0f));
    g_CDemonRendererPtr2->vertex_buffer_ptr->r = iVar4;
    iVar1 = (int)ROUND(ROUND(fVar1));
    this_ptr_00->vertex_buffer_ptr->g = iVar1;
    iVar2 = (int)ROUND(ROUND(fVar2));
    this_ptr_00->vertex_buffer_ptr->b = iVar2;
    this_ptr_00->vertex_buffer_ptr->a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].r = iVar4;
    this_ptr_00->vertex_buffer_ptr[1].g = iVar1;
    this_ptr_00->vertex_buffer_ptr[1].b = iVar2;
    this_ptr_00->vertex_buffer_ptr[1].a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].r = iVar4;
    this_ptr_00->vertex_buffer_ptr[2].g = iVar1;
    this_ptr_00->vertex_buffer_ptr[2].b = iVar2;
    this_ptr_00->vertex_buffer_ptr[2].a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].r = iVar4;
    this_ptr_00->vertex_buffer_ptr[3].g = iVar1;
    this_ptr_00->vertex_buffer_ptr[3].b = iVar2;
    this_ptr_00->vertex_buffer_ptr[3].a = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (this_ptr_00,(this_ptr->light_texture).textures);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
              (g_CDemonRendererPtr2,&SStack_a8.base);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
