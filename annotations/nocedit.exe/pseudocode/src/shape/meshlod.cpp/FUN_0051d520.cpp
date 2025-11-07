// Name: shape_meshlod.cpp_FUN_0051d520
// Address: 0051d520
// Address Range: [[0051d520, 0051d986]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051d520()
// Cross-references:
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589c63 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00516ba0 (00516ba0) at 00516cc3 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ed60 (0051ed60) at 0051eda8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Press_and_hold_P_to_paus_0063823f
//   TerminatedCString s_Press_ENTER_to_resume_me_0063826f
//   TerminatedCString s_d_faces_d_original_00638296
//   TerminatedCString s_Pixel_Height_d_006382ac
//   TerminatedCString s_OK_let_go_of_ESC_006382bd
//   TerminatedCString s_Good_enough_006382d3
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 DAT_0067d390
//   CSpotView* g_CSpotViewPtr = 03f6b9e0
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   CGame g_CGameInstance
//   void* g_CKeysPtr
//   undefined4 DAT_02f31234
//   undefined4 DAT_02f31238
//   undefined4 DAT_02f3123c
//   undefined1 DAT_02f31258
//   undefined4 DAT_02f313e8
//   CSpotView g_CSpotViewInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_stairs.cpp_FUN_005b9670
//   core_stairs.cpp_FUN_005b9a20
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
//   shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
//   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_meshlod.cpp_CLodMesh_FUN_005164d0
//   shape_meshlod.cpp_CLodMesh_FUN_00516500
//   shape_meshlod.cpp_FUN_0051b2e0
//   shape_meshlod.cpp_FUN_0051e6b0
//   shape_meshlod.cpp_FUN_0051e770
//   shape_meshlod.cpp_FUN_0051e830
//   shape_meshlod.cpp_FUN_0051e990
//   shape_meshlod.cpp_FUN_0051ead0
//   shape_meshlod.cpp_FUN_0051ecd0
//   shape_meshlod.cpp_FUN_0051ed30
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4

#include "nocturne.h"

undefined4 shape_meshlod_cpp_FUN_0051d520(void)

