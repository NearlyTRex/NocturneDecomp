// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
// Address: 004a1380
// Address Range: [[004a1380, 004a1b23]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, bool use_clipping)
// Cross-references:
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d9df [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004dab06 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050770d [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 005072d2 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c9be [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00536a97 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e536 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053998b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583aee [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ab94 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e03b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a521e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e391 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049efe0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dd4f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623535
//   TerminatedCString s_CEditorTools_setMousePoi_0062354b
//   int g_CursorSizeHorizontal = 0x9
//   int g_CursorSizeVertical = 0x9
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_MouseCursorType
//   int g_MouseX
//   int g_MouseY
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_plotPixel_FUN_00401140
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380
          (CEditorTools *this_ptr,bool use_clipping)

{
  uchar uVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined3 in_stack_00000009;
  
  uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(this_ptr);
  g_ActiveRenderColor = CONCAT31(extraout_var,uVar1);
  if (g_MouseCursorType == 0) {
    if ((((-1 < g_MouseX) && (-1 < g_MouseY)) &&
        ((g_MouseX < g_WindowWidth && (g_MouseY < g_WindowHeight)))) &&
       ((_use_clipping == 0 ||
        ((((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) && (g_ClipTop <= g_MouseY)) &&
         (g_MouseY < g_ClipBottom)))))) {
      engine_2d_c_plotPixel_FUN_00401140(g_MouseX,g_MouseY);
    }
    for (iVar4 = 1; iVar4 <= g_CursorSizeHorizontal / 2; iVar4 = iVar4 + 1) {
      iVar2 = g_MouseX - iVar4;
      if ((((-1 < iVar2) && (-1 < g_MouseY)) &&
          ((iVar2 < g_WindowWidth && (g_MouseY < g_WindowHeight)))) &&
         ((_use_clipping == 0 ||
          (((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) &&
           ((g_ClipTop <= g_MouseY && (g_MouseY < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,g_MouseY);
      }
      iVar2 = g_MouseX + iVar4;
      if (((((-1 < iVar2) && (-1 < g_MouseY)) && (iVar2 < g_WindowWidth)) &&
          (g_MouseY < g_WindowHeight)) &&
         ((_use_clipping == 0 ||
          (((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) &&
           ((g_ClipTop <= g_MouseY && (g_MouseY < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,g_MouseY);
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_CursorSizeVertical / 2) {
      iVar2 = g_MouseY - iVar4;
      if ((((-1 < g_MouseX) && (-1 < iVar2)) &&
          ((g_MouseX < g_WindowWidth && (iVar2 < g_WindowHeight)))) &&
         ((_use_clipping == 0 ||
          ((((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) && (g_ClipTop <= iVar2)) &&
           (iVar2 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar2);
      }
      iVar2 = g_MouseY + iVar4;
      if ((((g_MouseX < 0) || (iVar2 < 0)) ||
          ((g_WindowWidth <= g_MouseX || (g_WindowHeight <= iVar2)))) ||
         ((_use_clipping != 0 &&
          (((g_MouseX < g_ClipLeft || (g_ClipRight <= g_MouseX)) ||
           ((iVar2 < g_ClipTop || (g_ClipBottom <= iVar2)))))))) {
        iVar4 = iVar4 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar2);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if ((uint)g_MouseCursorType < 2) {
    iVar5 = g_MouseY - g_CursorSizeVertical / 2;
    iVar2 = g_CursorSizeVertical + iVar5 + -1;
    iVar4 = iVar5;
    while (iVar4 = iVar4 + 1, iVar4 < iVar2) {
      if (((((-1 < g_MouseX) && (-1 < iVar4)) && (g_MouseX < g_WindowWidth)) &&
          (iVar4 < g_WindowHeight)) &&
         ((_use_clipping == 0 ||
          (((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) &&
           ((g_ClipTop <= iVar4 && (iVar4 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar4);
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_CursorSizeHorizontal / 2) {
      iVar3 = g_MouseX - iVar4;
      if ((((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < g_WindowWidth && (iVar5 < g_WindowHeight))))
         && ((_use_clipping == 0 ||
             ((((g_ClipLeft <= iVar3 && (iVar3 < g_ClipRight)) && (g_ClipTop <= iVar5)) &&
              (iVar5 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar5);
      }
      iVar3 = g_MouseX + iVar4;
      if ((((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < g_WindowWidth && (iVar5 < g_WindowHeight))))
         && ((_use_clipping == 0 ||
             (((g_ClipLeft <= iVar3 && (iVar3 < g_ClipRight)) &&
              ((g_ClipTop <= iVar5 && (iVar5 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar5);
      }
      iVar3 = g_MouseX - iVar4;
      if (((((-1 < iVar3) && (-1 < iVar2)) && (iVar3 < g_WindowWidth)) && (iVar2 < g_WindowHeight))
         && ((_use_clipping == 0 ||
             (((g_ClipLeft <= iVar3 && (iVar3 < g_ClipRight)) &&
              ((g_ClipTop <= iVar2 && (iVar2 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar2);
      }
      iVar3 = g_MouseX + iVar4;
      if ((((iVar3 < 0) || (iVar2 < 0)) || ((g_WindowWidth <= iVar3 || (g_WindowHeight <= iVar2))))
         || ((_use_clipping != 0 &&
             ((((iVar3 < g_ClipLeft || (g_ClipRight <= iVar3)) || (iVar2 < g_ClipTop)) ||
              (g_ClipBottom <= iVar2)))))) {
        iVar4 = iVar4 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar2);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (g_MouseCursorType == 2) {
    if ((((-1 < g_MouseX) && (-1 < g_MouseY)) &&
        ((g_MouseX < g_WindowWidth && (g_MouseY < g_WindowHeight)))) &&
       ((_use_clipping == 0 ||
        (((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) &&
         ((g_ClipTop <= g_MouseY && (g_MouseY < g_ClipBottom)))))))) {
      engine_2d_c_plotPixel_FUN_00401140(g_MouseX,g_MouseY);
    }
    iVar4 = 1;
    while (iVar4 <= g_CursorSizeHorizontal / 2) {
      iVar5 = g_MouseX - iVar4;
      iVar2 = g_MouseY - iVar4;
      if ((((-1 < iVar5) && (-1 < iVar2)) && (iVar5 < g_WindowWidth)) &&
         ((iVar2 < g_WindowHeight &&
          ((_use_clipping == 0 ||
           (((g_ClipLeft <= iVar5 && (iVar5 < g_ClipRight)) &&
            ((g_ClipTop <= iVar2 && (iVar2 < g_ClipBottom)))))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar2);
      }
      iVar5 = g_MouseX + iVar4;
      iVar2 = g_MouseY - iVar4;
      if ((((-1 < iVar5) && (-1 < iVar2)) && ((iVar5 < g_WindowWidth && (iVar2 < g_WindowHeight))))
         && ((_use_clipping == 0 ||
             ((((g_ClipLeft <= iVar5 && (iVar5 < g_ClipRight)) && (g_ClipTop <= iVar2)) &&
              (iVar2 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar2);
      }
      iVar2 = g_MouseX - iVar4;
      iVar5 = g_MouseY + iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < g_WindowWidth && (iVar5 < g_WindowHeight))))
         && ((_use_clipping == 0 ||
             (((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) &&
              ((g_ClipTop <= iVar5 && (iVar5 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar5);
      }
      iVar2 = g_MouseX + iVar4;
      iVar5 = g_MouseY + iVar4;
      if (((((iVar2 < 0) || (iVar5 < 0)) || (g_WindowWidth <= iVar2)) || (g_WindowHeight <= iVar5))
         || ((_use_clipping != 0 &&
             (((iVar2 < g_ClipLeft || (g_ClipRight <= iVar2)) ||
              ((iVar5 < g_ClipTop || (g_ClipBottom <= iVar5)))))))) {
        iVar4 = iVar4 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar5);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x932;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::setMousePointerType - invalid type!");
  }
  return;
}


// Assembly code:
// 004a1380: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
// 004a1381: PUSH ESI
// 004a1382: PUSH EDI
// 004a1383: PUSH EBP
// 004a1384: SUB ESP,0x10
// 004a1387: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004a138b: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004a138f: PUSH EDX
// 004a1390: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 004a1395: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a139a: MOV EAX,[0x02cf2670]
//   XREF to: 02cf2670 (READ)
// 004a139f: ADD ESP,0x4
// 004a13a2: CMP EAX,0x1
// 004a13a5: JNC 0x004a1aea
//   XREF to: 004a1aea (CONDITIONAL_JUMP)
// 004a13ab: TEST EAX,EAX
// 004a13ad: JNZ 0x004a1af9
//   XREF to: 004a1af9 (CONDITIONAL_JUMP)
// 004a13b3: MOV EDX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a13b9: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a13be: TEST EDX,EDX
// 004a13c0: JL 0x004a13d2
//   XREF to: 004a13d2 (CONDITIONAL_JUMP)
// 004a13c2: TEST EAX,EAX
// 004a13c4: JL 0x004a13d2
//   XREF to: 004a13d2 (CONDITIONAL_JUMP)
// 004a13c6: CMP EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a13cc: JL 0x004a1451
//   XREF to: 004a1451 (CONDITIONAL_JUMP)
// 004a13d2: MOV EDI,0x1
//   Label: LAB_004a13d2
// 004a13d7: MOV EAX,[0x00678a64]
//   Label: LAB_004a13d7
//   XREF to: 00678a64 (READ)
// 004a13dc: MOV EDX,EAX
// 004a13de: SAR EDX,0x1f
// 004a13e1: SUB EAX,EDX
// 004a13e3: SAR EAX,0x1
// 004a13e5: CMP EDI,EAX
// 004a13e7: JLE 0x004a14a0
//   XREF to: 004a14a0 (CONDITIONAL_JUMP)
// 004a13ed: MOV EDI,0x1
// 004a13f2: MOV EAX,[0x00678a68]
//   Label: LAB_004a13f2
//   XREF to: 00678a68 (READ)
// 004a13f7: MOV EDX,EAX
// 004a13f9: SAR EDX,0x1f
// 004a13fc: SUB EAX,EDX
// 004a13fe: SAR EAX,0x1
// 004a1400: CMP EDI,EAX
// 004a1402: JG 0x004a1b1c
//   XREF to: 004a1b1c (CONDITIONAL_JUMP)
// 004a1408: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a140d: SUB EAX,EDI
// 004a140f: MOV ESI,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a1415: MOV EDX,EAX
// 004a1417: TEST ESI,ESI
// 004a1419: JL 0x004a142b
//   XREF to: 004a142b (CONDITIONAL_JUMP)
// 004a141b: TEST EAX,EAX
// 004a141d: JL 0x004a142b
//   XREF to: 004a142b (CONDITIONAL_JUMP)
// 004a141f: CMP ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a1425: JL 0x004a155d
//   XREF to: 004a155d (CONDITIONAL_JUMP)
// 004a142b: MOV ESI,dword ptr [0x02cf6a90]
//   Label: LAB_004a142b
//   XREF to: 02cf6a90 (READ)
// 004a1431: ADD ESI,EDI
// 004a1433: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a1438: MOV EDX,ESI
// 004a143a: TEST EAX,EAX
// 004a143c: JL 0x004a144e
//   XREF to: 004a144e (CONDITIONAL_JUMP)
// 004a143e: TEST ESI,ESI
// 004a1440: JL 0x004a144e
//   XREF to: 004a144e (CONDITIONAL_JUMP)
// 004a1442: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a1448: JL 0x004a15ac
//   XREF to: 004a15ac (CONDITIONAL_JUMP)
// 004a144e: INC EDI
//   Label: LAB_004a144e
// 004a144f: JMP 0x004a13f2
//   XREF to: 004a13f2 (UNCONDITIONAL_JUMP)
// 004a1451: CMP EAX,dword ptr [0x00679398]
//   Label: LAB_004a1451
//   XREF to: 00679398 (READ)
// 004a1457: JGE 0x004a13d2
//   XREF to: 004a13d2 (CONDITIONAL_JUMP)
// 004a145d: TEST EBX,EBX
// 004a145f: JZ 0x004a1491
//   XREF to: 004a1491 (CONDITIONAL_JUMP)
// 004a1461: CMP EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a1467: JL 0x004a13d2
//   XREF to: 004a13d2 (CONDITIONAL_JUMP)
// 004a146d: CMP EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a1473: JGE 0x004a13d2
//   XREF to: 004a13d2 (CONDITIONAL_JUMP)
// 004a1479: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a147f: JL 0x004a13d2
//   XREF to: 004a13d2 (CONDITIONAL_JUMP)
// 004a1485: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a148b: JGE 0x004a13d2
//   XREF to: 004a13d2 (CONDITIONAL_JUMP)
// 004a1491: PUSH EAX
//   Label: LAB_004a1491
// 004a1492: PUSH EDX
// 004a1493: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a1498: ADD ESP,0x8
// 004a149b: JMP 0x004a13d2
//   XREF to: 004a13d2 (UNCONDITIONAL_JUMP)
// 004a14a0: MOV ESI,dword ptr [0x02cf6a8c]
//   Label: LAB_004a14a0
//   XREF to: 02cf6a8c (READ)
// 004a14a6: SUB ESI,EDI
// 004a14a8: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a14ad: MOV EDX,ESI
// 004a14af: TEST ESI,ESI
// 004a14b1: JL 0x004a14c3
//   XREF to: 004a14c3 (CONDITIONAL_JUMP)
// 004a14b3: TEST EAX,EAX
// 004a14b5: JL 0x004a14c3
//   XREF to: 004a14c3 (CONDITIONAL_JUMP)
// 004a14b7: CMP ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a14bd: JL 0x004a151e
//   XREF to: 004a151e (CONDITIONAL_JUMP)
// 004a14c3: MOV EAX,[0x02cf6a8c]
//   Label: LAB_004a14c3
//   XREF to: 02cf6a8c (READ)
// 004a14c8: ADD EAX,EDI
// 004a14ca: MOV ESI,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a14d0: MOV EDX,EAX
// 004a14d2: TEST EAX,EAX
// 004a14d4: JL 0x004a1518
//   XREF to: 004a1518 (CONDITIONAL_JUMP)
// 004a14d6: TEST ESI,ESI
// 004a14d8: JL 0x004a1518
//   XREF to: 004a1518 (CONDITIONAL_JUMP)
// 004a14da: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a14e0: JGE 0x004a1518
//   XREF to: 004a1518 (CONDITIONAL_JUMP)
// 004a14e2: CMP ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004a14e8: JGE 0x004a1518
//   XREF to: 004a1518 (CONDITIONAL_JUMP)
// 004a14ea: TEST EBX,EBX
// 004a14ec: JZ 0x004a150e
//   XREF to: 004a150e (CONDITIONAL_JUMP)
// 004a14ee: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a14f4: JL 0x004a1518
//   XREF to: 004a1518 (CONDITIONAL_JUMP)
// 004a14f6: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a14fc: JGE 0x004a1518
//   XREF to: 004a1518 (CONDITIONAL_JUMP)
// 004a14fe: CMP ESI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a1504: JL 0x004a1518
//   XREF to: 004a1518 (CONDITIONAL_JUMP)
// 004a1506: CMP ESI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a150c: JGE 0x004a1518
//   XREF to: 004a1518 (CONDITIONAL_JUMP)
// 004a150e: PUSH ESI
//   Label: LAB_004a150e
// 004a150f: PUSH EDX
// 004a1510: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a1515: ADD ESP,0x8
// 004a1518: INC EDI
//   Label: LAB_004a1518
// 004a1519: JMP 0x004a13d7
//   XREF to: 004a13d7 (UNCONDITIONAL_JUMP)
// 004a151e: CMP EAX,dword ptr [0x00679398]
//   Label: LAB_004a151e
//   XREF to: 00679398 (READ)
// 004a1524: JGE 0x004a14c3
//   XREF to: 004a14c3 (CONDITIONAL_JUMP)
// 004a1526: TEST EBX,EBX
// 004a1528: JZ 0x004a154e
//   XREF to: 004a154e (CONDITIONAL_JUMP)
// 004a152a: CMP ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a1530: JL 0x004a14c3
//   XREF to: 004a14c3 (CONDITIONAL_JUMP)
// 004a1532: CMP ESI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a1538: JGE 0x004a14c3
//   XREF to: 004a14c3 (CONDITIONAL_JUMP)
// 004a153a: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a1540: JL 0x004a14c3
//   XREF to: 004a14c3 (CONDITIONAL_JUMP)
// 004a1542: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a1548: JGE 0x004a14c3
//   XREF to: 004a14c3 (CONDITIONAL_JUMP)
// 004a154e: PUSH EAX
//   Label: LAB_004a154e
// 004a154f: PUSH EDX
// 004a1550: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a1555: ADD ESP,0x8
// 004a1558: JMP 0x004a14c3
//   XREF to: 004a14c3 (UNCONDITIONAL_JUMP)
// 004a155d: CMP EAX,dword ptr [0x00679398]
//   Label: LAB_004a155d
//   XREF to: 00679398 (READ)
// 004a1563: JGE 0x004a142b
//   XREF to: 004a142b (CONDITIONAL_JUMP)
// 004a1569: TEST EBX,EBX
// 004a156b: JZ 0x004a159d
//   XREF to: 004a159d (CONDITIONAL_JUMP)
// 004a156d: CMP ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a1573: JL 0x004a142b
//   XREF to: 004a142b (CONDITIONAL_JUMP)
// 004a1579: CMP ESI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a157f: JGE 0x004a142b
//   XREF to: 004a142b (CONDITIONAL_JUMP)
// 004a1585: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a158b: JL 0x004a142b
//   XREF to: 004a142b (CONDITIONAL_JUMP)
// 004a1591: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a1597: JGE 0x004a142b
//   XREF to: 004a142b (CONDITIONAL_JUMP)
// 004a159d: PUSH EDX
//   Label: LAB_004a159d
// 004a159e: PUSH ESI
// 004a159f: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a15a4: ADD ESP,0x8
// 004a15a7: JMP 0x004a142b
//   XREF to: 004a142b (UNCONDITIONAL_JUMP)
// 004a15ac: CMP ESI,dword ptr [0x00679398]
//   Label: LAB_004a15ac
//   XREF to: 00679398 (READ)
// 004a15b2: JGE 0x004a144e
//   XREF to: 004a144e (CONDITIONAL_JUMP)
// 004a15b8: TEST EBX,EBX
// 004a15ba: JZ 0x004a15ec
//   XREF to: 004a15ec (CONDITIONAL_JUMP)
// 004a15bc: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a15c2: JL 0x004a144e
//   XREF to: 004a144e (CONDITIONAL_JUMP)
// 004a15c8: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a15ce: JGE 0x004a144e
//   XREF to: 004a144e (CONDITIONAL_JUMP)
// 004a15d4: CMP ESI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a15da: JL 0x004a144e
//   XREF to: 004a144e (CONDITIONAL_JUMP)
// 004a15e0: CMP ESI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a15e6: JGE 0x004a144e
//   XREF to: 004a144e (CONDITIONAL_JUMP)
// 004a15ec: PUSH EDX
//   Label: LAB_004a15ec
// 004a15ed: PUSH EAX
// 004a15ee: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a15f3: ADD ESP,0x8
// 004a15f6: INC EDI
// 004a15f7: JMP 0x004a13f2
//   XREF to: 004a13f2 (UNCONDITIONAL_JUMP)
// 004a15fc: MOV EDX,dword ptr [0x02cf6a8c]
//   Label: LAB_004a15fc
//   XREF to: 02cf6a8c (READ)
// 004a1602: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a1607: TEST EDX,EDX
// 004a1609: JL 0x004a161b
//   XREF to: 004a161b (CONDITIONAL_JUMP)
// 004a160b: TEST EAX,EAX
// 004a160d: JL 0x004a161b
//   XREF to: 004a161b (CONDITIONAL_JUMP)
// 004a160f: CMP EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a1615: JL 0x004a16d8
//   XREF to: 004a16d8 (CONDITIONAL_JUMP)
// 004a161b: MOV ESI,0x1
//   Label: LAB_004a161b
// 004a1620: MOV EAX,[0x00678a64]
//   Label: LAB_004a1620
//   XREF to: 00678a64 (READ)
// 004a1625: MOV EDX,EAX
// 004a1627: SAR EDX,0x1f
// 004a162a: SUB EAX,EDX
// 004a162c: SAR EAX,0x1
// 004a162e: CMP ESI,EAX
// 004a1630: JG 0x004a1b1c
//   XREF to: 004a1b1c (CONDITIONAL_JUMP)
// 004a1636: MOV EDI,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a163c: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a1641: SUB EDI,ESI
// 004a1643: SUB EAX,ESI
// 004a1645: MOV EBP,EDI
// 004a1647: MOV EDX,EAX
// 004a1649: TEST EDI,EDI
// 004a164b: JL 0x004a165d
//   XREF to: 004a165d (CONDITIONAL_JUMP)
// 004a164d: TEST EAX,EAX
// 004a164f: JL 0x004a165d
//   XREF to: 004a165d (CONDITIONAL_JUMP)
// 004a1651: CMP EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a1657: JL 0x004a1727
//   XREF to: 004a1727 (CONDITIONAL_JUMP)
// 004a165d: MOV EDI,dword ptr [0x02cf6a8c]
//   Label: LAB_004a165d
//   XREF to: 02cf6a8c (READ)
// 004a1663: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a1668: ADD EDI,ESI
// 004a166a: SUB EAX,ESI
// 004a166c: MOV EDX,EDI
// 004a166e: MOV EBP,EAX
// 004a1670: TEST EDI,EDI
// 004a1672: JL 0x004a1684
//   XREF to: 004a1684 (CONDITIONAL_JUMP)
// 004a1674: TEST EAX,EAX
// 004a1676: JL 0x004a1684
//   XREF to: 004a1684 (CONDITIONAL_JUMP)
// 004a1678: CMP EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a167e: JL 0x004a1776
//   XREF to: 004a1776 (CONDITIONAL_JUMP)
// 004a1684: MOV EAX,[0x02cf6a8c]
//   Label: LAB_004a1684
//   XREF to: 02cf6a8c (READ)
// 004a1689: MOV EDI,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a168f: SUB EAX,ESI
// 004a1691: ADD EDI,ESI
// 004a1693: MOV EDX,EAX
// 004a1695: MOV EBP,EDI
// 004a1697: TEST EAX,EAX
// 004a1699: JL 0x004a16ab
//   XREF to: 004a16ab (CONDITIONAL_JUMP)
// 004a169b: TEST EDI,EDI
// 004a169d: JL 0x004a16ab
//   XREF to: 004a16ab (CONDITIONAL_JUMP)
// 004a169f: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a16a5: JL 0x004a17c5
//   XREF to: 004a17c5 (CONDITIONAL_JUMP)
// 004a16ab: MOV EAX,[0x02cf6a8c]
//   Label: LAB_004a16ab
//   XREF to: 02cf6a8c (READ)
// 004a16b0: MOV EDI,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a16b6: ADD EAX,ESI
// 004a16b8: ADD EDI,ESI
// 004a16ba: MOV EDX,EAX
// 004a16bc: MOV EBP,EDI
// 004a16be: TEST EAX,EAX
// 004a16c0: JL 0x004a16d2
//   XREF to: 004a16d2 (CONDITIONAL_JUMP)
// 004a16c2: TEST EDI,EDI
// 004a16c4: JL 0x004a16d2
//   XREF to: 004a16d2 (CONDITIONAL_JUMP)
// 004a16c6: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a16cc: JL 0x004a1814
//   XREF to: 004a1814 (CONDITIONAL_JUMP)
// 004a16d2: INC ESI
//   Label: LAB_004a16d2
// 004a16d3: JMP 0x004a1620
//   XREF to: 004a1620 (UNCONDITIONAL_JUMP)
// 004a16d8: CMP EAX,dword ptr [0x00679398]
//   Label: LAB_004a16d8
//   XREF to: 00679398 (READ)
// 004a16de: JGE 0x004a161b
//   XREF to: 004a161b (CONDITIONAL_JUMP)
// 004a16e4: TEST EBX,EBX
// 004a16e6: JZ 0x004a1718
//   XREF to: 004a1718 (CONDITIONAL_JUMP)
// 004a16e8: CMP EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a16ee: JL 0x004a161b
//   XREF to: 004a161b (CONDITIONAL_JUMP)
// 004a16f4: CMP EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a16fa: JGE 0x004a161b
//   XREF to: 004a161b (CONDITIONAL_JUMP)
// 004a1700: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a1706: JL 0x004a161b
//   XREF to: 004a161b (CONDITIONAL_JUMP)
// 004a170c: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a1712: JGE 0x004a161b
//   XREF to: 004a161b (CONDITIONAL_JUMP)
// 004a1718: PUSH EAX
//   Label: LAB_004a1718
// 004a1719: PUSH EDX
// 004a171a: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a171f: ADD ESP,0x8
// 004a1722: JMP 0x004a161b
//   XREF to: 004a161b (UNCONDITIONAL_JUMP)
// 004a1727: CMP EAX,dword ptr [0x00679398]
//   Label: LAB_004a1727
//   XREF to: 00679398 (READ)
// 004a172d: JGE 0x004a165d
//   XREF to: 004a165d (CONDITIONAL_JUMP)
// 004a1733: TEST EBX,EBX
// 004a1735: JZ 0x004a1767
//   XREF to: 004a1767 (CONDITIONAL_JUMP)
// 004a1737: CMP EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a173d: JL 0x004a165d
//   XREF to: 004a165d (CONDITIONAL_JUMP)
// 004a1743: CMP EDI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a1749: JGE 0x004a165d
//   XREF to: 004a165d (CONDITIONAL_JUMP)
// 004a174f: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a1755: JL 0x004a165d
//   XREF to: 004a165d (CONDITIONAL_JUMP)
// 004a175b: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a1761: JGE 0x004a165d
//   XREF to: 004a165d (CONDITIONAL_JUMP)
// 004a1767: PUSH EDX
//   Label: LAB_004a1767
// 004a1768: PUSH EBP
// 004a1769: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a176e: ADD ESP,0x8
// 004a1771: JMP 0x004a165d
//   XREF to: 004a165d (UNCONDITIONAL_JUMP)
// 004a1776: CMP EAX,dword ptr [0x00679398]
//   Label: LAB_004a1776
//   XREF to: 00679398 (READ)
// 004a177c: JGE 0x004a1684
//   XREF to: 004a1684 (CONDITIONAL_JUMP)
// 004a1782: TEST EBX,EBX
// 004a1784: JZ 0x004a17b6
//   XREF to: 004a17b6 (CONDITIONAL_JUMP)
// 004a1786: CMP EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a178c: JL 0x004a1684
//   XREF to: 004a1684 (CONDITIONAL_JUMP)
// 004a1792: CMP EDI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a1798: JGE 0x004a1684
//   XREF to: 004a1684 (CONDITIONAL_JUMP)
// 004a179e: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a17a4: JL 0x004a1684
//   XREF to: 004a1684 (CONDITIONAL_JUMP)
// 004a17aa: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a17b0: JGE 0x004a1684
//   XREF to: 004a1684 (CONDITIONAL_JUMP)
// 004a17b6: PUSH EBP
//   Label: LAB_004a17b6
// 004a17b7: PUSH EDX
// 004a17b8: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a17bd: ADD ESP,0x8
// 004a17c0: JMP 0x004a1684
//   XREF to: 004a1684 (UNCONDITIONAL_JUMP)
// 004a17c5: CMP EDI,dword ptr [0x00679398]
//   Label: LAB_004a17c5
//   XREF to: 00679398 (READ)
// 004a17cb: JGE 0x004a16ab
//   XREF to: 004a16ab (CONDITIONAL_JUMP)
// 004a17d1: TEST EBX,EBX
// 004a17d3: JZ 0x004a1805
//   XREF to: 004a1805 (CONDITIONAL_JUMP)
// 004a17d5: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a17db: JL 0x004a16ab
//   XREF to: 004a16ab (CONDITIONAL_JUMP)
// 004a17e1: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a17e7: JGE 0x004a16ab
//   XREF to: 004a16ab (CONDITIONAL_JUMP)
// 004a17ed: CMP EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a17f3: JL 0x004a16ab
//   XREF to: 004a16ab (CONDITIONAL_JUMP)
// 004a17f9: CMP EDI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a17ff: JGE 0x004a16ab
//   XREF to: 004a16ab (CONDITIONAL_JUMP)
// 004a1805: PUSH EBP
//   Label: LAB_004a1805
// 004a1806: PUSH EDX
// 004a1807: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a180c: ADD ESP,0x8
// 004a180f: JMP 0x004a16ab
//   XREF to: 004a16ab (UNCONDITIONAL_JUMP)
// 004a1814: CMP EDI,dword ptr [0x00679398]
//   Label: LAB_004a1814
//   XREF to: 00679398 (READ)
// 004a181a: JGE 0x004a16d2
//   XREF to: 004a16d2 (CONDITIONAL_JUMP)
// 004a1820: TEST EBX,EBX
// 004a1822: JZ 0x004a1854
//   XREF to: 004a1854 (CONDITIONAL_JUMP)
// 004a1824: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a182a: JL 0x004a16d2
//   XREF to: 004a16d2 (CONDITIONAL_JUMP)
// 004a1830: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a1836: JGE 0x004a16d2
//   XREF to: 004a16d2 (CONDITIONAL_JUMP)
// 004a183c: CMP EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a1842: JL 0x004a16d2
//   XREF to: 004a16d2 (CONDITIONAL_JUMP)
// 004a1848: CMP EDI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a184e: JGE 0x004a16d2
//   XREF to: 004a16d2 (CONDITIONAL_JUMP)
// 004a1854: PUSH EBP
//   Label: LAB_004a1854
// 004a1855: PUSH EDX
// 004a1856: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a185b: ADD ESP,0x8
// 004a185e: INC ESI
// 004a185f: JMP 0x004a1620
//   XREF to: 004a1620 (UNCONDITIONAL_JUMP)
// 004a1864: MOV EAX,[0x00678a68]
//   Label: LAB_004a1864
//   XREF to: 00678a68 (READ)
// 004a1869: MOV EDX,EAX
// 004a186b: SAR EDX,0x1f
// 004a186e: SUB EAX,EDX
// 004a1870: SAR EAX,0x1
// 004a1872: MOV EDI,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a1878: MOV ESI,dword ptr [0x00678a68]
//   XREF to: 00678a68 (READ)
// 004a187e: SUB EDI,EAX
// 004a1880: ADD ESI,EDI
// 004a1882: DEC ESI
// 004a1883: LEA EBP,[EDI + 0x1]
// 004a1886: CMP EBP,ESI
// 004a1888: JGE 0x004a18aa
//   XREF to: 004a18aa (CONDITIONAL_JUMP)
// 004a188a: MOV EAX,[0x02cf6a8c]
//   Label: LAB_004a188a
//   XREF to: 02cf6a8c (READ)
// 004a188f: MOV EDX,EBP
// 004a1891: TEST EAX,EAX
// 004a1893: JL 0x004a18a5
//   XREF to: 004a18a5 (CONDITIONAL_JUMP)
// 004a1895: TEST EBP,EBP
// 004a1897: JL 0x004a18a5
//   XREF to: 004a18a5 (CONDITIONAL_JUMP)
// 004a1899: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a189f: JL 0x004a194e
//   XREF to: 004a194e (CONDITIONAL_JUMP)
// 004a18a5: INC EBP
//   Label: LAB_004a18a5
// 004a18a6: CMP EBP,ESI
// 004a18a8: JL 0x004a188a
//   XREF to: 004a188a (CONDITIONAL_JUMP)
// 004a18aa: MOV EBP,0x1
//   Label: LAB_004a18aa
// 004a18af: MOV EAX,[0x00678a64]
//   Label: LAB_004a18af
//   XREF to: 00678a64 (READ)
// 004a18b4: MOV EDX,EAX
// 004a18b6: SAR EDX,0x1f
// 004a18b9: SUB EAX,EDX
// 004a18bb: SAR EAX,0x1
// 004a18bd: CMP EBP,EAX
// 004a18bf: JG 0x004a1b1c
//   XREF to: 004a1b1c (CONDITIONAL_JUMP)
// 004a18c5: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a18ca: SUB EAX,EBP
// 004a18cc: MOV EDX,EDI
// 004a18ce: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004a18d2: TEST EAX,EAX
// 004a18d4: JL 0x004a18e6
//   XREF to: 004a18e6 (CONDITIONAL_JUMP)
// 004a18d6: TEST EDI,EDI
// 004a18d8: JL 0x004a18e6
//   XREF to: 004a18e6 (CONDITIONAL_JUMP)
// 004a18da: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a18e0: JL 0x004a199d
//   XREF to: 004a199d (CONDITIONAL_JUMP)
// 004a18e6: MOV EAX,[0x02cf6a8c]
//   Label: LAB_004a18e6
//   XREF to: 02cf6a8c (READ)
// 004a18eb: ADD EAX,EBP
// 004a18ed: MOV EDX,EDI
// 004a18ef: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a18f3: TEST EAX,EAX
// 004a18f5: JL 0x004a1907
//   XREF to: 004a1907 (CONDITIONAL_JUMP)
// 004a18f7: TEST EDI,EDI
// 004a18f9: JL 0x004a1907
//   XREF to: 004a1907 (CONDITIONAL_JUMP)
// 004a18fb: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a1901: JL 0x004a19f0
//   XREF to: 004a19f0 (CONDITIONAL_JUMP)
// 004a1907: MOV EAX,[0x02cf6a8c]
//   Label: LAB_004a1907
//   XREF to: 02cf6a8c (READ)
// 004a190c: SUB EAX,EBP
// 004a190e: MOV EDX,ESI
// 004a1910: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 004a1913: TEST EAX,EAX
// 004a1915: JL 0x004a1927
//   XREF to: 004a1927 (CONDITIONAL_JUMP)
// 004a1917: TEST ESI,ESI
// 004a1919: JL 0x004a1927
//   XREF to: 004a1927 (CONDITIONAL_JUMP)
// 004a191b: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a1921: JL 0x004a1a43
//   XREF to: 004a1a43 (CONDITIONAL_JUMP)
// 004a1927: MOV EAX,[0x02cf6a8c]
//   Label: LAB_004a1927
//   XREF to: 02cf6a8c (READ)
// 004a192c: ADD EAX,EBP
// 004a192e: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004a1932: MOV EDX,EAX
// 004a1934: TEST EAX,EAX
// 004a1936: JL 0x004a1948
//   XREF to: 004a1948 (CONDITIONAL_JUMP)
// 004a1938: TEST ESI,ESI
// 004a193a: JL 0x004a1948
//   XREF to: 004a1948 (CONDITIONAL_JUMP)
// 004a193c: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a1942: JL 0x004a1a96
//   XREF to: 004a1a96 (CONDITIONAL_JUMP)
// 004a1948: INC EBP
//   Label: LAB_004a1948
// 004a1949: JMP 0x004a18af
//   XREF to: 004a18af (UNCONDITIONAL_JUMP)
// 004a194e: CMP EBP,dword ptr [0x00679398]
//   Label: LAB_004a194e
//   XREF to: 00679398 (READ)
// 004a1954: JGE 0x004a18a5
//   XREF to: 004a18a5 (CONDITIONAL_JUMP)
// 004a195a: TEST EBX,EBX
// 004a195c: JZ 0x004a198e
//   XREF to: 004a198e (CONDITIONAL_JUMP)
// 004a195e: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a1964: JL 0x004a18a5
//   XREF to: 004a18a5 (CONDITIONAL_JUMP)
// 004a196a: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a1970: JGE 0x004a18a5
//   XREF to: 004a18a5 (CONDITIONAL_JUMP)
// 004a1976: CMP EBP,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a197c: JL 0x004a18a5
//   XREF to: 004a18a5 (CONDITIONAL_JUMP)
// 004a1982: CMP EBP,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a1988: JGE 0x004a18a5
//   XREF to: 004a18a5 (CONDITIONAL_JUMP)
// 004a198e: PUSH EDX
//   Label: LAB_004a198e
// 004a198f: PUSH EAX
// 004a1990: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a1995: ADD ESP,0x8
// 004a1998: JMP 0x004a18a5
//   XREF to: 004a18a5 (UNCONDITIONAL_JUMP)
// 004a199d: CMP EDI,dword ptr [0x00679398]
//   Label: LAB_004a199d
//   XREF to: 00679398 (READ)
// 004a19a3: JGE 0x004a18e6
//   XREF to: 004a18e6 (CONDITIONAL_JUMP)
// 004a19a9: TEST EBX,EBX
// 004a19ab: JZ 0x004a19dd
//   XREF to: 004a19dd (CONDITIONAL_JUMP)
// 004a19ad: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a19b3: JL 0x004a18e6
//   XREF to: 004a18e6 (CONDITIONAL_JUMP)
// 004a19b9: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a19bf: JGE 0x004a18e6
//   XREF to: 004a18e6 (CONDITIONAL_JUMP)
// 004a19c5: CMP EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a19cb: JL 0x004a18e6
//   XREF to: 004a18e6 (CONDITIONAL_JUMP)
// 004a19d1: CMP EDI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a19d7: JGE 0x004a18e6
//   XREF to: 004a18e6 (CONDITIONAL_JUMP)
// 004a19dd: PUSH EDX
//   Label: LAB_004a19dd
// 004a19de: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004a19e2: PUSH EAX
// 004a19e3: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a19e8: ADD ESP,0x8
// 004a19eb: JMP 0x004a18e6
//   XREF to: 004a18e6 (UNCONDITIONAL_JUMP)
// 004a19f0: CMP EDI,dword ptr [0x00679398]
//   Label: LAB_004a19f0
//   XREF to: 00679398 (READ)
// 004a19f6: JGE 0x004a1907
//   XREF to: 004a1907 (CONDITIONAL_JUMP)
// 004a19fc: TEST EBX,EBX
// 004a19fe: JZ 0x004a1a30
//   XREF to: 004a1a30 (CONDITIONAL_JUMP)
// 004a1a00: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a1a06: JL 0x004a1907
//   XREF to: 004a1907 (CONDITIONAL_JUMP)
// 004a1a0c: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a1a12: JGE 0x004a1907
//   XREF to: 004a1907 (CONDITIONAL_JUMP)
// 004a1a18: CMP EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a1a1e: JL 0x004a1907
//   XREF to: 004a1907 (CONDITIONAL_JUMP)
// 004a1a24: CMP EDI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a1a2a: JGE 0x004a1907
//   XREF to: 004a1907 (CONDITIONAL_JUMP)
// 004a1a30: PUSH EDX
//   Label: LAB_004a1a30
// 004a1a31: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004a1a35: PUSH EAX
// 004a1a36: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a1a3b: ADD ESP,0x8
// 004a1a3e: JMP 0x004a1907
//   XREF to: 004a1907 (UNCONDITIONAL_JUMP)
// 004a1a43: CMP ESI,dword ptr [0x00679398]
//   Label: LAB_004a1a43
//   XREF to: 00679398 (READ)
// 004a1a49: JGE 0x004a1927
//   XREF to: 004a1927 (CONDITIONAL_JUMP)
// 004a1a4f: TEST EBX,EBX
// 004a1a51: JZ 0x004a1a83
//   XREF to: 004a1a83 (CONDITIONAL_JUMP)
// 004a1a53: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a1a59: JL 0x004a1927
//   XREF to: 004a1927 (CONDITIONAL_JUMP)
// 004a1a5f: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a1a65: JGE 0x004a1927
//   XREF to: 004a1927 (CONDITIONAL_JUMP)
// 004a1a6b: CMP ESI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a1a71: JL 0x004a1927
//   XREF to: 004a1927 (CONDITIONAL_JUMP)
// 004a1a77: CMP ESI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a1a7d: JGE 0x004a1927
//   XREF to: 004a1927 (CONDITIONAL_JUMP)
// 004a1a83: PUSH EDX
//   Label: LAB_004a1a83
// 004a1a84: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004a1a88: PUSH EAX
// 004a1a89: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a1a8e: ADD ESP,0x8
// 004a1a91: JMP 0x004a1927
//   XREF to: 004a1927 (UNCONDITIONAL_JUMP)
// 004a1a96: CMP ESI,dword ptr [0x00679398]
//   Label: LAB_004a1a96
//   XREF to: 00679398 (READ)
// 004a1a9c: JGE 0x004a1948
//   XREF to: 004a1948 (CONDITIONAL_JUMP)
// 004a1aa2: TEST EBX,EBX
// 004a1aa4: JZ 0x004a1ad6
//   XREF to: 004a1ad6 (CONDITIONAL_JUMP)
// 004a1aa6: CMP EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a1aac: JL 0x004a1948
//   XREF to: 004a1948 (CONDITIONAL_JUMP)
// 004a1ab2: CMP EAX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a1ab8: JGE 0x004a1948
//   XREF to: 004a1948 (CONDITIONAL_JUMP)
// 004a1abe: CMP ESI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a1ac4: JL 0x004a1948
//   XREF to: 004a1948 (CONDITIONAL_JUMP)
// 004a1aca: CMP ESI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a1ad0: JGE 0x004a1948
//   XREF to: 004a1948 (CONDITIONAL_JUMP)
// 004a1ad6: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_004a1ad6
//   XREF to: Stack[-0x14] (READ)
// 004a1ada: PUSH EAX
// 004a1adb: PUSH EDX
// 004a1adc: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 004a1ae1: ADD ESP,0x8
// 004a1ae4: INC EBP
// 004a1ae5: JMP 0x004a18af
//   XREF to: 004a18af (UNCONDITIONAL_JUMP)
// 004a1aea: JBE 0x004a1864
//   Label: LAB_004a1aea
//   XREF to: 004a1864 (CONDITIONAL_JUMP)
// 004a1af0: CMP EAX,0x2
// 004a1af3: JZ 0x004a15fc
//   XREF to: 004a15fc (CONDITIONAL_JUMP)
// 004a1af9: MOV EDI,0x623535
//   Label: LAB_004a1af9
//   XREF to: 00623535 (DATA)
// 004a1afe: MOV EBP,0x932
// 004a1b03: PUSH 0x62354b
//   XREF to: 0062354b (DATA)
// 004a1b08: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004a1b0e: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004a1b14: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a1b19: ADD ESP,0x4
// 004a1b1c: ADD ESP,0x10
//   Label: LAB_004a1b1c
// 004a1b1f: POP EBP
// 004a1b20: POP EDI
// 004a1b21: POP ESI
// 004a1b22: POP EBX
// 004a1b23: RET
