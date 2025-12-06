// Name: core_script.cpp_CScript_editorAction_FUN_00564820
// Address: 00564820
// Address Range: [[00564820, 00565122]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_editorAction_FUN_00564820()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_editorAction(CScript* param_1, uint param_2,
   uint param_3) */

void core_script_cpp_CScript_editorAction_FUN_00564820(void)

{
  char cVar1;
  int iVar2;
  byte *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  CStrList *unaff_EBP;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  void *unaff_EDI;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_ffffffd8;
  int in_stack_ffffffe4;
  void *local_18;
  CBitFont *in_stack_ffffffec;
  
  bVar14 = 0;
  switch(in_stack_00000008) {
  case 0:
    if (0 < (int)DAT_0310fd44) {
      uVar11 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      if ((int)uVar11 < 1) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x16c1;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      core_script_cpp_FUN_00566230();
      DAT_0310fd44 = DAT_0310fd44 - 1;
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_031101c0;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar14 * -2 + 1;
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
    DAT_0310fd48 = DAT_0310fd48 - DAT_0310fce0;
    DAT_0310fcd8 = DAT_0310fcd8 - DAT_0310fce0;
    break;
  case 5:
    DAT_0310fd48 = DAT_0310fd48 + DAT_0310fce0;
    DAT_0310fcd8 = DAT_0310fcd8 + DAT_0310fce0;
    break;
  case 6:
    DAT_0310fd44 = 0;
    break;
  case 7:
    if (-1 < DAT_0310fd48) {
      iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                        ((CBitFont *)(in_stack_00000004 + 0x38));
      if (DAT_0310fd48 < iVar5) {
        pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)(in_stack_00000004 + 0x38),DAT_0310fd48);
        iVar5 = -1;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar14 * -2 + 1;
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
    iVar9 = 0;
    pcVar10 = (char *)0x0;
    iVar5 = DAT_031141c4;
    iVar8 = iVar9;
    if (DAT_031141c4 <= DAT_031141cc) {
      do {
        iVar9 = in_stack_ffffffe4;
        puVar3 = &stack0xffffffdc;
        core_script_cpp_FUN_00564560();
        core_script_cpp_CScript_editorX2Index_FUN_00566a90();
        iVar2 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
        core_script_cpp_FUN_00566230();
        uVar11 = 0xffffffff;
        pcVar13 = &DAT_031101c0;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        if ((int)(~uVar11 - 1) < (int)puVar3) {
          puVar3 = (byte *)(~uVar11 - 1);
        }
        puVar3 = puVar3 + (iVar8 - iVar2) + 1;
        pvVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                           (local_18,(int)puVar3,"..\\core\\script.cpp",0x172e);
        if (pvVar4 == (void *)0x0) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 0x172f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        pcVar13 = &DAT_031101c0 + in_stack_ffffffd8;
        pcVar12 = pcVar10 + iVar8;
        for (uVar11 = (uint)((int)puVar3 - in_stack_ffffffd8) >> 2; uVar11 != 0; uVar11 = uVar11 - 1
            ) {
          *(uint *)pcVar12 = *(uint *)pcVar13;
          pcVar13 = pcVar13 + (uint)bVar14 * -8 + 4;
          pcVar12 = pcVar12 + (uint)bVar14 * -8 + 4;
        }
        for (uVar11 = (int)puVar3 - in_stack_ffffffd8 & 3; iVar2 = DAT_031141cc, uVar11 != 0;
            uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
          pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
        }
        iVar5 = iVar5 + 1;
        pcVar10[iVar9 + -1] = '\n';
        iVar8 = iVar9;
        in_stack_ffffffe4 = iVar9;
      } while (iVar5 <= iVar2);
    }
    if (pcVar10 != (char *)0x0) {
      pcVar10[iVar9 + -1] = '\0';
    }
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(g_CEditorToolsPtr,pcVar10);
    if (unaff_EDI == (void *)0x0) {
      return;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(unaff_EDI,"..\\core\\script.cpp",0x173c);
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
    uVar11 = DAT_031141c0;
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_031101c0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar14 * -2 + 1;
    } while (cVar1 != '\0');
    for (iVar5 = ~uVar6 - 1; iVar5 < (int)uVar11; iVar5 = iVar5 + 1) {
      (&DAT_031101c0)[iVar5] = 0x20;
    }
    pcVar10 = &DAT_00643de8;
    iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (DAT_031141cc < iVar5) {
      pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                          ((CStrList *)(in_stack_00000004 + 0x38),DAT_031141cc);
    }
    uVar11 = 0xffffffff;
    pcVar13 = pcVar10;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar11 - 1;
    if (iVar5 < DAT_031141c8) {
      DAT_031141c8 = iVar5;
    }
    crt_string_c_memmove_FUN_005fe5e0
              (&DAT_031101c0 + DAT_031141c0,pcVar10 + DAT_031141c8,(iVar5 - DAT_031141c8) + 1);
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
        iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                          ((CBitFont *)(in_stack_00000004 + 0x38));
        if (DAT_0310fd48 <= iVar5) {
          core_script_cpp_FUN_00566230();
          uVar11 = 0xffffffff;
          pcVar10 = &DAT_031101c0;
          do {
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + (uint)bVar14 * -2 + 1;
          } while (cVar1 != '\0');
          iVar8 = ~uVar11 - 1;
          iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(in_stack_ffffffec);
          if (DAT_0310fd48 < iVar5) {
            pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(unaff_EBP,DAT_0310fd48);
            uVar6 = 0xffffffff;
            pcVar13 = pcVar10;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6 - 1;
            if (0x3fff < (int)(uVar6 + iVar8)) {
              uVar6 = 0x3fff - iVar8;
            }
            pcVar13 = &DAT_031101bf + ~uVar11;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(uint *)pcVar13 = *(uint *)pcVar10;
              pcVar10 = pcVar10 + (uint)bVar14 * -8 + 4;
              pcVar13 = pcVar13 + (uint)bVar14 * -8 + 4;
            }
            for (uVar11 = uVar6 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar13 = *pcVar10;
              pcVar10 = pcVar10 + (uint)bVar14 * -2 + 1;
              pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
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
      uVar11 = 0xffffffff;
      pcVar10 = &DAT_031101c0;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar14 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar5 + -1 < (int)(~uVar11 - 1)) {
        crt_string_c_memmove_FUN_005fe5e0
                  (&DAT_031101bf + iVar5,&DAT_031101c0 + iVar5,(~uVar11 - 1) - (iVar5 + -1));
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
    uVar11 = 0xffffffff;
    pcVar10 = &DAT_031101c0;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar14 * -2 + 1;
    } while (cVar1 != '\0');
    iVar8 = ~uVar11 - 1;
    iVar5 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
    if (iVar5 < iVar8) {
      crt_string_c_memmove_FUN_005fe5e0(&DAT_031101c0 + iVar5,&DAT_031101c1 + iVar5,iVar8 - iVar5);
      core_script_cpp_CScript_editorPutLine_FUN_005662a0();
    }
    else {
      for (; iVar8 < iVar5; iVar8 = iVar8 + 1) {
        (&DAT_031101c0)[iVar8] = 0x20;
      }
      iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                        ((CBitFont *)(in_stack_00000004 + 0x38));
      pcVar10 = &DAT_00643e07;
      if ((int)unaff_EBP < iVar5) {
        pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)(in_stack_00000004 + 0x38),DAT_0310fd48 + 1);
      }
      pcVar13 = &DAT_031101c0 + iVar8;
      do {
        cVar1 = *pcVar10;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
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
    uVar11 = DAT_0068105c;
    if (DAT_0068105c == 0) {
      core_script_cpp_FUN_005644e0();
      DAT_0310fd48 = DAT_0310fd48 + 1;
      DAT_0310fd44 = uVar11;
    }
    else {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      while (iVar5 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                               ((CBitFont *)(in_stack_00000004 + 0x38)), iVar5 <= DAT_0310fd48) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(in_stack_00000004 + 0x38),&DAT_00643e08);
      }
      core_script_cpp_FUN_00566230();
      uVar11 = 0xffffffff;
      pcVar10 = &DAT_031101c0;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar14 * -2 + 1;
      } while (cVar1 != '\0');
      iVar5 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      if ((int)(~uVar11 - 1) < iVar5) {
        iVar5 = ~uVar11 - 1;
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