{
  uchar uVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  CLodMesh *in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 in_stack_00000088;
  CGame *in_stack_ffffff44;
  char *text;
  char acStack_70 [4];
  undefined4 local_1c;
  float local_18;
  
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff44);
  local_1c = 0;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    core_stairs_cpp_FUN_005b9a20();
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)&local_18);
    if (in_stack_00000008 == 0) {
      text = "Press and hold P to pause and spin, ESC to bail";
    }
    else {
      text = "Press ENTER to resume mesh degredation";
    }
    engine_2d_c_drawText_FUN_00401fd0(text,0,g_WindowHeight + -0x16);
    shape_meshlod_cpp_FUN_0051e6b0();
    if (in_stack_0000000c == 0) {
LAB_0051d5ec:
      shape_meshlod_cpp_FUN_0051e990();
    }
    else if (in_stack_0000000c < 2) {
      shape_meshlod_cpp_FUN_0051ead0();
    }
    else {
      if (in_stack_0000000c != 2) goto LAB_0051d5ec;
      shape_meshlod_cpp_FUN_0051ead0();
    }
    if (DAT_02f3123c != 0) {
      shape_meshlod_cpp_FUN_0051e830();
    }
    if (DAT_02f31234 != 0) {
      shape_meshlod_cpp_FUN_0051ed30();
    }
    if (-1 < DAT_0067d390) {
      shape_meshlod_cpp_FUN_0051ecd0();
    }
    if (DAT_02f313e8 != (CQuaternion4f *)0x0) {
      uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31(extraout_var,uVar1);
      shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
                (g_CEditorToolsPtr,DAT_02f313e8,4);
    }
    if ((DAT_02f31238 != 0) && (in_stack_00000004->next_lod != (CLodMesh *)0x0)) {
      shape_meshlod_cpp_FUN_0051e6b0();
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0xff,0,0xff);
      shape_meshlod_cpp_FUN_0051e770();
    }
    iVar2 = shape_meshlod_cpp_CLodMesh_FUN_005164d0(in_stack_00000004);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff6c,"%d faces, %d original",iVar2);
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff70,0,0);
    engine_2d_c_drawText_FUN_00401fd0(&DAT_02f31258,0,0xb);
    shape_meshlod_cpp_CLodMesh_FUN_00516500(in_stack_00000004);
    puVar3 = (undefined4 *)shape_meshlod_cpp_FUN_0051b2e0();
    if (&local_1c != puVar3) {
      local_1c = *puVar3;
      local_18 = (float)puVar3[1];
    }
    shape_meshlod_cpp_FUN_0051b2e0();
    fVar4 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
                      ((CBoundingBox3D *)&local_18);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,fVar4));
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff8c,"Pixel Height: %d");
    engine_2d_c_drawText_FUN_00401fd0(acStack_70,0,0x16);
    acStack_70[0] = -0x4b;
    acStack_70[1] = -0x29;
    acStack_70[2] = 'Q';
    acStack_70[3] = '\0';
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    acStack_70[0] = -0x3f;
    acStack_70[1] = -0x29;
    acStack_70[2] = 'Q';
    acStack_70[3] = '\0';
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    acStack_70[0] = -0x2f;
    acStack_70[1] = -0x29;
    acStack_70[2] = 'Q';
    acStack_70[3] = '\0';
    core_stairs_cpp_FUN_005b9670();
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar2 != 0) {
      shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940
                (g_CEditorToolsPtr,(char *)0x0);
      do {
        shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
                  (g_CEditorToolsPtr,"OK - let go of ESC...");
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
      } while (iVar2 != 0);
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      iVar2 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"Good enough?");
      if (iVar2 != 0) {
LAB_0051d915:
        engine_2d_c_clearInputAndWait_FUN_00403260();
        DAT_0067d390 = -1;
        DAT_02f31258 = 0;
        return in_stack_00000088;
      }
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x19);
    if (iVar2 == 0) {
      if (in_stack_00000008 == 0) goto LAB_0051d915;
    }
    else {
      in_stack_00000008 = 1;
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2f);
    if (iVar2 != 0) {
      DAT_02f31234 = (uint)(DAT_02f31234 == 0);
    }
    local_18 = 7.516394e-39;
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x18);
    if (iVar2 != 0) {
      DAT_02f31238 = (uint)(DAT_02f31238 == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x12);
    if (iVar2 != 0) {
      DAT_02f3123c = (uint)(DAT_02f3123c == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x39);
    if ((iVar2 != 0) || (iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c), iVar2 != 0))
    goto LAB_0051d915;
  } while( true );
}


