// Name: core_script.cpp_CScript_Unk20_FUN_00565130
// Address: 00565130
// Address Range: [[00565130, 00565a91]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_Unk20_FUN_00565130()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a4d6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_line_number_00643e4f
//   TerminatedCString s_Find_00643e61
//   TerminatedCString s_Found_s_00643e66
//   TerminatedCString s_Can_t_find_s_00643e6f
//   TerminatedCString s_Find_00643e7d
//   TerminatedCString s_Found_s_00643e82
//   TerminatedCString s_Can_t_find_s_00643e8b
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 DAT_0068105c
//   char[256] g_CharacterClassificationTable
//   CEditorTools g_CEditorToolsPtr
//   CEdButton* g_ActiveButton
//   int g_GlobalDeltaTimeInt
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   void* g_CKeysPtr
//   undefined4 DAT_0310fcd8
//   undefined4 DAT_0310fd0c
//   undefined4 DAT_0310fd40
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
//   undefined4 DAT_0310fd4c
//   undefined4 DAT_0310fd50
//   undefined1 DAT_0310fd58
//   undefined1 DAT_0310fdc0
//   undefined1 DAT_031101c0
//   undefined1 DAT_031101c1
//   undefined4 DAT_031101c2
//   undefined4 DAT_031101c3
//   undefined4 DAT_031141e0
//   undefined4 DAT_031141e4
//   undefined4 DAT_031141e8
//   undefined4 DAT_031141ec
// Function calls:
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0
//   core_script.cpp_CScript_editorAction_FUN_00564820
//   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   core_script.cpp_CScript_Unk18_FUN_005669a0
//   core_script.cpp_FUN_005644e0
//   core_script.cpp_FUN_00564500
//   core_script.cpp_FUN_00565ae0
//   core_script.cpp_FUN_00565d00
//   core_script.cpp_FUN_00565e70
//   core_script.cpp_FUN_00566230
//   core_script.cpp_FUN_00566390
//   core_script.cpp_FUN_00566800
//   core_script.cpp_FUN_00566880
//   core_script.cpp_FUN_00566c20
//   core_script.cpp_FUN_00566cc0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_Unk20(undefined4 param_1) */

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
  undefined4 in_stack_000001d4;
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
    if (CONCAT31(extraout_var,bVar5) != 0) {
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
            if (CONCAT31(extraout_var_00,bVar5) == 0) {
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


// Assembly code:
// 00565130: PUSH EBX
//   Label: core_script.cpp_CScript_Unk20_FUN_00565130
// 00565131: PUSH ESI
// 00565132: PUSH EDI
// 00565133: PUSH EBP
// 00565134: SUB ESP,0x2c
// 00565137: MOV EBP,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0056513b: PUSH 0x2a
// 0056513d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565142: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565143: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565145: CALL dword ptr [EDX]
// 00565147: ADD ESP,0x8
// 0056514a: MOV EDX,dword ptr [0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 00565150: MOV dword ptr [ESP + 0x24],EAX
// 00565154: MOV EAX,[0x0310fd40]
//   XREF to: 0310fd40 (READ)
// 00565159: ADD EAX,EDX
// 0056515b: AND EAX,0xfffff
// 00565160: PUSH EBP
// 00565161: MOV [0x0310fd40],EAX
//   XREF to: 0310fd40 (WRITE)
// 00565166: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 0056516b: ADD ESP,0x4
// 0056516e: PUSH EBP
// 0056516f: CALL core_script.cpp_CScript_Unk18_FUN_005669a0
//   XREF to: 005669a0 (UNCONDITIONAL_CALL)
// 00565174: ADD ESP,0x4
// 00565177: CALL core_script.cpp_FUN_00564500
//   XREF to: 00564500 (UNCONDITIONAL_CALL)
// 0056517c: PUSH 0x310fd0c
//   XREF to: 0310fd0c (DATA)
// 00565181: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 00565186: ADD ESP,0x4
// 00565189: PUSH 0x310fcd8
//   XREF to: 0310fcd8 (DATA)
// 0056518e: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 00565193: ADD ESP,0x4
// 00565196: PUSH EBP
// 00565197: CALL core_script.cpp_FUN_00566880
//   XREF to: 00566880 (UNCONDITIONAL_CALL)
// 0056519c: MOV EAX,[0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 005651a1: ADD ESP,0x4
// 005651a4: MOV dword ptr [ESP + 0x20],EAX
// 005651a8: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005651ad: PUSH 0x4b
// 005651af: MOV dword ptr [ESP + 0x20],EAX
// 005651b3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005651b8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005651b9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005651bb: XOR ESI,ESI
// 005651bd: CALL dword ptr [EDX + 0x4]
// 005651c0: ADD ESP,0x8
// 005651c3: TEST EAX,EAX
// 005651c5: JNZ 0x0056579f
//   XREF to: 0056579f (CONDITIONAL_JUMP)
// 005651cb: PUSH 0x4d
//   Label: LAB_005651cb
// 005651cd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005651d2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005651d3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005651d5: CALL dword ptr [EDX + 0x4]
// 005651d8: ADD ESP,0x8
// 005651db: TEST EAX,EAX
// 005651dd: JZ 0x005651ec
//   XREF to: 005651ec (CONDITIONAL_JUMP)
// 005651df: PUSH 0x0
// 005651e1: PUSH 0x1
// 005651e3: PUSH EBP
// 005651e4: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 005651e9: ADD ESP,0xc
// 005651ec: PUSH 0x50
//   Label: LAB_005651ec
// 005651ee: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005651f3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005651f4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005651f6: CALL dword ptr [EDX + 0x4]
// 005651f9: ADD ESP,0x8
// 005651fc: TEST EAX,EAX
// 005651fe: JZ 0x0056520d
//   XREF to: 0056520d (CONDITIONAL_JUMP)
// 00565200: PUSH 0x0
// 00565202: PUSH 0x3
// 00565204: PUSH EBP
// 00565205: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 0056520a: ADD ESP,0xc
// 0056520d: PUSH 0x48
//   Label: LAB_0056520d
// 0056520f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565214: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565215: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565217: CALL dword ptr [EDX + 0x4]
// 0056521a: ADD ESP,0x8
// 0056521d: TEST EAX,EAX
// 0056521f: JZ 0x0056522e
//   XREF to: 0056522e (CONDITIONAL_JUMP)
// 00565221: PUSH 0x0
// 00565223: PUSH 0x2
// 00565225: PUSH EBP
// 00565226: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 0056522b: ADD ESP,0xc
// 0056522e: PUSH 0x47
//   Label: LAB_0056522e
// 00565230: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565235: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565236: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565238: CALL dword ptr [EDX + 0x4]
// 0056523b: ADD ESP,0x8
// 0056523e: TEST EAX,EAX
// 00565240: JZ 0x00565266
//   XREF to: 00565266 (CONDITIONAL_JUMP)
// 00565242: PUSH 0x1d
// 00565244: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565249: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0056524a: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0056524c: CALL dword ptr [EDX]
// 0056524e: ADD ESP,0x8
// 00565251: TEST EAX,EAX
// 00565253: JZ 0x005657af
//   XREF to: 005657af (CONDITIONAL_JUMP)
// 00565259: PUSH 0x0
// 0056525b: PUSH 0x8
// 0056525d: PUSH EBP
//   Label: LAB_0056525d
// 0056525e: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 00565263: ADD ESP,0xc
// 00565266: PUSH 0x4f
//   Label: LAB_00565266
// 00565268: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0056526d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0056526e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565270: CALL dword ptr [EDX + 0x4]
// 00565273: ADD ESP,0x8
// 00565276: TEST EAX,EAX
// 00565278: JZ 0x0056529e
//   XREF to: 0056529e (CONDITIONAL_JUMP)
// 0056527a: PUSH 0x1d
// 0056527c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565281: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565282: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565284: CALL dword ptr [EDX]
// 00565286: ADD ESP,0x8
// 00565289: TEST EAX,EAX
// 0056528b: JZ 0x005657b7
//   XREF to: 005657b7 (CONDITIONAL_JUMP)
// 00565291: PUSH 0x0
// 00565293: PUSH 0x9
// 00565295: PUSH EBP
//   Label: LAB_00565295
// 00565296: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 0056529b: ADD ESP,0xc
// 0056529e: PUSH 0x51
//   Label: LAB_0056529e
// 005652a0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005652a5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005652a6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005652a8: CALL dword ptr [EDX + 0x4]
// 005652ab: ADD ESP,0x8
// 005652ae: TEST EAX,EAX
// 005652b0: JZ 0x005652bf
//   XREF to: 005652bf (CONDITIONAL_JUMP)
// 005652b2: PUSH 0x0
// 005652b4: PUSH 0x5
// 005652b6: PUSH EBP
// 005652b7: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 005652bc: ADD ESP,0xc
// 005652bf: PUSH 0x49
//   Label: LAB_005652bf
// 005652c1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005652c6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005652c7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005652c9: CALL dword ptr [EDX + 0x4]
// 005652cc: ADD ESP,0x8
// 005652cf: TEST EAX,EAX
// 005652d1: JZ 0x005652e0
//   XREF to: 005652e0 (CONDITIONAL_JUMP)
// 005652d3: PUSH 0x0
// 005652d5: PUSH 0x4
// 005652d7: PUSH EBP
// 005652d8: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 005652dd: ADD ESP,0xc
// 005652e0: PUSH 0x53
//   Label: LAB_005652e0
// 005652e2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005652e7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005652e8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005652ea: CALL dword ptr [EDX + 0x4]
// 005652ed: ADD ESP,0x8
// 005652f0: TEST EAX,EAX
// 005652f2: JZ 0x0056532b
//   XREF to: 0056532b (CONDITIONAL_JUMP)
// 005652f4: MOV ECX,dword ptr [0x0310fd4c]
//   XREF to: 0310fd4c (READ)
// 005652fa: MOV ESI,0x1
// 005652ff: TEST ECX,ECX
// 00565301: JL 0x005657c7
//   XREF to: 005657c7 (CONDITIONAL_JUMP)
// 00565307: PUSH 0x2a
// 00565309: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0056530e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0056530f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565311: CALL dword ptr [EDX]
// 00565313: ADD ESP,0x8
// 00565316: TEST EAX,EAX
// 00565318: JZ 0x005657bf
//   XREF to: 005657bf (CONDITIONAL_JUMP)
// 0056531e: PUSH 0x0
// 00565320: PUSH 0xc
// 00565322: PUSH EBP
//   Label: LAB_00565322
// 00565323: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 00565328: ADD ESP,0xc
// 0056532b: PUSH 0x52
//   Label: LAB_0056532b
// 0056532d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565332: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565333: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565335: CALL dword ptr [EDX + 0x4]
// 00565338: ADD ESP,0x8
// 0056533b: TEST EAX,EAX
// 0056533d: JZ 0x00565363
//   XREF to: 00565363 (CONDITIONAL_JUMP)
// 0056533f: PUSH 0x1d
// 00565341: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565346: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565347: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565349: CALL dword ptr [EDX]
// 0056534b: ADD ESP,0x8
// 0056534e: TEST EAX,EAX
// 00565350: JZ 0x005657d0
//   XREF to: 005657d0 (CONDITIONAL_JUMP)
// 00565356: PUSH 0x0
// 00565358: PUSH 0xd
// 0056535a: PUSH EBP
// 0056535b: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   Label: LAB_0056535b
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 00565360: ADD ESP,0xc
// 00565363: PUSH 0x1d
//   Label: LAB_00565363
// 00565365: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0056536a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0056536b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0056536d: CALL dword ptr [EDX]
// 0056536f: ADD ESP,0x8
// 00565372: TEST EAX,EAX
// 00565374: JZ 0x005653ec
//   XREF to: 005653ec (CONDITIONAL_JUMP)
// 0056537a: PUSH 0x2d
// 0056537c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565381: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565382: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565384: CALL dword ptr [EDX + 0x4]
// 00565387: ADD ESP,0x8
// 0056538a: TEST EAX,EAX
// 0056538c: JZ 0x005653a0
//   XREF to: 005653a0 (CONDITIONAL_JUMP)
// 0056538e: PUSH 0x0
// 00565390: PUSH 0xc
// 00565392: PUSH EBP
// 00565393: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 00565398: ADD ESP,0xc
// 0056539b: CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
// 005653a0: PUSH 0x2e
//   Label: LAB_005653a0
// 005653a2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005653a7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005653a8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005653aa: CALL dword ptr [EDX + 0x4]
// 005653ad: ADD ESP,0x8
// 005653b0: TEST EAX,EAX
// 005653b2: JZ 0x005653c6
//   XREF to: 005653c6 (CONDITIONAL_JUMP)
// 005653b4: PUSH 0x0
// 005653b6: PUSH 0xd
// 005653b8: PUSH EBP
// 005653b9: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 005653be: ADD ESP,0xc
// 005653c1: CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
// 005653c6: PUSH 0x2f
//   Label: LAB_005653c6
// 005653c8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005653cd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005653ce: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005653d0: CALL dword ptr [EDX + 0x4]
// 005653d3: ADD ESP,0x8
// 005653d6: TEST EAX,EAX
// 005653d8: JZ 0x005653ec
//   XREF to: 005653ec (CONDITIONAL_JUMP)
// 005653da: PUSH 0x0
// 005653dc: PUSH 0xe
// 005653de: PUSH EBP
// 005653df: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 005653e4: ADD ESP,0xc
// 005653e7: CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
// 005653ec: PUSH 0x1d
//   Label: LAB_005653ec
// 005653ee: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005653f3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005653f4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005653f6: CALL dword ptr [EDX]
// 005653f8: ADD ESP,0x8
// 005653fb: TEST EAX,EAX
// 005653fd: JZ 0x00565469
//   XREF to: 00565469 (CONDITIONAL_JUMP)
// 005653ff: PUSH 0x22
// 00565401: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565406: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565407: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565409: CALL dword ptr [EDX + 0x4]
// 0056540c: ADD ESP,0x8
// 0056540f: TEST EAX,EAX
// 00565411: JZ 0x00565469
//   XREF to: 00565469 (CONDITIONAL_JUMP)
// 00565413: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565418: INC EAX
// 00565419: PUSH 0x1
// 0056541b: MOV dword ptr [ESP + 0xc],EAX
// 0056541f: LEA EAX,[EBP + 0x38]
// 00565422: PUSH EAX
// 00565423: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00565428: ADD ESP,0x4
// 0056542b: INC EAX
// 0056542c: PUSH EAX
// 0056542d: PUSH 0x1
// 0056542f: PUSH 0x1
// 00565431: LEA EAX,[ESP + 0x18]
// 00565435: PUSH EAX
// 00565436: PUSH 0x643e4f
//   XREF to: 00643e4f (DATA)
// 0056543b: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00565441: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00565442: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 00565447: ADD ESP,0x1c
// 0056544a: TEST EAX,EAX
// 0056544c: JZ 0x00565464
//   XREF to: 00565464 (CONDITIONAL_JUMP)
// 0056544e: MOV EAX,dword ptr [ESP + 0x8]
// 00565452: DEC EAX
// 00565453: MOV [0x0310fd48],EAX
//   XREF to: 0310fd48 (WRITE)
// 00565458: XOR EAX,EAX
// 0056545a: MOV ESI,0x1
// 0056545f: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 00565464: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_00565464
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00565469: PUSH 0x1d
//   Label: LAB_00565469
// 0056546b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565470: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565471: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565473: CALL dword ptr [EDX]
// 00565475: ADD ESP,0x8
// 00565478: TEST EAX,EAX
// 0056547a: JZ 0x0056554e
//   XREF to: 0056554e (CONDITIONAL_JUMP)
// 00565480: PUSH 0x21
// 00565482: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565487: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565488: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0056548a: CALL dword ptr [EDX + 0x4]
// 0056548d: ADD ESP,0x8
// 00565490: TEST EAX,EAX
// 00565492: JZ 0x0056554e
//   XREF to: 0056554e (CONDITIONAL_JUMP)
// 00565498: PUSH 0x2a
// 0056549a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0056549f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005654a0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005654a2: MOV EBX,0x1
// 005654a7: CALL dword ptr [EDX]
// 005654a9: ADD ESP,0x8
// 005654ac: TEST EAX,EAX
// 005654ae: JZ 0x005654b5
//   XREF to: 005654b5 (CONDITIONAL_JUMP)
// 005654b0: MOV EBX,0xffffffff
// 005654b5: PUSH 0x1
//   Label: LAB_005654b5
// 005654b7: PUSH 0x64
// 005654b9: PUSH 0x310fd58
//   XREF to: 0310fd58 (DATA)
// 005654be: PUSH 0x643e61
//   XREF to: 00643e61 (DATA)
// 005654c3: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005654c9: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005654ca: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 005654cf: ADD ESP,0x14
// 005654d2: TEST EAX,EAX
// 005654d4: JZ 0x0056554e
//   XREF to: 0056554e (CONDITIONAL_JUMP)
// 005654d6: PUSH EBX
// 005654d7: LEA EAX,[ESP + 0x8]
// 005654db: PUSH EAX
// 005654dc: LEA EAX,[ESP + 0x8]
// 005654e0: PUSH EAX
// 005654e1: LEA EAX,[ESP + 0x18]
// 005654e5: PUSH EAX
// 005654e6: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005654ec: PUSH ECX
// 005654ed: MOV EBX,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 005654f3: PUSH EBX
// 005654f4: PUSH 0x310fd58
//   XREF to: 0310fd58 (DATA)
// 005654f9: PUSH EBP
// 005654fa: CALL core_script.cpp_FUN_00566cc0
//   XREF to: 00566cc0 (UNCONDITIONAL_CALL)
// 005654ff: ADD ESP,0x20
// 00565502: TEST EAX,EAX
// 00565504: JZ 0x0056580b
//   XREF to: 0056580b (CONDITIONAL_JUMP)
// 0056550a: PUSH 0x310fd58
//   XREF to: 0310fd58 (DATA)
// 0056550f: PUSH 0x643e66
//   XREF to: 00643e66 (DATA)
// 00565514: PUSH 0x310fdc0
//   XREF to: 0310fdc0 (DATA)
// 00565519: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056551e: ADD ESP,0xc
// 00565521: MOV EAX,dword ptr [ESP]
// 00565524: MOV [0x0310fd48],EAX
//   XREF to: 0310fd48 (WRITE)
// 00565529: MOV EAX,dword ptr [ESP + 0xc]
// 0056552d: MOV EDI,0x1
// 00565532: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 00565537: MOV EAX,dword ptr [ESP + 0x4]
// 0056553b: XOR ESI,ESI
// 0056553d: MOV [0x0310fd4c],EAX
//   XREF to: 0310fd4c (WRITE)
// 00565542: MOV EAX,dword ptr [ESP]
// 00565545: MOV dword ptr [ESP + 0x24],EDI
// 00565549: MOV [0x0310fd50],EAX
//   XREF to: 0310fd50 (WRITE)
// 0056554e: PUSH 0x3d
//   Label: LAB_0056554e
// 00565550: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565555: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565556: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565558: CALL dword ptr [EDX + 0x4]
// 0056555b: ADD ESP,0x8
// 0056555e: TEST EAX,EAX
// 00565560: JZ 0x0056562d
//   XREF to: 0056562d (CONDITIONAL_JUMP)
// 00565566: PUSH 0x2a
// 00565568: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0056556d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0056556e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565570: MOV EBX,0x1
// 00565575: CALL dword ptr [EDX]
// 00565577: ADD ESP,0x8
// 0056557a: TEST EAX,EAX
// 0056557c: JZ 0x00565583
//   XREF to: 00565583 (CONDITIONAL_JUMP)
// 0056557e: MOV EBX,0xffffffff
// 00565583: CMP byte ptr [0x0310fd58],0x0
//   Label: LAB_00565583
//   XREF to: 0310fd58 (READ)
// 0056558a: JNZ 0x005655a8
//   XREF to: 005655a8 (CONDITIONAL_JUMP)
// 0056558c: PUSH 0x1
// 0056558e: PUSH 0x64
// 00565590: PUSH 0x310fd58
//   XREF to: 0310fd58 (DATA)
// 00565595: PUSH 0x643e7d
//   XREF to: 00643e7d (DATA)
// 0056559a: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0056559f: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005655a0: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 005655a5: ADD ESP,0x14
// 005655a8: CMP byte ptr [0x0310fd58],0x0
//   Label: LAB_005655a8
//   XREF to: 0310fd58 (READ)
// 005655af: JZ 0x0056562d
//   XREF to: 0056562d (CONDITIONAL_JUMP)
// 005655b1: PUSH EBX
// 005655b2: LEA EAX,[ESP + 0x1c]
// 005655b6: PUSH EAX
// 005655b7: LEA EAX,[ESP + 0x1c]
// 005655bb: PUSH EAX
// 005655bc: LEA EAX,[ESP + 0x1c]
// 005655c0: PUSH EAX
// 005655c1: MOV EDX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005655c7: MOV ECX,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 005655cd: PUSH EDX
// 005655ce: ADD EBX,ECX
// 005655d0: PUSH EBX
// 005655d1: PUSH 0x310fd58
//   XREF to: 0310fd58 (DATA)
// 005655d6: PUSH EBP
// 005655d7: CALL core_script.cpp_FUN_00566cc0
//   XREF to: 00566cc0 (UNCONDITIONAL_CALL)
// 005655dc: ADD ESP,0x20
// 005655df: TEST EAX,EAX
// 005655e1: JZ 0x00565827
//   XREF to: 00565827 (CONDITIONAL_JUMP)
// 005655e7: PUSH 0x310fd58
//   XREF to: 0310fd58 (DATA)
// 005655ec: PUSH 0x643e82
//   XREF to: 00643e82 (DATA)
// 005655f1: PUSH 0x310fdc0
//   XREF to: 0310fdc0 (DATA)
// 005655f6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005655fb: ADD ESP,0xc
// 005655fe: MOV EAX,dword ptr [ESP + 0x14]
// 00565602: MOV [0x0310fd48],EAX
//   XREF to: 0310fd48 (WRITE)
// 00565607: MOV EAX,dword ptr [ESP + 0x10]
// 0056560b: MOV EBX,0x1
// 00565610: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 00565615: MOV EAX,dword ptr [ESP + 0x18]
// 00565619: XOR ESI,ESI
// 0056561b: MOV [0x0310fd4c],EAX
//   XREF to: 0310fd4c (WRITE)
// 00565620: MOV EAX,dword ptr [ESP + 0x14]
// 00565624: MOV dword ptr [ESP + 0x24],EBX
// 00565628: MOV [0x0310fd50],EAX
//   XREF to: 0310fd50 (WRITE)
// 0056562d: PUSH 0x3e
//   Label: LAB_0056562d
// 0056562f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565634: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565635: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565637: CALL dword ptr [EDX + 0x4]
// 0056563a: ADD ESP,0x8
// 0056563d: TEST EAX,EAX
// 0056563f: JZ 0x0056565d
//   XREF to: 0056565d (CONDITIONAL_JUMP)
// 00565641: MOV ESI,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565647: PUSH ESI
// 00565648: MOV EDI,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 0056564e: PUSH EDI
// 0056564f: PUSH EBP
// 00565650: MOV ESI,0x1
// 00565655: CALL core_script.cpp_FUN_00565ae0
//   XREF to: 00565ae0 (UNCONDITIONAL_CALL)
// 0056565a: ADD ESP,0xc
// 0056565d: PUSH 0x40
//   Label: LAB_0056565d
// 0056565f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565664: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565665: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565667: CALL dword ptr [EDX + 0x4]
// 0056566a: ADD ESP,0x8
// 0056566d: TEST EAX,EAX
// 0056566f: JZ 0x0056568c
//   XREF to: 0056568c (CONDITIONAL_JUMP)
// 00565671: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565676: PUSH EAX
// 00565677: MOV EDX,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 0056567d: PUSH EDX
// 0056567e: PUSH EBP
// 0056567f: MOV ESI,0x1
// 00565684: CALL core_script.cpp_FUN_00565d00
//   XREF to: 00565d00 (UNCONDITIONAL_CALL)
// 00565689: ADD ESP,0xc
// 0056568c: PUSH 0x3b
//   Label: LAB_0056568c
// 0056568e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00565693: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00565694: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565696: CALL dword ptr [EDX + 0x4]
// 00565699: ADD ESP,0x8
// 0056569c: TEST EAX,EAX
// 0056569e: JZ 0x005656b7
//   XREF to: 005656b7 (CONDITIONAL_JUMP)
// 005656a0: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005656a6: PUSH ECX
// 005656a7: MOV EBX,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 005656ad: PUSH EBX
// 005656ae: PUSH EBP
// 005656af: CALL core_script.cpp_FUN_00565e70
//   XREF to: 00565e70 (UNCONDITIONAL_CALL)
// 005656b4: ADD ESP,0xc
// 005656b7: MOV EDI,dword ptr [0x02cf2b00]
//   Label: LAB_005656b7
//   XREF to: 02cf2b00 (READ)
// 005656bd: CMP EBP,EDI
// 005656bf: JNZ 0x0056584f
//   XREF to: 0056584f (CONDITIONAL_JUMP)
// 005656c5: TEST byte ptr [0x02cf6a94],0x1
//   XREF to: 02cf6a94 (READ)
// 005656cc: JZ 0x00565843
//   XREF to: 00565843 (CONDITIONAL_JUMP)
// 005656d2: PUSH 0x310fd48
//   XREF to: 0310fd48 (DATA)
// 005656d7: PUSH 0x310fd44
//   XREF to: 0310fd44 (DATA)
// 005656dc: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 005656e2: PUSH EDX
// 005656e3: MOV ECX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 005656e9: PUSH ECX
// 005656ea: PUSH EDI
// 005656eb: CALL core_script.cpp_FUN_00566c20
//   XREF to: 00566c20 (UNCONDITIONAL_CALL)
// 005656f0: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 005656f5: MOV EBX,dword ptr [0x031141e0]
//   XREF to: 031141e0 (READ)
// 005656fb: ADD ESP,0x14
// 005656fe: CMP EAX,EBX
// 00565700: JG 0x0056570f
//   XREF to: 0056570f (CONDITIONAL_JUMP)
// 00565702: PUSH 0x0
// 00565704: PUSH 0x0
// 00565706: PUSH EDI
// 00565707: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 0056570c: ADD ESP,0xc
// 0056570f: MOV EDI,dword ptr [0x031141e8]
//   Label: LAB_0056570f
//   XREF to: 031141e8 (READ)
// 00565715: CMP EDI,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0056571b: JG 0x0056572a
//   XREF to: 0056572a (CONDITIONAL_JUMP)
// 0056571d: PUSH 0x0
// 0056571f: PUSH 0x1
// 00565721: PUSH EBP
// 00565722: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 00565727: ADD ESP,0xc
// 0056572a: MOV EDX,dword ptr [0x031141e4]
//   Label: LAB_0056572a
//   XREF to: 031141e4 (READ)
// 00565730: CMP EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 00565736: JL 0x00565745
//   XREF to: 00565745 (CONDITIONAL_JUMP)
// 00565738: PUSH 0x0
// 0056573a: PUSH 0x2
// 0056573c: PUSH EBP
// 0056573d: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 00565742: ADD ESP,0xc
// 00565745: MOV ECX,dword ptr [0x031141ec]
//   Label: LAB_00565745
//   XREF to: 031141ec (READ)
// 0056574b: CMP ECX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 00565751: JG 0x00565760
//   XREF to: 00565760 (CONDITIONAL_JUMP)
// 00565753: PUSH 0x0
// 00565755: PUSH 0x3
// 00565757: PUSH EBP
// 00565758: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 0056575d: ADD ESP,0xc
// 00565760: MOV dword ptr [ESP + 0x24],0x1
//   Label: LAB_00565760
// 00565768: PUSH EBP
//   Label: LAB_00565768
// 00565769: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 0056576e: ADD ESP,0x4
// 00565771: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_00565771
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 00565776: TEST EAX,EAX
// 00565778: JZ 0x00565a16
//   XREF to: 00565a16 (CONDITIONAL_JUMP)
// 0056577e: XOR EBX,EBX
// 00565780: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00565785: MOV BL,AL
// 00565787: CMP EBX,0xd
// 0056578a: JNZ 0x0056591c
//   XREF to: 0056591c (CONDITIONAL_JUMP)
// 00565790: PUSH 0x0
// 00565792: PUSH 0x12
// 00565794: PUSH EBP
// 00565795: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 0056579a: ADD ESP,0xc
// 0056579d: JMP 0x00565771
//   XREF to: 00565771 (UNCONDITIONAL_JUMP)
// 0056579f: PUSH ESI
//   Label: LAB_0056579f
// 005657a0: PUSH ESI
// 005657a1: PUSH EBP
// 005657a2: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 005657a7: ADD ESP,0xc
// 005657aa: JMP 0x005651cb
//   XREF to: 005651cb (UNCONDITIONAL_JUMP)
// 005657af: PUSH EAX
//   Label: LAB_005657af
// 005657b0: PUSH 0x6
// 005657b2: JMP 0x0056525d
//   XREF to: 0056525d (UNCONDITIONAL_JUMP)
// 005657b7: PUSH EAX
//   Label: LAB_005657b7
// 005657b8: PUSH 0x7
// 005657ba: JMP 0x00565295
//   XREF to: 00565295 (UNCONDITIONAL_JUMP)
// 005657bf: PUSH EAX
//   Label: LAB_005657bf
// 005657c0: PUSH 0xf
// 005657c2: JMP 0x00565322
//   XREF to: 00565322 (UNCONDITIONAL_JUMP)
// 005657c7: PUSH 0x0
//   Label: LAB_005657c7
// 005657c9: PUSH 0x11
// 005657cb: JMP 0x00565322
//   XREF to: 00565322 (UNCONDITIONAL_JUMP)
// 005657d0: PUSH 0x2a
//   Label: LAB_005657d0
// 005657d2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005657d7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005657d8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005657da: CALL dword ptr [EDX]
// 005657dc: ADD ESP,0x8
// 005657df: TEST EAX,EAX
// 005657e1: JZ 0x005657f2
//   XREF to: 005657f2 (CONDITIONAL_JUMP)
// 005657e3: PUSH 0x0
// 005657e5: PUSH 0xe
// 005657e7: PUSH EBP
// 005657e8: MOV ESI,0x1
// 005657ed: JMP 0x0056535b
//   XREF to: 0056535b (UNCONDITIONAL_JUMP)
// 005657f2: CMP dword ptr [0x0068105c],0x0
//   Label: LAB_005657f2
//   XREF to: 0068105c (READ)
// 005657f9: SETZ AL
// 005657fc: AND EAX,0xff
// 00565801: MOV [0x0068105c],EAX
//   XREF to: 0068105c (WRITE)
// 00565806: JMP 0x00565363
//   XREF to: 00565363 (UNCONDITIONAL_JUMP)
// 0056580b: PUSH 0x310fd58
//   Label: LAB_0056580b
//   XREF to: 0310fd58 (DATA)
// 00565810: PUSH 0x643e6f
//   XREF to: 00643e6f (DATA)
// 00565815: PUSH 0x310fdc0
//   XREF to: 0310fdc0 (DATA)
// 0056581a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056581f: ADD ESP,0xc
// 00565822: JMP 0x0056554e
//   XREF to: 0056554e (UNCONDITIONAL_JUMP)
// 00565827: PUSH 0x310fd58
//   Label: LAB_00565827
//   XREF to: 0310fd58 (DATA)
// 0056582c: PUSH 0x643e8b
//   XREF to: 00643e8b (DATA)
// 00565831: PUSH 0x310fdc0
//   XREF to: 0310fdc0 (DATA)
// 00565836: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056583b: ADD ESP,0xc
// 0056583e: JMP 0x0056562d
//   XREF to: 0056562d (UNCONDITIONAL_JUMP)
// 00565843: XOR EAX,EAX
//   Label: LAB_00565843
// 00565845: MOV [0x02cf2b00],EAX
//   XREF to: 02cf2b00 (WRITE)
// 0056584a: JMP 0x00565768
//   XREF to: 00565768 (UNCONDITIONAL_JUMP)
// 0056584f: TEST EDI,EDI
//   Label: LAB_0056584f
// 00565851: JNZ 0x00565768
//   XREF to: 00565768 (CONDITIONAL_JUMP)
// 00565857: MOV DH,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 0056585d: TEST DH,0x1
// 00565860: JZ 0x005658c9
//   XREF to: 005658c9 (CONDITIONAL_JUMP)
// 00565862: PUSH 0x310fd48
//   XREF to: 0310fd48 (DATA)
// 00565867: PUSH 0x310fd44
//   XREF to: 0310fd44 (DATA)
// 0056586c: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 00565872: PUSH EDX
// 00565873: MOV ECX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 00565879: PUSH ECX
// 0056587a: PUSH EBP
// 0056587b: CALL core_script.cpp_FUN_00566c20
//   XREF to: 00566c20 (UNCONDITIONAL_CALL)
// 00565880: ADD ESP,0x14
// 00565883: TEST EAX,EAX
// 00565885: JZ 0x005658b7
//   XREF to: 005658b7 (CONDITIONAL_JUMP)
// 00565887: PUSH 0x38
// 00565889: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0056588e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0056588f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00565891: CALL dword ptr [EDX]
// 00565893: ADD ESP,0x8
// 00565896: TEST EAX,EAX
// 00565898: JZ 0x005658c1
//   XREF to: 005658c1 (CONDITIONAL_JUMP)
// 0056589a: MOV EBX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005658a0: PUSH EBX
// 005658a1: MOV ESI,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 005658a7: PUSH ESI
// 005658a8: PUSH EBP
// 005658a9: CALL core_script.cpp_FUN_00565ae0
//   XREF to: 00565ae0 (UNCONDITIONAL_CALL)
// 005658ae: ADD ESP,0xc
// 005658b1: MOV dword ptr [0x02cf6a94],EDI
//   XREF to: 02cf6a94 (WRITE)
// 005658b7: MOV ESI,0x1
//   Label: LAB_005658b7
// 005658bc: JMP 0x00565768
//   XREF to: 00565768 (UNCONDITIONAL_JUMP)
// 005658c1: MOV dword ptr [0x02cf2b00],EBP
//   Label: LAB_005658c1
//   XREF to: 02cf2b00 (WRITE)
// 005658c7: JMP 0x005658b7
//   XREF to: 005658b7 (UNCONDITIONAL_JUMP)
// 005658c9: TEST DH,0x2
//   Label: LAB_005658c9
// 005658cc: JZ 0x00565768
//   XREF to: 00565768 (CONDITIONAL_JUMP)
// 005658d2: PUSH 0x310fd48
//   XREF to: 0310fd48 (DATA)
// 005658d7: PUSH 0x310fd44
//   XREF to: 0310fd44 (DATA)
// 005658dc: MOV ECX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 005658e2: PUSH ECX
// 005658e3: MOV EBX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 005658e9: PUSH EBX
// 005658ea: PUSH EBP
// 005658eb: MOV dword ptr [0x02cf6a94],EDI
//   XREF to: 02cf6a94 (WRITE)
// 005658f1: CALL core_script.cpp_FUN_00566c20
//   XREF to: 00566c20 (UNCONDITIONAL_CALL)
// 005658f6: ADD ESP,0x14
// 005658f9: TEST EAX,EAX
// 005658fb: JZ 0x00565768
//   XREF to: 00565768 (CONDITIONAL_JUMP)
// 00565901: MOV EDI,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565907: PUSH EDI
// 00565908: MOV EAX,[0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 0056590d: PUSH EAX
// 0056590e: PUSH EBP
// 0056590f: CALL core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0
//   XREF to: 00565aa0 (UNCONDITIONAL_CALL)
// 00565914: ADD ESP,0xc
// 00565917: JMP 0x00565768
//   XREF to: 00565768 (UNCONDITIONAL_JUMP)
// 0056591c: CMP EBX,0x8
//   Label: LAB_0056591c
// 0056591f: JNZ 0x00565933
//   XREF to: 00565933 (CONDITIONAL_JUMP)
// 00565921: PUSH 0x0
// 00565923: PUSH 0x10
// 00565925: PUSH EBP
// 00565926: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 0056592b: ADD ESP,0xc
// 0056592e: JMP 0x00565771
//   XREF to: 00565771 (UNCONDITIONAL_JUMP)
// 00565933: INC AL
//   Label: LAB_00565933
// 00565935: AND EAX,0xff
// 0056593a: TEST byte ptr [EAX + 0x6849c4],0x8
//   XREF to: 006849c4 (DATA)
// 00565941: JZ 0x0056597e
//   XREF to: 0056597e (CONDITIONAL_JUMP)
// 00565943: PUSH 0x0
//   Label: LAB_00565943
// 00565945: PUSH 0xf
// 00565947: PUSH EBP
// 00565948: CALL core_script.cpp_CScript_editorAction_FUN_00564820
//   XREF to: 00564820 (UNCONDITIONAL_CALL)
// 0056594d: MOV ESI,dword ptr [0x0068105c]
//   XREF to: 0068105c (READ)
// 00565953: ADD ESP,0xc
// 00565956: TEST ESI,ESI
// 00565958: JZ 0x00565988
//   XREF to: 00565988 (CONDITIONAL_JUMP)
// 0056595a: PUSH 0x1
// 0056595c: LEA EAX,[ESP + 0x2c]
// 00565960: PUSH EAX
// 00565961: XOR CH,CH
// 00565963: PUSH EBP
// 00565964: MOV byte ptr [ESP + 0x34],BL
// 00565968: MOV byte ptr [ESP + 0x35],CH
// 0056596c: CALL core_script.cpp_FUN_00566390
//   XREF to: 00566390 (UNCONDITIONAL_CALL)
// 00565971: ADD ESP,0xc
// 00565974: MOV ESI,0x1
// 00565979: JMP 0x00565771
//   XREF to: 00565771 (UNCONDITIONAL_JUMP)
// 0056597e: CMP EBX,0x9
//   Label: LAB_0056597e
// 00565981: JZ 0x00565943
//   XREF to: 00565943 (CONDITIONAL_JUMP)
// 00565983: JMP 0x00565771
//   XREF to: 00565771 (UNCONDITIONAL_JUMP)
// 00565988: MOV EDI,dword ptr [0x0310fd48]
//   Label: LAB_00565988
//   XREF to: 0310fd48 (READ)
// 0056598e: PUSH EDI
// 0056598f: PUSH EBP
// 00565990: CALL core_script.cpp_FUN_00566230
//   XREF to: 00566230 (UNCONDITIONAL_CALL)
// 00565995: ADD ESP,0x8
// 00565998: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 0056599d: SUB ECX,ECX
// 0056599f: DEC ECX
// 005659a0: XOR EAX,EAX
// 005659a2: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 005659a4: NOT ECX
// 005659a6: DEC ECX
// 005659a7: MOV EAX,[0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 005659ac: PUSH EAX
// 005659ad: MOV EDX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005659b3: PUSH EDX
// 005659b4: PUSH EBP
// 005659b5: MOV EDI,ECX
// 005659b7: MOV ESI,ECX
// 005659b9: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 005659be: ADD ESP,0xc
// 005659c1: CMP EDI,EAX
// 005659c3: JGE 0x005659d2
//   XREF to: 005659d2 (CONDITIONAL_JUMP)
// 005659c5: MOV DL,0x20
// 005659c7: INC ESI
//   Label: LAB_005659c7
// 005659c8: MOV byte ptr [ESI + 0x31101bf],DL
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031101c1 (WRITE)
// 005659ce: CMP ESI,EAX
// 005659d0: JL 0x005659c7
//   XREF to: 005659c7 (CONDITIONAL_JUMP)
// 005659d2: MOV byte ptr [EAX + 0x31101c0],BL
//   Label: LAB_005659d2
//   XREF to: 031101c0 (DATA)
// 005659d8: CMP ESI,EAX
// 005659da: JG 0x005659dd
//   XREF to: 005659dd (CONDITIONAL_JUMP)
// 005659dc: INC ESI
// 005659dd: INC EAX
//   Label: LAB_005659dd
// 005659de: PUSH EAX
// 005659df: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005659e5: PUSH ECX
// 005659e6: XOR DH,DH
// 005659e8: PUSH EBP
// 005659e9: MOV byte ptr [ESI + 0x31101c0],DH
//   XREF to: 031101c1 (WRITE)
//   XREF to: 031101c2 (WRITE)
//   XREF to: 031101c3 (WRITE)
// 005659ef: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 005659f4: ADD ESP,0xc
// 005659f7: MOV EBX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005659fd: PUSH EBX
// 005659fe: PUSH EBP
// 005659ff: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 00565a04: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 00565a09: ADD ESP,0x8
// 00565a0c: MOV ESI,0x1
// 00565a11: JMP 0x00565771
//   XREF to: 00565771 (UNCONDITIONAL_JUMP)
// 00565a16: PUSH EBP
//   Label: LAB_00565a16
// 00565a17: CALL core_script.cpp_CScript_Unk18_FUN_005669a0
//   XREF to: 005669a0 (UNCONDITIONAL_CALL)
// 00565a1c: ADD ESP,0x4
// 00565a1f: TEST ESI,ESI
// 00565a21: JNZ 0x00565a62
//   XREF to: 00565a62 (CONDITIONAL_JUMP)
// 00565a23: MOV EAX,dword ptr [ESP + 0x20]
// 00565a27: CMP EAX,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 00565a2d: JZ 0x00565a69
//   XREF to: 00565a69 (CONDITIONAL_JUMP)
// 00565a2f: CMP dword ptr [ESP + 0x24],0x0
//   Label: LAB_00565a2f
// 00565a34: JZ 0x00565a8b
//   XREF to: 00565a8b (CONDITIONAL_JUMP)
// 00565a36: CMP dword ptr [0x0310fd4c],0x0
//   XREF to: 0310fd4c (READ)
// 00565a3d: JL 0x00565a77
//   XREF to: 00565a77 (CONDITIONAL_JUMP)
// 00565a3f: XOR ECX,ECX
//   Label: LAB_00565a3f
// 00565a41: MOV dword ptr [0x0310fd40],ECX
//   XREF to: 0310fd40 (WRITE)
// 00565a47: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_00565a47
// 00565a4b: PUSH ESI
// 00565a4c: PUSH EBP
// 00565a4d: CALL core_script.cpp_FUN_00566800
//   XREF to: 00566800 (UNCONDITIONAL_CALL)
// 00565a52: ADD ESP,0x8
// 00565a55: CALL core_script.cpp_FUN_00564500
//   XREF to: 00564500 (UNCONDITIONAL_CALL)
// 00565a5a: ADD ESP,0x2c
// 00565a5d: POP EBP
// 00565a5e: POP EDI
// 00565a5f: POP ESI
// 00565a60: POP EBX
// 00565a61: RET
// 00565a62: CALL core_script.cpp_FUN_005644e0
//   Label: LAB_00565a62
//   XREF to: 005644e0 (UNCONDITIONAL_CALL)
// 00565a67: JMP 0x00565a47
//   XREF to: 00565a47 (UNCONDITIONAL_JUMP)
// 00565a69: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00565a69
// 00565a6d: CMP EAX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565a73: JNZ 0x00565a2f
//   XREF to: 00565a2f (CONDITIONAL_JUMP)
// 00565a75: JMP 0x00565a47
//   XREF to: 00565a47 (UNCONDITIONAL_JUMP)
// 00565a77: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_00565a77
// 00565a7b: MOV [0x0310fd4c],EAX
//   XREF to: 0310fd4c (WRITE)
// 00565a80: MOV EAX,dword ptr [ESP + 0x1c]
// 00565a84: MOV [0x0310fd50],EAX
//   XREF to: 0310fd50 (WRITE)
// 00565a89: JMP 0x00565a3f
//   XREF to: 00565a3f (UNCONDITIONAL_JUMP)
// 00565a8b: CALL core_script.cpp_FUN_005644e0
//   Label: LAB_00565a8b
//   XREF to: 005644e0 (UNCONDITIONAL_CALL)
// 00565a90: JMP 0x00565a3f
//   XREF to: 00565a3f (UNCONDITIONAL_JUMP)
