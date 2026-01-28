// Name: core_script.cpp_CScript_editorAction_FUN_00564820
// Address: 00564820
// Address Range: [[00564820, 00565122]]
// Convention: unknown
// Signature: void core_script_cpp_CScript_editorAction_FUN_00564820(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_editorAction(CScript* param_1, uint param_2,
   uint param_3) */

void core_script_cpp_CScript_editorAction_FUN_00564820(void)

{
  CBitFont *font_ptr;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  int local_2c;
  int local_28;
  char *local_14;
  
  bVar12 = 0;
  switch(in_stack_00000008) {
  case 0:
    if (0 < (int)DAT_0310fd44) {
      uVar10 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      if ((int)uVar10 < 1) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x16c1;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      core_script_cpp_FUN_00566230();
      DAT_0310fd44 = DAT_0310fd44 - 1;
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_031101c0;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      if ((uVar10 <= ~uVar6 - 1) && ((&DAT_031101bf)[uVar10] == '\t')) {
        DAT_0310fd44 = DAT_0310fd44 & 0xfffffff8;
      }
    }
    break;
  case 1:
    DAT_0310fd44 = DAT_0310fd44 + 1;
    break;
  case 2:
    DAT_0310fd48 = DAT_0310fd48 + -1;
    break;
  case 3:
    DAT_0310fd48 = DAT_0310fd48 + 1;
    break;
  case 4:
    DAT_0310fd48 = DAT_0310fd48 - CEdScrollBar_0310fcd8.max_value;
    CEdScrollBar_0310fcd8.scroll_position =
         CEdScrollBar_0310fcd8.scroll_position - CEdScrollBar_0310fcd8.max_value;
    break;
  case 5:
    DAT_0310fd48 = DAT_0310fd48 + CEdScrollBar_0310fcd8.max_value;
    CEdScrollBar_0310fcd8.scroll_position =
         CEdScrollBar_0310fcd8.scroll_position + CEdScrollBar_0310fcd8.max_value;
    break;
  case 6:
    DAT_0310fd44 = 0;
    break;
  case 7:
    if (-1 < DAT_0310fd48) {
      iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                        ((CBitFont *)(in_stack_00000004 + 0x38));
      if (DAT_0310fd48 < iVar5) {
        pcVar9 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)(in_stack_00000004 + 0x38),DAT_0310fd48);
        iVar5 = -1;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
        break;
      }
    }
    DAT_0310fd44 = 0;
    break;
  case 8:
    DAT_0310fd48 = 0;
    DAT_0310fd44 = 0;
    break;
  case 9:
    iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    DAT_0310fd48 = iVar5 + 1;
    DAT_0310fd44 = 0;
    break;
  case 10:
  case 0xb:
    goto switchD_00564838_caseD_b;
  case 0xc:
    core_script_cpp_CScript_editorAction_FUN_00564820();
    core_script_cpp_CScript_editorAction_FUN_00564820();
    return;
  case 0xd:
    core_script_cpp_FUN_00564500();
    if (DAT_031141c4 < 0) {
      return;
    }
    if ((int)DAT_031141c0 < 0) {
      return;
    }
    iVar4 = 0;
    local_14 = (char *)0x0;
    iVar5 = DAT_031141c4;
    iVar8 = iVar4;
    if (DAT_031141c4 <= DAT_031141cc) {
      do {
        core_script_cpp_FUN_00564560();
        local_2c = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
        local_28 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
        core_script_cpp_FUN_00566230();
        uVar10 = 0xffffffff;
        pcVar9 = &DAT_031101c0;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        if (local_2c < 0) {
          local_2c = 0;
        }
        if ((int)(~uVar10 - 1) < local_28) {
          local_28 = ~uVar10 - 1;
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
        pcVar9 = &DAT_031101c0 + local_2c;
        pcVar11 = local_14 + iVar8;
        for (uVar10 = (uint)(local_28 - local_2c) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(uint *)pcVar11 = *(uint *)pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -8 + 4;
          pcVar11 = pcVar11 + (uint)bVar12 * -8 + 4;
        }
        for (uVar10 = local_28 - local_2c & 3; iVar2 = DAT_031141cc, uVar10 != 0;
            uVar10 = uVar10 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
          pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
        }
        iVar5 = iVar5 + 1;
        local_14[iVar3] = '\n';
        iVar8 = iVar4;
      } while (iVar5 <= iVar2);
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
  case 0xe:
    core_script_cpp_CScript_editorAction_FUN_00564820();
    shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(g_CEditorToolsPtr);
    core_script_cpp_FUN_00566390();
    return;
  case 0xf:
    core_script_cpp_FUN_00564500();
    if (DAT_031141c4 < 0) {
      return;
    }
    if ((int)DAT_031141c0 < 0) {
      return;
    }
    DAT_0310fd48 = DAT_031141c4;
    DAT_0310fd44 = DAT_031141c0;
    DAT_031141c0 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
    DAT_031141c8 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
    core_script_cpp_FUN_00566230();
    uVar10 = DAT_031141c0;
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_031101c0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    for (iVar5 = ~uVar6 - 1; iVar5 < (int)uVar10; iVar5 = iVar5 + 1) {
      (&DAT_031101c0)[iVar5] = 0x20;
    }
    pcVar9 = &DAT_00643de8;
    iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (DAT_031141cc < iVar5) {
      pcVar9 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(in_stack_00000004 + 0x38),DAT_031141cc);
    }
    uVar10 = 0xffffffff;
    pcVar11 = pcVar9;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar10 - 1;
    if (iVar5 < DAT_031141c8) {
      DAT_031141c8 = iVar5;
    }
    crt_string_c_memmove_FUN_005fe5e0
              (&DAT_031101c0 + DAT_031141c0,pcVar9 + DAT_031141c8,(iVar5 - DAT_031141c8) + 1);
    core_script_cpp_CScript_editorPutLine_FUN_005662a0();
    iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (iVar5 <= DAT_031141cc) {
      iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                        ((CBitFont *)(in_stack_00000004 + 0x38));
      DAT_031141cc = iVar5 + -1;
    }
    if (DAT_031141c4 < DAT_031141cc) {
      shape_edittool_cpp_CStrList_remove_FUN_004a2e00
                ((CStrList *)(in_stack_00000004 + 0x38),DAT_031141c4 + 1,DAT_031141cc);
    }
    core_script_cpp_FUN_005644e0();
    break;
  case 0x10:
    if ((int)DAT_0310fd44 < 1) {
      if (0 < DAT_0310fd48) {
        font_ptr = (CBitFont *)(in_stack_00000004 + 0x38);
        iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
        if (DAT_0310fd48 <= iVar5) {
          core_script_cpp_FUN_00566230();
          uVar10 = 0xffffffff;
          pcVar9 = &DAT_031101c0;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
          } while (cVar1 != '\0');
          iVar8 = ~uVar10 - 1;
          iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
          if (DAT_0310fd48 < iVar5) {
            pcVar9 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                               ((CStrList *)font_ptr,DAT_0310fd48);
            uVar6 = 0xffffffff;
            pcVar11 = pcVar9;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6 - 1;
            if (0x3fff < (int)(uVar6 + iVar8)) {
              uVar6 = 0x3fff - iVar8;
            }
            pcVar11 = &DAT_031101bf + ~uVar10;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(uint *)pcVar11 = *(uint *)pcVar9;
              pcVar9 = pcVar9 + (uint)bVar12 * -8 + 4;
              pcVar11 = pcVar11 + (uint)bVar12 * -8 + 4;
            }
            for (uVar10 = uVar6 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar11 = *pcVar9;
              pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
              pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
            }
            (&DAT_031101c0)[iVar8 + uVar6] = 0;
            core_script_cpp_CScript_editorPutLine_FUN_005662a0();
            shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                      ((CStrList *)(in_stack_00000004 + 0x38),DAT_0310fd48);
          }
        }
        DAT_0310fd48 = DAT_0310fd48 + -1;
        DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
      }
    }
    else {
      iVar5 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      if (iVar5 < 1) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x177c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      core_script_cpp_FUN_00566230();
      uVar10 = 0xffffffff;
      pcVar9 = &DAT_031101c0;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar5 + -1 < (int)(~uVar10 - 1)) {
        crt_string_c_memmove_FUN_005fe5e0
                  (&DAT_031101bf + iVar5,&DAT_031101c0 + iVar5,(~uVar10 - 1) - (iVar5 + -1));
        core_script_cpp_CScript_editorPutLine_FUN_005662a0();
      }
      DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
    }
    break;
  case 0x11:
    iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (iVar5 <= DAT_0310fd48) {
      return;
    }
    core_script_cpp_FUN_00566230();
    uVar10 = 0xffffffff;
    pcVar9 = &DAT_031101c0;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    iVar8 = ~uVar10 - 1;
    iVar5 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
    if (iVar5 < iVar8) {
      crt_string_c_memmove_FUN_005fe5e0(&DAT_031101c0 + iVar5,&DAT_031101c1 + iVar5,iVar8 - iVar5);
      core_script_cpp_CScript_editorPutLine_FUN_005662a0();
    }
    else {
      for (; iVar8 < iVar5; iVar8 = iVar8 + 1) {
        (&DAT_031101c0)[iVar8] = 0x20;
      }
      iVar5 = DAT_0310fd48 + 1;
      iVar4 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                        ((CBitFont *)(in_stack_00000004 + 0x38));
      pcVar9 = &DAT_00643e07;
      if (iVar5 < iVar4) {
        pcVar9 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)(in_stack_00000004 + 0x38),DAT_0310fd48 + 1);
      }
      pcVar11 = &DAT_031101c0 + iVar8;
      do {
        cVar1 = *pcVar9;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      core_script_cpp_CScript_editorPutLine_FUN_005662a0();
      iVar8 = DAT_0310fd48 + 1;
      iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                        ((CBitFont *)(in_stack_00000004 + 0x38));
      if (iVar8 < iVar5) {
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                  ((CStrList *)(in_stack_00000004 + 0x38),DAT_0310fd48 + 1);
      }
    }
    break;
  case 0x12:
    uVar10 = DAT_0068105c;
    if (DAT_0068105c == 0) {
      core_script_cpp_FUN_005644e0();
      DAT_0310fd48 = DAT_0310fd48 + 1;
      DAT_0310fd44 = uVar10;
    }
    else {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      while (iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                               ((CBitFont *)(in_stack_00000004 + 0x38)), iVar5 <= DAT_0310fd48) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(in_stack_00000004 + 0x38),&DAT_00643e08);
      }
      core_script_cpp_FUN_00566230();
      uVar10 = 0xffffffff;
      pcVar9 = &DAT_031101c0;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      iVar5 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      if ((int)(~uVar10 - 1) < iVar5) {
        iVar5 = ~uVar10 - 1;
      }
      shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
                ((CStrList *)(in_stack_00000004 + 0x38),DAT_0310fd48 + 1,&DAT_031101c0 + iVar5);
      (&DAT_031101c0)[iVar5] = 0;
      core_script_cpp_CScript_editorPutLine_FUN_005662a0();
      DAT_0310fd48 = DAT_0310fd48 + 1;
      DAT_0310fd44 = 0;
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x180d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CScript::editorAction - unknown action: %d parm %d",in_stack_00000008,in_stack_0000000c);
    return;
  }
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  core_script_cpp_CScript_Unk18_FUN_005669a0();
switchD_00564838_caseD_b:
  return;
}
