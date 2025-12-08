// Name: core_manpuz.cpp_FUN_00509d50
// Address: 00509d50
// Address Range: [[00509d50, 0050a1b8] [0050a1c7, 0050a1ec]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509d50()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_manpuz.cpp_FUN_00509d50(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_00509d50
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,int param_5,
               int param_6)

{
  float fVar1;
  float fVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  int *extraout_EDX;
  CDemonRenderer *this_ptr;
  BADSPACEBASE *in_ESP;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  byte local_48 [12];
  int local_3c;
  int local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  CVector3i local_20;
  
  pfVar5 = (float *)(param_5 + 0xaa0 + param_6 * 0xb8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(pfVar5 + 0xc),(CVector3i *)(pfVar5 + 9));
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar4 == 0)) {
    if (DAT_02f0cb1c == 2) {
      shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
    }
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
  }
  fVar6 = (float10)256f;
  fVar7 = (float10)pfVar5[1] * fVar6;
  fVar8 = (float10)*pfVar5 * fVar6;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)pfVar5[2] * fVar6));
  fVar6 = (float10)dVar9;
  crt_math_c_round_FUN_005fe6b0((double)fVar7);
  local_20.y = (int)ROUND(fVar6);
  crt_math_c_round_FUN_005fe6b0((double)fVar8);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(param_5 + 0x2d4),0.0,-1);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if ((iVar4 == 0) &&
     ((((float)0.01 < pfVar5[3] || ((float)0.01 < pfVar5[4])) ||
      ((float)0.01 < pfVar5[5])))) {
    local_34 = 0xbfb33333;
    local_2c = -1.4;
    local_30 = 0.2;
    local_48._8_4_ = (uint)ROUND(_DAT_00660d70 * -1.4);
    local_3c = (int)ROUND(_DAT_00660d70 * 0.2);
    local_38 = (int)ROUND(_DAT_00660d70 * -1.4);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_48 + 8)
              );
    local_30 = -local_30;
    local_48._0_4_ = (uint)ROUND(local_30 * _DAT_00660d70);
    local_48._4_4_ = (uint)ROUND(local_2c * _DAT_00660d70);
    local_48._8_4_ = (uint)ROUND(local_28 * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_48);
    local_24 = -local_24;
    local_20.x = (int)ROUND(local_2c * _DAT_00660d70);
    local_20.y = (int)ROUND(local_28 * _DAT_00660d70);
    local_20.z = (int)ROUND(local_24 * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_20);
    local_28 = -local_28;
    fVar1 = (float)(int)ROUND((float)local_20.x * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)&stack0xfffffff0);
    local_48._4_4_ = 0;
    local_48._8_4_ = 0x1000000;
    local_48._0_4_ = 3;
    fVar6 = (float10)256f;
    fVar7 = (float10)pfVar5[4] * fVar6;
    fVar8 = (float10)pfVar5[5] * fVar6;
    pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
    dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)pfVar5[3] * fVar6));
    pSVar3->light = (float)(int)ROUND(dVar9);
    dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
    *(int *)(*extraout_EDX + 0x24) = (int)ROUND(dVar9);
    dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
    fVar2 = (float)(int)ROUND(dVar9);
    this_ptr->vertex_buffer_ptr->fog = fVar2;
    this_ptr->vertex_buffer_ptr->w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[1].light = fVar1;
    this_ptr->vertex_buffer_ptr[1].color = unaff_EBX;
    this_ptr->vertex_buffer_ptr[1].fog = fVar2;
    this_ptr->vertex_buffer_ptr[1].w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[2].light = fVar1;
    this_ptr->vertex_buffer_ptr[2].color = unaff_EBX;
    this_ptr->vertex_buffer_ptr[2].fog = fVar2;
    this_ptr->vertex_buffer_ptr[2].w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[3].light = fVar1;
    this_ptr->vertex_buffer_ptr[3].color = unaff_EBX;
    this_ptr->vertex_buffer_ptr[3].fog = fVar2;
    this_ptr->vertex_buffer_ptr[3].w_recip = 9.18341e-41;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (this_ptr,(SMRGLTextureBasic *)(param_5 + 0x14c0));
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff7c);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
