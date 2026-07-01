// Name: core_script.cpp_CScript_editorAction_FUN_00564820
// Address: 00564820
// Address Range: [[00564820, 00565122]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_editorAction_FUN_00564820(CScript *this_ptr,EEditorActionType action_type,int action_parm)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_editorAction_FUN_00564820(CScript *this_ptr,EEditorActionType action_type,int action_parm)

{
  char cVar2;
  int iVar3;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  uint uVar5;
  uint uVar8;
  uint uVar9;
  int iVar6;
  uint uVar7;
  char *pcVar11;
  char *pcVar8;
  int iVar12;
  int iVar9;
  char *pcVar13;
  char *pcVar10;
  byte bVar11;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char *local_1c;
  CStrList *local_18;
  char *local_14;
  char cVar1;
  int iVar2;
  
  bVar11 = 0;
  switch(action_type) {
  case ACTION_TYPE_CURSOR_LEFT:
    if (0 < g_CurrentEditingColumn) {
      uVar9 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                        (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
      if ((int)uVar9 < 1) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 5825;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine);
      g_CurrentEditingColumn = g_CurrentEditingColumn - 1;
      uVar6 = 0xffffffff;
      pcVar11 = g_CurrentLineBuffer + 1;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
      } while (cVar2 != '\0');
      if ((uVar9 <= ~uVar6 - 1) && (g_CurrentLineBuffer[uVar9] == '\t')) {
        g_CurrentEditingColumn = g_CurrentEditingColumn & 0xfffffff8;
      }
    }
    break;
  case ACTION_TYPE_CURSOR_RIGHT:
    g_CurrentEditingColumn = g_CurrentEditingColumn + 1;
    break;
  case ACTION_TYPE_CURSOR_UP:
    g_CurrentEditingLine = g_CurrentEditingLine + -1;
    break;
  case ACTION_TYPE_CURSOR_DOWN:
    g_CurrentEditingLine = g_CurrentEditingLine + 1;
    break;
  case ACTION_TYPE_PAGE_UP:
    g_CurrentEditingLine = g_CurrentEditingLine - g_ScriptEditorVScrollBar.max_value;
    g_ScriptEditorVScrollBar.scroll_position =
         g_ScriptEditorVScrollBar.scroll_position - g_ScriptEditorVScrollBar.max_value;
    break;
  case ACTION_TYPE_PAGE_DOWN:
    g_CurrentEditingLine = g_CurrentEditingLine + g_ScriptEditorVScrollBar.max_value;
    g_ScriptEditorVScrollBar.scroll_position =
         g_ScriptEditorVScrollBar.scroll_position + g_ScriptEditorVScrollBar.max_value;
    break;
  case ACTION_TYPE_HOME:
    g_CurrentEditingColumn = 0;
    break;
  case ACTION_TYPE_END:
    if (-1 < g_CurrentEditingLine) {
      iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
      if (g_CurrentEditingLine < iVar3) {
        pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            (&this_ptr->script_text,g_CurrentEditingLine);
        uVar9 = 0xffffffff;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
        } while (cVar2 != '\0');
        g_CurrentEditingColumn =
             core_script_cpp_CScript_editorIndex2X_FUN_00566b30
                       (this_ptr,g_CurrentEditingLine,~uVar9 - 1);
        break;
      }
    }
    g_CurrentEditingColumn = 0;
    break;
  case ACTION_TYPE_CTRL_HOME:
    g_CurrentEditingLine = 0;
    g_CurrentEditingColumn = 0;
    break;
  case ACTION_TYPE_CTRL_END:
    iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    g_CurrentEditingLine = iVar3 + 1;
    g_CurrentEditingColumn = 0;
    break;
  case ACTION_TYPE_UNKNOWN1:
  case ACTION_TYPE_UNKNOWN2:
    goto switchD_00564838_caseD_b;
  case ACTION_TYPE_SELECT_WORD:
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_COPY,0);
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CUT,0);
    return;
  case ACTION_TYPE_COPY:
    core_script_cpp_updateSelection_FUN_00564500();
    if (g_SelectionStartLine < 0) {
      return;
    }
    if (g_SelectionStartColumn < 0) {
      return;
    }
    local_14 = (char *)0x0;
    iVar3 = g_SelectionStartLine;
    iVar12 = 0;
    if (g_SelectionStartLine <= g_SelectionEndLine) {
      do {
        core_script_cpp_getSelectionRangeForLine_FUN_00564560(iVar3,&local_2c,&local_28);
        local_2c = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,iVar3,local_2c);
        local_28 = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,iVar3,local_28);
        core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,iVar3);
        uVar9 = 0xffffffff;
        pcVar11 = g_CurrentLineBuffer + 1;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
        } while (cVar2 != '\0');
        if (local_2c < 0) {
          local_2c = 0;
        }
        if ((int)(~uVar9 - 1) < local_28) {
          local_28 = ~uVar9 - 1;
        }
        local_20 = ((local_28 + iVar12) - local_2c) + 1;
        local_14 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                             (local_14,local_20,"..\\core\\script.cpp",5934);
        if (local_14 == (char *)0x0) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 5935;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        pcVar11 = g_CurrentLineBuffer + local_2c + 1;
        pcVar13 = local_14 + iVar12;
        for (uVar9 = (uint)(local_28 - local_2c) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(uint *)pcVar13 = *(uint *)pcVar11;
          pcVar11 = pcVar11 + (uint)bVar11 * -8 + 4;
          pcVar13 = pcVar13 + (uint)bVar11 * -8 + 4;
        }
        for (uVar9 = local_28 - local_2c & 3; iVar2 = g_SelectionEndLine, uVar9 != 0;
            uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
          pcVar13 = pcVar13 + (uint)bVar11 * -2 + 1;
        }
        iVar3 = iVar3 + 1;
        local_14[local_20 + -1] = '\n';
        iVar12 = local_20;
      } while (iVar3 <= iVar2);
    }
    if (local_14 != (char *)0x0) {
      local_14[iVar12 + -1] = '\0';
    }
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(g_CEditorToolsPtr,local_14);
    if (local_14 == (char *)0x0) {
      return;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\core\\script.cpp",5948);
    return;
  case ACTION_TYPE_PASTE:
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CUT,0);
    iVar3 = 1;
    pcVar11 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(g_CEditorToolsPtr);
    core_script_cpp_CScript_insertText_FUN_00566390(this_ptr,pcVar11,iVar3);
    return;
  case ACTION_TYPE_CUT:
    core_script_cpp_updateSelection_FUN_00564500();
    if (g_SelectionStartLine < 0) {
      return;
    }
    if (g_SelectionStartColumn < 0) {
      return;
    }
    g_CurrentEditingLine = g_SelectionStartLine;
    g_CurrentEditingColumn = g_SelectionStartColumn;
    g_SelectionStartColumn =
         core_script_cpp_CScript_editorX2Index_FUN_00566a90
                   (this_ptr,g_SelectionStartLine,g_SelectionStartColumn);
    g_SelectionEndColumn =
         core_script_cpp_CScript_editorX2Index_FUN_00566a90
                   (this_ptr,g_SelectionEndLine,g_SelectionEndColumn);
    core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_SelectionStartLine);
    iVar3 = g_SelectionStartColumn;
    uVar9 = 0xffffffff;
    pcVar11 = g_CurrentLineBuffer + 1;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    for (iVar12 = ~uVar9 - 1; iVar12 < iVar3; iVar12 = iVar12 + 1) {
      g_CurrentLineBuffer[iVar12 + 1] = ' ';
    }
    pcVar11 = &s_EmptyChar_00643de8;
    iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (g_SelectionEndLine < iVar3) {
      pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                          (&this_ptr->script_text,g_SelectionEndLine);
    }
    uVar9 = 0xffffffff;
    pcVar13 = pcVar11;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    iVar3 = ~uVar9 - 1;
    if (iVar3 < g_SelectionEndColumn) {
      g_SelectionEndColumn = iVar3;
    }
    memmove
              (g_CurrentLineBuffer + g_SelectionStartColumn + 1,pcVar11 + g_SelectionEndColumn,
               (iVar3 - g_SelectionEndColumn) + 1);
    core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_SelectionStartLine);
    iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (iVar3 <= g_SelectionEndLine) {
      iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
      g_SelectionEndLine = iVar3 + -1;
    }
    if (g_SelectionStartLine < g_SelectionEndLine) {
      shape_edittool_cpp_CStrList_remove_FUN_004a2e00
                (&this_ptr->script_text,g_SelectionStartLine + 1,g_SelectionEndLine);
    }
    core_script_cpp_clearSelections_FUN_005644e0();
    break;
  case ACTION_TYPE_BACKSPACE:
    if (g_CurrentEditingColumn < 1) {
      if (0 < g_CurrentEditingLine) {
        local_18 = &this_ptr->script_text;
        uVar9 = 0;
        iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(local_18);
        if (g_CurrentEditingLine <= iVar3) {
          core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine + -1);
          uVar3 = 0xffffffff;
          pcVar11 = g_CurrentLineBuffer + 1;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
          } while (cVar2 != '\0');
          uVar9 = ~uVar3 - 1;
          iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(local_18);
          if (g_CurrentEditingLine < iVar3) {
            local_1c = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                 (local_18,g_CurrentEditingLine);
            uVar4 = 0xffffffff;
            pcVar11 = local_1c;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
            } while (cVar2 != '\0');
            uVar6 = ~uVar4 - 1;
            if (0x3fff < (int)(uVar6 + uVar9)) {
              uVar6 = 0x3fff - uVar9;
            }
            pcVar11 = local_1c;
            pcVar13 = g_CurrentLineBuffer + ~uVar3;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(uint *)pcVar13 = *(uint *)pcVar11;
              pcVar11 = pcVar11 + (uint)bVar11 * -8 + 4;
              pcVar13 = pcVar13 + (uint)bVar11 * -8 + 4;
            }
            for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar13 = *pcVar11;
              pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
              pcVar13 = pcVar13 + (uint)bVar11 * -2 + 1;
            }
            g_CurrentLineBuffer[uVar9 + uVar6 + 1] = '\0';
            core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_CurrentEditingLine + -1);
            shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                      (&this_ptr->script_text,g_CurrentEditingLine);
          }
        }
        g_CurrentEditingLine = g_CurrentEditingLine + -1;
        g_CurrentEditingColumn =
             core_script_cpp_CScript_editorIndex2X_FUN_00566b30(this_ptr,g_CurrentEditingLine,uVar9)
        ;
      }
    }
    else {
      iVar3 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                        (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
      if (iVar3 < 1) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 6012;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine);
      uVar6 = iVar3 - 1;
      uVar9 = 0xffffffff;
      pcVar11 = g_CurrentLineBuffer + 1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
      } while (cVar2 != '\0');
      if ((int)uVar6 < (int)(~uVar9 - 1)) {
        memmove
                  (g_CurrentLineBuffer + iVar3,g_CurrentLineBuffer + iVar3 + 1,(~uVar9 - 1) - uVar6)
        ;
        core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_CurrentEditingLine);
      }
      g_CurrentEditingColumn =
           core_script_cpp_CScript_editorIndex2X_FUN_00566b30(this_ptr,g_CurrentEditingLine,uVar6);
    }
    break;
  case ACTION_TYPE_DELETE:
    iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (iVar3 <= g_CurrentEditingLine) {
      return;
    }
    core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine);
    uVar9 = 0xffffffff;
    pcVar11 = g_CurrentLineBuffer + 1;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    iVar6 = ~uVar9 - 1;
    iVar3 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                      (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
    if (iVar3 < iVar6) {
      memmove
                (g_CurrentLineBuffer + iVar3 + 1,g_CurrentLineBuffer + iVar3 + 2,iVar6 - iVar3);
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_CurrentEditingLine);
    }
    else {
      for (; iVar6 < iVar3; iVar6 = iVar6 + 1) {
        g_CurrentLineBuffer[iVar6 + 1] = ' ';
      }
      local_24 = g_CurrentEditingLine + 1;
      iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
      pcVar8 = &s_EmptyChar_00643e07;
      if (local_24 < iVar3) {
        pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           (&this_ptr->script_text,g_CurrentEditingLine + 1);
      }
      pcVar10 = g_CurrentLineBuffer + iVar6 + 1;
      do {
        cVar2 = *pcVar8;
        *pcVar10 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar2;
        pcVar10 = pcVar10 + 2;
      } while (cVar2 != '\0');
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_CurrentEditingLine);
      iVar12 = g_CurrentEditingLine + 1;
      iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
      if (iVar12 < iVar3) {
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                  (&this_ptr->script_text,g_CurrentEditingLine + 1);
      }
    }
    break;
  case ACTION_TYPE_ENTER:
    iVar9 = g_AutoIndentEnabled;
    if (g_AutoIndentEnabled == 0) {
      core_script_cpp_clearSelections_FUN_005644e0();
      g_CurrentEditingLine = g_CurrentEditingLine + 1;
      g_CurrentEditingColumn = iVar9;
    }
    else {
      core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CUT,0);
      while (iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text),
            iVar3 <= g_CurrentEditingLine) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&this_ptr->script_text,&s_EmptyChar_00643e08);
      }
      core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine);
      uVar7 = 0xffffffff;
      pcVar11 = g_CurrentLineBuffer + 1;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar11 * -2 + 1;
      } while (cVar1 != '\0');
      iVar3 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                        (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
      if ((int)(~uVar7 - 1) < iVar3) {
        iVar3 = ~uVar7 - 1;
      }
      shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
                (&this_ptr->script_text,g_CurrentEditingLine + 1,g_CurrentLineBuffer + iVar3 + 1);
      iVar12 = g_CurrentEditingLine;
      g_CurrentLineBuffer[iVar3 + 1] = '\0';
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,iVar12);
      g_CurrentEditingLine = g_CurrentEditingLine + 1;
      g_CurrentEditingColumn = 0;
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 6157;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CScript::editorAction - unknown action: %d parm %d",action_type,action_parm);
    return;
  }
  core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
  core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
switchD_00564838_caseD_b:
  return;
}