// Assembly code:
// 0051d520: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051d520
// 0051d521: PUSH ESI
// 0051d522: PUSH EDI
// 0051d523: PUSH EBP
// 0051d524: SUB ESP,0xac
// 0051d52a: MOV ESI,dword ptr [ESP + 0xc0]
//   XREF to: Stack[0x4] (READ)
// 0051d531: MOV EDI,dword ptr [ESP + 0xc4]
//   XREF to: Stack[0x8] (READ)
// 0051d538: MOV EBP,dword ptr [ESP + 0xc8]
//   XREF to: Stack[0xc] (READ)
// 0051d53f: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0051d545: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 0051d546: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0051d54b: ADD ESP,0x4
// 0051d54e: XOR ECX,ECX
// 0051d550: MOV EDX,0x1
// 0051d555: MOV dword ptr [ESP + 0x94],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0051d55c: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0051d563: MOV dword ptr [ESP + 0x9c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0051d56a: MOV dword ptr [ESP + 0xa4],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0051d571: MOV EAX,[0x00679398]
//   Label: LAB_0051d571
//   XREF to: 00679398 (READ)
// 0051d576: PUSH 0xfc
// 0051d57b: DEC EAX
// 0051d57c: PUSH EAX
// 0051d57d: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0051d582: DEC EAX
// 0051d583: PUSH EAX
// 0051d584: PUSH 0x0
// 0051d586: PUSH 0x0
// 0051d588: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0051d58d: ADD ESP,0x14
// 0051d590: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0051d595: MOV ECX,dword ptr [0x0068416c]
//   XREF to: 03f6b9e0 (PARAM)
//   XREF to: 0068416c (READ)
// 0051d59b: PUSH ECX
//   XREF to: 03f6b9e0 (DATA)
// 0051d59c: CALL core_stairs.cpp_FUN_005b9a20
//   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
// 0051d5a1: ADD ESP,0x4
// 0051d5a4: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x28] (DATA)
// 0051d5ab: PUSH EAX
// 0051d5ac: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0051d5b2: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0051d5b3: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0051d5b8: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0051d5bd: ADD ESP,0x8
// 0051d5c0: SUB EAX,0x16
// 0051d5c3: TEST EDI,EDI
// 0051d5c5: JNZ 0x0051d93f
//   XREF to: 0051d93f (CONDITIONAL_JUMP)
// 0051d5cb: PUSH EAX
// 0051d5cc: PUSH EDI
// 0051d5cd: PUSH 0x63823f
//   XREF to: 0063823f (DATA)
// 0051d5d2: CALL engine_2d.c_drawText_FUN_00401fd0
//   Label: LAB_0051d5d2
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051d5d7: ADD ESP,0xc
// 0051d5da: PUSH ESI
// 0051d5db: CALL shape_meshlod.cpp_FUN_0051e6b0
//   XREF to: 0051e6b0 (UNCONDITIONAL_CALL)
// 0051d5e0: ADD ESP,0x4
// 0051d5e3: CMP EBP,0x1
// 0051d5e6: JNC 0x0051d966
//   XREF to: 0051d966 (CONDITIONAL_JUMP)
// 0051d5ec: PUSH 0x0
//   Label: LAB_0051d5ec
// 0051d5ee: PUSH ESI
// 0051d5ef: CALL shape_meshlod.cpp_FUN_0051e990
//   XREF to: 0051e990 (UNCONDITIONAL_CALL)
// 0051d5f4: ADD ESP,0x8
//   Label: LAB_0051d5f4
// 0051d5f7: CMP dword ptr [0x02f3123c],0x0
//   XREF to: 02f3123c (READ)
// 0051d5fe: JZ 0x0051d60b
//   XREF to: 0051d60b (CONDITIONAL_JUMP)
// 0051d600: PUSH 0x1
// 0051d602: PUSH ESI
// 0051d603: CALL shape_meshlod.cpp_FUN_0051e830
//   XREF to: 0051e830 (UNCONDITIONAL_CALL)
// 0051d608: ADD ESP,0x8
// 0051d60b: CMP dword ptr [0x02f31234],0x0
//   Label: LAB_0051d60b
//   XREF to: 02f31234 (READ)
// 0051d612: JZ 0x0051d61d
//   XREF to: 0051d61d (CONDITIONAL_JUMP)
// 0051d614: PUSH ESI
// 0051d615: CALL shape_meshlod.cpp_FUN_0051ed30
//   XREF to: 0051ed30 (UNCONDITIONAL_CALL)
// 0051d61a: ADD ESP,0x4
// 0051d61d: MOV ECX,dword ptr [0x0067d390]
//   Label: LAB_0051d61d
//   XREF to: 0067d390 (READ)
// 0051d623: TEST ECX,ECX
// 0051d625: JL 0x0051d631
//   XREF to: 0051d631 (CONDITIONAL_JUMP)
// 0051d627: PUSH ECX
// 0051d628: PUSH ESI
// 0051d629: CALL shape_meshlod.cpp_FUN_0051ecd0
//   XREF to: 0051ecd0 (UNCONDITIONAL_CALL)
// 0051d62e: ADD ESP,0x8
// 0051d631: CMP dword ptr [0x02f313e8],0x0
//   Label: LAB_0051d631
//   XREF to: 02f313e8 (READ)
// 0051d638: JZ 0x0051d666
//   XREF to: 0051d666 (CONDITIONAL_JUMP)
// 0051d63a: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0051d640: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0051d641: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 0051d646: ADD ESP,0x4
// 0051d649: PUSH 0x4
// 0051d64b: MOV ECX,dword ptr [0x02f313e8]
//   XREF to: 02f313e8 (READ)
// 0051d651: PUSH ECX
// 0051d652: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0051d658: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0051d659: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0051d65e: CALL shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
//   XREF to: 004a28a0 (UNCONDITIONAL_CALL)
// 0051d663: ADD ESP,0xc
// 0051d666: CMP dword ptr [0x02f31238],0x0
//   Label: LAB_0051d666
//   XREF to: 02f31238 (READ)
// 0051d66d: JZ 0x0051d6a6
//   XREF to: 0051d6a6 (CONDITIONAL_JUMP)
// 0051d66f: MOV EDX,dword ptr [ESI + 0x34]
// 0051d672: TEST EDX,EDX
// 0051d674: JZ 0x0051d6a6
//   XREF to: 0051d6a6 (CONDITIONAL_JUMP)
// 0051d676: PUSH EDX
// 0051d677: CALL shape_meshlod.cpp_FUN_0051e6b0
//   XREF to: 0051e6b0 (UNCONDITIONAL_CALL)
// 0051d67c: ADD ESP,0x4
// 0051d67f: PUSH 0xff
// 0051d684: PUSH 0x0
// 0051d686: PUSH 0xff
// 0051d68b: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0051d691: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0051d692: CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   XREF to: 0048c970 (UNCONDITIONAL_CALL)
// 0051d697: ADD ESP,0x10
// 0051d69a: MOV EAX,dword ptr [ESI + 0x34]
// 0051d69d: PUSH EAX
// 0051d69e: CALL shape_meshlod.cpp_FUN_0051e770
//   XREF to: 0051e770 (UNCONDITIONAL_CALL)
// 0051d6a3: ADD ESP,0x4
// 0051d6a6: MOV EDX,dword ptr [ESI + 0x8]
//   Label: LAB_0051d6a6
// 0051d6a9: PUSH EDX
// 0051d6aa: PUSH ESI
// 0051d6ab: CALL shape_meshlod.cpp_CLodMesh_FUN_005164d0
//   XREF to: 005164d0 (UNCONDITIONAL_CALL)
// 0051d6b0: ADD ESP,0x4
// 0051d6b3: PUSH EAX
// 0051d6b4: PUSH 0x638296
//   XREF to: 00638296 (DATA)
// 0051d6b9: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xbc] (DATA)
// 0051d6bd: PUSH EAX
// 0051d6be: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051d6c3: ADD ESP,0x10
// 0051d6c6: PUSH 0x0
// 0051d6c8: PUSH 0x0
// 0051d6ca: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xbc] (DATA)
// 0051d6ce: PUSH EAX
// 0051d6cf: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051d6d4: ADD ESP,0xc
// 0051d6d7: PUSH 0xb
// 0051d6d9: PUSH 0x0
// 0051d6db: PUSH 0x2f31258
//   XREF to: 02f31258 (DATA)
// 0051d6e0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051d6e5: ADD ESP,0xc
// 0051d6e8: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x58] (DATA)
// 0051d6ec: PUSH EAX
// 0051d6ed: PUSH ESI
// 0051d6ee: CALL shape_meshlod.cpp_CLodMesh_FUN_00516500
//   XREF to: 00516500 (UNCONDITIONAL_CALL)
// 0051d6f3: ADD ESP,0x8
// 0051d6f6: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x58] (DATA)
// 0051d6fa: PUSH EAX
// 0051d6fb: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x40] (DATA)
// 0051d702: PUSH EAX
// 0051d703: PUSH ESI
// 0051d704: CALL shape_meshlod.cpp_FUN_0051b2e0
//   XREF to: 0051b2e0 (UNCONDITIONAL_CALL)
// 0051d709: MOV EDX,EAX
// 0051d70b: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x58] (DATA)
// 0051d70f: ADD ESP,0xc
// 0051d712: CMP EAX,EDX
// 0051d714: JZ 0x0051d72a
//   XREF to: 0051d72a (CONDITIONAL_JUMP)
// 0051d716: MOV EAX,dword ptr [EDX]
// 0051d718: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0051d71c: MOV EAX,dword ptr [EDX + 0x4]
// 0051d71f: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0051d723: MOV EAX,dword ptr [EDX + 0x8]
// 0051d726: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0051d72a: LEA EAX,[ESP + 0x70]
//   Label: LAB_0051d72a
//   XREF to: Stack[-0x4c] (DATA)
// 0051d72e: PUSH EAX
// 0051d72f: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x34] (DATA)
// 0051d736: PUSH EAX
// 0051d737: PUSH ESI
// 0051d738: CALL shape_meshlod.cpp_FUN_0051b2e0
//   XREF to: 0051b2e0 (UNCONDITIONAL_CALL)
// 0051d73d: MOV EDX,EAX
// 0051d73f: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x4c] (DATA)
// 0051d743: ADD ESP,0xc
// 0051d746: CMP EAX,EDX
// 0051d748: JZ 0x0051d75e
//   XREF to: 0051d75e (CONDITIONAL_JUMP)
// 0051d74a: MOV EAX,dword ptr [EDX]
// 0051d74c: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0051d750: MOV EAX,dword ptr [EDX + 0x4]
// 0051d753: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0051d757: MOV EAX,dword ptr [EDX + 0x8]
// 0051d75a: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0051d75e: LEA EAX,[ESP + 0x64]
//   Label: LAB_0051d75e
//   XREF to: Stack[-0x58] (DATA)
// 0051d762: PUSH EAX
// 0051d763: CALL core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
//   XREF to: 00420840 (UNCONDITIONAL_CALL)
// 0051d768: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051d76f: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 0051d776: ADD ESP,0x4
// 0051d779: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0051d77e: FISTP dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x1c] (WRITE)
// 0051d785: MOV ECX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x1c] (READ)
// 0051d78c: PUSH ECX
// 0051d78d: PUSH 0x6382ac
//   XREF to: 006382ac (DATA)
// 0051d792: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xbc] (DATA)
// 0051d796: PUSH EAX
// 0051d797: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051d79c: ADD ESP,0xc
// 0051d79f: PUSH 0x16
// 0051d7a1: PUSH 0x0
// 0051d7a3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xbc] (DATA)
// 0051d7a7: PUSH EAX
// 0051d7a8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051d7ad: ADD ESP,0xc
// 0051d7b0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0051d7b5: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0051d7bb: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 0051d7bc: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0051d7c1: ADD ESP,0x4
// 0051d7c4: PUSH 0x1f
// 0051d7c6: MOV EAX,[0x0068416c]
//   XREF to: 03f6b9e0 (PARAM)
//   XREF to: 0068416c (READ)
// 0051d7cb: PUSH EAX
//   XREF to: 03f6b9e0 (DATA)
// 0051d7cc: CALL core_stairs.cpp_FUN_005b9670
//   XREF to: 005b9670 (UNCONDITIONAL_CALL)
// 0051d7d1: ADD ESP,0x8
// 0051d7d4: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051d7d9: PUSH 0x1
// 0051d7db: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051d7dd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051d7de: CALL dword ptr [EDX + 0x4]
// 0051d7e1: ADD ESP,0x8
// 0051d7e4: TEST EAX,EAX
// 0051d7e6: JZ 0x0051d854
//   XREF to: 0051d854 (CONDITIONAL_JUMP)
// 0051d7e8: PUSH 0x0
// 0051d7ea: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0051d7f0: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0051d7f1: CALL shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
//   XREF to: 0049e940 (UNCONDITIONAL_CALL)
// 0051d7f6: ADD ESP,0x8
// 0051d7f9: PUSH 0x6382bd
//   Label: LAB_0051d7f9
//   XREF to: 006382bd (DATA)
// 0051d7fe: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0051d804: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0051d805: CALL shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
//   XREF to: 0049e870 (UNCONDITIONAL_CALL)
// 0051d80a: ADD ESP,0x8
// 0051d80d: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0051d812: PUSH 0x1
// 0051d814: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051d819: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051d81a: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051d81c: CALL dword ptr [EDX]
// 0051d81e: ADD ESP,0x8
// 0051d821: TEST EAX,EAX
// 0051d823: JNZ 0x0051d7f9
//   XREF to: 0051d7f9 (CONDITIONAL_JUMP)
// 0051d825: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0051d82b: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0051d82c: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0051d831: ADD ESP,0x4
// 0051d834: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0051d839: PUSH 0x6382d3
//   XREF to: 006382d3 (DATA)
// 0051d83e: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0051d843: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0051d844: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 0051d849: ADD ESP,0x8
// 0051d84c: TEST EAX,EAX
// 0051d84e: JNZ 0x0051d972
//   XREF to: 0051d972 (CONDITIONAL_JUMP)
// 0051d854: PUSH 0x19
//   Label: LAB_0051d854
// 0051d856: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051d85b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051d85c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051d85e: CALL dword ptr [EDX + 0x4]
// 0051d861: ADD ESP,0x8
// 0051d864: TEST EAX,EAX
// 0051d866: JZ 0x0051d97d
//   XREF to: 0051d97d (CONDITIONAL_JUMP)
// 0051d86c: MOV EDI,0x1
// 0051d871: PUSH 0x2f
//   Label: LAB_0051d871
// 0051d873: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051d878: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051d879: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051d87b: CALL dword ptr [EDX + 0x4]
// 0051d87e: ADD ESP,0x8
// 0051d881: TEST EAX,EAX
// 0051d883: JZ 0x0051d899
//   XREF to: 0051d899 (CONDITIONAL_JUMP)
// 0051d885: CMP dword ptr [0x02f31234],0x0
//   XREF to: 02f31234 (READ)
// 0051d88c: SETZ AL
// 0051d88f: AND EAX,0xff
// 0051d894: MOV [0x02f31234],EAX
//   XREF to: 02f31234 (WRITE)
// 0051d899: PUSH 0x18
//   Label: LAB_0051d899
// 0051d89b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051d8a0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051d8a1: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051d8a3: CALL dword ptr [EDX + 0x4]
// 0051d8a6: ADD ESP,0x8
// 0051d8a9: TEST EAX,EAX
// 0051d8ab: JZ 0x0051d8c1
//   XREF to: 0051d8c1 (CONDITIONAL_JUMP)
// 0051d8ad: CMP dword ptr [0x02f31238],0x0
//   XREF to: 02f31238 (READ)
// 0051d8b4: SETZ AL
// 0051d8b7: AND EAX,0xff
// 0051d8bc: MOV [0x02f31238],EAX
//   XREF to: 02f31238 (WRITE)
// 0051d8c1: PUSH 0x12
//   Label: LAB_0051d8c1
// 0051d8c3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051d8c8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051d8c9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051d8cb: CALL dword ptr [EDX + 0x4]
// 0051d8ce: ADD ESP,0x8
// 0051d8d1: TEST EAX,EAX
// 0051d8d3: JZ 0x0051d8e9
//   XREF to: 0051d8e9 (CONDITIONAL_JUMP)
// 0051d8d5: CMP dword ptr [0x02f3123c],0x0
//   XREF to: 02f3123c (READ)
// 0051d8dc: SETZ AL
// 0051d8df: AND EAX,0xff
// 0051d8e4: MOV [0x02f3123c],EAX
//   XREF to: 02f3123c (WRITE)
// 0051d8e9: PUSH 0x39
//   Label: LAB_0051d8e9
// 0051d8eb: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051d8f0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051d8f1: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051d8f3: CALL dword ptr [EDX + 0x4]
// 0051d8f6: ADD ESP,0x8
// 0051d8f9: TEST EAX,EAX
// 0051d8fb: JNZ 0x0051d915
//   XREF to: 0051d915 (CONDITIONAL_JUMP)
// 0051d8fd: PUSH 0x1c
// 0051d8ff: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051d904: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051d905: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051d907: CALL dword ptr [EDX + 0x4]
// 0051d90a: ADD ESP,0x8
// 0051d90d: TEST EAX,EAX
// 0051d90f: JZ 0x0051d571
//   XREF to: 0051d571 (CONDITIONAL_JUMP)
// 0051d915: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0051d915
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0051d91a: MOV ECX,0xffffffff
// 0051d91f: XOR AH,AH
// 0051d921: MOV dword ptr [0x0067d390],ECX
//   XREF to: 0067d390 (WRITE)
// 0051d927: MOV byte ptr [0x02f31258],AH
//   XREF to: 02f31258 (WRITE)
// 0051d92d: MOV EAX,dword ptr [ESP + 0xa4]
// 0051d934: ADD ESP,0xac
// 0051d93a: POP EBP
// 0051d93b: POP EDI
// 0051d93c: POP ESI
// 0051d93d: POP EBX
// 0051d93e: RET
// 0051d93f: PUSH EAX
//   Label: LAB_0051d93f
// 0051d940: PUSH 0x0
// 0051d942: PUSH 0x63826f
//   XREF to: 0063826f (DATA)
// 0051d947: JMP 0x0051d5d2
//   XREF to: 0051d5d2 (UNCONDITIONAL_JUMP)
// 0051d94c: PUSH 0x0
//   Label: LAB_0051d94c
// 0051d94e: PUSH ESI
// 0051d94f: CALL shape_meshlod.cpp_FUN_0051ead0
//   XREF to: 0051ead0 (UNCONDITIONAL_CALL)
// 0051d954: JMP 0x0051d5f4
//   XREF to: 0051d5f4 (UNCONDITIONAL_JUMP)
// 0051d959: PUSH 0x1
//   Label: LAB_0051d959
// 0051d95b: PUSH ESI
// 0051d95c: CALL shape_meshlod.cpp_FUN_0051ead0
//   XREF to: 0051ead0 (UNCONDITIONAL_CALL)
// 0051d961: JMP 0x0051d5f4
//   XREF to: 0051d5f4 (UNCONDITIONAL_JUMP)
// 0051d966: JBE 0x0051d94c
//   Label: LAB_0051d966
//   XREF to: 0051d94c (CONDITIONAL_JUMP)
// 0051d968: CMP EBP,0x2
// 0051d96b: JZ 0x0051d959
//   XREF to: 0051d959 (CONDITIONAL_JUMP)
// 0051d96d: JMP 0x0051d5ec
//   XREF to: 0051d5ec (UNCONDITIONAL_JUMP)
// 0051d972: XOR EDX,EDX
//   Label: LAB_0051d972
// 0051d974: MOV dword ptr [ESP + 0xa4],EDX
// 0051d97b: JMP 0x0051d915
//   XREF to: 0051d915 (UNCONDITIONAL_JUMP)
// 0051d97d: TEST EDI,EDI
//   Label: LAB_0051d97d
// 0051d97f: JNZ 0x0051d871
//   XREF to: 0051d871 (CONDITIONAL_JUMP)
// 0051d985: JMP 0x0051d915
//   XREF to: 0051d915 (UNCONDITIONAL_JUMP)
