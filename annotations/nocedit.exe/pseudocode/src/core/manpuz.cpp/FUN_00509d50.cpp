// Name: core_manpuz.cpp_FUN_00509d50
// Address: 00509d50
// Address Range: [[00509d50, 0050a1b8] [0050a1c7, 0050a1ec]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509d50()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_manpuz.cpp_FUN_00509d50(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_00509d50(void)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int *extraout_EDX;
  CDemonRenderer *this_ptr;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  int in_stack_00000004;
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
  
  pfVar3 = (float *)(in_stack_00000004 + 0xaa0 + in_stack_00000008 * 0xb8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)(pfVar3 + 0xc),(CVector3i *)(pfVar3 + 9));
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar2 == 0)) {
    if (DAT_02f0cb1c == 2) {
      shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
    }
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
  }
  fVar4 = (float10)256.0f;
  fVar5 = (float10)pfVar3[1] * fVar4;
  fVar6 = (float10)*pfVar3 * fVar4;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)((float10)pfVar3[2] * fVar4));
  fVar4 = (float10)dVar7;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
  local_2c = (int)ROUND(fVar4);
  local_1c = (int)ROUND(dVar7);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  local_20 = (int)ROUND(dVar7);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x2d4),0.0,-1);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if ((iVar2 == 0) &&
     ((((float)0.01 < pfVar3[3] || ((float)0.01 < pfVar3[4])) ||
      ((float)0.01 < pfVar3[5])))) {
    local_54 = -1.4;
    local_4c = -1.4;
    local_50 = 0.2;
    local_60.x = (int)ROUND(_DAT_00660d70 * -1.4);
    local_60.y = (int)ROUND(_DAT_00660d70 * 0.2);
    local_60.z = (int)ROUND(_DAT_00660d70 * -1.4);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_60);
    local_54 = -local_54;
    local_6c.x = (int)ROUND(local_54 * _DAT_00660d70);
    local_6c.y = (int)ROUND(local_50 * _DAT_00660d70);
    local_6c.z = (int)ROUND(local_4c * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_6c);
    local_4c = -local_4c;
    local_48.x = (int)ROUND(local_54 * _DAT_00660d70);
    local_48.y = (int)ROUND(local_50 * _DAT_00660d70);
    local_48.z = (int)ROUND(local_4c * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_48);
    local_54 = -local_54;
    local_3c.x = (int)ROUND(local_54 * _DAT_00660d70);
    local_3c.y = (int)ROUND(local_50 * _DAT_00660d70);
    local_3c.z = (int)ROUND(local_4c * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_3c);
    fVar4 = (float10)256.0f;
    fVar5 = (float10)pfVar3[4] * fVar4;
    fVar6 = (float10)pfVar3[5] * fVar4;
    pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)((float10)pfVar3[3] * fVar4));
    local_30 = (float)(int)ROUND(dVar7);
    pSVar1->light = local_30;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
    local_30 = (float)(int)ROUND(dVar7);
    *(float *)(*extraout_EDX + 0x24) = local_30;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
    local_30 = (float)(int)ROUND(dVar7);
    this_ptr->vertex_buffer_ptr->fog = local_30;
    this_ptr->vertex_buffer_ptr->w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[1].light = (float)local_3c.y;
    this_ptr->vertex_buffer_ptr[1].color = local_3c.z;
    this_ptr->vertex_buffer_ptr[1].fog = local_30;
    this_ptr->vertex_buffer_ptr[1].w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[2].light = (float)local_3c.y;
    this_ptr->vertex_buffer_ptr[2].color = local_3c.z;
    this_ptr->vertex_buffer_ptr[2].fog = local_30;
    this_ptr->vertex_buffer_ptr[2].w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[3].light = (float)local_3c.y;
    this_ptr->vertex_buffer_ptr[3].color = local_3c.z;
    this_ptr->vertex_buffer_ptr[3].fog = local_30;
    this_ptr->vertex_buffer_ptr[3].w_recip = 9.18341e-41;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (this_ptr,(SMRGLTextureBasic *)(in_stack_00000004 + 0x14c0));
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
