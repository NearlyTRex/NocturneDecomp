// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509d50
// Address: 00509d50
// Address Range: [[00509d50, 0050a1b8] [0050a1c7, 0050a1ec]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509d50(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509d50(CMansionPuzzleCircle *this_ptr)

{
  float fVar1;
  SRenderVertex *pSVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  char *pcVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  int in_stack_00000008;
  CVector3i local_6c;
  CVector3i local_60;
  float local_54;
  float local_50;
  float local_4c;
  CVector3i local_48;
  CVector3i local_3c;
  float local_30;
  int local_2c;
  int local_20;
  int local_1c;
  
  pcVar4 = this_ptr->unk3 + in_stack_00000008 * 0xb8 + 0x458;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)(pcVar4 + 0x30),(CVector3i *)(pcVar4 + 0x24));
  if ((*(int *)(g_CDemonMissionPtr->unk1 + 4) != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 == 0)) {
    if (DAT_02f0cb1c == 2) {
      shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
    }
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
  }
  fVar5 = (float10)256.0f;
  fVar1 = *(float *)(pcVar4 + 4);
  fVar6 = (float10)*(float *)pcVar4 * fVar5;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)((float10)*(float *)(pcVar4 + 8) * fVar5));
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar1 * fVar5));
  local_2c = (int)ROUND(dVar7);
  local_1c = (int)ROUND(dVar8);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  local_20 = (int)ROUND(dVar7);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0x17c),0.0,-1);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if ((iVar3 == 0) &&
     ((((float)0.01 < *(float *)(pcVar4 + 0xc) ||
       ((float)0.01 < *(float *)(pcVar4 + 0x10))) ||
      ((float)0.01 < *(float *)(pcVar4 + 0x14))))) {
    local_54 = -1.4;
    local_4c = -1.4;
    local_50 = 0.2;
    local_60.x = (int)ROUND(256.0f * -1.4);
    local_60.y = (int)ROUND(256.0f * 0.2);
    local_60.z = (int)ROUND(256.0f * -1.4);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_60);
    local_54 = -local_54;
    local_6c.x = (int)ROUND(local_54 * 256.0f);
    local_6c.y = (int)ROUND(local_50 * 256.0f);
    local_6c.z = (int)ROUND(local_4c * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_6c);
    local_4c = -local_4c;
    local_48.x = (int)ROUND(local_54 * 256.0f);
    local_48.y = (int)ROUND(local_50 * 256.0f);
    local_48.z = (int)ROUND(local_4c * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_48);
    local_54 = -local_54;
    local_3c.x = (int)ROUND(local_54 * 256.0f);
    local_3c.y = (int)ROUND(local_50 * 256.0f);
    local_3c.z = (int)ROUND(local_4c * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_3c);
    this_ptr_00 = g_CDemonRendererPtr2;
    fVar5 = (float10)256.0f;
    fVar1 = *(float *)(pcVar4 + 0x10);
    fVar6 = (float10)*(float *)(pcVar4 + 0x14) * fVar5;
    pSVar2 = g_CDemonRendererPtr2->vertex_buffer_ptr;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)((float10)*(float *)(pcVar4 + 0xc) * fVar5));
    local_30 = (float)(int)ROUND(dVar7);
    pSVar2->light = local_30;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar1 * fVar5));
    local_30 = (float)(int)ROUND(dVar7);
    this_ptr_00->vertex_buffer_ptr->color = (int)local_30;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
    local_30 = (float)(int)ROUND(dVar7);
    this_ptr_00->vertex_buffer_ptr->fog = local_30;
    this_ptr_00->vertex_buffer_ptr->w_recip = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[1].light = (float)local_3c.y;
    this_ptr_00->vertex_buffer_ptr[1].color = local_3c.z;
    this_ptr_00->vertex_buffer_ptr[1].fog = local_30;
    this_ptr_00->vertex_buffer_ptr[1].w_recip = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[2].light = (float)local_3c.y;
    this_ptr_00->vertex_buffer_ptr[2].color = local_3c.z;
    this_ptr_00->vertex_buffer_ptr[2].fog = local_30;
    this_ptr_00->vertex_buffer_ptr[2].w_recip = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[3].light = (float)local_3c.y;
    this_ptr_00->vertex_buffer_ptr[3].color = local_3c.z;
    this_ptr_00->vertex_buffer_ptr[3].fog = local_30;
    this_ptr_00->vertex_buffer_ptr[3].w_recip = 9.18341e-41;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (this_ptr_00,(SMRGLTextureBasic *)(this_ptr->unk3 + 0xe78));
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
              (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&stack0xffffff40);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
