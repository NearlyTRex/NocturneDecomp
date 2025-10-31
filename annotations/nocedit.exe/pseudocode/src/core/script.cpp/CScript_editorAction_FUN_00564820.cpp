// Name: core_script.cpp_CScript_editorAction_FUN_00564820
// Address: 00564820
// Address Range: [[00564820, 00565122]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_editorAction_FUN_00564820()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565722 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005647d0 = 0056483f
//   TerminatedCString s_core_script_cpp_00643d82
//   TerminatedCString s_Hell_froze_00643d95
//   TerminatedCString s_core_script_cpp_00643da0
//   TerminatedCString s_core_script_cpp_00643db3
//   TerminatedCString s_Out_of_memory_00643dc6
//   TerminatedCString s_core_script_cpp_00643dd5
//   undefined1 DAT_00643de8
//   TerminatedCString s_core_script_cpp_00643de9
//   TerminatedCString s_Hell_froze_00643dfc
//   undefined1 DAT_00643e07
//   undefined1 DAT_00643e08
//   TerminatedCString s_core_script_cpp_00643e09
//   TerminatedCString s_CScript_editorAction_unk_00643e1c
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   undefined4 DAT_0068105c
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_0310fcd8
//   undefined4 DAT_0310fce0
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
//   undefined4 DAT_031101bf
//   undefined1 DAT_031101c0
//   undefined1 DAT_031101c1
//   undefined4 DAT_031101c2
//   undefined4 DAT_031101c3
//   undefined1 DAT_031101c4
//   undefined4 DAT_031101c5
//   undefined4 DAT_031141c0
//   undefined4 DAT_031141c4
//   undefined4 DAT_031141c8
//   undefined4 DAT_031141cc
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   core_script.cpp_CScript_Unk18_FUN_005669a0
//   core_script.cpp_FUN_005644e0
//   core_script.cpp_FUN_00564500
//   core_script.cpp_FUN_00564560
//   core_script.cpp_FUN_00566230
//   core_script.cpp_FUN_00566390
//   crt_string.c_memmove_FUN_005fe5e0
//   shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
//   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
//   shape_edittool.cpp_CStrList_remove_FUN_004a2e00
//   shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_editorAction(CScript* param_1, undefined4 param_2,
   undefined4 param_3) */

