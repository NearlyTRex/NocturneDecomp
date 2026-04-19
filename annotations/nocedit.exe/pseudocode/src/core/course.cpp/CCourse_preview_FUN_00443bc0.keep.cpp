// Name: core_course.cpp_CCourse_preview_FUN_00443bc0
// Address: 00443bc0
// MANUAL RECONSTRUCTION
// Address Range: [[00443bc0, 004440c9] [0060dcf5, 0060dda8]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_preview_FUN_00443bc0(CCourse *this_ptr,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_preview_FUN_00443bc0(CCourse *this_ptr,CKeyFramedModel *model_ptr)
{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  double dVar12;
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
  int local_34;
  float local_1c;
  float local_18;
  char text_buffer[128];
  SRenderVertex *pSVar9;

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
      local_cc.position.x = local_80.x;
      local_cc.position.y = local_80.y;
      local_cc.position.z = local_80.z;
      local_cc.pitch = local_98.x;
      local_cc.yaw = local_98.y;
      local_cc.roll = local_98.z;
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
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar9[0],pSVar9[1]);
      local_8c.x = local_68.x;
      local_8c.y = local_68.y;
      local_8c.z = local_68.z;
      local_34 = local_34 + 1;
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
    _sprintf(
              text_buffer,
              (char *)"t=%7.3f, Pos: %7.2f,%7.2f,%7.2f, PBH: %7.4f %7.4f %7.4f",
              (double)local_18,
              (double)local_80.x,(double)local_80.y,(double)local_80.z,
              (double)local_98.x,(double)local_98.y,(double)local_98.z);
    engine_2d_c_drawText_FUN_00401fd0(text_buffer,0,0);
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
