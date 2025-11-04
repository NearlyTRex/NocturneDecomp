// Name: core_course.cpp_FUN_00443bc0
// Address: 00443bc0
// Address Range: [[00443bc0, 00443f2b] [00443f2f, 004440c9]]
// Convention: unknown
// Signature: undefined core_course.cpp_FUN_00443bc0()
// Cross-references:
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443332 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_t_7_3f_Pos_7_2f_7_2f_7_2_00619402
//   float FLOAT_0061943b = -100
//   double DOUBLE_00619443 = 20
//   float FLOAT_0061944b = -1
//   float FLOAT_0065c060 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ActiveRenderColor
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.lighting_quality_mode
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_course.cpp_CCourse_FUN_00442710
//   core_course.cpp_FUN_00443760
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_slew.cpp_CSlew_init_FUN_005a2060
//   core_slew.cpp_CSlew_processInput_FUN_005a20b0
//   crt_math.c_floor_FUN_005feb90
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void core_course_cpp_FUN_00443bc0(void)

{
  uint uVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
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
  undefined1 *puStack_12c;
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
  dStack_134 = (double)CONCAT44(fStack_130,(CSlew *)&local_cc);
  local_2c = 0;
  local_24 = 0;
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&local_cc);
  local_cc.z = (int)((float)local_cc.z + FLOAT_0061943b);
  puStack_12c = (undefined1 *)0x443c10;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffedc);
  while( true ) {
    local_b0 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    local_14 = in_stack_00000004->len;
    local_3c = (double)local_18;
    local_20 = (float)local_14;
    if (local_3c < 0.0) {
      puStack_12c = (undefined1 *)0x443e75;
      dVar7 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
      in_ST0 = (float10)dVar7;
      local_1c = (float)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00) * local_20 +
                 (float)local_3c;
      if (local_1c < 0.0) {
        local_1c = local_1c + local_20;
      }
    }
    else {
      puStack_12c = (undefined1 *)0x443c56;
      dVar7 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
      in_ST0 = (float10)dVar7;
      local_1c = (float)local_3c - (float)(double)CONCAT44(extraout_EDX,extraout_EAX) * local_20;
    }
    uVar1 = local_24;
    local_18 = local_1c;
    puStack_12c = &stack0xffffff80;
    dStack_134 = (double)CONCAT44(local_1c,in_stack_00000004);
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
      local_5c.x = (int)ROUND(local_8c * FLOAT_0065c060);
      local_5c.y = (int)ROUND(local_88 * FLOAT_0065c060);
      local_5c.z = (int)ROUND(local_84 * FLOAT_0065c060);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_5c);
      local_74.x = (int)ROUND(local_68 * FLOAT_0065c060);
      local_74.y = (int)ROUND(local_64 * FLOAT_0065c060);
      local_74.z = (int)ROUND(local_60 * FLOAT_0065c060);
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
    puStack_12c = SUB84((double)local_7c,0);
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
      local_18 = local_18 + FLOAT_0061944b;
    }
    if (local_24 == 0) {
      in_stack_ffffff80 = (CSlew *)&local_cc;
      local_84 = 6.267998e-39;
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(in_stack_ffffff80);
    }
    if (local_28 == 0) {
      local_18 = local_30 * (float)DOUBLE_00619443 + local_18;
    }
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonRaytraceInstance.rendering_mode = 0;
  g_CDemonSetPtr->lighting_quality_mode = 0;
  return;
}


