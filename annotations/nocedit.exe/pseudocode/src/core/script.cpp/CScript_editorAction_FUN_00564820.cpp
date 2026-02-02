// Name: core_script.cpp_CScript_editorAction_FUN_00564820
// Address: 00564820
// Address Range: [[00564820, 00565122]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_editorAction_FUN_00564820(CScript *this_ptr,EEditorActionType action_type)

#include "nocturne.h"

void __cdecl
core_script_cpp_CScript_editorAction_FUN_00564820(CScript *this_ptr,EEditorActionType action_type)

{
  CStrList *this_ptr_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  int local_2c;
  int local_28;
  char *local_14;
  
  bVar13 = 0;
  switch(action_type) {
  case ACTION_TYPE_CURSOR_LEFT:
    if (0 < g_CurrentEditingColumn) {
      uVar9 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                        (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
      if ((int)uVar9 < 1) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x16c1;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine);
      g_CurrentEditingColumn = g_CurrentEditingColumn - 1;
      uVar5 = 0xffffffff;
      pcVar10 = g_CurrentLineBuffer + 1;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
      } while (cVar1 != '\0');
      if ((uVar9 <= ~uVar5 - 1) && (g_CurrentLineBuffer[uVar9] == '\t')) {
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
      iVar11 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
      if (g_CurrentEditingLine < iVar11) {
        pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            (&this_ptr->script_text,g_CurrentEditingLine);
        uVar9 = 0xffffffff;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
        } while (cVar1 != '\0');
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
    iVar11 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    g_CurrentEditingLine = iVar11 + 1;
    g_CurrentEditingColumn = 0;
    break;
  case ACTION_TYPE_UNKNOWN1:
  case ACTION_TYPE_UNKNOWN2:
    goto switchD_00564838_caseD_b;
  case ACTION_TYPE_SELECT_WORD:
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_COPY);
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CUT);
    return;
  case ACTION_TYPE_COPY:
    core_script_cpp_FUN_00564500();
    if (g_SelectionStartLine < 0) {
      return;
    }
    if (g_SelectionStartColumn < 0) {
      return;
    }
    iVar4 = 0;
    local_14 = (char *)0x0;
    iVar11 = g_SelectionStartLine;
    iVar8 = iVar4;
    if (g_SelectionStartLine <= g_SelectionEndLine) {
      do {
        core_script_cpp_FUN_00564560();
        local_2c = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,iVar11,local_2c);
        local_28 = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,iVar11,local_28);
        core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,iVar11);
        uVar9 = 0xffffffff;
        pcVar10 = g_CurrentLineBuffer + 1;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
        } while (cVar1 != '\0');
        if (local_2c < 0) {
          local_2c = 0;
        }
        if ((int)(~uVar9 - 1) < local_28) {
          local_28 = ~uVar9 - 1;
        }
        iVar3 = (local_28 + iVar8) - local_2c;
        iVar4 = iVar3 + 1;
        local_14 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                             (local_14,iVar4,"..\\core\\script.cpp",0x172e);
        if (local_14 == (char *)0x0) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 0x172f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        pcVar10 = g_CurrentLineBuffer + local_2c + 1;
        pcVar12 = local_14 + iVar8;
        for (uVar9 = (uint)(local_28 - local_2c) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(uint *)pcVar12 = *(uint *)pcVar10;
          pcVar10 = pcVar10 + (uint)bVar13 * -8 + 4;
          pcVar12 = pcVar12 + (uint)bVar13 * -8 + 4;
        }
        for (uVar9 = local_28 - local_2c & 3; iVar2 = g_SelectionEndLine, uVar9 != 0;
            uVar9 = uVar9 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
          pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
        }
        iVar11 = iVar11 + 1;
        local_14[iVar3] = '\n';
        iVar8 = iVar4;
      } while (iVar11 <= iVar2);
    }
    if (local_14 != (char *)0x0) {
      local_14[iVar4 + -1] = '\0';
    }
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(g_CEditorToolsPtr,local_14);
    if (local_14 == (char *)0x0) {
      return;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\core\\script.cpp",0x173c);
    return;
  case ACTION_TYPE_PASTE:
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CUT);
    iVar11 = 1;
    pcVar10 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(g_CEditorToolsPtr);
    core_script_cpp_CScript_FUN_00566390(this_ptr,pcVar10,iVar11);
    return;
  case ACTION_TYPE_CUT:
    core_script_cpp_FUN_00564500();
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
    iVar11 = g_SelectionStartColumn;
    uVar9 = 0xffffffff;
    pcVar10 = g_CurrentLineBuffer + 1;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    for (iVar8 = ~uVar9 - 1; iVar8 < iVar11; iVar8 = iVar8 + 1) {
      g_CurrentLineBuffer[iVar8 + 1] = ' ';
    }
    pcVar10 = &s_EmptyChar_00643de8;
    iVar11 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (g_SelectionEndLine < iVar11) {
      pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                          (&this_ptr->script_text,g_SelectionEndLine);
    }
    uVar9 = 0xffffffff;
    pcVar12 = pcVar10;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    iVar11 = ~uVar9 - 1;
    if (iVar11 < g_SelectionEndColumn) {
      g_SelectionEndColumn = iVar11;
    }
    memmove
              (g_CurrentLineBuffer + g_SelectionStartColumn + 1,pcVar10 + g_SelectionEndColumn,
               (iVar11 - g_SelectionEndColumn) + 1);
    core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_SelectionStartLine);
    iVar11 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (iVar11 <= g_SelectionEndLine) {
      iVar11 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
      g_SelectionEndLine = iVar11 + -1;
    }
    if (g_SelectionStartLine < g_SelectionEndLine) {
      shape_edittool_cpp_CStrList_remove_FUN_004a2e00
                (&this_ptr->script_text,g_SelectionStartLine + 1,g_SelectionEndLine);
    }
    core_script_cpp_FUN_005644e0();
    break;
  case ACTION_TYPE_BACKSPACE:
    if (g_CurrentEditingColumn < 1) {
      if (0 < g_CurrentEditingLine) {
        this_ptr_00 = &this_ptr->script_text;
        uVar9 = 0;
        iVar11 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(this_ptr_00);
        if (g_CurrentEditingLine <= iVar11) {
          core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine + -1);
          uVar5 = 0xffffffff;
          pcVar10 = g_CurrentLineBuffer + 1;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
          } while (cVar1 != '\0');
          uVar9 = ~uVar5 - 1;
          iVar11 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(this_ptr_00);
          if (g_CurrentEditingLine < iVar11) {
            pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                (this_ptr_00,g_CurrentEditingLine);
            uVar6 = 0xffffffff;
            pcVar12 = pcVar10;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6 - 1;
            if (0x3fff < (int)(uVar6 + uVar9)) {
              uVar6 = 0x3fff - uVar9;
            }
            pcVar12 = g_CurrentLineBuffer + ~uVar5;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(uint *)pcVar12 = *(uint *)pcVar10;
              pcVar10 = pcVar10 + (uint)bVar13 * -8 + 4;
              pcVar12 = pcVar12 + (uint)bVar13 * -8 + 4;
            }
            for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pcVar12 = *pcVar10;
              pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
              pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
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
      iVar11 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                         (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
      if (iVar11 < 1) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x177c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine);
      uVar5 = iVar11 - 1;
      uVar9 = 0xffffffff;
      pcVar10 = g_CurrentLineBuffer + 1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
      } while (cVar1 != '\0');
      if ((int)uVar5 < (int)(~uVar9 - 1)) {
        memmove
                  (g_CurrentLineBuffer + iVar11,g_CurrentLineBuffer + iVar11 + 1,
                   (~uVar9 - 1) - uVar5);
        core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_CurrentEditingLine);
      }
      g_CurrentEditingColumn =
           core_script_cpp_CScript_editorIndex2X_FUN_00566b30(this_ptr,g_CurrentEditingLine,uVar5);
    }
    break;
  case ACTION_TYPE_DELETE:
    iVar11 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (iVar11 <= g_CurrentEditingLine) {
      return;
    }
    core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine);
    uVar9 = 0xffffffff;
    pcVar10 = g_CurrentLineBuffer + 1;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    iVar8 = ~uVar9 - 1;
    iVar11 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                       (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
    if (iVar11 < iVar8) {
      memmove
                (g_CurrentLineBuffer + iVar11 + 1,g_CurrentLineBuffer + iVar11 + 2,iVar8 - iVar11);
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_CurrentEditingLine);
    }
    else {
      for (; iVar8 < iVar11; iVar8 = iVar8 + 1) {
        g_CurrentLineBuffer[iVar8 + 1] = ' ';
      }
      iVar11 = g_CurrentEditingLine + 1;
      iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
      pcVar10 = &s_EmptyChar_00643e07;
      if (iVar11 < iVar4) {
        pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            (&this_ptr->script_text,g_CurrentEditingLine + 1);
      }
      pcVar12 = g_CurrentLineBuffer + iVar8 + 1;
      do {
        cVar1 = *pcVar10;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_CurrentEditingLine);
      iVar8 = g_CurrentEditingLine + 1;
      iVar11 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
      if (iVar8 < iVar11) {
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                  (&this_ptr->script_text,g_CurrentEditingLine + 1);
      }
    }
    break;
  case ACTION_TYPE_ENTER:
    iVar11 = g_AutoIndentEnabled;
    if (g_AutoIndentEnabled == 0) {
      core_script_cpp_FUN_005644e0();
      g_CurrentEditingLine = g_CurrentEditingLine + 1;
      g_CurrentEditingColumn = iVar11;
    }
    else {
      core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CUT);
      while (iVar11 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text),
            iVar11 <= g_CurrentEditingLine) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&this_ptr->script_text,&s_EmptyChar_00643e08);
      }
      core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,g_CurrentEditingLine);
      uVar9 = 0xffffffff;
      pcVar10 = g_CurrentLineBuffer + 1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
      } while (cVar1 != '\0');
      iVar11 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                         (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
      if ((int)(~uVar9 - 1) < iVar11) {
        iVar11 = ~uVar9 - 1;
      }
      shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
                (&this_ptr->script_text,g_CurrentEditingLine + 1,g_CurrentLineBuffer + iVar11 + 1);
      iVar8 = g_CurrentEditingLine;
      g_CurrentLineBuffer[iVar11 + 1] = '\0';
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,iVar8);
      g_CurrentEditingLine = g_CurrentEditingLine + 1;
      g_CurrentEditingColumn = 0;
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x180d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorAction - unknown action: %d parm %d",action_type);
    return;
  }
  core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
  core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
switchD_00564838_caseD_b:
  return;
}
