// Name: core_course.cpp_CCourse_preview_FUN_00443bc0
// Address: 00443bc0
// Address Range: [[00443bc0, 004440c9]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_preview_FUN_00443bc0(CCourse *this_ptr,CKeyFramedModel *model_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: core_slew.cpp_CSlew_init_FUN_005a2060 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl core_course_cpp_CCourse_preview_FUN_00443bc0(CCourse *this_ptr,CKeyFramedModel *model_ptr)

{
  SRenderVertex vertex1;
  SRenderVertex vertex2;
  uint uVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  byte auVar7 [24];
  byte in_stack_fffffe70 [28];
  uint in_stack_fffffe8c;
  char *in_stack_fffffe90;
  char *in_stack_fffffe94;
  double in_stack_fffffe98;
  double in_stack_fffffea0;
  double in_stack_fffffea8;
  double in_stack_fffffeb0;
  uint in_stack_fffffeb8;
  uint uVar8;
  uint uVar10;
  double dVar9;
  CCourse *pCVar11;
  uint uVar12;
  SRenderVertex *output;
  CVector3f *input;
  byte local_cc [16];
  float local_bc;
  float local_b8;
  float fStack_b4;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3i local_5c;
  CVector3f local_50;
  double local_44;
  double local_3c;
  int local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar6 = 0;
  local_18 = 0.0;
  g_CDemonSetPtr->lighting_quality_mode = 1;
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  local_cc._4_4_ = 0.0;
  local_cc._0_4_ = 0.0;
  local_b8 = 0.0;
  local_bc = 0.0;
  local_cc._12_4_ = 0.0;
  fStack_b4 = 28.0;
  local_cc._8_4_ = -100.0f + 0.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  dVar9 = (double)(ulonglong)in_stack_fffffeb8;
  do {
    local_b0.x = 0.0;
    local_b0.y = 0.0;
    local_b0.z = 0.0;
    local_14 = this_ptr->len;
    local_3c = (double)local_18;
    local_20 = (float)local_14;
    if (local_3c < 0.0) {
      local_44 = floor((double)(-local_18 / local_20));
      uVar8 = SUB84(dVar9,0);
      local_1c = (float)local_44 * local_20 + (float)local_3c;
      if (local_1c < 0.0) {
        local_1c = local_1c + local_20;
        goto LAB_00443c68;
      }
    }
    else {
      local_44 = floor((double)(local_18 / local_20));
      local_1c = (float)local_3c - (float)local_44 * local_20;
LAB_00443c68:
      uVar8 = SUB84(dVar9,0);
    }
    uVar1 = local_24;
    local_18 = local_1c;
    core_course_cpp_CCourse_evaluate_FUN_00442710(this_ptr,local_1c,&local_80,&local_98);
    if (uVar1 != 0) {
      if ((CVector3f *)local_cc != &local_80) {
        local_cc._0_4_ = local_80.x;
        local_cc._4_4_ = local_80.y;
        local_cc._8_4_ = local_80.z;
      }
      if ((CVector3f *)(local_cc + 0xc) != &local_98) {
        local_cc._12_4_ = local_98.x;
        local_bc = local_98.y;
        local_b8 = local_98.z;
      }
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr2);
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
              (g_CDemonRendererPtr2,(CVector3i *)local_cc);
    if (local_2c == 0) {
      local_50.x = local_b0.x;
      local_50.y = local_b0.y;
      local_50.z = local_b0.z;
      core_course_cpp_renderCourseGizmo_FUN_00443760(&local_50);
    }
    else {
      g_CDemonRaytraceInstance.rendering_mode = 1;
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,100.0,0);
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&local_b0);
    local_14 = this_ptr->len + -1;
    core_course_cpp_CCourse_evaluate_FUN_00442710(this_ptr,(float)local_14,&local_8c,&local_a4);
    g_ActiveRenderColor = 0xfa;
    local_34 = 0;
    while (local_34 < this_ptr->len) {
      local_14 = local_34;
      uVar10 = 0x443da7;
      pCVar11 = this_ptr;
      core_course_cpp_CCourse_evaluate_FUN_00442710(this_ptr,(float)local_34,&local_68,&local_a4);
      local_5c.x = (int)ROUND(local_8c.x * 256.0f);
      local_5c.y = (int)ROUND(local_8c.y * 256.0f);
      local_5c.z = (int)ROUND(local_8c.z * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_5c);
      local_74.x = (float)(int)ROUND(local_68.x * 256.0f);
      local_74.y = (float)(int)ROUND(local_68.y * 256.0f);
      local_74.z = (float)(int)ROUND(local_68.z * 256.0f);
      input = &local_74;
      output = g_CDemonRendererPtr2->vertex_buffer_ptr + 1;
      uVar12 = 0x443e21;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&output->projected_vertex,(CVector3i *)input);
      pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      pSVar3 = pSVar4 + 1;
      piVar5 = (int *)&stack0xfffffea0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      piVar5 = (int *)&stack0xfffffe70;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      vertex1.v = in_stack_fffffe8c;
      auVar7 = in_stack_fffffe70._0_24_;
      vertex1.projected_vertex.transformed_x = auVar7._0_4_;
      vertex1.projected_vertex.transformed_y = auVar7._4_4_;
      vertex1.projected_vertex.transformed_z = auVar7._8_4_;
      vertex1.projected_vertex.inv_z = auVar7._12_4_;
      vertex1.projected_vertex.screen_x = auVar7._16_4_;
      vertex1.projected_vertex.screen_y = auVar7._20_4_;
      vertex1.u = in_stack_fffffe70._24_4_;
      vertex1.z = (int)in_stack_fffffe90;
      vertex1.r = (int)in_stack_fffffe94;
      vertex1._40_8_ = in_stack_fffffe98;
      vertex2.projected_vertex._8_8_ = in_stack_fffffea8;
      vertex2.projected_vertex._0_8_ = in_stack_fffffea0;
      vertex2.projected_vertex._16_8_ = in_stack_fffffeb0;
      vertex2.u = uVar8;
      vertex2.v = uVar10;
      vertex2.z = (int)pCVar11;
      vertex2.r = uVar12;
      vertex2.g = (int)output;
      vertex2.fog = (int)input;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
      if (&local_8c == &local_68) {
        local_34 = local_34 + 1;
      }
      else {
        local_8c.x = local_68.x;
        local_8c.y = local_68.y;
        local_8c.z = local_68.z;
        local_34 = local_34 + 1;
      }
    }
    if (local_24 == 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&local_80);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,(CVector3i *)&local_98,(CVector3i *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    dVar9 = (double)local_98.x;
    in_stack_fffffeb0 = (double)local_80.z;
    in_stack_fffffea8 = (double)local_80.y;
    in_stack_fffffea0 = (double)local_80.x;
    in_stack_fffffe98 = (double)local_18;
    in_stack_fffffe94 = "t=%7.3f, Pos: %7.2f,%7.2f,%7.2f, PBH: %7.4f %7.4f %7.4f";
    in_stack_fffffe90 = &stack0xfffffed0;
    in_stack_fffffe8c = 0x443f7f;
    _sprintf(in_stack_fffffe90,"t=%7.3f, Pos: %7.2f,%7.2f,%7.2f, PBH: %7.4f %7.4f %7.4f");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed0,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    local_30 = g_CGamePtr->delta_time_float;
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar2 != 0) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      g_CDemonRaytraceInstance.rendering_mode = 0;
      g_CDemonSetPtr->lighting_quality_mode = 0;
      return;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
    if (iVar2 != 0) {
      local_28 = (uint)(local_28 == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar2 != 0) {
      local_24 = (uint)(local_24 == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S);
    if (iVar2 != 0) {
      local_2c = (uint)(local_2c == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
    if (iVar2 != 0) {
      local_18 = local_18 + 1.0;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
    if (iVar2 != 0) {
      local_18 = local_18 + -1.0f;
    }
    if (local_24 == 0) {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_cc);
    }
    if (local_28 == 0) {
      local_18 = local_30 * (float)20 + local_18;
    }
  } while( true );
}
