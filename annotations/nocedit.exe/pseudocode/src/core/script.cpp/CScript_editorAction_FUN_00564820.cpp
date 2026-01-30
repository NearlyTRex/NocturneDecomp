// Name: core_script.cpp_CScript_editorAction_FUN_00564820
// Address: 00564820
// Address Range: [[00564820, 00565122]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_editorAction_FUN_00564820(void)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_editorAction_FUN_00564820(void)

{
  CBitFont *font_ptr;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  byte bVar13;
  CScript *in_stack_00000004;
  uint in_stack_00000008;
  int local_2c;
  int local_28;
  char *local_14;
  
  bVar13 = 0;
  switch(in_stack_00000008) {
  case 0:
    if (0 < (int)DAT_0310fd44) {
      uVar11 = core_script_cpp_CScript_FUN_00566a90(in_stack_00000004,DAT_0310fd48,DAT_0310fd44);
      if ((int)uVar11 < 1) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x16c1;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      core_script_cpp_CScript_FUN_00566230(in_stack_00000004,DAT_0310fd48);
      DAT_0310fd44 = DAT_0310fd44 - 1;
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_031101c0;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
      } while (cVar1 != '\0');
      if ((uVar11 <= ~uVar6 - 1) && ((&DAT_031101bf)[uVar11] == '\t')) {
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
                        ((CBitFont *)(in_stack_00000004->unk4 + 0x20));
      if (DAT_0310fd48 < iVar5) {
        pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)(in_stack_00000004->unk4 + 0x20),DAT_0310fd48);
        uVar11 = 0xffffffff;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
        } while (cVar1 != '\0');
        DAT_0310fd44 = core_script_cpp_CScript_FUN_00566b30
                                 (in_stack_00000004,DAT_0310fd48,~uVar11 - 1);
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
                      ((CBitFont *)(in_stack_00000004->unk4 + 0x20));
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
    iVar9 = iVar4;
    if (DAT_031141c4 <= DAT_031141cc) {
      do {
        core_script_cpp_FUN_00564560();
        local_2c = core_script_cpp_CScript_FUN_00566a90(in_stack_00000004,iVar5,local_2c);
        local_28 = core_script_cpp_CScript_FUN_00566a90(in_stack_00000004,iVar5,local_28);
        core_script_cpp_CScript_FUN_00566230(in_stack_00000004,iVar5);
        uVar11 = 0xffffffff;
        pcVar10 = &DAT_031101c0;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
        } while (cVar1 != '\0');
        if (local_2c < 0) {
          local_2c = 0;
        }
        if ((int)(~uVar11 - 1) < local_28) {
          local_28 = ~uVar11 - 1;
        }
        iVar3 = (local_28 + iVar9) - local_2c;
        iVar4 = iVar3 + 1;
        local_14 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                             (local_14,iVar4,"..\\core\\script.cpp",0x172e);
        if (local_14 == (char *)0x0) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 0x172f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        pcVar10 = &DAT_031101c0 + local_2c;
        pcVar12 = local_14 + iVar9;
        for (uVar11 = (uint)(local_28 - local_2c) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(uint *)pcVar12 = *(uint *)pcVar10;
          pcVar10 = pcVar10 + (uint)bVar13 * -8 + 4;
          pcVar12 = pcVar12 + (uint)bVar13 * -8 + 4;
        }
        for (uVar11 = local_28 - local_2c & 3; iVar2 = DAT_031141cc, uVar11 != 0;
            uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
          pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
        }
        iVar5 = iVar5 + 1;
        local_14[iVar3] = '\n';
        iVar9 = iVar4;
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
    iVar5 = 1;
    pcVar10 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(g_CEditorToolsPtr);
    core_script_cpp_CScript_FUN_00566390(in_stack_00000004,pcVar10,iVar5);
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
    DAT_031141c0 = core_script_cpp_CScript_FUN_00566a90(in_stack_00000004,DAT_031141c4,DAT_031141c0)
    ;
    DAT_031141c8 = core_script_cpp_CScript_FUN_00566a90(in_stack_00000004,DAT_031141cc,DAT_031141c8)
    ;
    core_script_cpp_CScript_FUN_00566230(in_stack_00000004,DAT_031141c4);
    uVar11 = DAT_031141c0;
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_031101c0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    for (iVar5 = ~uVar6 - 1; iVar5 < (int)uVar11; iVar5 = iVar5 + 1) {
      (&DAT_031101c0)[iVar5] = 0x20;
    }
    pcVar10 = &DAT_00643de8;
    iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004->unk4 + 0x20));
    if (DAT_031141cc < iVar5) {
      pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                          ((CStrList *)(in_stack_00000004->unk4 + 0x20),DAT_031141cc);
    }
    uVar11 = 0xffffffff;
    pcVar12 = pcVar10;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar11 - 1;
    if (iVar5 < DAT_031141c8) {
      DAT_031141c8 = iVar5;
    }
    memmove
              (&DAT_031101c0 + DAT_031141c0,pcVar10 + DAT_031141c8,(iVar5 - DAT_031141c8) + 1);
    core_script_cpp_CScript_editorPutLine_FUN_005662a0(in_stack_00000004,DAT_031141c4);
    iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004->unk4 + 0x20));
    if (iVar5 <= DAT_031141cc) {
      iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                        ((CBitFont *)(in_stack_00000004->unk4 + 0x20));
      DAT_031141cc = iVar5 + -1;
    }
    if (DAT_031141c4 < DAT_031141cc) {
      shape_edittool_cpp_CStrList_remove_FUN_004a2e00
                ((CStrList *)(in_stack_00000004->unk4 + 0x20),DAT_031141c4 + 1,DAT_031141cc);
    }
    core_script_cpp_FUN_005644e0();
    break;
  case 0x10:
    if ((int)DAT_0310fd44 < 1) {
      if (0 < DAT_0310fd48) {
        font_ptr = (CBitFont *)(in_stack_00000004->unk4 + 0x20);
        uVar11 = 0;
        iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
        if (DAT_0310fd48 <= iVar5) {
          core_script_cpp_CScript_FUN_00566230(in_stack_00000004,DAT_0310fd48 + -1);
          uVar6 = 0xffffffff;
          pcVar10 = &DAT_031101c0;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
          } while (cVar1 != '\0');
          uVar11 = ~uVar6 - 1;
          iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
          if (DAT_0310fd48 < iVar5) {
            pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                ((CStrList *)font_ptr,DAT_0310fd48);
            uVar7 = 0xffffffff;
            pcVar12 = pcVar10;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7 - 1;
            if (0x3fff < (int)(uVar7 + uVar11)) {
              uVar7 = 0x3fff - uVar11;
            }
            pcVar12 = &DAT_031101bf + ~uVar6;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(uint *)pcVar12 = *(uint *)pcVar10;
              pcVar10 = pcVar10 + (uint)bVar13 * -8 + 4;
              pcVar12 = pcVar12 + (uint)bVar13 * -8 + 4;
            }
            for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar12 = *pcVar10;
              pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
              pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
            }
            (&DAT_031101c0)[uVar11 + uVar7] = 0;
            core_script_cpp_CScript_editorPutLine_FUN_005662a0(in_stack_00000004,DAT_0310fd48 + -1);
            shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                      ((CStrList *)(in_stack_00000004->unk4 + 0x20),DAT_0310fd48);
          }
        }
        DAT_0310fd48 = DAT_0310fd48 + -1;
        DAT_0310fd44 = core_script_cpp_CScript_FUN_00566b30(in_stack_00000004,DAT_0310fd48,uVar11);
      }
    }
    else {
      iVar5 = core_script_cpp_CScript_FUN_00566a90(in_stack_00000004,DAT_0310fd48,DAT_0310fd44);
      if (iVar5 < 1) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x177c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      core_script_cpp_CScript_FUN_00566230(in_stack_00000004,DAT_0310fd48);
      uVar6 = iVar5 - 1;
      uVar11 = 0xffffffff;
      pcVar10 = &DAT_031101c0;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
      } while (cVar1 != '\0');
      if ((int)uVar6 < (int)(~uVar11 - 1)) {
        memmove
                  (&DAT_031101bf + iVar5,&DAT_031101c0 + iVar5,(~uVar11 - 1) - uVar6);
        core_script_cpp_CScript_editorPutLine_FUN_005662a0(in_stack_00000004,DAT_0310fd48);
      }
      DAT_0310fd44 = core_script_cpp_CScript_FUN_00566b30(in_stack_00000004,DAT_0310fd48,uVar6);
    }
    break;
  case 0x11:
    iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004->unk4 + 0x20));
    if (iVar5 <= DAT_0310fd48) {
      return;
    }
    core_script_cpp_CScript_FUN_00566230(in_stack_00000004,DAT_0310fd48);
    uVar11 = 0xffffffff;
    pcVar10 = &DAT_031101c0;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    iVar9 = ~uVar11 - 1;
    iVar5 = core_script_cpp_CScript_FUN_00566a90(in_stack_00000004,DAT_0310fd48,DAT_0310fd44);
    if (iVar5 < iVar9) {
      memmove(&DAT_031101c0 + iVar5,&DAT_031101c1 + iVar5,iVar9 - iVar5);
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(in_stack_00000004,DAT_0310fd48);
    }
    else {
      for (; iVar9 < iVar5; iVar9 = iVar9 + 1) {
        (&DAT_031101c0)[iVar9] = 0x20;
      }
      iVar5 = DAT_0310fd48 + 1;
      iVar4 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                        ((CBitFont *)(in_stack_00000004->unk4 + 0x20));
      pcVar10 = &DAT_00643e07;
      if (iVar5 < iVar4) {
        pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)(in_stack_00000004->unk4 + 0x20),DAT_0310fd48 + 1);
      }
      pcVar12 = &DAT_031101c0 + iVar9;
      do {
        cVar1 = *pcVar10;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(in_stack_00000004,DAT_0310fd48);
      iVar9 = DAT_0310fd48 + 1;
      iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                        ((CBitFont *)(in_stack_00000004->unk4 + 0x20));
      if (iVar9 < iVar5) {
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                  ((CStrList *)(in_stack_00000004->unk4 + 0x20),DAT_0310fd48 + 1);
      }
    }
    break;
  case 0x12:
    uVar11 = DAT_0068105c;
    if (DAT_0068105c == 0) {
      core_script_cpp_FUN_005644e0();
      DAT_0310fd48 = DAT_0310fd48 + 1;
      DAT_0310fd44 = uVar11;
    }
    else {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      while (iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                               ((CBitFont *)(in_stack_00000004->unk4 + 0x20)), iVar5 <= DAT_0310fd48
            ) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(in_stack_00000004->unk4 + 0x20),&DAT_00643e08);
      }
      core_script_cpp_CScript_FUN_00566230(in_stack_00000004,DAT_0310fd48);
      uVar11 = 0xffffffff;
      pcVar10 = &DAT_031101c0;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
      } while (cVar1 != '\0');
      iVar5 = core_script_cpp_CScript_FUN_00566a90(in_stack_00000004,DAT_0310fd48,DAT_0310fd44);
      if ((int)(~uVar11 - 1) < iVar5) {
        iVar5 = ~uVar11 - 1;
      }
      shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
                ((CStrList *)(in_stack_00000004->unk4 + 0x20),DAT_0310fd48 + 1,&DAT_031101c0 + iVar5
                );
      iVar9 = DAT_0310fd48;
      (&DAT_031101c0)[iVar5] = 0;
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(in_stack_00000004,iVar9);
      DAT_0310fd48 = DAT_0310fd48 + 1;
      DAT_0310fd44 = 0;
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x180d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorAction - unknown action: %d parm %d");
    return;
  }
  core_script_cpp_CScript_FUN_00566910(in_stack_00000004);
  core_script_cpp_CScript_FUN_005669a0(in_stack_00000004);
switchD_00564838_caseD_b:
  return;
}
