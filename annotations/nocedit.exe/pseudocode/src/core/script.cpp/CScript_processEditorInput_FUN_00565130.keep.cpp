// Name: core_script.cpp_CScript_processEditorInput_FUN_00565130
// Address: 00565130
// MANUAL RECONSTRUCTION
// Address Range: [[00565130, 00565a91]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_processEditorInput_FUN_00565130(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_processEditorInput_FUN_00565130(CScript *this_ptr)

{
  bool bVar2;
  int line_number;
  CScript *pCVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  EEditorActionType EVar9;
  int iVar10;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  char acStack_14 [4];
  byte bVar8;
  void *this_ptr_00;
  
  bVar8 = 0;
  iStack_18 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
  g_CursorBlinkTimer.dword = g_CursorBlinkTimer.dword + g_GlobalDeltaTimeInt & 0xfffff;
  core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
  core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
  core_script_cpp_updateSelection_FUN_00564500();
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&g_ScriptEditorHScrollBar);
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&g_ScriptEditorVScrollBar);
  core_script_cpp_CScript_clampCursorToView_FUN_00566880(this_ptr);
  iStack_1c = g_CurrentEditingColumn;
  iStack_20 = g_CurrentEditingLine;
  bVar2 = false;
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD4);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_LEFT,0);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD6);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_RIGHT,0);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD2);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_DOWN,0);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD8);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_UP,0);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD7);
  if (iVar5 != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if (iVar5 == 0) {
      EVar9 = ACTION_TYPE_HOME;
    }
    else {
      EVar9 = ACTION_TYPE_CTRL_HOME;
    }
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,EVar9,0);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD1);
  if (iVar5 != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if (iVar5 == 0) {
      EVar9 = ACTION_TYPE_END;
    }
    else {
      EVar9 = ACTION_TYPE_CTRL_END;
    }
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,EVar9,0);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD3);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_PAGE_DOWN,0);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD9);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_PAGE_UP,0);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_DECIMAL);
  if (iVar5 != 0) {
    bVar2 = true;
    if (g_SelectionAnchorColumn < 0) {
      EVar9 = ACTION_TYPE_DELETE;
    }
    else {
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar5 == 0) {
        EVar9 = ACTION_TYPE_CUT;
      }
      else {
        EVar9 = ACTION_TYPE_SELECT_WORD;
      }
    }
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,EVar9,0);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD0);
  if (iVar5 != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if (iVar5 == 0) {
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar5 == 0) {
        g_AutoIndentEnabled = (int)(g_AutoIndentEnabled == 0);
        goto LAB_00565363;
      }
      EVar9 = ACTION_TYPE_PASTE;
      bVar2 = true;
    }
    else {
      EVar9 = ACTION_TYPE_COPY;
    }
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,EVar9,0);
  }
