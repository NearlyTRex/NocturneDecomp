// Name: core_script.cpp_CScript_FUN_00565130
// Address: 00565130
// Address Range: [[00565130, 00565a91]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00565130(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00565130(CScript *this_ptr)

{
  char cVar1;
  CScript *pCVar2;
  bool bVar3;
  CEdButton *this_ptr_00;
  int line_number;
  char cVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte bVar8;
  EEditorActionType in_stack_00000024;
  CScript *pCVar9;
  EEditorActionType in_stack_0000003c;
  int iVar10;
  char *in_stack_0000007c;
  char *in_stack_0000008c;
  char *in_stack_00000090;
  char *in_stack_00000098;
  int *in_stack_000000ac;
  int *in_stack_000000b0;
  uint in_stack_000000b4;
  int in_stack_000000b8;
  int in_stack_000000d0;
  uint in_stack_000000d4;
  int in_stack_000000d8;
  char in_stack_000000dc;
  byte in_stack_000000dd;
  EEditorActionType action_type;
  
  pCVar2 = this_ptr;
  bVar8 = 0;
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  INT_0310fd40 = INT_0310fd40 + g_GlobalDeltaTimeInt & 0xfffff;
  core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
  core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
  core_script_cpp_FUN_00564500();
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&g_ScriptEditorHScrollBar);
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&g_ScriptEditorVScrollBar);
  core_script_cpp_CScript_FUN_00566880(this_ptr);
  bVar3 = false;
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_LEFT);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_RIGHT);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x50);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_DOWN);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x48);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,ACTION_TYPE_CURSOR_UP);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47);
  if (iVar5 != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if (iVar5 == 0) {
      action_type = ACTION_TYPE_HOME;
    }
    else {
      action_type = ACTION_TYPE_CTRL_HOME;
    }
    core_script_cpp_CScript_editorAction_FUN_00564820(this_ptr,action_type);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4f);
  if (iVar5 != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if (iVar5 == 0) {
      this_ptr = (CScript *)0x7;
    }
    else {
      this_ptr = (CScript *)0x9;
    }
    core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,(EEditorActionType)this_ptr);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x51);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_PAGE_DOWN);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x49);
  if (iVar5 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_PAGE_UP);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x53);
  if (iVar5 != 0) {
    bVar3 = true;
    if (-1 < (int)DAT_0310fd4c) {
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar5 == 0) {
        in_stack_00000024 = ACTION_TYPE_CUT;
      }
      else {
        in_stack_00000024 = ACTION_TYPE_SELECT_WORD;
      }
    }
    core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,in_stack_00000024);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x52);
  if (iVar5 != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if (iVar5 == 0) {
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar5 == 0) {
        g_AutoIndentEnabled = (int)(g_AutoIndentEnabled == 0);
        goto LAB_00565363;
      }
      in_stack_0000003c = ACTION_TYPE_PASTE;
      bVar3 = true;
      pCVar9 = pCVar2;
    }
    else {
      pCVar9 = (CScript *)0x0;
    }
    core_script_cpp_CScript_editorAction_FUN_00564820(pCVar9,in_stack_0000003c);
  }
