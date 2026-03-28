// Name: core_course.cpp_CCourse_preview_FUN_00443bc0
// Address: 00443bc0
// Address Range: [[00443bc0, 004440c9] [0060dcf5, 0060dda8]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_preview_FUN_00443bc0(CCourse *this_ptr,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_preview_FUN_00443bc0(CCourse *this_ptr,CKeyFramedModel *model_ptr)

{
  float fVar1;
  SRenderVertex vertex1;
  SRenderVertex vertex2;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  int *piVar10;
  byte bVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  CSlew local_cc;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3i local_74;
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
  
  bVar11 = 0;
  local_18 = 0.0;
  g_CDemonSetPtr->lighting_quality_mode = 1;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  core_slew_cpp_CSlew_init_FUN_005a2060(&local_cc);
  local_cc.position.z = local_cc.position.z + -100.0f;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  while( true ) {
    local_b0.x = 0.0;
    local_b0.y = 0.0;
    local_b0.z = 0.0;
    fVar1 = (float)this_ptr->len;
    if (local_18 < 0.0) {
      dVar12 = floor((double)(-local_18 / fVar1));
      local_1c = (float)dVar12 * fVar1 + local_18;
      if (local_1c < 0.0) {
        local_1c = local_1c + fVar1;
      }
    }
    else {
      dVar12 = floor((double)(local_18 / fVar1));
      local_1c = local_18 - (float)dVar12 * fVar1;
    }
    local_18 = local_1c;
    core_course_cpp_CCourse_evaluate_FUN_00442710(this_ptr,local_1c,&local_80,&local_98);
    if (bVar2) {
      if (&local_cc != (CSlew *)&local_80) {
        local_cc.position.x = local_80.x;
        local_cc.position.y = local_80.y;
        local_cc.position.z = local_80.z;
      }
      if ((CVector3f *)&local_cc.pitch != &local_98) {
        local_cc.pitch = local_98.x;
        local_cc.yaw = local_98.y;
        local_cc.roll = local_98.z;
      }
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
              (g_CDemonRendererPtr2,(CVector3f *)&local_cc.pitch);
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
              (g_CDemonRendererPtr2,(CVector3i *)&local_cc);
    if (bVar3) {
      g_CDemonRaytraceInstance.rendering_mode = 1;
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,100.0,0);
    }
    else {
      local_50.x = local_b0.x;
      local_50.y = local_b0.y;
      local_50.z = local_b0.z;
      core_course_cpp_renderCourseGizmo_FUN_00443760(&local_50);
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&local_b0);
    core_course_cpp_CCourse_evaluate_FUN_00442710
              (this_ptr,(float)(this_ptr->len + -1),&local_8c,&local_a4);
    g_ActiveRenderColor = 0xfa;
    local_34 = 0;
    while (local_34 < this_ptr->len) {
      core_course_cpp_CCourse_evaluate_FUN_00442710(this_ptr,(float)local_34,&local_68,&local_a4);
      local_5c.x = (int)ROUND(local_8c.x * 256.0f);
      local_5c.y = (int)ROUND(local_8c.y * 256.0f);
      local_5c.z = (int)ROUND(local_8c.z * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_5c);
      local_74.x = (int)ROUND(local_68.x * 256.0f);
      local_74.y = (int)ROUND(local_68.y * 256.0f);
      local_74.z = (int)ROUND(local_68.z * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_74);
      pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      iVar5 = pSVar9[1].projected_vertex.transformed_x;
      iVar24 = pSVar9[1].projected_vertex.transformed_y;
      iVar25 = pSVar9[1].projected_vertex.transformed_z;
      iVar26 = pSVar9[1].projected_vertex.inv_z;
      iVar27 = pSVar9[1].projected_vertex.screen_x;
      iVar28 = pSVar9[1].projected_vertex.screen_y;
      iVar29 = pSVar9[1].u;
      iVar30 = pSVar9[1].v;
      iVar31 = pSVar9[1].r;
      iVar32 = pSVar9[1].g;
      iVar33 = pSVar9[1].b;
      iVar6 = pSVar9[1].a;
      pSVar8 = pSVar9 + 1;
      piVar10 = (int *)&stack0xfffffea0;
      iVar34 = iVar6;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar10 = (pSVar8->projected_vertex).transformed_x;
        pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
        piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
      }
      iVar6 = (pSVar9->projected_vertex).transformed_x;
      iVar13 = (pSVar9->projected_vertex).transformed_y;
      iVar14 = (pSVar9->projected_vertex).transformed_z;
      iVar15 = (pSVar9->projected_vertex).inv_z;
      iVar16 = (pSVar9->projected_vertex).screen_x;
      iVar17 = (pSVar9->projected_vertex).screen_y;
      iVar18 = pSVar9->u;
      iVar19 = pSVar9->v;
      iVar20 = pSVar9->r;
      iVar21 = pSVar9->g;
      iVar22 = pSVar9->b;
      iVar7 = pSVar9->a;
      piVar10 = (int *)&stack0xfffffe70;
      iVar23 = iVar7;
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar10 = (pSVar9->projected_vertex).transformed_x;
        pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
        piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
      }
      vertex1.projected_vertex.transformed_y = iVar13;
      vertex1.projected_vertex.transformed_x = iVar6;
      vertex1.projected_vertex.transformed_z = iVar14;
      vertex1.projected_vertex.inv_z = iVar15;
      vertex1.projected_vertex.screen_x = iVar16;
      vertex1.projected_vertex.screen_y = iVar17;
      vertex1.u = iVar18;
      vertex1.v = iVar19;
      vertex1.r = iVar20;
      vertex1.g = iVar21;
      vertex1.b = iVar22;
      vertex1.a = iVar23;
      vertex2.projected_vertex.transformed_y = iVar24;
      vertex2.projected_vertex.transformed_x = iVar5;
      vertex2.projected_vertex.transformed_z = iVar25;
      vertex2.projected_vertex.inv_z = iVar26;
      vertex2.projected_vertex.screen_x = iVar27;
      vertex2.projected_vertex.screen_y = iVar28;
      vertex2.u = iVar29;
      vertex2.v = iVar30;
      vertex2.r = iVar31;
      vertex2.g = iVar32;
      vertex2.b = iVar33;
      vertex2.a = iVar34;
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
    if (!bVar2) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&local_80);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,(CVector3i *)&local_98,(CVector3i *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    }
    _sprintf(&stack0xfffffed0,"t=%7.3f, Pos: %7.2f,%7.2f,%7.2f, PBH: %7.4f %7.4f %7.4f");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed0,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    fVar1 = g_CGamePtr->delta_time_float;
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar5 != 0) break;
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
    if (iVar5 != 0) {
      bVar4 = !bVar4;
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar5 != 0) {
      bVar2 = !bVar2;
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S);
    if (iVar5 != 0) {
      bVar3 = !bVar3;
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
    if (iVar5 != 0) {
      local_18 = local_1c + 1.0;
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
    if (iVar5 != 0) {
      local_18 = local_18 + -1.0f;
    }
    if (!bVar2) {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_cc);
    }
    if (!bVar4) {
      local_18 = fVar1 * (float)20 + local_18;
    }
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonRaytraceInstance.rendering_mode = 0;
  g_CDemonSetPtr->lighting_quality_mode = 0;
  return;
}
