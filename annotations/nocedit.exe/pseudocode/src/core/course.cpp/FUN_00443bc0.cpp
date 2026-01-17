// Name: core_course.cpp_FUN_00443bc0
// Address: 00443bc0
// Address Range: [[00443bc0, 00443f2b] [00443f2f, 004440c9]]
// Convention: unknown
// Signature: undefined core_course.cpp_FUN_00443bc0()

#include "nocturne.h"

void core_course_cpp_FUN_00443bc0(void)

{
  uint uVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  double *pdVar5;
  int *piVar6;
  byte bVar7;
  CCourse *in_stack_00000004;
  CKeyFramedModel *in_stack_00000008;
  SRenderVertex *in_stack_fffffe70;
  SRenderVertex *in_stack_fffffe74;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  ulonglong uStack_148;
  CGame *in_stack_fffffed4;
  byte local_cc [16];
  float local_bc;
  float local_b8;
  CVector3f local_b0 [2];
  CVector3i local_98;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f local_80;
  CVector3f local_74;
  float local_68;
  float local_64;
  float local_60;
  CVector3i local_5c;
  float local_50;
  float local_4c;
  float local_48;
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
  
  bVar7 = 0;
  local_18 = 0.0;
  g_CDemonSetPtr->lighting_quality_mode = 1;
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_cc);
  local_cc._8_4_ = (float)local_cc._8_4_ + -100.0f;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffed4);
  while( true ) {
    local_b0[0].x = 0.0;
    local_b0[0].y = 0.0;
    local_b0[0].z = 0.0;
    local_14 = in_stack_00000004->len;
    local_3c = (double)local_18;
    local_20 = (float)local_14;
    if (local_3c < 0.0) {
      local_44 = crt_math_c_floor_FUN_005feb90((double)(-local_18 / local_20));
      local_1c = (float)local_44 * local_20 + (float)local_3c;
      if (local_1c < 0.0) {
        local_1c = local_1c + local_20;
      }
    }
    else {
      local_44 = crt_math_c_floor_FUN_005feb90((double)(local_18 / local_20));
      local_1c = (float)local_3c - (float)local_44 * local_20;
    }
    uVar1 = local_24;
    local_18 = local_1c;
    uStack_148 = (double)CONCAT44 /* combine 2-byte values */(0x443c8b,(uint)uStack_148);
    core_course_cpp_CCourse_FUN_00442710(in_stack_00000004);
    if (uVar1 != 0) {
      if ((CVector3f *)local_cc != &local_80) {
        local_cc._0_4_ = local_80.x;
        local_cc._4_4_ = local_80.y;
        local_cc._8_4_ = local_80.z;
      }
      if ((CVector3i *)(local_cc + 0xc) != &local_98) {
        local_cc._12_4_ = local_98.x;
        local_bc = (float)local_98.y;
        local_b8 = (float)local_98.z;
      }
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
              (g_CDemonRendererPtr,(CVector3i *)local_cc);
    if (local_2c == 0) {
      local_50 = local_b0[0].x;
      local_4c = local_b0[0].y;
      local_48 = local_b0[0].z;
      core_course_cpp_FUN_00443760();
    }
    else {
      g_CDemonRaytraceInstance.rendering_mode = 1;
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,100.0,0);
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,local_b0);
    local_14 = in_stack_00000004->len + -1;
    uStack_148 = (double)CONCAT44 /* combine 2-byte values */(0x443d61,(uint)uStack_148);
    core_course_cpp_CCourse_FUN_00442710(in_stack_00000004);
    g_ActiveRenderColor = 0xfa;
    local_34 = 0;
    while (local_34 < in_stack_00000004->len) {
      local_14 = local_34;
      uStack_148 = (double)CONCAT44 /* combine 2-byte values */(0x443da7,(uint)uStack_148);
      core_course_cpp_CCourse_FUN_00442710(in_stack_00000004);
      local_5c.x = (int)ROUND(local_8c * 256.0f);
      local_5c.y = (int)ROUND(local_88 * 256.0f);
      local_5c.z = (int)ROUND(local_84 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_5c);
      local_74.x = (float)(int)ROUND(local_68 * 256.0f);
      local_74.y = (float)(int)ROUND(local_64 * 256.0f);
      local_74.z = (float)(int)ROUND(local_60 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&local_74)
      ;
      pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
      pSVar3 = pSVar4 + 1;
      pdVar5 = &dStack_160;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(int *)pdVar5 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
        pdVar5 = (double *)((int)pdVar5 + ((uint)bVar7 * -2 + 1) * 4);
      }
      piVar6 = (int *)&stack0xfffffe70;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe70,in_stack_fffffe74);
      if (&local_8c == &local_68) {
        local_34 = local_34 + 1;
      }
      else {
        local_8c = local_68;
        local_88 = local_64;
        local_84 = local_60;
        local_34 = local_34 + 1;
      }
    }
    if (local_24 == 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,&local_80);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,&local_98,(CVector3i *)0x0);
      uStack_148 = (double)CONCAT44 /* combine 2-byte values */(0x443f1d,(uint)uStack_148);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (in_stack_00000008,(CKeyFramedModelInstance *)0x0,0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    uStack_148 = (double)(float)local_98.x;
    dStack_150 = (double)local_80.z;
    dStack_158 = (double)local_80.y;
    dStack_160 = (double)local_80.x;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffed0,"t=%7.3f, Pos: %7.2f,%7.2f,%7.2f, PBH: %7.4f %7.4f %7.4f");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed0,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    local_30 = g_CGamePtr->delta_time_float;
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar2 != 0) break;
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    if (iVar2 != 0) {
      local_28 = (uint)(local_28 == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar2 != 0) {
      local_24 = (uint)(local_24 == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f);
    if (iVar2 != 0) {
      local_2c = (uint)(local_2c == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
    if (iVar2 != 0) {
      local_18 = local_18 + 1.0;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
    if (iVar2 != 0) {
      local_18 = local_18 + -1.0f;
    }
    if (local_24 == 0) {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_cc);
    }
    if (local_28 == 0) {
      local_18 = local_30 * (float)20 + local_18;
    }
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonRaytraceInstance.rendering_mode = 0;
  g_CDemonSetPtr->lighting_quality_mode = 0;
  return;
}