LAB_00565363:
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar5 != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2d);
    if (iVar5 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_SELECT_WORD);
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar5 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_COPY);
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f);
    if (iVar5 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_PASTE);
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if ((iVar5 != 0) &&
     (iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x22), iVar5 != 0)) {
    in_stack_0000007c = (char *)(g_CurrentEditingLine + 1);
    iVar10 = 1;
    iVar5 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&pCVar2->script_text);
    iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter line number",(int *)&stack0x0000007c,1,1,
                       iVar5 + 1,iVar10);
    if (iVar5 != 0) {
      g_CurrentEditingLine = (int)((CScript *)((int)in_stack_0000007c + -0x480))->call_stack + 0x1f;
      bVar3 = true;
      g_CurrentEditingColumn = 0;
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if ((iVar5 != 0) &&
     (iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21), iVar5 != 0)) {
    in_stack_0000007c = (char *)g_CKeysPtr;
    iVar10 = 1;
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar5 != 0) {
      iVar10 = -1;
    }
    in_stack_0000007c = "Find";
    iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Find",&DAT_0310fd58,100,1);
    if (iVar5 != 0) {
      in_stack_0000007c = (char *)&stack0x00000098;
      iVar5 = core_script_cpp_CScript_FUN_00566cc0
                        (pCVar2,&DAT_0310fd58,g_CurrentEditingColumn,g_CurrentEditingLine,
                         (uint *)in_stack_0000007c,(int *)&stack0x0000008c,(uint *)&stack0x00000090,
                         iVar10);
      if (iVar5 == 0) {
        in_stack_0000007c = (char *)0x56581f;
        sprintf(&DAT_0310fdc0,"Can't find %s");
      }
      else {
        in_stack_0000007c = (char *)0x56551e;
        sprintf(&DAT_0310fdc0,"Found %s");
        g_CurrentEditingLine = (int)in_stack_0000008c;
        g_CurrentEditingColumn = (int)in_stack_00000098;
        bVar3 = false;
        DAT_0310fd4c = (uint)in_stack_00000090;
        in_stack_000000b0 = (int *)0x1;
        DAT_0310fd50 = (int)in_stack_0000008c;
      }
    }
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3d);
  if (iVar5 != 0) {
    in_stack_00000090 = (char *)0x2a;
    in_stack_0000008c = (char *)g_CKeysPtr;
    uVar6 = 1;
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar5 != 0) {
      uVar6 = 0xffffffff;
    }
    if (DAT_0310fd58 == '\0') {
      in_stack_00000098 = (char *)0x1;
      in_stack_00000090 = &DAT_0310fd58;
      in_stack_0000008c = "Find";
      shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                (g_CEditorToolsPtr,"Find",&DAT_0310fd58,100,1);
    }
    if (DAT_0310fd58 != '\0') {
      in_stack_00000090 = (char *)&stack0x000000b0;
      in_stack_0000008c = (char *)&stack0x000000ac;
      in_stack_0000007c = (char *)pCVar2;
      in_stack_00000098 = (char *)uVar6;
      iVar5 = core_script_cpp_CScript_FUN_00566cc0
                        (pCVar2,&DAT_0310fd58,uVar6 + g_CurrentEditingColumn,g_CurrentEditingLine,
                         (uint *)in_stack_0000008c,(int *)in_stack_00000090,&stack0x000000b4,uVar6);
      if (iVar5 == 0) {
        in_stack_00000098 = &DAT_0310fd58;
        in_stack_00000090 = &DAT_0310fdc0;
        in_stack_0000008c = (char *)0x56583b;
        sprintf(&DAT_0310fdc0,"Can't find %s");
      }
      else {
        in_stack_00000098 = &DAT_0310fd58;
        in_stack_00000090 = &DAT_0310fdc0;
        in_stack_0000008c = (char *)0x5655fb;
        sprintf(&DAT_0310fdc0,"Found %s");
        g_CurrentEditingLine = (int)in_stack_000000b0;
        g_CurrentEditingColumn = (int)in_stack_000000ac;
        bVar3 = false;
        DAT_0310fd4c = in_stack_000000b4;
        DAT_0310fd50 = (int)in_stack_000000b0;
      }
    }
  }
  in_stack_00000098 = (char *)0x3e;
  in_stack_00000090 = (char *)0x56563a;
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e);
  if (iVar5 != 0) {
    in_stack_00000098 = (char *)pCVar2;
    bVar3 = true;
    core_script_cpp_CScript_FUN_00565ae0(pCVar2,g_CurrentEditingColumn,g_CurrentEditingLine);
  }
  in_stack_00000098 = (char *)0x56566a;
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x40);
  if (iVar5 != 0) {
    bVar3 = true;
    core_script_cpp_CScript_FUN_00565d00(pCVar2,g_CurrentEditingColumn,g_CurrentEditingLine);
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
  if (iVar5 != 0) {
    in_stack_000000b0 = (int *)g_CurrentEditingLine;
    in_stack_000000ac = (int *)g_CurrentEditingColumn;
    core_script_cpp_CScript_FUN_00565e70(pCVar2,g_CurrentEditingColumn,g_CurrentEditingLine);
  }
  this_ptr_00 = g_ActiveButton;
  if (pCVar2 == (CScript *)g_ActiveButton) {
    if ((g_MouseButtonFlags & 1) == 0) {
      g_ActiveButton = (CEdButton *)0x0;
    }
    else {
      in_stack_000000b0 = &g_CurrentEditingLine;
      in_stack_000000ac = &g_CurrentEditingColumn;
      core_script_cpp_CScript_FUN_00566c20
                ((CScript *)g_ActiveButton,g_MouseX,g_MouseY,&g_CurrentEditingColumn,
                 &g_CurrentEditingLine);
      if (g_MouseX <= INT_031141e0) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (int *)0x0;
        core_script_cpp_CScript_editorAction_FUN_00564820
                  ((CScript *)this_ptr_00,ACTION_TYPE_CURSOR_LEFT);
      }
      if (DAT_031141e8 <= g_MouseX) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (int *)0x1;
        core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_CURSOR_RIGHT);
      }
      if (g_MouseY <= INT_031141e4) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (int *)0x2;
        core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_CURSOR_UP);
      }
      if (DAT_031141ec <= g_MouseY) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (int *)0x3;
        core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_CURSOR_DOWN);
      }
      in_stack_000000d8 = 1;
    }
  }
  else if (g_ActiveButton == (CEdButton *)0x0) {
    if ((g_MouseButtonFlags & 1) == 0) {
      if ((g_MouseButtonFlags & 2) != 0) {
        in_stack_000000b0 = &g_CurrentEditingLine;
        in_stack_000000ac = &g_CurrentEditingColumn;
        g_MouseButtonFlags = (uint)g_ActiveButton;
        iVar5 = core_script_cpp_CScript_FUN_00566c20
                          (pCVar2,g_MouseX,g_MouseY,&g_CurrentEditingColumn,&g_CurrentEditingLine);
        if (iVar5 != 0) {
          in_stack_000000b0 = (int *)g_CurrentEditingLine;
          in_stack_000000ac = (int *)g_CurrentEditingColumn;
          core_script_cpp_CScript_FUN_00565aa0(pCVar2,g_CurrentEditingColumn,g_CurrentEditingLine);
        }
      }
    }
    else {
      in_stack_000000b0 = &g_CurrentEditingLine;
      in_stack_000000ac = &g_CurrentEditingColumn;
      iVar5 = core_script_cpp_CScript_FUN_00566c20
                        (pCVar2,g_MouseX,g_MouseY,&g_CurrentEditingColumn,&g_CurrentEditingLine);
      pCVar9 = (CScript *)g_ActiveButton;
      if (iVar5 != 0) {
        in_stack_000000b0 = (int *)0x38;
        in_stack_000000ac = (int *)g_CKeysPtr;
        iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        pCVar9 = pCVar2;
        if (iVar5 != 0) {
          in_stack_000000b8 = g_CurrentEditingLine;
          in_stack_000000b4 = g_CurrentEditingColumn;
          in_stack_000000b0 = &pCVar2->script_pause_flag;
          in_stack_000000ac = (int *)0x5658ae;
          core_script_cpp_CScript_FUN_00565ae0(pCVar2,g_CurrentEditingColumn,g_CurrentEditingLine);
          g_MouseButtonFlags = (uint)this_ptr_00;
          pCVar9 = (CScript *)g_ActiveButton;
        }
      }
      g_ActiveButton = (CEdButton *)pCVar9;
      bVar3 = true;
    }
  }
  in_stack_000000b0 = &pCVar2->script_pause_flag;
  in_stack_000000ac = (int *)0x56576e;
  core_script_cpp_CScript_updateCursorBounds_FUN_00566910(pCVar2);
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            in_stack_000000b0 = (int *)0x565776;
            iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
            if (iVar5 == 0) {
              in_stack_000000b0 = &pCVar2->script_pause_flag;
              in_stack_000000ac = (int *)0x565a1c;
              core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(pCVar2);
              if (bVar3) {
                in_stack_000000b0 = (int *)0x565a67;
                core_script_cpp_FUN_005644e0();
              }
              else if ((in_stack_000000d4 != g_CurrentEditingColumn) ||
                      (in_stack_000000d0 != g_CurrentEditingLine)) {
                if (in_stack_000000d8 == 0) {
                  in_stack_000000b0 = (int *)0x565a90;
                  core_script_cpp_FUN_005644e0();
                }
                else if ((int)DAT_0310fd4c < 0) {
                  DAT_0310fd4c = in_stack_000000d4;
                  DAT_0310fd50 = in_stack_000000d0;
                }
                INT_0310fd40 = 0;
              }
              in_stack_000000ac = &pCVar2->script_pause_flag;
              core_script_cpp_CScript_updateLineMetrics_FUN_00566800(pCVar2,in_stack_000000d0);
              in_stack_000000b0 = (int *)0x565a5a;
              core_script_cpp_FUN_00564500();
              return;
            }
            in_stack_000000b0 = (int *)0x565785;
            uVar6 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
            cVar4 = (char)uVar6;
            uVar6 = uVar6 & 0xff;
            if (uVar6 != 0xd) break;
            in_stack_000000b0 = (int *)0x0;
            in_stack_000000ac = (int *)0x12;
            core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_ENTER);
          }
          if (uVar6 != 8) break;
          in_stack_000000b0 = (int *)0x0;
          in_stack_000000ac = (int *)&DAT_00000010;
          core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_BACKSPACE);
        }
      } while (((g_CharacterClassificationTable[(byte)(cVar4 + 1)] & 8) == 0) && (uVar6 != 9));
      in_stack_000000b0 = (int *)0x0;
      in_stack_000000ac = (int *)0xf;
      core_script_cpp_CScript_editorAction_FUN_00564820(pCVar2,ACTION_TYPE_CUT);
      if (g_AutoIndentEnabled == 0) break;
      in_stack_000000b0 = (int *)0x1;
      in_stack_000000ac = (int *)&stack0x000000dc;
      in_stack_000000dd = 0;
      in_stack_000000dc = cVar4;
      core_script_cpp_CScript_FUN_00566390(pCVar2,(char *)in_stack_000000ac,1);
      bVar3 = true;
    }
    in_stack_000000b0 = (int *)g_CurrentEditingLine;
    in_stack_000000ac = &pCVar2->script_pause_flag;
    core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(pCVar2,g_CurrentEditingLine);
    uVar6 = 0xffffffff;
    pcVar7 = g_CurrentLineBuffer + 1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    in_stack_000000b0 = (int *)g_CurrentEditingColumn;
    in_stack_000000ac = (int *)g_CurrentEditingLine;
    iVar10 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                       (pCVar2,g_CurrentEditingLine,g_CurrentEditingColumn);
    for (iVar5 = ~uVar6 - 1; iVar5 < iVar10; iVar5 = iVar5 + 1) {
      g_CurrentLineBuffer[iVar5 + 1] = ' ';
    }
    g_CurrentLineBuffer[iVar10 + 1] = cVar4;
    line_number = g_CurrentEditingLine;
    if (iVar5 <= iVar10) {
      iVar5 = iVar5 + 1;
    }
    in_stack_000000b0 = (int *)(iVar10 + 1);
    in_stack_000000ac = (int *)g_CurrentEditingLine;
    g_CurrentLineBuffer[iVar5 + 1] = '\0';
    g_CurrentEditingColumn =
         core_script_cpp_CScript_editorIndex2X_FUN_00566b30
                   (pCVar2,line_number,(uint)in_stack_000000b0);
    in_stack_000000b0 = (int *)g_CurrentEditingLine;
    in_stack_000000ac = &pCVar2->script_pause_flag;
    core_script_cpp_CScript_editorPutLine_FUN_005662a0(pCVar2,g_CurrentEditingLine);
    bVar3 = true;
  } while( true );
}
