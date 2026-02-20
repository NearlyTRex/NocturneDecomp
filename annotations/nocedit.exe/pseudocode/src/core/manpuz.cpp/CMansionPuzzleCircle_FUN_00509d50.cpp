// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509d50
// Address: 00509d50
// Address Range: [[00509d50, 0050a1b8] [0050a1c7, 0050a1ec]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509d50(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509d50(CMansionPuzzleCircle *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  SGem *pSVar4;
  int in_stack_00000008;
  SMRGLHeaderPrimitive SStack_a8;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
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
  
  pSVar4 = this_ptr->gems + in_stack_00000008;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&pSVar4->rotation,(CVector3i *)&pSVar4->position);
  if ((g_CDemonMissionPtr->is_in_editor != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 == 0)) {
    if (g_MansionPuzzleSlewType == 2) {
      shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
    }
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
  }
  local_24 = (int)ROUND(ROUND((pSVar4->color).b * 256.0f));
  local_14 = (int)ROUND(ROUND((pSVar4->color).r * 256.0f));
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&this_ptr->gem_model,0.0,-1);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if ((iVar3 == 0) &&
     ((((float)0.01 < (pSVar4->hum_color).r ||
       ((float)0.01 < (pSVar4->hum_color).g)) ||
      ((float)0.01 < (pSVar4->hum_color).b)))) {
    local_48 = -1.4;
    local_40 = -1.4;
    local_44 = 0.2;
    local_54.x = (int)ROUND(256.0f * -1.4);
    local_54.y = (int)ROUND(256.0f * 0.2);
    local_54.z = (int)ROUND(256.0f * -1.4);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_54);
    local_48 = -local_48;
    local_60.x = (int)ROUND(local_48 * 256.0f);
    local_60.y = (int)ROUND(local_44 * 256.0f);
    local_60.z = (int)ROUND(local_40 * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_60);
    local_40 = -local_40;
    local_3c.x = (int)ROUND(local_48 * 256.0f);
    local_3c.y = (int)ROUND(local_44 * 256.0f);
    local_3c.z = (int)ROUND(local_40 * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_48 = -local_48;
    local_30.x = (int)ROUND(local_48 * 256.0f);
    local_30.y = (int)ROUND(local_44 * 256.0f);
    local_30.z = (int)ROUND(local_40 * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_30);
    this_ptr_00 = g_CDemonRendererPtr2;
    SStack_a8.base.count = 4;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 1;
    local_7c = 0;
    local_78 = 2;
    local_68 = 0;
    local_80 = 0x1000000;
    local_74 = 0x1000000;
    local_70 = 0x1000000;
    local_64 = 0x1000000;
    local_6c = 3;
    fVar1 = (pSVar4->hum_color).g * 256.0f;
    fVar2 = (pSVar4->hum_color).b * 256.0f;
    local_20 = (int)ROUND(ROUND((pSVar4->hum_color).r * 256.0f));
    g_CDemonRendererPtr2->vertex_buffer_ptr->z = local_20;
    local_1c = (int)ROUND(ROUND(fVar1));
    this_ptr_00->vertex_buffer_ptr->r = local_1c;
    local_18 = (int)ROUND(ROUND(fVar2));
    this_ptr_00->vertex_buffer_ptr->g = local_18;
    this_ptr_00->vertex_buffer_ptr->fog = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].z = local_20;
    this_ptr_00->vertex_buffer_ptr[1].r = local_1c;
    this_ptr_00->vertex_buffer_ptr[1].g = local_18;
    this_ptr_00->vertex_buffer_ptr[1].fog = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].z = local_20;
    this_ptr_00->vertex_buffer_ptr[2].r = local_1c;
    this_ptr_00->vertex_buffer_ptr[2].g = local_18;
    this_ptr_00->vertex_buffer_ptr[2].fog = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].z = local_20;
    this_ptr_00->vertex_buffer_ptr[3].r = local_1c;
    this_ptr_00->vertex_buffer_ptr[3].g = local_18;
    this_ptr_00->vertex_buffer_ptr[3].fog = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (this_ptr_00,&this_ptr->light_texture);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
              (g_CDemonRendererPtr2,&SStack_a8);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