void core_script_cpp_CScript_editorAction_FUN_00564820(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
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
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
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
          puVar3 = (undefined1 *)(~uVar11 - 1);
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
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar13;
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
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
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


// Assembly code:
// 00564820: PUSH EBX
//   Label: core_script.cpp_CScript_editorAction_FUN_00564820
// 00564821: PUSH ESI
// 00564822: PUSH EDI
// 00564823: PUSH EBP
// 00564824: SUB ESP,0x1c
// 00564827: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0056482b: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0056482f: CMP EAX,0x12
// 00564832: JA 0x005650f2
//   XREF to: 005650f2 (CONDITIONAL_JUMP)
// 00564838: JMP dword ptr [EAX*0x4 + 0x5647d0]
//   Label: switchD
//   XREF to: 0056483f (COMPUTED_JUMP)
//   XREF to: 005648d9 (COMPUTED_JUMP)
//   XREF to: 005648e1 (COMPUTED_JUMP)
//   XREF to: 005648f1 (COMPUTED_JUMP)
//   XREF to: 00564901 (COMPUTED_JUMP)
//   XREF to: 00564911 (COMPUTED_JUMP)
//   XREF to: 00564935 (COMPUTED_JUMP)
//   XREF to: 0056495c (COMPUTED_JUMP)
//   XREF to: 0056496a (COMPUTED_JUMP)
//   XREF to: 005649c6 (COMPUTED_JUMP)
//   XREF to: 005649da (COMPUTED_JUMP)
//   XREF to: 005649f9 (COMPUTED_JUMP)
//   XREF to: 00564a1b (COMPUTED_JUMP)
//   XREF to: 00564ba1 (COMPUTED_JUMP)
//   XREF to: 00564bd0 (COMPUTED_JUMP)
//   XREF to: 00564d34 (COMPUTED_JUMP)
//   XREF to: 00564eeb (COMPUTED_JUMP)
//   XREF to: 00565014 (COMPUTED_JUMP)
//   XREF to: 005647d0 (DATA)
// 0056483f: MOV EDI,dword ptr [0x0310fd44]
//   Label: caseD_0
//   XREF to: 0310fd44 (READ)
// 00564845: TEST EDI,EDI
// 00564847: JLE 0x005648c7
//   XREF to: 005648c7 (CONDITIONAL_JUMP)
// 0056484d: PUSH EDI
// 0056484e: MOV EDX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564854: PUSH EDX
// 00564855: PUSH EBP
// 00564856: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 0056485b: ADD ESP,0xc
// 0056485e: MOV EBX,EAX
// 00564860: CMP EAX,0x1
// 00564863: JGE 0x00564889
//   XREF to: 00564889 (CONDITIONAL_JUMP)
// 00564865: MOV ECX,0x643d82
//   XREF to: 00643d82 (PARAM)
// 0056486a: MOV EAX,0x643d95
//   XREF to: 00643d95 (PARAM)
// 0056486f: MOV ESI,0x16c1
// 00564874: PUSH EAX
//   XREF to: 00643d95 (DATA)
// 00564875: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0056487b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00564881: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00564886: ADD ESP,0x4
// 00564889: MOV EDI,dword ptr [0x0310fd48]
//   Label: LAB_00564889
//   XREF to: 0310fd48 (READ)
// 0056488f: PUSH EDI
// 00564890: PUSH EBP
// 00564891: CALL core_script.cpp_FUN_00566230
//   XREF to: 00566230 (UNCONDITIONAL_CALL)
// 00564896: MOV EAX,[0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 0056489b: ADD ESP,0x8
// 0056489e: DEC EAX
// 0056489f: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 005648a4: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 005648a9: SUB ECX,ECX
// 005648ab: DEC ECX
// 005648ac: XOR EAX,EAX
// 005648ae: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 005648b0: NOT ECX
// 005648b2: DEC ECX
// 005648b3: CMP EBX,ECX
// 005648b5: JA 0x005648c7
//   XREF to: 005648c7 (CONDITIONAL_JUMP)
// 005648b7: CMP byte ptr [EBX + 0x31101bf],0x9
//   XREF to: 031101bf (DATA)
// 005648be: JNZ 0x005648c7
//   XREF to: 005648c7 (CONDITIONAL_JUMP)
// 005648c0: AND byte ptr [0x0310fd44],0xf8
//   XREF to: 0310fd44 (READ_WRITE)
// 005648c7: PUSH EBP
//   Label: LAB_005648c7
// 005648c8: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   Label: LAB_005648c8
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 005648cd: ADD ESP,0x4
// 005648d0: PUSH EBP
// 005648d1: CALL core_script.cpp_CScript_Unk18_FUN_005669a0
//   XREF to: 005669a0 (UNCONDITIONAL_CALL)
// 005648d6: ADD ESP,0x4
// 005648d9: ADD ESP,0x1c
//   Label: caseD_b
// 005648dc: POP EBP
// 005648dd: POP EDI
// 005648de: POP ESI
// 005648df: POP EBX
// 005648e0: RET
// 005648e1: MOV ESI,dword ptr [0x0310fd44]
//   Label: caseD_1
//   XREF to: 0310fd44 (READ)
// 005648e7: INC ESI
// 005648e8: PUSH EBP
// 005648e9: MOV dword ptr [0x0310fd44],ESI
//   XREF to: 0310fd44 (WRITE)
// 005648ef: JMP 0x005648c8
//   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
// 005648f1: MOV EBX,dword ptr [0x0310fd48]
//   Label: caseD_2
//   XREF to: 0310fd48 (READ)
// 005648f7: DEC EBX
// 005648f8: PUSH EBP
// 005648f9: MOV dword ptr [0x0310fd48],EBX
//   XREF to: 0310fd48 (WRITE)
// 005648ff: JMP 0x005648c8
//   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
// 00564901: MOV ECX,dword ptr [0x0310fd48]
//   Label: caseD_3
//   XREF to: 0310fd48 (READ)
// 00564907: INC ECX
// 00564908: PUSH EBP
// 00564909: MOV dword ptr [0x0310fd48],ECX
//   XREF to: 0310fd48 (WRITE)
// 0056490f: JMP 0x005648c8
//   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
// 00564911: MOV EAX,[0x0310fce0]
//   Label: caseD_4
//   XREF to: 0310fce0 (READ)
// 00564916: MOV EDI,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 0056491c: MOV EDX,dword ptr [0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 00564922: PUSH EBP
// 00564923: SUB EDI,EAX
// 00564925: SUB EDX,EAX
// 00564927: MOV dword ptr [0x0310fd48],EDI
//   XREF to: 0310fd48 (WRITE)
// 0056492d: MOV dword ptr [0x0310fcd8],EDX
//   XREF to: 0310fcd8 (WRITE)
// 00564933: JMP 0x005648c8
//   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
// 00564935: MOV EAX,[0x0310fce0]
//   Label: caseD_5
//   XREF to: 0310fce0 (READ)
// 0056493a: MOV EBX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564940: MOV ESI,dword ptr [0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 00564946: PUSH EBP
// 00564947: ADD EBX,EAX
// 00564949: ADD ESI,EAX
// 0056494b: MOV dword ptr [0x0310fd48],EBX
//   XREF to: 0310fd48 (WRITE)
// 00564951: MOV dword ptr [0x0310fcd8],ESI
//   XREF to: 0310fcd8 (WRITE)
// 00564957: JMP 0x005648c8
//   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
// 0056495c: XOR ECX,ECX
//   Label: caseD_6
// 0056495e: PUSH EBP
// 0056495f: MOV dword ptr [0x0310fd44],ECX
//   XREF to: 0310fd44 (WRITE)
// 00564965: JMP 0x005648c8
//   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
// 0056496a: CMP dword ptr [0x0310fd48],0x0
//   Label: caseD_7
//   XREF to: 0310fd48 (READ)
// 00564971: JGE 0x00564980
//   XREF to: 00564980 (CONDITIONAL_JUMP)
// 00564973: XOR EDX,EDX
//   Label: LAB_00564973
// 00564975: MOV dword ptr [0x0310fd44],EDX
//   XREF to: 0310fd44 (WRITE)
// 0056497b: JMP 0x005648c7
//   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
// 00564980: LEA EBX,[EBP + 0x38]
//   Label: LAB_00564980
// 00564983: PUSH EBX
// 00564984: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00564989: MOV ESI,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 0056498f: ADD ESP,0x4
// 00564992: CMP EAX,ESI
// 00564994: JLE 0x00564973
//   XREF to: 00564973 (CONDITIONAL_JUMP)
// 00564996: PUSH ESI
// 00564997: PUSH EBX
// 00564998: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0056499d: ADD ESP,0x8
// 005649a0: MOV EDI,EAX
// 005649a2: SUB ECX,ECX
// 005649a4: DEC ECX
// 005649a5: XOR EAX,EAX
// 005649a7: SCASB.REPNE ES:EDI
// 005649a9: NOT ECX
// 005649ab: DEC ECX
// 005649ac: PUSH ECX
// 005649ad: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005649b2: PUSH EAX
// 005649b3: PUSH EBP
// 005649b4: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 005649b9: ADD ESP,0xc
// 005649bc: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 005649c1: JMP 0x005648c7
//   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
// 005649c6: XOR EDX,EDX
//   Label: caseD_8
// 005649c8: PUSH EBP
// 005649c9: MOV dword ptr [0x0310fd48],EDX
//   XREF to: 0310fd48 (WRITE)
// 005649cf: MOV dword ptr [0x0310fd44],EDX
//   XREF to: 0310fd44 (WRITE)
// 005649d5: JMP 0x005648c8
//   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
// 005649da: LEA EAX,[EBP + 0x38]
//   Label: caseD_9
// 005649dd: PUSH EAX
// 005649de: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 005649e3: INC EAX
// 005649e4: ADD ESP,0x4
// 005649e7: MOV [0x0310fd48],EAX
//   XREF to: 0310fd48 (WRITE)
// 005649ec: XOR EAX,EAX
// 005649ee: PUSH EBP
// 005649ef: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 005649f4: JMP 0x005648c8
//   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
// 005649f9: PUSH 0x0
//   Label: caseD_c
// 005649fb: PUSH 0xd
// 005649fd: PUSH EBP
// 005649fe: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 00564a03: ADD ESP,0xc
// 00564a06: PUSH 0x0
// 00564a08: PUSH 0xf
// 00564a0a: PUSH EBP
// 00564a0b: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 00564a10: ADD ESP,0xc
// 00564a13: ADD ESP,0x1c
// 00564a16: POP EBP
// 00564a17: POP EDI
// 00564a18: POP ESI
// 00564a19: POP EBX
// 00564a1a: RET
// 00564a1b: CALL core_script.cpp_FUN_00564500
//   Label: caseD_d
//   XREF to: 00564500 (UNCONDITIONAL_CALL)
// 00564a20: MOV EDX,dword ptr [0x031141c4]
//   XREF to: 031141c4 (READ)
// 00564a26: TEST EDX,EDX
// 00564a28: JL 0x005648d9
//   XREF to: 005648d9 (CONDITIONAL_JUMP)
// 00564a2e: CMP dword ptr [0x031141c0],0x0
//   XREF to: 031141c0 (READ)
// 00564a35: JL 0x005648d9
//   XREF to: 005648d9 (CONDITIONAL_JUMP)
// 00564a3b: MOV EDI,dword ptr [0x031141cc]
//   XREF to: 031141cc (READ)
// 00564a41: XOR EBX,EBX
// 00564a43: XOR ESI,ESI
// 00564a45: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00564a49: MOV EBX,EDX
// 00564a4b: CMP EDX,EDI
// 00564a4d: JG 0x00564b4e
//   XREF to: 00564b4e (CONDITIONAL_JUMP)
// 00564a53: LEA EAX,[ESP + 0x4]
//   Label: LAB_00564a53
//   XREF to: Stack[-0x28] (DATA)
// 00564a57: PUSH EAX
// 00564a58: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2c] (DATA)
// 00564a5c: PUSH EAX
// 00564a5d: PUSH EBX
// 00564a5e: CALL core_script.cpp_FUN_00564560
//   XREF to: 00564560 (UNCONDITIONAL_CALL)
// 00564a63: ADD ESP,0xc
// 00564a66: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 00564a69: PUSH EDI
// 00564a6a: PUSH EBX
// 00564a6b: PUSH EBP
// 00564a6c: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00564a71: ADD ESP,0xc
// 00564a74: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2c] (DATA)
// 00564a77: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 00564a7b: PUSH EAX
// 00564a7c: PUSH EBX
// 00564a7d: PUSH EBP
// 00564a7e: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00564a83: ADD ESP,0xc
// 00564a86: PUSH EBX
// 00564a87: PUSH EBP
// 00564a88: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00564a8c: CALL core_script.cpp_FUN_00566230
//   XREF to: 00566230 (UNCONDITIONAL_CALL)
// 00564a91: ADD ESP,0x8
// 00564a94: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564a99: SUB ECX,ECX
// 00564a9b: DEC ECX
// 00564a9c: XOR EAX,EAX
// 00564a9e: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 00564aa0: NOT ECX
// 00564aa2: DEC ECX
// 00564aa3: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x2c] (DATA)
// 00564aa7: JL 0x00564b97
//   XREF to: 00564b97 (CONDITIONAL_JUMP)
// 00564aad: CMP ECX,dword ptr [ESP + 0x4]
//   Label: LAB_00564aad
//   XREF to: Stack[-0x28] (READ)
// 00564ab1: JGE 0x00564ab7
//   XREF to: 00564ab7 (CONDITIONAL_JUMP)
// 00564ab3: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00564ab7: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00564ab7
//   XREF to: Stack[-0x28] (READ)
// 00564abb: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 00564abe: ADD EAX,ESI
// 00564ac0: PUSH 0x172e
// 00564ac5: SUB EAX,EDX
// 00564ac7: PUSH 0x643da0
//   XREF to: 00643da0 (DATA)
// 00564acc: INC EAX
// 00564acd: PUSH EAX
// 00564ace: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00564ad2: PUSH EDI
// 00564ad3: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00564ad7: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 00564adc: ADD ESP,0x10
// 00564adf: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00564ae3: TEST EAX,EAX
// 00564ae5: JNZ 0x00564b09
//   XREF to: 00564b09 (CONDITIONAL_JUMP)
// 00564ae7: MOV EAX,0x643db3
//   XREF to: 00643db3 (PARAM)
// 00564aec: MOV EDX,0x172f
// 00564af1: PUSH 0x643dc6
//   XREF to: 00643dc6 (DATA)
// 00564af6: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00564afb: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00564b01: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00564b06: ADD ESP,0x4
// 00564b09: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_00564b09
//   XREF to: Stack[-0x28] (READ)
// 00564b0d: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 00564b10: MOV EAX,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564b15: SUB ECX,EDI
// 00564b17: ADD EAX,EDI
// 00564b19: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 00564b1d: ADD EDI,ESI
// 00564b1f: MOV ESI,EAX
// 00564b21: PUSH EDI
// 00564b22: MOV EAX,ECX
// 00564b24: SHR ECX,0x2
// 00564b27: MOVSD.REP ES:EDI,ESI
//   XREF to: 031101c0 (DATA)
//   XREF to: 031101c4 (DATA)
// 00564b29: MOV CL,AL
// 00564b2b: AND CL,0x3
// 00564b2e: MOVSB.REP ES:EDI,ESI
//   XREF to: 031101c0 (DATA)
//   XREF to: 031101c4 (DATA)
//   XREF to: 031101c5 (DATA)
// 00564b30: POP EDI
// 00564b31: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 00564b35: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 00564b39: ADD EAX,ESI
// 00564b3b: INC EBX
// 00564b3c: MOV EDI,dword ptr [0x031141cc]
//   XREF to: 031141cc (READ)
// 00564b42: MOV byte ptr [EAX + -0x1],0xa
// 00564b46: CMP EBX,EDI
// 00564b48: JLE 0x00564a53
//   XREF to: 00564a53 (CONDITIONAL_JUMP)
// 00564b4e: MOV EBP,dword ptr [ESP + 0x18]
//   Label: LAB_00564b4e
//   XREF to: Stack[-0x14] (READ)
// 00564b52: TEST EBP,EBP
// 00564b54: JZ 0x00564b5c
//   XREF to: 00564b5c (CONDITIONAL_JUMP)
// 00564b56: ADD ESI,EBP
// 00564b58: MOV byte ptr [ESI + -0x1],0x0
// 00564b5c: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_00564b5c
//   XREF to: Stack[-0x14] (READ)
// 00564b60: PUSH EDX
// 00564b61: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00564b67: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00564b68: CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)
// 00564b6d: ADD ESP,0x8
// 00564b70: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 00564b74: TEST EBX,EBX
// 00564b76: JZ 0x005648d9
//   XREF to: 005648d9 (CONDITIONAL_JUMP)
// 00564b7c: PUSH 0x173c
// 00564b81: PUSH 0x643dd5
//   XREF to: 00643dd5 (DATA)
// 00564b86: PUSH EBX
// 00564b87: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00564b8c: ADD ESP,0xc
// 00564b8f: ADD ESP,0x1c
// 00564b92: POP EBP
// 00564b93: POP EDI
// 00564b94: POP ESI
// 00564b95: POP EBX
// 00564b96: RET
// 00564b97: XOR EDI,EDI
//   Label: LAB_00564b97
// 00564b99: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x2c] (DATA)
// 00564b9c: JMP 0x00564aad
//   XREF to: 00564aad (UNCONDITIONAL_JUMP)
// 00564ba1: PUSH 0x0
//   Label: caseD_e
// 00564ba3: PUSH 0xf
// 00564ba5: PUSH EBP
// 00564ba6: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 00564bab: ADD ESP,0xc
// 00564bae: PUSH 0x1
// 00564bb0: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00564bb5: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00564bb6: CALL shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
//   XREF to: 004a1b30 (UNCONDITIONAL_CALL)
// 00564bbb: ADD ESP,0x4
// 00564bbe: PUSH EAX
// 00564bbf: PUSH EBP
// 00564bc0: CALL core_script.cpp_FUN_00566390
//   XREF to: 00566390 (UNCONDITIONAL_CALL)
// 00564bc5: ADD ESP,0xc
// 00564bc8: ADD ESP,0x1c
// 00564bcb: POP EBP
// 00564bcc: POP EDI
// 00564bcd: POP ESI
// 00564bce: POP EBX
// 00564bcf: RET
// 00564bd0: CALL core_script.cpp_FUN_00564500
//   Label: caseD_f
//   XREF to: 00564500 (UNCONDITIONAL_CALL)
// 00564bd5: MOV ESI,dword ptr [0x031141c4]
//   XREF to: 031141c4 (READ)
// 00564bdb: TEST ESI,ESI
// 00564bdd: JL 0x005648d9
//   XREF to: 005648d9 (CONDITIONAL_JUMP)
// 00564be3: MOV EDI,dword ptr [0x031141c0]
//   XREF to: 031141c0 (READ)
// 00564be9: TEST EDI,EDI
// 00564beb: JL 0x005648d9
//   XREF to: 005648d9 (CONDITIONAL_JUMP)
// 00564bf1: PUSH EDI
// 00564bf2: PUSH ESI
// 00564bf3: PUSH EBP
// 00564bf4: MOV dword ptr [0x0310fd48],ESI
//   XREF to: 0310fd48 (WRITE)
// 00564bfa: MOV dword ptr [0x0310fd44],EDI
//   XREF to: 0310fd44 (WRITE)
// 00564c00: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00564c05: ADD ESP,0xc
// 00564c08: MOV ECX,dword ptr [0x031141c8]
//   XREF to: 031141c8 (READ)
// 00564c0e: PUSH ECX
// 00564c0f: MOV EBX,dword ptr [0x031141cc]
//   XREF to: 031141cc (READ)
// 00564c15: PUSH EBX
// 00564c16: PUSH EBP
// 00564c17: MOV [0x031141c0],EAX
//   XREF to: 031141c0 (WRITE)
// 00564c1c: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00564c21: ADD ESP,0xc
// 00564c24: MOV ESI,dword ptr [0x031141c4]
//   XREF to: 031141c4 (READ)
// 00564c2a: PUSH ESI
// 00564c2b: PUSH EBP
// 00564c2c: MOV [0x031141c8],EAX
//   XREF to: 031141c8 (WRITE)
// 00564c31: CALL core_script.cpp_FUN_00566230
//   XREF to: 00566230 (UNCONDITIONAL_CALL)
// 00564c36: ADD ESP,0x8
// 00564c39: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564c3e: SUB ECX,ECX
// 00564c40: DEC ECX
// 00564c41: XOR EAX,EAX
// 00564c43: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 00564c45: NOT ECX
// 00564c47: DEC ECX
// 00564c48: MOV EDI,dword ptr [0x031141c0]
//   XREF to: 031141c0 (READ)
// 00564c4e: MOV EAX,ECX
// 00564c50: CMP ECX,EDI
// 00564c52: JGE 0x00564c70
//   XREF to: 00564c70 (CONDITIONAL_JUMP)
// 00564c54: MOV DL,0x20
// 00564c56: MOV EBX,dword ptr [0x031141c0]
//   XREF to: 031141c0 (READ)
// 00564c5c: INC EAX
//   Label: LAB_00564c5c
// 00564c5d: MOV byte ptr [EAX + 0x31101bf],DL
//   XREF to: 031101bf (DATA)
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031101c1 (WRITE)
// 00564c63: CMP EAX,EBX
// 00564c65: JL 0x00564c5c
//   XREF to: 00564c5c (CONDITIONAL_JUMP)
// 00564c67: LEA EAX,[EAX]
// 00564c6d: LEA EDX,[EDX]
// 00564c70: LEA ESI,[EBP + 0x38]
//   Label: LAB_00564c70
// 00564c73: PUSH ESI
// 00564c74: MOV EBX,0x643de8
//   XREF to: 00643de8 (PARAM)
// 00564c79: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00564c7e: MOV EDI,dword ptr [0x031141cc]
//   XREF to: 031141cc (READ)
// 00564c84: ADD ESP,0x4
// 00564c87: CMP EAX,EDI
// 00564c89: JLE 0x00564c97
//   XREF to: 00564c97 (CONDITIONAL_JUMP)
// 00564c8b: PUSH EDI
// 00564c8c: PUSH ESI
// 00564c8d: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00564c92: ADD ESP,0x8
// 00564c95: MOV EBX,EAX
// 00564c97: MOV EDI,EBX
//   Label: LAB_00564c97
// 00564c99: SUB ECX,ECX
// 00564c9b: DEC ECX
// 00564c9c: XOR EAX,EAX
// 00564c9e: SCASB.REPNE ES:EDI
//   XREF to: 00643de8 (READ)
// 00564ca0: NOT ECX
// 00564ca2: DEC ECX
// 00564ca3: MOV EDX,dword ptr [0x031141c8]
//   XREF to: 031141c8 (READ)
// 00564ca9: MOV EAX,ECX
// 00564cab: CMP ECX,EDX
// 00564cad: JGE 0x00564cb5
//   XREF to: 00564cb5 (CONDITIONAL_JUMP)
// 00564caf: MOV dword ptr [0x031141c8],ECX
//   XREF to: 031141c8 (WRITE)
// 00564cb5: MOV ECX,dword ptr [0x031141c8]
//   Label: LAB_00564cb5
//   XREF to: 031141c8 (READ)
// 00564cbb: SUB EAX,ECX
// 00564cbd: INC EAX
// 00564cbe: MOV EDI,dword ptr [0x031141c0]
//   XREF to: 031141c0 (READ)
// 00564cc4: PUSH EAX
// 00564cc5: ADD EBX,ECX
// 00564cc7: MOV EAX,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564ccc: PUSH EBX
// 00564ccd: ADD EAX,EDI
// 00564ccf: PUSH EAX
// 00564cd0: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00564cd5: ADD ESP,0xc
// 00564cd8: MOV EAX,[0x031141c4]
//   XREF to: 031141c4 (READ)
// 00564cdd: PUSH EAX
// 00564cde: PUSH EBP
// 00564cdf: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 00564ce4: ADD ESP,0x8
// 00564ce7: LEA EBX,[EBP + 0x38]
// 00564cea: PUSH EBX
// 00564ceb: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00564cf0: MOV EDX,dword ptr [0x031141cc]
//   XREF to: 031141cc (READ)
// 00564cf6: ADD ESP,0x4
// 00564cf9: CMP EAX,EDX
// 00564cfb: JG 0x00564d0c
//   XREF to: 00564d0c (CONDITIONAL_JUMP)
// 00564cfd: PUSH EBX
// 00564cfe: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00564d03: DEC EAX
// 00564d04: ADD ESP,0x4
// 00564d07: MOV [0x031141cc],EAX
//   XREF to: 031141cc (WRITE)
// 00564d0c: MOV ECX,dword ptr [0x031141cc]
//   Label: LAB_00564d0c
//   XREF to: 031141cc (READ)
// 00564d12: MOV EAX,[0x031141c4]
//   XREF to: 031141c4 (READ)
// 00564d17: CMP EAX,ECX
// 00564d19: JGE 0x00564d2a
//   XREF to: 00564d2a (CONDITIONAL_JUMP)
// 00564d1b: PUSH ECX
// 00564d1c: INC EAX
// 00564d1d: PUSH EAX
// 00564d1e: LEA EAX,[EBP + 0x38]
// 00564d21: PUSH EAX
// 00564d22: CALL shape_edittool.cpp_CStrList_remove_FUN_004a2e00
//   XREF to: 004a2e00 (UNCONDITIONAL_CALL)
// 00564d27: ADD ESP,0xc
// 00564d2a: CALL core_script.cpp_FUN_005644e0
//   Label: LAB_00564d2a
//   XREF to: 005644e0 (UNCONDITIONAL_CALL)
// 00564d2f: JMP 0x005648c7
//   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
// 00564d34: MOV ECX,dword ptr [0x0310fd44]
//   Label: caseD_10
//   XREF to: 0310fd44 (READ)
// 00564d3a: TEST ECX,ECX
// 00564d3c: JG 0x00564e46
//   XREF to: 00564e46 (CONDITIONAL_JUMP)
// 00564d42: CMP dword ptr [0x0310fd48],0x0
//   XREF to: 0310fd48 (READ)
// 00564d49: JLE 0x005648c7
//   XREF to: 005648c7 (CONDITIONAL_JUMP)
// 00564d4f: LEA EAX,[EBP + 0x38]
// 00564d52: PUSH EAX
// 00564d53: XOR EBX,EBX
// 00564d55: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00564d59: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00564d5e: MOV EDI,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564d64: ADD ESP,0x4
// 00564d67: CMP EAX,EDI
// 00564d69: JL 0x00564e24
//   XREF to: 00564e24 (CONDITIONAL_JUMP)
// 00564d6f: LEA EAX,[EDI + -0x1]
// 00564d72: PUSH EAX
// 00564d73: PUSH EBP
// 00564d74: CALL core_script.cpp_FUN_00566230
//   XREF to: 00566230 (UNCONDITIONAL_CALL)
// 00564d79: ADD ESP,0x8
// 00564d7c: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564d81: SUB ECX,ECX
// 00564d83: DEC ECX
// 00564d84: XOR EAX,EAX
// 00564d86: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 00564d88: NOT ECX
// 00564d8a: DEC ECX
// 00564d8b: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00564d8f: PUSH EAX
// 00564d90: MOV ESI,ECX
// 00564d92: MOV EBX,ECX
// 00564d94: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00564d99: MOV EDX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564d9f: ADD ESP,0x4
// 00564da2: CMP EAX,EDX
// 00564da4: JLE 0x00564e24
//   XREF to: 00564e24 (CONDITIONAL_JUMP)
// 00564daa: PUSH EDX
// 00564dab: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00564daf: PUSH EDI
// 00564db0: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00564db5: ADD ESP,0x8
// 00564db8: MOV EDI,EAX
// 00564dba: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00564dbe: SUB ECX,ECX
// 00564dc0: DEC ECX
// 00564dc1: XOR EAX,EAX
// 00564dc3: SCASB.REPNE ES:EDI
// 00564dc5: NOT ECX
// 00564dc7: DEC ECX
// 00564dc8: MOV EDX,ECX
// 00564dca: ADD ECX,ESI
// 00564dcc: CMP ECX,0x4000
// 00564dd2: JL 0x00564ddc
//   XREF to: 00564ddc (CONDITIONAL_JUMP)
// 00564dd4: MOV EDX,0x4000
// 00564dd9: SUB EDX,ESI
// 00564ddb: DEC EDX
// 00564ddc: MOV EDI,0x31101c0
//   Label: LAB_00564ddc
//   XREF to: 031101c0 (DATA)
// 00564de1: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 00564de5: MOV ECX,EDX
// 00564de7: ADD EDI,EBX
// 00564de9: PUSH EDI
//   XREF to: 031101c0 (DATA)
// 00564dea: MOV EAX,ECX
// 00564dec: SHR ECX,0x2
// 00564def: MOVSD.REP ES:EDI,ESI
//   XREF to: 031101c0 (WRITE)
// 00564df1: MOV CL,AL
// 00564df3: AND CL,0x3
// 00564df6: MOVSB.REP ES:EDI,ESI
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031101c1 (WRITE)
// 00564df8: POP EDI
// 00564df9: XOR AH,AH
// 00564dfb: MOV byte ptr [EDX + EBX*0x1 + 0x31101c0],AH
//   XREF to: 031101c0 (WRITE)
// 00564e02: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564e07: DEC EAX
// 00564e08: PUSH EAX
// 00564e09: PUSH EBP
// 00564e0a: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 00564e0f: ADD ESP,0x8
// 00564e12: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564e17: PUSH EAX
// 00564e18: LEA EAX,[EBP + 0x38]
// 00564e1b: PUSH EAX
// 00564e1c: CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
// 00564e21: ADD ESP,0x8
// 00564e24: MOV EDX,dword ptr [0x0310fd48]
//   Label: LAB_00564e24
//   XREF to: 0310fd48 (READ)
// 00564e2a: PUSH EBX
// 00564e2b: DEC EDX
// 00564e2c: PUSH EDX
// 00564e2d: PUSH EBP
// 00564e2e: MOV dword ptr [0x0310fd48],EDX
//   XREF to: 0310fd48 (WRITE)
// 00564e34: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 00564e39: ADD ESP,0xc
// 00564e3c: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 00564e41: JMP 0x005648c7
//   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
// 00564e46: PUSH ECX
//   Label: LAB_00564e46
// 00564e47: MOV ESI,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564e4d: PUSH ESI
// 00564e4e: PUSH EBP
// 00564e4f: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00564e54: ADD ESP,0xc
// 00564e57: MOV EBX,EAX
// 00564e59: CMP EAX,0x1
// 00564e5c: JGE 0x00564e80
//   XREF to: 00564e80 (CONDITIONAL_JUMP)
// 00564e5e: MOV EDI,0x643de9
//   XREF to: 00643de9 (DATA)
// 00564e63: MOV EAX,0x177c
// 00564e68: PUSH 0x643dfc
//   XREF to: 00643dfc (DATA)
// 00564e6d: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00564e73: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00564e78: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00564e7d: ADD ESP,0x4
// 00564e80: MOV EDX,dword ptr [0x0310fd48]
//   Label: LAB_00564e80
//   XREF to: 0310fd48 (READ)
// 00564e86: PUSH EDX
// 00564e87: PUSH EBP
// 00564e88: CALL core_script.cpp_FUN_00566230
//   XREF to: 00566230 (UNCONDITIONAL_CALL)
// 00564e8d: ADD ESP,0x8
// 00564e90: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564e95: DEC EBX
// 00564e96: SUB ECX,ECX
// 00564e98: DEC ECX
// 00564e99: XOR EAX,EAX
// 00564e9b: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 00564e9d: NOT ECX
// 00564e9f: DEC ECX
// 00564ea0: CMP EBX,ECX
// 00564ea2: JGE 0x00564ed0
//   XREF to: 00564ed0 (CONDITIONAL_JUMP)
// 00564ea4: SUB ECX,EBX
// 00564ea6: LEA EAX,[EBX + 0x1]
// 00564ea9: PUSH ECX
// 00564eaa: ADD EAX,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564eaf: PUSH EAX
// 00564eb0: MOV EAX,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564eb5: ADD EAX,EBX
// 00564eb7: PUSH EAX
// 00564eb8: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00564ebd: ADD ESP,0xc
// 00564ec0: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564ec6: PUSH ECX
// 00564ec7: PUSH EBP
// 00564ec8: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 00564ecd: ADD ESP,0x8
// 00564ed0: PUSH EBX
//   Label: LAB_00564ed0
// 00564ed1: MOV EBX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564ed7: PUSH EBX
// 00564ed8: PUSH EBP
// 00564ed9: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 00564ede: ADD ESP,0xc
// 00564ee1: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 00564ee6: JMP 0x005648c7
//   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
// 00564eeb: LEA EAX,[EBP + 0x38]
//   Label: caseD_11
// 00564eee: PUSH EAX
// 00564eef: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00564ef4: MOV EDX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564efa: ADD ESP,0x4
// 00564efd: CMP EAX,EDX
// 00564eff: JLE 0x005648d9
//   XREF to: 005648d9 (CONDITIONAL_JUMP)
// 00564f05: PUSH EDX
// 00564f06: PUSH EBP
// 00564f07: CALL core_script.cpp_FUN_00566230
//   XREF to: 00566230 (UNCONDITIONAL_CALL)
// 00564f0c: ADD ESP,0x8
// 00564f0f: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564f14: SUB ECX,ECX
// 00564f16: DEC ECX
// 00564f17: XOR EAX,EAX
// 00564f19: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 00564f1b: NOT ECX
// 00564f1d: DEC ECX
// 00564f1e: MOV ESI,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 00564f24: PUSH ESI
// 00564f25: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564f2a: PUSH EAX
// 00564f2b: PUSH EBP
// 00564f2c: MOV EBX,ECX
// 00564f2e: MOV EDI,ECX
// 00564f30: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00564f35: MOV ECX,EAX
// 00564f37: ADD ESP,0xc
// 00564f3a: CMP EAX,EBX
// 00564f3c: JL 0x00564fe6
//   XREF to: 00564fe6 (CONDITIONAL_JUMP)
// 00564f42: MOV CH,0x20
// 00564f44: CMP EDI,EAX
//   Label: LAB_00564f44
// 00564f46: JGE 0x00564f51
//   XREF to: 00564f51 (CONDITIONAL_JUMP)
// 00564f48: INC EDI
// 00564f49: MOV byte ptr [EDI + 0x31101bf],CH
//   XREF to: 031101bf (DATA)
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031101c1 (WRITE)
// 00564f4f: JMP 0x00564f44
//   XREF to: 00564f44 (UNCONDITIONAL_JUMP)
// 00564f51: MOV EAX,[0x0310fd48]
//   Label: LAB_00564f51
//   XREF to: 0310fd48 (READ)
// 00564f56: LEA EBX,[EBP + 0x38]
// 00564f59: INC EAX
// 00564f5a: PUSH EBX
// 00564f5b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00564f5f: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00564f64: ADD ESP,0x4
// 00564f67: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 00564f6b: MOV ESI,0x643e07
//   XREF to: 00643e07 (DATA)
// 00564f70: CMP EAX,EDX
// 00564f72: JLE 0x00564f86
//   XREF to: 00564f86 (CONDITIONAL_JUMP)
// 00564f74: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564f79: INC EAX
// 00564f7a: PUSH EAX
// 00564f7b: PUSH EBX
// 00564f7c: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00564f81: ADD ESP,0x8
// 00564f84: MOV ESI,EAX
// 00564f86: ADD EDI,0x31101c0
//   Label: LAB_00564f86
//   XREF to: 031101c0 (DATA)
// 00564f8c: PUSH EDI
//   XREF to: 031101c0 (DATA)
//   XREF to: 031101c1 (DATA)
// 00564f8d: MOV AL,byte ptr [ESI]
//   Label: LAB_00564f8d
//   XREF to: 00643e07 (READ)
// 00564f8f: MOV byte ptr [EDI],AL
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031101c1 (WRITE)
//   XREF to: 031101c3 (WRITE)
// 00564f91: CMP AL,0x0
// 00564f93: JZ 0x00564fa5
//   XREF to: 00564fa5 (CONDITIONAL_JUMP)
// 00564f95: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00643e08 (READ)
// 00564f98: ADD ESI,0x2
// 00564f9b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 031101c2 (WRITE)
//   XREF to: 031101c4 (WRITE)
// 00564f9e: ADD EDI,0x2
// 00564fa1: CMP AL,0x0
// 00564fa3: JNZ 0x00564f8d
//   XREF to: 00564f8d (CONDITIONAL_JUMP)
// 00564fa5: POP EDI
//   Label: LAB_00564fa5
// 00564fa6: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564fac: PUSH ECX
// 00564fad: PUSH EBP
// 00564fae: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 00564fb3: ADD ESP,0x8
// 00564fb6: LEA EBX,[EBP + 0x38]
// 00564fb9: MOV ESI,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564fbf: PUSH EBX
// 00564fc0: INC ESI
// 00564fc1: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00564fc6: ADD ESP,0x4
// 00564fc9: CMP ESI,EAX
// 00564fcb: JGE 0x005648c7
//   XREF to: 005648c7 (CONDITIONAL_JUMP)
// 00564fd1: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00564fd6: INC EAX
// 00564fd7: PUSH EAX
// 00564fd8: PUSH EBX
// 00564fd9: CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
// 00564fde: ADD ESP,0x8
// 00564fe1: JMP 0x005648c7
//   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
// 00564fe6: SUB EBX,EAX
//   Label: LAB_00564fe6
// 00564fe8: INC EAX
// 00564fe9: PUSH EBX
// 00564fea: ADD EAX,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564fef: PUSH EAX
// 00564ff0: ADD ECX,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00564ff6: PUSH ECX
// 00564ff7: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00564ffc: ADD ESP,0xc
// 00564fff: MOV EDX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565005: PUSH EDX
// 00565006: PUSH EBP
// 00565007: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 0056500c: ADD ESP,0x8
// 0056500f: JMP 0x005648c7
//   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
// 00565014: MOV ESI,dword ptr [0x0068105c]
//   Label: caseD_12
//   XREF to: 0068105c (READ)
// 0056501a: TEST ESI,ESI
// 0056501c: JNZ 0x00565039
//   XREF to: 00565039 (CONDITIONAL_JUMP)
// 0056501e: CALL core_script.cpp_FUN_005644e0
//   XREF to: 005644e0 (UNCONDITIONAL_CALL)
// 00565023: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565028: INC EAX
// 00565029: MOV dword ptr [0x0310fd44],ESI
//   XREF to: 0310fd44 (WRITE)
// 0056502f: MOV [0x0310fd48],EAX
//   XREF to: 0310fd48 (WRITE)
// 00565034: JMP 0x005648c7
//   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
// 00565039: PUSH 0x0
//   Label: LAB_00565039
// 0056503b: PUSH 0xf
// 0056503d: PUSH EBP
// 0056503e: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 00565043: ADD ESP,0xc
// 00565046: LEA EDI,[EBP + 0x38]
// 00565049: PUSH EDI
//   Label: LAB_00565049
// 0056504a: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 0056504f: MOV EDX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565055: ADD ESP,0x4
// 00565058: CMP EAX,EDX
// 0056505a: JG 0x0056506c
//   XREF to: 0056506c (CONDITIONAL_JUMP)
// 0056505c: PUSH 0x643e08
//   XREF to: 00643e08 (DATA)
// 00565061: PUSH EDI
// 00565062: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00565067: ADD ESP,0x8
// 0056506a: JMP 0x00565049
//   XREF to: 00565049 (UNCONDITIONAL_JUMP)
// 0056506c: PUSH EDX
//   Label: LAB_0056506c
// 0056506d: PUSH EBP
// 0056506e: CALL core_script.cpp_FUN_00566230
//   XREF to: 00566230 (UNCONDITIONAL_CALL)
// 00565073: ADD ESP,0x8
// 00565076: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 0056507b: SUB ECX,ECX
// 0056507d: DEC ECX
// 0056507e: XOR EAX,EAX
// 00565080: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 00565082: NOT ECX
// 00565084: DEC ECX
// 00565085: MOV EBX,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 0056508b: PUSH EBX
// 0056508c: MOV EDI,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565092: PUSH EDI
// 00565093: PUSH EBP
// 00565094: MOV ESI,ECX
// 00565096: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 0056509b: ADD ESP,0xc
// 0056509e: MOV EBX,EAX
// 005650a0: CMP EAX,ESI
// 005650a2: JLE 0x005650a6
//   XREF to: 005650a6 (CONDITIONAL_JUMP)
// 005650a4: MOV EBX,ESI
// 005650a6: MOV EAX,0x31101c0
//   Label: LAB_005650a6
//   XREF to: 031101c0 (DATA)
// 005650ab: ADD EAX,EBX
// 005650ad: PUSH EAX
//   XREF to: 031101c0 (DATA)
// 005650ae: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005650b3: INC EAX
// 005650b4: PUSH EAX
// 005650b5: LEA EAX,[EBP + 0x38]
// 005650b8: PUSH EAX
// 005650b9: CALL shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
//   XREF to: 004a2bc0 (UNCONDITIONAL_CALL)
// 005650be: ADD ESP,0xc
// 005650c1: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005650c6: PUSH EAX
// 005650c7: XOR CL,CL
// 005650c9: PUSH EBP
// 005650ca: MOV byte ptr [EBX + 0x31101c0],CL
//   XREF to: 031101c0 (WRITE)
// 005650d0: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 005650d5: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005650db: ADD ESP,0x8
// 005650de: XOR EDX,EDX
// 005650e0: INC ECX
// 005650e1: MOV dword ptr [0x0310fd44],EDX
//   XREF to: 0310fd44 (WRITE)
// 005650e7: MOV dword ptr [0x0310fd48],ECX
//   XREF to: 0310fd48 (WRITE)
// 005650ed: JMP 0x005648c7
//   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
// 005650f2: MOV EBX,dword ptr [ESP + 0x38]
//   Label: default
//   XREF to: Stack[0xc] (READ)
// 005650f6: PUSH EBX
// 005650f7: PUSH EAX
// 005650f8: MOV EDX,0x643e09
//   XREF to: 00643e09 (PARAM)
// 005650fd: MOV ECX,0x180d
// 00565102: PUSH 0x643e1c
//   XREF to: 00643e1c (DATA)
// 00565107: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0056510d: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00565113: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00565118: ADD ESP,0xc
// 0056511b: ADD ESP,0x1c
// 0056511e: POP EBP
// 0056511f: POP EDI
// 00565120: POP ESI
// 00565121: POP EBX
// 00565122: RET
