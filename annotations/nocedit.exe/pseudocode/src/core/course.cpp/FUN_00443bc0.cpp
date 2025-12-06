// Name: core_course.cpp_FUN_00443bc0
// Address: 00443bc0
// Address Range: [[00443bc0, 00443f2b] [00443f2f, 004440c9]]
// Convention: unknown
// Signature: undefined core_course.cpp_FUN_00443bc0()

#include "nocturne.h"

void core_course_cpp_FUN_00443bc0(void)

{
  uint uVar1;
  uint extraout_EAX;
  uint extraout_EAX_00;
  int iVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  float10 in_ST0;
  double dVar7;
  CCourse *in_stack_00000004;
  CKeyFramedModel *in_stack_00000008;
  SRenderVertex *in_stack_fffffea8;
  SRenderVertex *in_stack_fffffeac;
  double dStack_134;
  float fStack_130;
  byte *puStack_12c;
  CGame *in_stack_fffffedc;
  CVector3i local_cc;
  float local_b0;
  float fVar8;
  float fVar9;
  float local_8c;
  float local_88;
  float local_84;
  CSlew *in_stack_ffffff80;
  float local_7c;
  float local_78;
  CVector3i local_74;
  float local_68;
  float local_64;
  float local_60;
  CVector3i local_5c;
  float local_50;
  float local_4c;
  float local_48;
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
  dStack_134 = (double)CONCAT44 /* combine 2-byte values */(fStack_130,(CSlew *)&local_cc);
  local_2c = 0;
  local_24 = 0;
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&local_cc);
  local_cc.z = (int)((float)local_cc.z + -100f);
  puStack_12c = (byte *)0x443c10;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffedc);
  while( true ) {
    local_b0 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    local_14 = in_stack_00000004->len;
    local_3c = (double)local_18;
    local_20 = (float)local_14;
    if (local_3c < 0.0) {
      puStack_12c = (byte *)0x443e75;
      dVar7 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
      in_ST0 = (float10)dVar7;
      local_1c = (float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00) * local_20 +
                 (float)local_3c;
      if (local_1c < 0.0) {
        local_1c = local_1c + local_20;
      }
    }
    else {
      puStack_12c = (byte *)0x443c56;
      dVar7 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
      in_ST0 = (float10)dVar7;
      local_1c = (float)local_3c - (float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX) * local_20;
    }
    uVar1 = local_24;
    local_18 = local_1c;
    puStack_12c = &stack0xffffff80;
    dStack_134 = (double)CONCAT44 /* combine 2-byte values */(local_1c,in_stack_00000004);
    core_course_cpp_CCourse_FUN_00442710(in_stack_00000004);
    if ((uVar1 != 0) && (&local_cc != (CVector3i *)&stack0xffffff80)) {
      local_cc.z = (int)local_78;
      local_cc.x = (int)in_stack_ffffff80;
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
              (g_CDemonRendererPtr,&local_cc);
    if (local_2c == 0) {
      local_50 = local_b0;
      local_4c = fVar8;
      local_48 = fVar9;
      in_ST0 = (float10)core_course_cpp_FUN_00443760();
    }
    else {
      g_CDemonRaytraceInstance.rendering_mode = 1;
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,100.0,0);
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)&local_b0);
    local_14 = in_stack_00000004->len + -1;
    core_course_cpp_CCourse_FUN_00442710(in_stack_00000004);
    g_ActiveRenderColor = 0xfa;
    local_34 = 0;
    while (local_34 < in_stack_00000004->len) {
      local_14 = local_34;
      core_course_cpp_CCourse_FUN_00442710(in_stack_00000004);
      local_5c.x = (int)ROUND(local_8c * 256f);
      local_5c.y = (int)ROUND(local_88 * 256f);
      local_5c.z = (int)ROUND(local_84 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_5c);
      local_74.x = (int)ROUND(local_68 * 256f);
      local_74.y = (int)ROUND(local_64 * 256f);
      local_74.z = (int)ROUND(local_60 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_74);
      pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
      pSVar3 = pSVar4 + 1;
      piVar5 = (int *)&stack0xfffffed8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      piVar5 = (int *)&stack0xfffffea8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffea8,in_stack_fffffeac);
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
                (g_CDemonRendererPtr,(CVector3f *)&stack0xffffff80);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)&stack0xffffff68,(CVector3i *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (in_stack_00000008,(CKeyFramedModelInstance *)0x0,0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    puStack_12c = SUB84 /* extract 2-byte value */((double)local_7c,0);
    dStack_134 = (double)(float)in_stack_ffffff80;
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)&fStack_130,"t=%7.3f, Pos: %7.2f,%7.2f,%7.2f, PBH: %7.4f %7.4f %7.4f");
    engine_2d_c_drawText_FUN_00401fd0((char *)&fStack_130,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    local_30 = g_CGamePtr->delta_time_float;
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar2 != 0) break;
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x19);
    if (iVar2 != 0) {
      local_28 = (uint)(local_28 == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13);
    if (iVar2 != 0) {
      local_24 = (uint)(local_24 == 0);
    }
    local_cc.z = 0x444022;
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1f);
    if (iVar2 != 0) {
      local_2c = (uint)(local_2c == 0);
    }
    local_b0 = 6.26787e-39;
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x34);
    if (iVar2 != 0) {
      local_18 = local_18 + 1.0;
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x33);
    if (iVar2 != 0) {
      local_18 = local_18 + -1f;
    }
    if (local_24 == 0) {
      in_stack_ffffff80 = (CSlew *)&local_cc;
      local_84 = 6.267998e-39;
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(in_stack_ffffff80);
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
