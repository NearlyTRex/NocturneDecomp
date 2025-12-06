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
  float fVar2;
  CDemonMission *pCVar3;
  CDemonMission *extraout_EAX;
  int iVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar5;
  int *piVar6;
  CDemonRenderer *this_ptr;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000020;
  float in_stack_00000028;
  int in_stack_0000002c;
  float in_stack_00000030;
  byte local_30 [12];
  int local_24;
  int local_20;
  uint local_1c;
  float local_18;
  float local_14;
  
  pfVar7 = (float *)(in_stack_00000004 + 0xaa0 + in_stack_00000008 * 0xb8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(pfVar7 + 0xc),(CVector3i *)(pfVar7 + 9));
  pCVar3 = g_CDemonMissionPtr;
  uVar5 = extraout_EDX;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (pCVar3 = (CDemonMission *)
               engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     uVar5 = extraout_EDX_00, pCVar3 == (CDemonMission *)0x0)) {
    if (DAT_02f0cb1c == 2) {
      shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
    }
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
    pCVar3 = extraout_EAX;
    uVar5 = extraout_EDX_01;
  }
  fVar8 = (float10)pfVar7[2] * (float10)256f;
  fVar10 = (float10)*pfVar7 * (float10)256f;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar5,pCVar3));
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  crt_math_c_round_FUN_005fe6b0(dVar11);
  in_stack_00000008 = (int)ROUND(fVar10);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x2d4),0.0,-1);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if ((iVar4 == 0) &&
     ((((float)0.01 < pfVar7[3] || ((float)0.01 < pfVar7[4])) ||
      ((float)0.01 < pfVar7[5])))) {
    local_1c = 0xbfb33333;
    local_14 = -1.4;
    local_18 = 0.2;
    local_30._8_4_ = (uint)ROUND(_DAT_00660d70 * -1.4);
    local_24 = (int)ROUND(_DAT_00660d70 * 0.2);
    local_20 = (int)ROUND(_DAT_00660d70 * -1.4);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_30 + 8)
              );
    local_18 = -local_18;
    local_30._0_4_ = (uint)ROUND(local_18 * _DAT_00660d70);
    local_30._4_4_ = (uint)ROUND(local_14 * _DAT_00660d70);
    local_30._8_4_ = (uint)ROUND(unaff_EBP * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_30);
    fVar2 = local_14 * _DAT_00660d70;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)&stack0xfffffff8);
    in_stack_00000008 = (int)ROUND(-unaff_EBP * _DAT_00660d70);
    in_stack_0000000c = (int)ROUND(-(float)(int)ROUND(fVar8) * _DAT_00660d70);
    in_stack_00000010 = (int)ROUND((float)(int)ROUND(fVar2) * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)&stack0x00000008);
    local_30._4_4_ = 0;
    local_30._8_4_ = 0x1000000;
    local_30._0_4_ = 3;
    fVar9 = (float10)256f;
    fVar8 = (float10)pfVar7[3] * fVar9;
    fVar10 = (float10)pfVar7[4] * fVar9;
    fVar9 = (float10)pfVar7[5] * fVar9;
    pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,1));
    in_stack_00000020 = (float)(int)ROUND(fVar8);
    pSVar1->light = in_stack_00000020;
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),in_stack_00000020));
    piVar6 = (int *)((ulonglong)dVar11 >> 0x20);
    in_stack_00000028 = (float)(int)ROUND(fVar10);
    *(float *)(*piVar6 + 0x24) = in_stack_00000028;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(piVar6,in_stack_00000028));
    this_ptr = (CDemonRenderer *)((ulonglong)dVar11 >> 0x20);
    in_stack_00000030 = (float)(int)ROUND(fVar9);
    this_ptr->vertex_buffer_ptr->fog = in_stack_00000030;
    this_ptr->vertex_buffer_ptr->w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[1].light = in_stack_00000028;
    this_ptr->vertex_buffer_ptr[1].color = in_stack_0000002c;
    this_ptr->vertex_buffer_ptr[1].fog = in_stack_00000030;
    this_ptr->vertex_buffer_ptr[1].w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[2].light = in_stack_00000028;
    this_ptr->vertex_buffer_ptr[2].color = in_stack_0000002c;
    this_ptr->vertex_buffer_ptr[2].fog = in_stack_00000030;
    this_ptr->vertex_buffer_ptr[2].w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[3].light = in_stack_00000028;
    this_ptr->vertex_buffer_ptr[3].color = in_stack_0000002c;
    this_ptr->vertex_buffer_ptr[3].fog = in_stack_00000030;
    this_ptr->vertex_buffer_ptr[3].w_recip = 9.18341e-41;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (this_ptr,(SMRGLTextureBasic *)(in_stack_00000004 + 0x14c0));
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffac);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