LAB_00565363:
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if (iVar5 != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_X);
    if (iVar5 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_SELECT_WORD,0);
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
    if (iVar5 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_COPY,0);
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_V);
    if (iVar5 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_PASTE,0);
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if ((iVar5 != 0) &&
     (iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_G), iVar5 != 0)) {
    iStack_34 = g_CurrentEditingLine + 1;
    iVar10 = 1;
    iVar5 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter line number",&iStack_34,1,1,iVar5 + 1,
                       iVar10);
    if (iVar5 != 0) {
      g_CurrentEditingLine = iStack_34 + -1;
      bVar2 = true;
      g_CurrentEditingColumn = 0;
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if ((iVar5 != 0) &&
     (iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F), iVar5 != 0)) {
    iVar10 = 1;
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if (iVar5 != 0) {
      iVar10 = -1;
    }
    iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Find",g_ScriptFindText,100,1);
    if (iVar5 != 0) {
      iVar5 = core_script_cpp_CScript_findText_FUN_00566cc0
                        (this_ptr,g_ScriptFindText,g_CurrentEditingColumn,g_CurrentEditingLine,
                         &uStack_30,&iStack_3c,&uStack_38,iVar10);
      if (iVar5 == 0) {
        _sprintf
                  (g_ScriptEditorStatusText,"Can't find %s",g_ScriptFindText);
      }
      else {
        _sprintf
                  (g_ScriptEditorStatusText,"Found %s",g_ScriptFindText);
        g_CurrentEditingLine = iStack_3c;
        g_CurrentEditingColumn = uStack_30;
        bVar2 = false;
        g_SelectionAnchorColumn = uStack_38;
        iStack_18 = 1;
        g_SelectionAnchorLine = iStack_3c;
      }
    }
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F3);
  if (iVar5 != 0) {
    iVar10 = 1;
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if (iVar5 != 0) {
      iVar10 = -1;
    }
    if (g_ScriptFindText[0] == '\0') {
      shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                (g_CEditorToolsPtr,"Find",g_ScriptFindText,100,1);
    }
    if (g_ScriptFindText[0] != '\0') {
      iVar5 = core_script_cpp_CScript_findText_FUN_00566cc0
                        (this_ptr,g_ScriptFindText,iVar10 + g_CurrentEditingColumn,
                         g_CurrentEditingLine,&uStack_2c,&iStack_28,&uStack_24,iVar10);
      if (iVar5 == 0) {
        _sprintf
                  (g_ScriptEditorStatusText,"Can't find %s",g_ScriptFindText);
      }
      else {
        _sprintf
                  (g_ScriptEditorStatusText,"Found %s",g_ScriptFindText);
        g_CurrentEditingLine = iStack_28;
        g_CurrentEditingColumn = uStack_2c;
        bVar2 = false;
        g_SelectionAnchorColumn = uStack_24;
        iStack_18 = 1;
        g_SelectionAnchorLine = iStack_28;
      }
    }
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F4);
  if (iVar5 != 0) {
    bVar2 = true;
    core_script_cpp_CScript_editParameterAtPosition_FUN_00565ae0
              (this_ptr,g_CurrentEditingColumn,g_CurrentEditingLine);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F6);
  if (iVar5 != 0) {
    bVar2 = true;
    core_script_cpp_CScript_executeContextAction_FUN_00565d00
              (this_ptr,g_CurrentEditingColumn,g_CurrentEditingLine);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
  if (iVar5 != 0) {
    core_script_cpp_CScript_showSyntaxHelp_FUN_00565e70
              (this_ptr,g_CurrentEditingColumn,g_CurrentEditingLine);
  }
  this_ptr_00 = g_ActiveControl;
  if (this_ptr == g_ActiveControl) {
    if ((g_MouseButtonFlags.dword & 1) == 0) {
      g_ActiveControl = (void *)0x0;
    }
    else {
      core_script_cpp_CScript_screenToScriptPosition_FUN_00566c20
                (this_ptr,g_MouseX,g_MouseY,&g_CurrentEditingColumn,&g_CurrentEditingLine);
      if (g_MouseX <= g_ScriptTextAreaLeft) {
        core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_LEFT,0);
      }
      if (g_ScriptTextAreaRight <= g_MouseX) {
        core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_RIGHT,0);
      }
      if (g_MouseY <= g_ScriptTextAreaTop) {
        core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_UP,0);
      }
      if (g_ScriptTextAreaBottom <= g_MouseY) {
        core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_DOWN,0);
      }
      iStack_18 = 1;
    }
  }
  else if (g_ActiveControl == (void *)0x0) {
    if ((g_MouseButtonFlags.dword & 1) == 0) {
      if ((g_MouseButtonFlags.dword & 2) != 0) {
        g_MouseButtonFlags.dword = 0;
        iVar5 = core_script_cpp_CScript_screenToScriptPosition_FUN_00566c20
                          (this_ptr,g_MouseX,g_MouseY,&g_CurrentEditingColumn,&g_CurrentEditingLine)
        ;
        if (iVar5 != 0) {
          core_script_cpp_CScript_gotoPosition_FUN_00565aa0
                    (this_ptr,g_CurrentEditingColumn,g_CurrentEditingLine);
        }
      }
    }
    else {
      iVar5 = core_script_cpp_CScript_screenToScriptPosition_FUN_00566c20
                        (this_ptr,g_MouseX,g_MouseY,&g_CurrentEditingColumn,&g_CurrentEditingLine);
      pCVar3 = (CScript *)g_ActiveControl;
      if ((iVar5 != 0) &&
         (iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU), pCVar3 = this_ptr,
         iVar5 != 0)) {
        core_script_cpp_CScript_editParameterAtPosition_FUN_00565ae0
                  (this_ptr,g_CurrentEditingColumn,g_CurrentEditingLine);
        g_MouseButtonFlags.dword = 0;
        pCVar3 = (CScript *)g_ActiveControl;
      }
      g_ActiveControl = pCVar3;
      bVar2 = true;
    }
  }
  core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
            if (iVar5 == 0) {
              core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
              if (bVar2) {
                core_script_cpp_clearSelections_FUN_005644e0();
              }
              else if ((iStack_1c != g_CurrentEditingColumn) || (iStack_20 != g_CurrentEditingLine))
              {
                if (iStack_18 == 0) {
                  core_script_cpp_clearSelections_FUN_005644e0();
                }
                else if (g_SelectionAnchorColumn < 0) {
                  g_SelectionAnchorColumn = iStack_1c;
                  g_SelectionAnchorLine = iStack_20;
                }
                g_CursorBlinkTimer.dword = 0;
              }
              core_script_cpp_CScript_updateLineMetrics_FUN_00566800(this_ptr,iStack_20);
              core_script_cpp_updateSelection_FUN_00564500();
              return;
            }
            uVar6 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
            cVar4 = (char)uVar6;
            uVar6 = uVar6 & 0xff;
            if (uVar6 != 0xd) break;
            core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_ENTER,0);
          }
          if (uVar6 != 8) break;
          core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_BACKSPACE,0);
        }
      } while (((g_CharacterClassificationTable[(byte)(cVar4 + 1)] & 8) == 0) && (uVar6 != 9));
      core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CUT,0);
      if (g_AutoIndentEnabled == 0) break;
      acStack_14[1] = 0;
      acStack_14[0] = cVar4;
      core_script_cpp_CScript_insertText_FUN_00566390(this_ptr,acStack_14,1);
      bVar2 = true;
    }
    core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine);
    iVar10 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                       (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
    for (iVar5 = strlen(g_CurrentLineBuffer + 1); iVar5 < iVar10; iVar5 = iVar5 + 1) {
      g_CurrentLineBuffer[iVar5 + 1] = ' ';
    }
    g_CurrentLineBuffer[iVar10 + 1] = cVar4;
    line_number = g_CurrentEditingLine;
    if (iVar5 <= iVar10) {
      iVar5 = iVar5 + 1;
    }
    g_CurrentLineBuffer[iVar5 + 1] = '\0';
    g_CurrentEditingColumn =
         core_script_cpp_CScript_editorIndex2X_FUN_00566b30(this_ptr,line_number,iVar10 + 1);
    core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_CurrentEditingLine);
    bVar2 = true;
  } while( true );
}