// Assembly code:
// 00443bc0: PUSH EBX
//   Label: core_course.cpp_FUN_00443bc0
// 00443bc1: PUSH ESI
// 00443bc2: PUSH EDI
// 00443bc3: PUSH EBP
// 00443bc4: MOV EBP,ESP
// 00443bc6: SUB ESP,0x120
// 00443bcc: SUB EBP,0x7a
// 00443bcf: XOR EDX,EDX
// 00443bd1: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00443bd6: MOV dword ptr [EBP + 0x72],EDX
// 00443bd9: MOV dword ptr [EAX + 0x15ac80],0x1
//   XREF to: 0326eef8 (WRITE)
// 00443be3: LEA EAX,[EBP + -0x42]
// 00443be6: MOV dword ptr [EBP + 0x62],EDX
// 00443be9: PUSH EAX
// 00443bea: MOV dword ptr [EBP + 0x5e],EDX
// 00443bed: MOV dword ptr [EBP + 0x66],EDX
// 00443bf0: CALL core_slew.cpp_CSlew_init_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 00443bf5: FLD float ptr [EBP + -0x3a]
// 00443bf8: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00443bfe: ADD ESP,0x4
// 00443c01: FADD float ptr [0x0061943b]
//   XREF to: 0061943b (READ)
// 00443c07: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 00443c08: FSTP float ptr [EBP + -0x3a]
// 00443c0b: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 00443c10: ADD ESP,0x4
// 00443c13: XOR EAX,EAX
//   Label: LAB_00443c13
// 00443c15: MOV dword ptr [EBP + -0x26],EAX
// 00443c18: MOV dword ptr [EBP + -0x22],EAX
// 00443c1b: MOV dword ptr [EBP + -0x1e],EAX
// 00443c1e: MOV EAX,dword ptr [EBP + 0x8e]
// 00443c24: FLD float ptr [EBP + 0x72]
// 00443c27: MOV EAX,dword ptr [EAX]
// 00443c29: FLDZ
// 00443c2b: MOV dword ptr [EBP + 0x76],EAX
// 00443c2e: FXCH
// 00443c30: FSTP double ptr [EBP + 0x4e]
// 00443c33: FILD dword ptr [EBP + 0x76]
// 00443c36: FSTP float ptr [EBP + 0x6a]
// 00443c39: FCOMP double ptr [EBP + 0x4e]
// 00443c3c: FNSTSW AX
// 00443c3e: SAHF
// 00443c3f: JA 0x00443e62
//   XREF to: 00443e62 (CONDITIONAL_JUMP)
// 00443c45: FLD float ptr [EBP + 0x72]
// 00443c48: FDIV float ptr [EBP + 0x6a]
// 00443c4b: SUB ESP,0x8
// 00443c4e: FSTP double ptr [ESP]
// 00443c51: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00443c56: MOV dword ptr [EBP + 0x46],EAX
// 00443c59: MOV dword ptr [EBP + 0x4a],EDX
// 00443c5c: FLD double ptr [EBP + 0x46]
// 00443c5f: FMUL float ptr [EBP + 0x6a]
// 00443c62: FSUBR double ptr [EBP + 0x4e]
// 00443c65: ADD ESP,0x8
// 00443c68: FSTP float ptr [EBP + 0x6e]
//   Label: LAB_00443c68
// 00443c6b: MOV EAX,dword ptr [EBP + 0x6e]
//   Label: LAB_00443c6b
// 00443c6e: MOV dword ptr [EBP + 0x72],EAX
// 00443c71: LEA EAX,[EBP + -0xe]
// 00443c74: PUSH EAX
// 00443c75: LEA EAX,[EBP + 0xa]
// 00443c78: PUSH EAX
// 00443c79: MOV EBX,dword ptr [EBP + 0x8e]
// 00443c7f: PUSH dword ptr [EBP + 0x6e]
// 00443c82: PUSH EBX
// 00443c83: MOV ESI,dword ptr [EBP + 0x66]
// 00443c86: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 00443c8b: ADD ESP,0x10
// 00443c8e: TEST ESI,ESI
// 00443c90: JZ 0x00443cca
//   XREF to: 00443cca (CONDITIONAL_JUMP)
// 00443c92: LEA EBX,[EBP + -0x42]
// 00443c95: LEA EAX,[EBP + 0xa]
// 00443c98: CMP EBX,EAX
// 00443c9a: JZ 0x00443cae
//   XREF to: 00443cae (CONDITIONAL_JUMP)
// 00443c9c: MOV EAX,dword ptr [EBP + 0xa]
// 00443c9f: MOV dword ptr [EBP + -0x42],EAX
// 00443ca2: MOV EAX,dword ptr [EBP + 0xe]
// 00443ca5: MOV dword ptr [EBP + -0x3e],EAX
// 00443ca8: MOV EAX,dword ptr [EBP + 0x12]
// 00443cab: MOV dword ptr [EBP + -0x3a],EAX
// 00443cae: LEA EBX,[EBP + -0x36]
//   Label: LAB_00443cae
// 00443cb1: LEA EAX,[EBP + -0xe]
// 00443cb4: CMP EBX,EAX
// 00443cb6: JZ 0x00443cca
//   XREF to: 00443cca (CONDITIONAL_JUMP)
// 00443cb8: MOV EAX,dword ptr [EBP + -0xe]
// 00443cbb: MOV dword ptr [EBP + -0x36],EAX
// 00443cbe: MOV EAX,dword ptr [EBP + -0xa]
// 00443cc1: MOV dword ptr [EBP + -0x32],EAX
// 00443cc4: MOV EAX,dword ptr [EBP + -0x6]
// 00443cc7: MOV dword ptr [EBP + -0x2e],EAX
// 00443cca: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00443cca
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00443ccf: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 00443cd4: LEA EAX,[EBP + -0x36]
// 00443cd7: PUSH EAX
// 00443cd8: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00443cde: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00443cdf: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 00443ce4: ADD ESP,0x8
// 00443ce7: LEA EAX,[EBP + -0x42]
// 00443cea: PUSH EAX
// 00443ceb: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00443cf0: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00443cf1: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 00443cf6: MOV EDX,dword ptr [EBP + 0x5e]
// 00443cf9: ADD ESP,0x8
// 00443cfc: TEST EDX,EDX
// 00443cfe: JZ 0x00443ea2
//   XREF to: 00443ea2 (CONDITIONAL_JUMP)
// 00443d04: PUSH 0x0
// 00443d06: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 00443d0c: PUSH 0x42c80000
// 00443d11: MOV ECX,0x1
// 00443d16: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00443d17: MOV dword ptr [0x03277d14],ECX
//   XREF to: 03277d14 (WRITE)
// 00443d1d: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 00443d22: ADD ESP,0xc
// 00443d25: LEA EAX,[EBP + -0x26]
//   Label: LAB_00443d25
// 00443d28: PUSH EAX
// 00443d29: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00443d2f: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00443d30: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00443d35: ADD ESP,0x8
// 00443d38: LEA EAX,[EBP + -0x1a]
// 00443d3b: PUSH EAX
// 00443d3c: LEA EAX,[EBP + -0x2]
// 00443d3f: PUSH EAX
// 00443d40: MOV EAX,dword ptr [EBP + 0x8e]
// 00443d46: MOV EAX,dword ptr [EAX]
// 00443d48: DEC EAX
// 00443d49: MOV EDI,dword ptr [EBP + 0x8e]
// 00443d4f: MOV dword ptr [EBP + 0x76],EAX
// 00443d52: SUB ESP,0x4
// 00443d55: FILD dword ptr [EBP + 0x76]
// 00443d58: FSTP float ptr [ESP]
// 00443d5b: PUSH EDI
// 00443d5c: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 00443d61: MOV EAX,0xfa
// 00443d66: ADD ESP,0x10
// 00443d69: XOR EDX,EDX
// 00443d6b: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00443d70: MOV dword ptr [EBP + 0x56],EDX
// 00443d73: MOV EAX,dword ptr [EBP + 0x8e]
//   Label: LAB_00443d73
// 00443d79: MOV ECX,dword ptr [EBP + 0x56]
// 00443d7c: CMP ECX,dword ptr [EAX]
// 00443d7e: JGE 0x00443edf
//   XREF to: 00443edf (CONDITIONAL_JUMP)
// 00443d84: LEA EAX,[EBP + -0x1a]
// 00443d87: PUSH EAX
// 00443d88: LEA EAX,[EBP + 0x22]
// 00443d8b: MOV dword ptr [EBP + 0x76],ECX
// 00443d8e: PUSH EAX
// 00443d8f: FILD dword ptr [EBP + 0x76]
// 00443d92: SUB ESP,0x4
// 00443d95: MOV ECX,dword ptr [EBP + 0x8e]
// 00443d9b: FSTP float ptr [ESP]
// 00443d9e: PUSH ECX
// 00443d9f: LEA EBX,[EBP + 0x2e]
// 00443da2: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 00443da7: ADD ESP,0x10
// 00443daa: LEA EAX,[EBP + -0x2]
// 00443dad: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00443db3: FLD float ptr [EAX]
// 00443db5: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443dbb: FISTP dword ptr [EBX]
// 00443dbd: FLD float ptr [EAX + 0x4]
// 00443dc0: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443dc6: FISTP dword ptr [EBX + 0x4]
// 00443dc9: FLD float ptr [EAX + 0x8]
// 00443dcc: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443dd2: FISTP dword ptr [EBX + 0x8]
// 00443dd5: LEA EAX,[EBP + 0x2e]
// 00443dd8: PUSH EAX
// 00443dd9: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00443ddb: PUSH EAX
// 00443ddc: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00443de1: LEA EBX,[EBP + 0x16]
// 00443de4: ADD ESP,0x8
// 00443de7: LEA EAX,[EBP + 0x22]
// 00443dea: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00443df0: FLD float ptr [EAX]
// 00443df2: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443df8: FISTP dword ptr [EBX]
// 00443dfa: FLD float ptr [EAX + 0x4]
// 00443dfd: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443e03: FISTP dword ptr [EBX + 0x4]
// 00443e06: FLD float ptr [EAX + 0x8]
// 00443e09: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443e0f: FISTP dword ptr [EBX + 0x8]
// 00443e12: LEA EAX,[EBP + 0x16]
// 00443e15: PUSH EAX
// 00443e16: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00443e18: ADD EAX,0x30
// 00443e1b: PUSH EAX
// 00443e1c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00443e21: ADD ESP,0x8
// 00443e24: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00443e29: SUB ESP,0x30
// 00443e2c: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00443e2e: MOV ECX,0xc
// 00443e33: MOV EDI,ESP
// 00443e35: LEA ESI,[EAX + 0x30]
// 00443e38: MOVSD.REP ES:EDI,ESI
// 00443e3a: SUB ESP,0x30
// 00443e3d: MOV ECX,0xc
// 00443e42: MOV EDI,ESP
// 00443e44: MOV ESI,EAX
// 00443e46: LEA EBX,[EBP + -0x2]
// 00443e49: MOVSD.REP ES:EDI,ESI
// 00443e4b: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00443e50: LEA EAX,[EBP + 0x22]
// 00443e53: ADD ESP,0x60
// 00443e56: CMP EBX,EAX
// 00443e58: JNZ 0x00443ec5
//   XREF to: 00443ec5 (CONDITIONAL_JUMP)
// 00443e5a: INC dword ptr [EBP + 0x56]
// 00443e5d: JMP 0x00443d73
//   XREF to: 00443d73 (UNCONDITIONAL_JUMP)
// 00443e62: FLD float ptr [EBP + 0x72]
//   Label: LAB_00443e62
// 00443e65: FCHS
// 00443e67: FDIV float ptr [EBP + 0x6a]
// 00443e6a: SUB ESP,0x8
// 00443e6d: FSTP double ptr [ESP]
// 00443e70: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00443e75: MOV dword ptr [EBP + 0x46],EAX
// 00443e78: MOV dword ptr [EBP + 0x4a],EDX
// 00443e7b: FLD double ptr [EBP + 0x46]
// 00443e7e: FMUL float ptr [EBP + 0x6a]
// 00443e81: FADD double ptr [EBP + 0x4e]
// 00443e84: ADD ESP,0x8
// 00443e87: FST float ptr [EBP + 0x6e]
// 00443e8a: FLDZ
// 00443e8c: FCOMPP
// 00443e8e: FNSTSW AX
// 00443e90: SAHF
// 00443e91: JBE 0x00443c6b
//   XREF to: 00443c6b (CONDITIONAL_JUMP)
// 00443e97: FLD float ptr [EBP + 0x6e]
// 00443e9a: FADD float ptr [EBP + 0x6a]
// 00443e9d: JMP 0x00443c68
//   XREF to: 00443c68 (UNCONDITIONAL_JUMP)
// 00443ea2: MOV EAX,dword ptr [EBP + -0x26]
//   Label: LAB_00443ea2
// 00443ea5: MOV dword ptr [EBP + 0x3a],EAX
// 00443ea8: MOV EAX,dword ptr [EBP + -0x22]
// 00443eab: MOV dword ptr [EBP + 0x3e],EAX
// 00443eae: MOV EAX,dword ptr [EBP + -0x1e]
// 00443eb1: MOV dword ptr [EBP + 0x42],EAX
// 00443eb4: LEA EAX,[EBP + 0x3a]
// 00443eb7: PUSH EAX
// 00443eb8: CALL core_course.cpp_FUN_00443760
//   XREF to: 00443760 (UNCONDITIONAL_CALL)
// 00443ebd: ADD ESP,0x4
// 00443ec0: JMP 0x00443d25
//   XREF to: 00443d25 (UNCONDITIONAL_JUMP)
// 00443ec5: MOV EAX,dword ptr [EBP + 0x22]
//   Label: LAB_00443ec5
// 00443ec8: MOV dword ptr [EBP + -0x2],EAX
// 00443ecb: MOV EAX,dword ptr [EBP + 0x26]
// 00443ece: MOV dword ptr [EBP + 0x2],EAX
// 00443ed1: MOV EAX,dword ptr [EBP + 0x2a]
// 00443ed4: MOV dword ptr [EBP + 0x6],EAX
// 00443ed7: INC dword ptr [EBP + 0x56]
// 00443eda: JMP 0x00443d73
//   XREF to: 00443d73 (UNCONDITIONAL_JUMP)
// 00443edf: MOV EBX,dword ptr [EBP + 0x66]
//   Label: LAB_00443edf
// 00443ee2: TEST EBX,EBX
// 00443ee4: JNZ 0x00443f2f
//   XREF to: 00443f2f (CONDITIONAL_JUMP)
// 00443ee6: LEA EAX,[EBP + 0xa]
// 00443ee9: PUSH EAX
// 00443eea: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00443ef0: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00443ef1: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00443ef6: ADD ESP,0x8
// 00443ef9: PUSH EBX
// 00443efa: LEA EAX,[EBP + -0xe]
// 00443efd: PUSH EAX
// 00443efe: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00443f04: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00443f05: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00443f0a: ADD ESP,0xc
// 00443f0d: PUSH -0x1
// 00443f0f: PUSH EBX
// 00443f10: PUSH EBX
// 00443f11: MOV EAX,dword ptr [EBP + 0x92]
// 00443f17: PUSH EAX
// 00443f18: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 00443f1d: ADD ESP,0x10
// 00443f20: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00443f26: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00443f27: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00443f2f: SUB ESP,0x8
//   Label: LAB_00443f2f
// 00443f32: FLD float ptr [EBP + -0xa]
// 00443f35: FSTP double ptr [ESP]
// 00443f38: SUB ESP,0x8
// 00443f3b: FLD float ptr [EBP + -0x6]
// 00443f3e: FSTP double ptr [ESP]
// 00443f41: SUB ESP,0x8
// 00443f44: FLD float ptr [EBP + -0xe]
// 00443f47: FSTP double ptr [ESP]
// 00443f4a: SUB ESP,0x8
// 00443f4d: FLD float ptr [EBP + 0x12]
// 00443f50: FSTP double ptr [ESP]
// 00443f53: SUB ESP,0x8
// 00443f56: FLD float ptr [EBP + 0xe]
// 00443f59: FSTP double ptr [ESP]
// 00443f5c: SUB ESP,0x8
// 00443f5f: FLD float ptr [EBP + 0xa]
// 00443f62: FSTP double ptr [ESP]
// 00443f65: SUB ESP,0x8
// 00443f68: FLD float ptr [EBP + 0x72]
// 00443f6b: FSTP double ptr [ESP]
// 00443f6e: PUSH 0x619402
//   XREF to: 00619402 (DATA)
// 00443f73: LEA EAX,[EBP + 0xffffff5a]
// 00443f79: PUSH EAX
// 00443f7a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00443f7f: ADD ESP,0x40
// 00443f82: PUSH 0x0
// 00443f84: PUSH 0x0
// 00443f86: LEA EAX,[EBP + 0xffffff5a]
// 00443f8c: PUSH EAX
// 00443f8d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00443f92: ADD ESP,0xc
// 00443f95: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00443f9a: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00443fa0: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 00443fa1: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 00443fa6: ADD ESP,0x4
// 00443fa9: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00443fae: PUSH 0x1
// 00443fb0: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00443fb6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00443fbb: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00443fbc: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00443fbe: FSTP float ptr [EBP + 0x5a]
// 00443fc1: CALL dword ptr [EBX + 0x4]
// 00443fc4: ADD ESP,0x8
// 00443fc7: TEST EAX,EAX
// 00443fc9: JNZ 0x004440a6
//   XREF to: 004440a6 (CONDITIONAL_JUMP)
// 00443fcf: PUSH 0x19
// 00443fd1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00443fd6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00443fd7: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00443fd9: CALL dword ptr [EBX + 0x4]
// 00443fdc: ADD ESP,0x8
// 00443fdf: TEST EAX,EAX
// 00443fe1: JZ 0x00443ff2
//   XREF to: 00443ff2 (CONDITIONAL_JUMP)
// 00443fe3: CMP dword ptr [EBP + 0x62],0x0
// 00443fe7: SETZ AL
// 00443fea: AND EAX,0xff
// 00443fef: MOV dword ptr [EBP + 0x62],EAX
// 00443ff2: PUSH 0x13
//   Label: LAB_00443ff2
// 00443ff4: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00443ff9: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00443ffa: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00443ffc: CALL dword ptr [EBX + 0x4]
// 00443fff: ADD ESP,0x8
// 00444002: TEST EAX,EAX
// 00444004: JZ 0x00444015
//   XREF to: 00444015 (CONDITIONAL_JUMP)
// 00444006: CMP dword ptr [EBP + 0x66],0x0
// 0044400a: SETZ AL
// 0044400d: AND EAX,0xff
// 00444012: MOV dword ptr [EBP + 0x66],EAX
// 00444015: PUSH 0x1f
//   Label: LAB_00444015
// 00444017: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0044401c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0044401d: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0044401f: CALL dword ptr [EBX + 0x4]
// 00444022: ADD ESP,0x8
// 00444025: TEST EAX,EAX
// 00444027: JZ 0x00444038
//   XREF to: 00444038 (CONDITIONAL_JUMP)
// 00444029: CMP dword ptr [EBP + 0x5e],0x0
// 0044402d: SETZ AL
// 00444030: AND EAX,0xff
// 00444035: MOV dword ptr [EBP + 0x5e],EAX
// 00444038: PUSH 0x34
//   Label: LAB_00444038
// 0044403a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0044403f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00444040: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00444042: CALL dword ptr [EBX + 0x4]
// 00444045: ADD ESP,0x8
// 00444048: TEST EAX,EAX
// 0044404a: JZ 0x00444054
//   XREF to: 00444054 (CONDITIONAL_JUMP)
// 0044404c: FLD1
// 0044404e: FADD float ptr [EBP + 0x72]
// 00444051: FSTP float ptr [EBP + 0x72]
// 00444054: PUSH 0x33
//   Label: LAB_00444054
// 00444056: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0044405b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0044405c: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0044405e: CALL dword ptr [EBX + 0x4]
// 00444061: ADD ESP,0x8
// 00444064: TEST EAX,EAX
// 00444066: JZ 0x00444074
//   XREF to: 00444074 (CONDITIONAL_JUMP)
// 00444068: FLD float ptr [EBP + 0x72]
// 0044406b: FADD float ptr [0x0061944b]
//   XREF to: 0061944b (READ)
// 00444071: FSTP float ptr [EBP + 0x72]
// 00444074: CMP dword ptr [EBP + 0x66],0x0
//   Label: LAB_00444074
// 00444078: JZ 0x00444098
//   XREF to: 00444098 (CONDITIONAL_JUMP)
// 0044407a: CMP dword ptr [EBP + 0x62],0x0
//   Label: LAB_0044407a
// 0044407e: JNZ 0x00443c13
//   XREF to: 00443c13 (CONDITIONAL_JUMP)
// 00444084: FLD float ptr [EBP + 0x5a]
// 00444087: FMUL double ptr [0x00619443]
//   XREF to: 00619443 (READ)
// 0044408d: FADD float ptr [EBP + 0x72]
// 00444090: FSTP float ptr [EBP + 0x72]
// 00444093: JMP 0x00443c13
//   XREF to: 00443c13 (UNCONDITIONAL_JUMP)
// 00444098: LEA EAX,[EBP + -0x42]
//   Label: LAB_00444098
// 0044409b: PUSH EAX
// 0044409c: CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 004440a1: ADD ESP,0x4
// 004440a4: JMP 0x0044407a
//   XREF to: 0044407a (UNCONDITIONAL_JUMP)
// 004440a6: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_004440a6
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004440ab: XOR ESI,ESI
// 004440ad: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (DATA)
// 004440b2: MOV dword ptr [0x03277d14],ESI
//   XREF to: 03277d14 (WRITE)
// 004440b8: MOV dword ptr [EAX + 0x15ac80],0x0
//   XREF to: 0326eef8 (WRITE)
// 004440c2: LEA ESP,[EBP + 0x7a]
// 004440c5: POP EBP
// 004440c6: POP EDI
// 004440c7: POP ESI
// 004440c8: POP EBX
// 004440c9: RET
