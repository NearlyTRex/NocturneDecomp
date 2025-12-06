// Name: core_script.cpp_CScript_Unk20_FUN_00565130
// Address: 00565130
// Address Range: [[00565130, 00565a91]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_Unk20_FUN_00565130()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_Unk20(uint param_1) */

void core_script_cpp_CScript_Unk20_FUN_00565130(void)

{
  char cVar1;
  bool bVar2;
  CEdButton *pCVar3;
  CEdButton *pCVar4;
  bool bVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar7;
  int iVar8;
  uint uVar9;
  BADSPACEBASE *in_ESP;
  char *pcVar10;
  byte bVar11;
  CEdButton *in_stack_00000004;
  bool in_stack_000001c0;
  int in_stack_000001d0;
  uint in_stack_000001d4;
  int in_stack_00000214;
  int in_stack_00000218;
  int in_stack_00000220;
  int in_stack_00000250;
  int in_stack_00000254;
  int in_stack_00000258;
  int in_stack_000002b0;
  int in_stack_000002b4;
  int in_stack_000002b8;
  
  bVar11 = 0;
  (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  DAT_0310fd40 = DAT_0310fd40 + g_GlobalDeltaTimeInt & 0xfffff;
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  core_script_cpp_CScript_Unk18_FUN_005669a0();
  core_script_cpp_FUN_00564500();
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&DAT_0310fd0c);
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&DAT_0310fcd8);
  core_script_cpp_FUN_00566880();
  bVar2 = false;
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x50);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x48);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x47);
  if (iVar6 != 0) {
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4f);
  if (iVar6 != 0) {
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x51);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x49);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x53);
  if (iVar6 != 0) {
    bVar2 = true;
    if (-1 < DAT_0310fd4c) {
      (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    }
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x52);
  if (iVar6 != 0) {
    iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if (iVar6 == 0) {
      iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar6 == 0) {
        DAT_0068105c = (uint)(DAT_0068105c == 0);
        goto LAB_00565363;
      }
      bVar2 = true;
    }
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
LAB_00565363:
  iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar6 != 0) {
    iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2d);
    if (iVar6 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
    if (iVar6 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2f);
    if (iVar6 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if ((iVar6 != 0) && (iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x22), iVar6 != 0)) {
    iVar6 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004->button_text + 0x1c));
    bVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter line number",(int *)&stack0x000001cc,true,1
                       ,iVar6 + 1,in_stack_000001c0);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar5) != 0) {
      DAT_0310fd48 = in_stack_000001d0 + -1;
      bVar2 = true;
      DAT_0310fd44 = 0;
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar6 != 0) {
    in_stack_000001d4 = 0x56548d;
    iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x21);
    if (iVar6 != 0) {
      (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Find",&DAT_0310fd58,100,1);
      if (iVar6 != 0) {
        iVar6 = core_script_cpp_FUN_00566cc0();
        if (iVar6 == 0) {
          crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"Can't find %s");
        }
        else {
          crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"Found %s");
          DAT_0310fd44 = in_stack_00000220;
          DAT_0310fd4c = in_stack_00000218;
          DAT_0310fd48 = in_stack_00000214;
          bVar2 = false;
          DAT_0310fd50 = DAT_0310fd48;
        }
      }
    }
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3d);
  if (iVar6 != 0) {
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if (DAT_0310fd58 == '\0') {
      shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                (g_CEditorToolsPtr,"Find",&DAT_0310fd58,100,1);
    }
    if (DAT_0310fd58 != '\0') {
      iVar6 = core_script_cpp_FUN_00566cc0();
      if (iVar6 == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"Can't find %s");
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"Found %s");
        DAT_0310fd4c = in_stack_00000258;
        DAT_0310fd48 = in_stack_00000254;
        DAT_0310fd44 = in_stack_00000250;
        bVar2 = false;
        DAT_0310fd50 = DAT_0310fd48;
      }
    }
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3e);
  if (iVar6 != 0) {
    bVar2 = true;
    core_script_cpp_FUN_00565ae0();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x40);
  if (iVar6 != 0) {
    bVar2 = true;
    core_script_cpp_FUN_00565d00();
  }
  iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3b);
  if (iVar6 != 0) {
    core_script_cpp_FUN_00565e70();
  }
  pCVar3 = g_ActiveButton;
  if (in_stack_00000004 == g_ActiveButton) {
    if ((g_MouseButtonFlags & 1U) == 0) {
      g_ActiveButton = (CEdButton *)0x0;
    }
    else {
      core_script_cpp_FUN_00566c20();
      if (g_MouseX <= DAT_031141e0) {
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      if (DAT_031141e8 <= g_MouseX) {
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      if (g_MouseY <= DAT_031141e4) {
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      if (DAT_031141ec <= g_MouseY) {
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
    }
  }
  else if (g_ActiveButton == (CEdButton *)0x0) {
    if ((g_MouseButtonFlags & 1U) == 0) {
      if ((g_MouseButtonFlags & 2U) != 0) {
        g_MouseButtonFlags = (int)g_ActiveButton;
        iVar6 = core_script_cpp_FUN_00566c20();
        if (iVar6 != 0) {
          core_script_cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0();
        }
      }
    }
    else {
      iVar6 = core_script_cpp_FUN_00566c20();
      pCVar4 = g_ActiveButton;
      if ((iVar6 != 0) &&
         (iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38), pCVar4 = in_stack_00000004,
         iVar6 != 0)) {
        core_script_cpp_FUN_00565ae0();
        g_MouseButtonFlags = (int)pCVar3;
        pCVar4 = g_ActiveButton;
      }
      g_ActiveButton = pCVar4;
      bVar2 = true;
    }
  }
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            bVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
            if (CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar5) == 0) {
              core_script_cpp_CScript_Unk18_FUN_005669a0();
              if (bVar2) {
                core_script_cpp_FUN_005644e0();
              }
              else if ((in_stack_000002b4 != DAT_0310fd44) || (in_stack_000002b0 != DAT_0310fd48)) {
                if (in_stack_000002b8 == 0) {
                  core_script_cpp_FUN_005644e0();
                }
                else if (DAT_0310fd4c < 0) {
                  DAT_0310fd4c = in_stack_000002b4;
                  DAT_0310fd50 = in_stack_000002b0;
                }
                DAT_0310fd40 = 0;
              }
              core_script_cpp_FUN_00566800();
              core_script_cpp_FUN_00564500();
              return;
            }
            uVar7 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
            uVar9 = uVar7 & 0xff;
            if (uVar9 != 0xd) break;
            core_script_cpp_CScript_editorAction_FUN_00564820();
          }
          if (uVar9 != 8) break;
          core_script_cpp_CScript_editorAction_FUN_00564820();
        }
      } while (((g_CharacterClassificationTable[(byte)((char)uVar7 + 1)] & 8U) == 0) && (uVar9 != 9)
              );
      core_script_cpp_CScript_editorAction_FUN_00564820();
      if (DAT_0068105c == 0) break;
      core_script_cpp_FUN_00566390();
      bVar2 = true;
    }
    core_script_cpp_FUN_00566230();
    uVar9 = 0xffffffff;
    pcVar10 = &DAT_031101c0;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    iVar8 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
    for (iVar6 = ~uVar9 - 1; iVar6 < iVar8; iVar6 = iVar6 + 1) {
      (&DAT_031101c0)[iVar6] = 0x20;
    }
    (&DAT_031101c0)[iVar8] = (char)uVar7;
    if (iVar6 <= iVar8) {
      iVar6 = iVar6 + 1;
    }
    (&DAT_031101c0)[iVar6] = 0;
    DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
    core_script_cpp_CScript_editorPutLine_FUN_005662a0();
    bVar2 = true;
  } while( true );
}
