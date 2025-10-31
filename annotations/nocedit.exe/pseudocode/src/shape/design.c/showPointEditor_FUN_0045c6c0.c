// Name: shape_design.c_showPointEditor_FUN_0045c6c0
// Address: 0045c6c0
// Address Range: [[0045c6c0, 0045c841] [0045c844, 0045ca46] [0045ca49, 0045ca9e]]
// Convention: __cdecl
// Signature: void shape_design.c_showPointEditor_FUN_0045c6c0(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f67d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Insert_at_end_0061b349
//   TerminatedCString s_Move_point_d_0061b357
//   TerminatedCString s_from_f_f_f_0061b367
//   TerminatedCString s_c_0061b375
//   TerminatedCString s_c_0061b378
//   TerminatedCString s_c_0061b37b
//   TerminatedCString s_d_d_d_0061b37e
//   TerminatedCString s_point_hlp_0061b387
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   undefined4 g_PolygonScreenCache[19999].view_mode
//   int g_ZoomLevel
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PointEditorMode
//   int g_SelectedPointIndex
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   int g_ActiveRenderColor
//   undefined4 CHAR_ARRAY_02d03e99
//   undefined4 CHAR_ARRAY_02d03ea4
//   undefined4 CHAR_ARRAY_02d03ea5
//   undefined4 CHAR_ARRAY_02d03eaf
//   undefined4 CHAR_ARRAY_02d03eb8
//   undefined4 CHAR_ARRAY_02d03ebb
//   undefined4 CHAR_ARRAY_02d03eca
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_design.c_doNothing_FUN_0045c4f0
//   shape_design.c_doNothing_FUN_0045c510
//   shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0
//   shape_design.c_handleEditorHotkeys_FUN_0045b990
//   shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0
//   shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0
//   shape_design.c_selectVertexToDelete_FUN_0045c5b0
//   shape_design.c_selectVertexToMove_FUN_0045c530
//   shape_design.c_setupViewMatrix_FUN_0045ba60
//   shape_design.c_showHelpFile_FUN_00457f00
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
//   wincore_winrun.cpp_doNothing_FUN_005f2f80
//   wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045c93b) */

void __cdecl shape_design_c_showPointEditor_FUN_0045c6c0(void)

{
  BADSPACEBASE *in_ESP;
  
  g_ZoomLevel = 0x10000;
  wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0();
  g_PointEditorMode = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_design_c_setupViewMatrix_FUN_0045ba60();
    wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    if (g_KeyboardState[0x17] != '\0') {
      g_KeyboardState[0x17] = '\0';
      g_PolygonScreenCache[19999].view_mode = g_PolygonScreenCache[19999].view_mode + 1;
      if (2 < g_PolygonScreenCache[19999].view_mode) {
        g_PolygonScreenCache[19999].view_mode = 0;
      }
    }
    if (g_KeyboardState[0xc] != '\0') {
      g_KeyboardState[0xc] = '\0';
      g_ZoomLevel = g_ZoomLevel + 0x400;
    }
    if (g_KeyboardState[0xd] != '\0') {
      g_KeyboardState[0xd] = '\0';
      g_ZoomLevel = g_ZoomLevel + -0x400;
      if (g_ZoomLevel < 0x400) {
        g_ZoomLevel = 0x400;
      }
    }
    if (g_PointEditorMode == 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"Insert at end");
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,0,0xb);
    }
    else if (g_PointEditorMode == 1) {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"Move point : %d");
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,0,0xb);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xffffff7c,"from %f,%f,%f",
                 (double)g_LoadedVertices[g_SelectedPointIndex].vertex.x);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,0,0x16);
    }
    if (g_KeyboardState[0x20] != '\0') {
      g_KeyboardState[0x20] = '\0';
      shape_design_c_selectVertexToDelete_FUN_0045c5b0();
    }
    if (g_KeyboardState[0x32] != '\0') {
      g_KeyboardState[0x32] = '\0';
      shape_design_c_selectVertexToMove_FUN_0045c530();
    }
    shape_design_c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0();
    g_ActiveRenderColor = 0x10;
    engine_2d_c_drawLine_FUN_004011b0(g_WindowWidth / 2,0,g_WindowWidth / 2,g_WindowHeight + -1);
    engine_2d_c_drawLine_FUN_004011b0(0,g_WindowHeight / 2,g_WindowWidth + -1,g_WindowHeight / 2);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"%c");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,g_WindowWidth / 2 + 2,0);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"%c");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,g_WindowWidth + -7,g_WindowHeight / 2 + -0xb)
    ;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"%c");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,0,0);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"%d,%d,%d");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,0,g_WindowHeight + -0xb);
    if (g_PointEditorMode == 0) {
      shape_design_c_doNothing_FUN_0045c4f0();
    }
    else if (g_PointEditorMode == 1) {
      shape_design_c_doNothing_FUN_0045c510();
    }
    shape_design_c_processVerticesAndRenderPolygons_FUN_0045d5d0();
    shape_design_c_renderVertexPointsWithLabels_FUN_0045bff0();
    shape_design_c_handleEditorHotkeys_FUN_0045b990();
    if (g_KeyboardState[0x23] != '\0') {
      g_KeyboardState[0x23] = '\0';
      shape_design_c_showHelpFile_FUN_00457f00("point.hlp");
    }
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (g_KeyboardState[1] == '\0');
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 0045c6c0: PUSH EBX
//   Label: shape_design.c_showPointEditor_FUN_0045c6c0
// 0045c6c1: PUSH ESI
// 0045c6c2: PUSH EDI
// 0045c6c3: PUSH EBP
// 0045c6c4: MOV EBP,ESP
// 0045c6c6: SUB ESP,0x80
// 0045c6cc: MOV dword ptr [0x01626344],0x10000
//   XREF to: 01626344 (WRITE)
// 0045c6d6: CALL wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
//   XREF to: 005f30c0 (UNCONDITIONAL_CALL)
// 0045c6db: MOV dword ptr [0x01e528b0],0x0
//   XREF to: 01e528b0 (WRITE)
// 0045c6e5: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045c6ea: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045c6ef: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0045c6ef
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045c6f4: CALL shape_design.c_setupViewMatrix_FUN_0045ba60
//   XREF to: 0045ba60 (UNCONDITIONAL_CALL)
// 0045c6f9: CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
// 0045c6fe: CMP byte ptr [0x02d03eaf],0x0
//   XREF to: 02d03eaf (READ)
// 0045c705: JZ 0x0045c727
//   XREF to: 0045c727 (CONDITIONAL_JUMP)
// 0045c707: MOV byte ptr [0x02d03eaf],0x0
//   XREF to: 02d03eaf (WRITE)
// 0045c70e: INC dword ptr [0x01626340]
//   XREF to: 01626340 (READ_WRITE)
// 0045c714: CMP dword ptr [0x01626340],0x2
//   XREF to: 01626340 (READ)
// 0045c71b: JLE 0x0045c727
//   XREF to: 0045c727 (CONDITIONAL_JUMP)
// 0045c71d: MOV dword ptr [0x01626340],0x0
//   XREF to: 01626340 (WRITE)
// 0045c727: CMP byte ptr [0x02d03ea4],0x0
//   Label: LAB_0045c727
//   XREF to: 02d03ea4 (READ)
// 0045c72e: JZ 0x0045c741
//   XREF to: 0045c741 (CONDITIONAL_JUMP)
// 0045c730: MOV byte ptr [0x02d03ea4],0x0
//   XREF to: 02d03ea4 (WRITE)
// 0045c737: ADD dword ptr [0x01626344],0x400
//   XREF to: 01626344 (READ_WRITE)
// 0045c741: CMP byte ptr [0x02d03ea5],0x0
//   Label: LAB_0045c741
//   XREF to: 02d03ea5 (READ)
// 0045c748: JZ 0x0045c771
//   XREF to: 0045c771 (CONDITIONAL_JUMP)
// 0045c74a: MOV byte ptr [0x02d03ea5],0x0
//   XREF to: 02d03ea5 (WRITE)
// 0045c751: SUB dword ptr [0x01626344],0x400
//   XREF to: 01626344 (READ_WRITE)
// 0045c75b: CMP dword ptr [0x01626344],0x400
//   XREF to: 01626344 (READ)
// 0045c765: JGE 0x0045c771
//   XREF to: 0045c771 (CONDITIONAL_JUMP)
// 0045c767: MOV dword ptr [0x01626344],0x400
//   XREF to: 01626344 (WRITE)
// 0045c771: MOV EAX,[0x01e528b0]
//   Label: LAB_0045c771
//   XREF to: 01e528b0 (READ)
// 0045c776: MOV dword ptr [EBP + -0x78],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0045c779: JMP 0x0045c82c
//   XREF to: 0045c82c (UNCONDITIONAL_JUMP)
// 0045c77e: MOV EAX,0x61b349
//   Label: LAB_0045c77e
//   XREF to: 0061b349 (DATA)
// 0045c783: PUSH EAX
//   XREF to: 0061b349 (DATA)
// 0045c784: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c787: PUSH EAX
// 0045c788: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045c78d: ADD ESP,0x8
// 0045c790: PUSH 0xb
// 0045c792: PUSH 0x0
// 0045c794: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c797: PUSH EAX
// 0045c798: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045c79d: ADD ESP,0xc
// 0045c7a0: JMP 0x0045c844
//   XREF to: 0045c844 (UNCONDITIONAL_JUMP)
// 0045c7a5: PUSH dword ptr [0x01e528b4]
//   Label: LAB_0045c7a5
//   XREF to: 01e528b4 (READ)
// 0045c7ab: MOV EAX,0x61b357
//   XREF to: 0061b357 (DATA)
// 0045c7b0: PUSH EAX
//   XREF to: 0061b357 (DATA)
// 0045c7b1: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c7b4: PUSH EAX
// 0045c7b5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045c7ba: ADD ESP,0xc
// 0045c7bd: PUSH 0xb
// 0045c7bf: PUSH 0x0
// 0045c7c1: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c7c4: PUSH EAX
// 0045c7c5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045c7ca: ADD ESP,0xc
// 0045c7cd: IMUL EAX,dword ptr [0x01e528b4],0x14
//   XREF to: 01e528b4 (READ)
// 0045c7d4: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045c7da: SUB ESP,0x8
// 0045c7dd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0045c7e0: IMUL EAX,dword ptr [0x01e528b4],0x14
//   XREF to: 01e528b4 (READ)
// 0045c7e7: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045c7ed: SUB ESP,0x8
// 0045c7f0: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0045c7f3: IMUL EAX,dword ptr [0x01e528b4],0x14
//   XREF to: 01e528b4 (READ)
// 0045c7fa: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045c800: SUB ESP,0x8
// 0045c803: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0045c806: MOV EAX,0x61b367
//   XREF to: 0061b367 (DATA)
// 0045c80b: PUSH EAX
//   XREF to: 0061b367 (DATA)
// 0045c80c: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c80f: PUSH EAX
// 0045c810: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045c815: ADD ESP,0x20
// 0045c818: PUSH 0x16
// 0045c81a: PUSH 0x0
// 0045c81c: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c81f: PUSH EAX
// 0045c820: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045c825: ADD ESP,0xc
// 0045c828: JMP 0x0045c844
//   XREF to: 0045c844 (UNCONDITIONAL_JUMP)
// 0045c82a: JMP 0x0045c844
//   Label: LAB_0045c82a
//   XREF to: 0045c844 (UNCONDITIONAL_JUMP)
// 0045c82c: CMP dword ptr [EBP + -0x78],0x0
//   Label: LAB_0045c82c
//   XREF to: Stack[-0x88] (READ)
// 0045c830: JBE 0x0045c77e
//   XREF to: 0045c77e (CONDITIONAL_JUMP)
// 0045c836: CMP dword ptr [EBP + -0x78],0x1
//   XREF to: Stack[-0x88] (READ)
// 0045c83a: JZ 0x0045c7a5
//   XREF to: 0045c7a5 (CONDITIONAL_JUMP)
// 0045c840: JMP 0x0045c82a
//   XREF to: 0045c82a (UNCONDITIONAL_JUMP)
// 0045c844: CMP byte ptr [0x02d03eb8],0x0
//   Label: LAB_0045c844
//   XREF to: 02d03eb8 (READ)
// 0045c84b: JZ 0x0045c859
//   XREF to: 0045c859 (CONDITIONAL_JUMP)
// 0045c84d: MOV byte ptr [0x02d03eb8],0x0
//   XREF to: 02d03eb8 (WRITE)
// 0045c854: CALL shape_design.c_selectVertexToDelete_FUN_0045c5b0
//   XREF to: 0045c5b0 (UNCONDITIONAL_CALL)
// 0045c859: CMP byte ptr [0x02d03eca],0x0
//   Label: LAB_0045c859
//   XREF to: 02d03eca (READ)
// 0045c860: JZ 0x0045c86e
//   XREF to: 0045c86e (CONDITIONAL_JUMP)
// 0045c862: MOV byte ptr [0x02d03eca],0x0
//   XREF to: 02d03eca (WRITE)
// 0045c869: CALL shape_design.c_selectVertexToMove_FUN_0045c530
//   XREF to: 0045c530 (UNCONDITIONAL_CALL)
// 0045c86e: CALL shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0
//   Label: LAB_0045c86e
//   XREF to: 0045bbc0 (UNCONDITIONAL_CALL)
// 0045c873: MOV dword ptr [0x02d02570],0x10
//   XREF to: 02d02570 (WRITE)
// 0045c87d: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0045c882: DEC EAX
// 0045c883: PUSH EAX
// 0045c884: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0045c889: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045c88f: SAR EDX,0x1f
// 0045c892: SUB EAX,EDX
// 0045c894: SAR EAX,0x1
// 0045c896: PUSH EAX
// 0045c897: PUSH 0x0
// 0045c899: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0045c89e: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045c8a4: SAR EDX,0x1f
// 0045c8a7: SUB EAX,EDX
// 0045c8a9: SAR EAX,0x1
// 0045c8ab: PUSH EAX
// 0045c8ac: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0045c8b1: ADD ESP,0x10
// 0045c8b4: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0045c8b9: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045c8bf: SAR EDX,0x1f
// 0045c8c2: SUB EAX,EDX
// 0045c8c4: SAR EAX,0x1
// 0045c8c6: PUSH EAX
// 0045c8c7: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0045c8cc: DEC EAX
// 0045c8cd: PUSH EAX
// 0045c8ce: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0045c8d3: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045c8d9: SAR EDX,0x1f
// 0045c8dc: SUB EAX,EDX
// 0045c8de: SAR EAX,0x1
// 0045c8e0: PUSH EAX
// 0045c8e1: PUSH 0x0
// 0045c8e3: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0045c8e8: ADD ESP,0x10
// 0045c8eb: MOV EAX,[0x01626340]
//   XREF to: 01626340 (READ)
// 0045c8f0: MOV dword ptr [EBP + -0x7c],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0045c8f3: JMP 0x0045c921
//   XREF to: 0045c921 (UNCONDITIONAL_JUMP)
// 0045c8f5: MOV byte ptr [EBP + -0x8],0x58
//   Label: LAB_0045c8f5
//   XREF to: Stack[-0x18] (WRITE)
// 0045c8f9: MOV byte ptr [EBP + -0x4],0x5a
//   XREF to: Stack[-0x14] (WRITE)
// 0045c8fd: MOV byte ptr [EBP + -0xc],0x59
//   XREF to: Stack[-0x1c] (WRITE)
// 0045c901: JMP 0x0045c93d
//   XREF to: 0045c93d (UNCONDITIONAL_JUMP)
// 0045c903: MOV byte ptr [EBP + -0x8],0x5a
//   Label: LAB_0045c903
//   XREF to: Stack[-0x18] (WRITE)
// 0045c907: MOV byte ptr [EBP + -0x4],0x59
//   XREF to: Stack[-0x14] (WRITE)
// 0045c90b: MOV byte ptr [EBP + -0xc],0x58
//   XREF to: Stack[-0x1c] (WRITE)
// 0045c90f: JMP 0x0045c93d
//   XREF to: 0045c93d (UNCONDITIONAL_JUMP)
// 0045c911: MOV byte ptr [EBP + -0x8],0x58
//   Label: LAB_0045c911
//   XREF to: Stack[-0x18] (WRITE)
// 0045c915: MOV byte ptr [EBP + -0x4],0x59
//   XREF to: Stack[-0x14] (WRITE)
// 0045c919: MOV byte ptr [EBP + -0xc],0x5a
//   XREF to: Stack[-0x1c] (WRITE)
// 0045c91d: JMP 0x0045c93d
//   XREF to: 0045c93d (UNCONDITIONAL_JUMP)
// 0045c91f: JMP 0x0045c93d
//   Label: LAB_0045c91f
//   XREF to: 0045c93d (UNCONDITIONAL_JUMP)
// 0045c921: CMP dword ptr [EBP + -0x7c],0x1
//   Label: LAB_0045c921
//   XREF to: Stack[-0x8c] (READ)
// 0045c925: JC 0x0045c935
//   XREF to: 0045c935 (CONDITIONAL_JUMP)
// 0045c927: CMP dword ptr [EBP + -0x7c],0x1
//   XREF to: Stack[-0x8c] (READ)
// 0045c92b: JBE 0x0045c903
//   XREF to: 0045c903 (CONDITIONAL_JUMP)
// 0045c92d: CMP dword ptr [EBP + -0x7c],0x2
//   XREF to: Stack[-0x8c] (READ)
// 0045c931: JZ 0x0045c911
//   XREF to: 0045c911 (CONDITIONAL_JUMP)
// 0045c933: JMP 0x0045c91f
//   XREF to: 0045c91f (UNCONDITIONAL_JUMP)
// 0045c935: CMP dword ptr [EBP + -0x7c],0x0
//   Label: LAB_0045c935
//   XREF to: Stack[-0x8c] (READ)
// 0045c939: JZ 0x0045c8f5
//   XREF to: 0045c8f5 (CONDITIONAL_JUMP)
// 0045c93b: JMP 0x0045c91f
//   XREF to: 0045c91f (UNCONDITIONAL_JUMP)
// 0045c93d: XOR EAX,EAX
//   Label: LAB_0045c93d
// 0045c93f: MOV AL,byte ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045c942: PUSH EAX
// 0045c943: MOV EAX,0x61b375
//   XREF to: 0061b375 (DATA)
// 0045c948: PUSH EAX
//   XREF to: 0061b375 (DATA)
// 0045c949: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c94c: PUSH EAX
// 0045c94d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045c952: ADD ESP,0xc
// 0045c955: PUSH 0x0
// 0045c957: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0045c95c: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045c962: SAR EDX,0x1f
// 0045c965: SUB EAX,EDX
// 0045c967: SAR EAX,0x1
// 0045c969: ADD EAX,0x2
// 0045c96c: PUSH EAX
// 0045c96d: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c970: PUSH EAX
// 0045c971: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045c976: ADD ESP,0xc
// 0045c979: XOR EAX,EAX
// 0045c97b: MOV AL,byte ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045c97e: PUSH EAX
// 0045c97f: MOV EAX,0x61b378
//   XREF to: 0061b378 (DATA)
// 0045c984: PUSH EAX
//   XREF to: 0061b378 (DATA)
// 0045c985: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c988: PUSH EAX
// 0045c989: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045c98e: ADD ESP,0xc
// 0045c991: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0045c996: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045c99c: SAR EDX,0x1f
// 0045c99f: SUB EAX,EDX
// 0045c9a1: SAR EAX,0x1
// 0045c9a3: SUB EAX,0xb
// 0045c9a6: PUSH EAX
// 0045c9a7: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0045c9ac: SUB EAX,0x7
// 0045c9af: PUSH EAX
// 0045c9b0: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c9b3: PUSH EAX
// 0045c9b4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045c9b9: ADD ESP,0xc
// 0045c9bc: XOR EAX,EAX
// 0045c9be: MOV AL,byte ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045c9c1: PUSH EAX
// 0045c9c2: MOV EAX,0x61b37b
//   XREF to: 0061b37b (DATA)
// 0045c9c7: PUSH EAX
//   XREF to: 0061b37b (DATA)
// 0045c9c8: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c9cb: PUSH EAX
// 0045c9cc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045c9d1: ADD ESP,0xc
// 0045c9d4: PUSH 0x0
// 0045c9d6: PUSH 0x0
// 0045c9d8: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c9db: PUSH EAX
// 0045c9dc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045c9e1: ADD ESP,0xc
// 0045c9e4: PUSH dword ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 0045c9ea: PUSH dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0045c9f0: PUSH dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0045c9f6: MOV EAX,0x61b37e
//   XREF to: 0061b37e (DATA)
// 0045c9fb: PUSH EAX
//   XREF to: 0061b37e (DATA)
// 0045c9fc: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045c9ff: PUSH EAX
// 0045ca00: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045ca05: ADD ESP,0x14
// 0045ca08: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0045ca0d: SUB EAX,0xb
// 0045ca10: PUSH EAX
// 0045ca11: PUSH 0x0
// 0045ca13: LEA EAX,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0045ca16: PUSH EAX
// 0045ca17: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045ca1c: ADD ESP,0xc
// 0045ca1f: MOV EAX,[0x01e528b0]
//   XREF to: 01e528b0 (READ)
// 0045ca24: MOV dword ptr [EBP + -0x80],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0045ca27: JMP 0x0045ca39
//   XREF to: 0045ca39 (UNCONDITIONAL_JUMP)
// 0045ca29: CALL shape_design.c_doNothing_FUN_0045c4f0
//   Label: LAB_0045ca29
//   XREF to: 0045c4f0 (UNCONDITIONAL_CALL)
// 0045ca2e: JMP 0x0045ca49
//   XREF to: 0045ca49 (UNCONDITIONAL_JUMP)
// 0045ca30: CALL shape_design.c_doNothing_FUN_0045c510
//   Label: LAB_0045ca30
//   XREF to: 0045c510 (UNCONDITIONAL_CALL)
// 0045ca35: JMP 0x0045ca49
//   XREF to: 0045ca49 (UNCONDITIONAL_JUMP)
// 0045ca37: JMP 0x0045ca49
//   Label: LAB_0045ca37
//   XREF to: 0045ca49 (UNCONDITIONAL_JUMP)
// 0045ca39: CMP dword ptr [EBP + -0x80],0x0
//   Label: LAB_0045ca39
//   XREF to: Stack[-0x90] (READ)
// 0045ca3d: JBE 0x0045ca29
//   XREF to: 0045ca29 (CONDITIONAL_JUMP)
// 0045ca3f: CMP dword ptr [EBP + -0x80],0x1
//   XREF to: Stack[-0x90] (READ)
// 0045ca43: JZ 0x0045ca30
//   XREF to: 0045ca30 (CONDITIONAL_JUMP)
// 0045ca45: JMP 0x0045ca37
//   XREF to: 0045ca37 (UNCONDITIONAL_JUMP)
// 0045ca49: CALL shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0
//   Label: LAB_0045ca49
//   XREF to: 0045d5d0 (UNCONDITIONAL_CALL)
// 0045ca4e: CALL shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0
//   XREF to: 0045bff0 (UNCONDITIONAL_CALL)
// 0045ca53: CALL shape_design.c_handleEditorHotkeys_FUN_0045b990
//   XREF to: 0045b990 (UNCONDITIONAL_CALL)
// 0045ca58: CMP byte ptr [0x02d03ebb],0x0
//   XREF to: 02d03ebb (READ)
// 0045ca5f: JZ 0x0045ca76
//   XREF to: 0045ca76 (CONDITIONAL_JUMP)
// 0045ca61: MOV byte ptr [0x02d03ebb],0x0
//   XREF to: 02d03ebb (WRITE)
// 0045ca68: MOV EAX,0x61b387
//   XREF to: 0061b387 (PARAM)
// 0045ca6d: PUSH EAX
//   XREF to: 0061b387 (DATA)
// 0045ca6e: CALL shape_design.c_showHelpFile_FUN_00457f00
//   XREF to: 00457f00 (UNCONDITIONAL_CALL)
// 0045ca73: ADD ESP,0x4
// 0045ca76: CALL wincore_winrun.cpp_doNothing_FUN_005f2f80
//   Label: LAB_0045ca76
//   XREF to: 005f2f80 (UNCONDITIONAL_CALL)
// 0045ca7b: CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
//   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)
// 0045ca80: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045ca85: CMP byte ptr [0x02d03e99],0x0
//   XREF to: 02d03e99 (READ)
// 0045ca8c: JNZ 0x0045ca93
//   XREF to: 0045ca93 (CONDITIONAL_JUMP)
// 0045ca8e: JMP 0x0045c6ef
//   XREF to: 0045c6ef (UNCONDITIONAL_JUMP)
// 0045ca93: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0045ca93
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045ca98: MOV ESP,EBP
// 0045ca9a: POP EBP
// 0045ca9b: POP EDI
// 0045ca9c: POP ESI
// 0045ca9d: POP EBX
// 0045ca9e: RET
