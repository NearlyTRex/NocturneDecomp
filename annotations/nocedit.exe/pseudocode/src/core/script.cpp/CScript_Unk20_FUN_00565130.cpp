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
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  CEdButton *in_stack_00000004;
  char *in_stack_0000007c;
  char *in_stack_00000080;
  char *in_stack_00000084;
  char *in_stack_00000088;
  char *in_stack_0000008c;
  char *in_stack_00000090;
  char *in_stack_00000094;
  char *in_stack_00000098;
  CKeys *in_stack_0000009c;
  CEdButton *in_stack_000000a0;
  CKeys *in_stack_000000a4;
  CEdButton *in_stack_000000a8;
  int *in_stack_000000ac;
  int *in_stack_000000b0;
  int in_stack_000000b4;
  int in_stack_000000b8;
  uint in_stack_000000c0;
  int in_stack_000000d0;
  int in_stack_000000d4;
  int in_stack_000000d8;
  char cStack000000dc;
  byte uStack000000dd;
  
  bVar11 = 0;
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  DAT_0310fd40 = DAT_0310fd40 + g_GlobalDeltaTimeInt & 0xfffff;
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  core_script_cpp_CScript_Unk18_FUN_005669a0();
  core_script_cpp_FUN_00564500();
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&DAT_0310fd0c);
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&DAT_0310fcd8);
  core_script_cpp_FUN_00566880();
  bVar2 = false;
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x50);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x48);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47);
  if (iVar6 != 0) {
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4f);
  if (iVar6 != 0) {
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x51);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x49);
  if (iVar6 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x53);
  if (iVar6 != 0) {
    bVar2 = true;
    if (-1 < DAT_0310fd4c) {
      (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    }
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x52);
  if (iVar6 != 0) {
    iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if (iVar6 == 0) {
      iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar6 == 0) {
        DAT_0068105c = (uint)(DAT_0068105c == 0);
        goto LAB_00565363;
      }
      bVar2 = true;
    }
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
LAB_00565363:
  iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar6 != 0) {
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2d);
    if (iVar6 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar6 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f);
    if (iVar6 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
  }
  iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if ((iVar6 != 0) &&
     (iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x22), iVar6 != 0)) {
    in_stack_0000007c = (char *)(DAT_0310fd48 + 1);
    iVar6 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004->button_text + 0x1c));
    iVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter line number",(int *)&stack0x0000007c,1,1,
                       iVar6 + 1,1);
    if (iVar6 != 0) {
      DAT_0310fd48 = (int)(((CEdButton *)((int)in_stack_0000007c + -0xe4))->button_text + 199);
      bVar2 = true;
      DAT_0310fd44 = 0;
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
  }
  iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if ((iVar6 != 0) &&
     (iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21), iVar6 != 0)) {
    in_stack_00000080 = (char *)0x2a;
    in_stack_0000007c = (char *)g_CKeysPtr;
    uVar8 = 1;
    iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar6 != 0) {
      uVar8 = 0xffffffff;
    }
    in_stack_00000088 = (char *)0x1;
    in_stack_00000084 = (char *)0x64;
    in_stack_00000080 = &DAT_0310fd58;
    in_stack_0000007c = "Find";
    iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Find",&DAT_0310fd58,100,1);
    if (iVar6 != 0) {
      in_stack_00000084 = (char *)&stack0x00000090;
      in_stack_00000080 = (char *)&stack0x0000008c;
      in_stack_0000007c = (char *)&stack0x00000098;
      in_stack_00000088 = (char *)uVar8;
      iVar6 = core_script_cpp_FUN_00566cc0();
      if (iVar6 == 0) {
        in_stack_00000088 = &DAT_0310fd58;
        in_stack_00000084 = "Can't find %s";
        in_stack_00000080 = &DAT_0310fdc0;
        in_stack_0000007c = (char *)0x56581f;
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"Can't find %s");
      }
      else {
        in_stack_00000088 = &DAT_0310fd58;
        in_stack_00000084 = "Found %s";
        in_stack_00000080 = &DAT_0310fdc0;
        in_stack_0000007c = (char *)0x56551e;
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"Found %s");
        DAT_0310fd48 = (int)in_stack_0000008c;
        DAT_0310fd44 = (int)in_stack_00000098;
        bVar2 = false;
        DAT_0310fd4c = (int)in_stack_00000090;
        in_stack_000000b0 = (int *)0x1;
        DAT_0310fd50 = (int)in_stack_0000008c;
      }
    }
  }
  in_stack_00000088 = (char *)0x3d;
  in_stack_00000084 = (char *)g_CKeysPtr;
  in_stack_00000080 = (char *)0x56555b;
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3d);
  if (iVar6 != 0) {
    in_stack_00000090 = (char *)0x2a;
    in_stack_0000008c = (char *)g_CKeysPtr;
    iVar9 = 1;
    in_stack_00000088 = (char *)0x565577;
    iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar6 != 0) {
      iVar9 = -1;
    }
    if (DAT_0310fd58 == '\0') {
      in_stack_00000098 = (char *)0x1;
      in_stack_00000094 = (char *)0x64;
      in_stack_00000090 = &DAT_0310fd58;
      in_stack_0000008c = "Find";
      in_stack_00000088 = &g_CEditorToolsPtr->field0_0x0;
      in_stack_00000084 = (char *)0x5655a5;
      shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                (g_CEditorToolsPtr,"Find",&DAT_0310fd58,100,1);
    }
    if (DAT_0310fd58 != '\0') {
      in_stack_00000094 = (char *)&stack0x000000b4;
      in_stack_00000090 = (char *)&stack0x000000b0;
      in_stack_0000008c = (char *)&stack0x000000ac;
      in_stack_00000088 = (char *)DAT_0310fd48;
      in_stack_00000084 = (char *)(iVar9 + DAT_0310fd44);
      in_stack_00000080 = &DAT_0310fd58;
      in_stack_0000007c = (char *)in_stack_00000004;
      in_stack_00000098 = (char *)iVar9;
      iVar6 = core_script_cpp_FUN_00566cc0();
      if (iVar6 == 0) {
        in_stack_00000098 = &DAT_0310fd58;
        in_stack_00000094 = "Can't find %s";
        in_stack_00000090 = &DAT_0310fdc0;
        in_stack_0000008c = (char *)0x56583b;
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"Can't find %s");
      }
      else {
        in_stack_00000098 = &DAT_0310fd58;
        in_stack_00000094 = "Found %s";
        in_stack_00000090 = &DAT_0310fdc0;
        in_stack_0000008c = (char *)0x5655fb;
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"Found %s");
        DAT_0310fd48 = (int)in_stack_000000b0;
        DAT_0310fd44 = (int)in_stack_000000ac;
        bVar2 = false;
        DAT_0310fd4c = in_stack_000000b4;
        in_stack_000000c0 = 1;
        DAT_0310fd50 = (int)in_stack_000000b0;
      }
    }
  }
  in_stack_00000098 = (char *)0x3e;
  in_stack_00000094 = (char *)g_CKeysPtr;
  in_stack_00000090 = (char *)0x56563a;
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e);
  if (iVar6 != 0) {
    in_stack_000000a0 = (CEdButton *)DAT_0310fd48;
    in_stack_0000009c = (CKeys *)DAT_0310fd44;
    in_stack_00000098 = (char *)in_stack_00000004;
    bVar2 = true;
    in_stack_00000094 = (char *)0x56565a;
    core_script_cpp_FUN_00565ae0();
  }
  in_stack_000000a0 = (CEdButton *)0x40;
  in_stack_0000009c = g_CKeysPtr;
  in_stack_00000098 = (char *)0x56566a;
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x40);
  if (iVar6 != 0) {
    in_stack_000000a8 = (CEdButton *)DAT_0310fd48;
    in_stack_000000a4 = (CKeys *)DAT_0310fd44;
    in_stack_000000a0 = in_stack_00000004;
    bVar2 = true;
    in_stack_0000009c = (CKeys *)0x565689;
    core_script_cpp_FUN_00565d00();
  }
  in_stack_000000a8 = (CEdButton *)0x3b;
  in_stack_000000a4 = g_CKeysPtr;
  in_stack_000000a0 = (CEdButton *)0x565699;
  iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
  if (iVar6 != 0) {
    in_stack_000000b0 = (int *)DAT_0310fd48;
    in_stack_000000ac = (int *)DAT_0310fd44;
    in_stack_000000a8 = in_stack_00000004;
    in_stack_000000a4 = (CKeys *)0x5656b4;
    core_script_cpp_FUN_00565e70();
  }
  pCVar3 = g_ActiveButton;
  if (in_stack_00000004 == g_ActiveButton) {
    if ((g_MouseButtonFlags & 1U) == 0) {
      g_ActiveButton = (CEdButton *)0x0;
    }
    else {
      in_stack_000000b0 = &DAT_0310fd48;
      in_stack_000000ac = &DAT_0310fd44;
      in_stack_000000a8 = (CEdButton *)g_MouseY;
      in_stack_000000a4 = (CKeys *)g_MouseX;
      in_stack_000000a0 = g_ActiveButton;
      in_stack_0000009c = (CKeys *)0x5656f0;
      core_script_cpp_FUN_00566c20();
      if (g_MouseX <= DAT_031141e0) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (int *)0x0;
        in_stack_000000a8 = pCVar3;
        in_stack_000000a4 = (CKeys *)0x56570c;
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      if (DAT_031141e8 <= g_MouseX) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (int *)0x1;
        in_stack_000000a8 = in_stack_00000004;
        in_stack_000000a4 = (CKeys *)0x565727;
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      if (g_MouseY <= DAT_031141e4) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (int *)0x2;
        in_stack_000000a8 = in_stack_00000004;
        in_stack_000000a4 = (CKeys *)0x565742;
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      if (DAT_031141ec <= g_MouseY) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (int *)0x3;
        in_stack_000000a8 = in_stack_00000004;
        in_stack_000000a4 = (CKeys *)0x56575d;
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      in_stack_000000d8 = 1;
    }
  }
  else if (g_ActiveButton == (CEdButton *)0x0) {
    if ((g_MouseButtonFlags & 1U) == 0) {
      if ((g_MouseButtonFlags & 2U) != 0) {
        in_stack_000000b0 = &DAT_0310fd48;
        in_stack_000000ac = &DAT_0310fd44;
        in_stack_000000a8 = (CEdButton *)g_MouseY;
        in_stack_000000a4 = (CKeys *)g_MouseX;
        in_stack_000000a0 = in_stack_00000004;
        g_MouseButtonFlags = (int)g_ActiveButton;
        in_stack_0000009c = (CKeys *)0x5658f6;
        iVar6 = core_script_cpp_FUN_00566c20();
        if (iVar6 != 0) {
          in_stack_000000b0 = (int *)DAT_0310fd48;
          in_stack_000000ac = (int *)DAT_0310fd44;
          in_stack_000000a8 = in_stack_00000004;
          in_stack_000000a4 = (CKeys *)0x565914;
          core_script_cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0();
        }
      }
    }
    else {
      in_stack_000000b0 = &DAT_0310fd48;
      in_stack_000000ac = &DAT_0310fd44;
      in_stack_000000a8 = (CEdButton *)g_MouseY;
      in_stack_000000a4 = (CKeys *)g_MouseX;
      in_stack_000000a0 = in_stack_00000004;
      in_stack_0000009c = (CKeys *)0x565880;
      iVar6 = core_script_cpp_FUN_00566c20();
      pCVar4 = g_ActiveButton;
      if (iVar6 != 0) {
        in_stack_000000b0 = (int *)0x38;
        in_stack_000000ac = (int *)g_CKeysPtr;
        in_stack_000000a8 = (CEdButton *)0x565893;
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        pCVar4 = in_stack_00000004;
        if (iVar6 != 0) {
          in_stack_000000b8 = DAT_0310fd48;
          in_stack_000000b4 = DAT_0310fd44;
          in_stack_000000b0 = &in_stack_00000004->enabled;
          in_stack_000000ac = (int *)0x5658ae;
          core_script_cpp_FUN_00565ae0();
          g_MouseButtonFlags = (int)pCVar3;
          pCVar4 = g_ActiveButton;
        }
      }
      g_ActiveButton = pCVar4;
      bVar2 = true;
    }
  }
  in_stack_000000b0 = &in_stack_00000004->enabled;
  in_stack_000000ac = (int *)0x56576e;
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            in_stack_000000b0 = (int *)0x565776;
            iVar6 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
            if (iVar6 == 0) {
              in_stack_000000b0 = &in_stack_00000004->enabled;
              in_stack_000000ac = (int *)0x565a1c;
              core_script_cpp_CScript_Unk18_FUN_005669a0();
              if (bVar2) {
                in_stack_000000b0 = (int *)0x565a67;
                core_script_cpp_FUN_005644e0();
              }
              else if ((in_stack_000000d4 != DAT_0310fd44) || (in_stack_000000d0 != DAT_0310fd48)) {
                if (in_stack_000000d8 == 0) {
                  in_stack_000000b0 = (int *)0x565a90;
                  core_script_cpp_FUN_005644e0();
                }
                else if (DAT_0310fd4c < 0) {
                  DAT_0310fd4c = in_stack_000000d4;
                  DAT_0310fd50 = in_stack_000000d0;
                }
                DAT_0310fd40 = 0;
              }
              in_stack_000000b0 = (int *)in_stack_000000d0;
              in_stack_000000ac = &in_stack_00000004->enabled;
              in_stack_000000a8 = (CEdButton *)0x565a52;
              core_script_cpp_FUN_00566800();
              in_stack_000000b0 = (int *)0x565a5a;
              core_script_cpp_FUN_00564500();
              return;
            }
            in_stack_000000b0 = (int *)0x565785;
            uVar7 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
            cVar5 = (char)uVar7;
            uVar7 = uVar7 & 0xff;
            if (uVar7 != 0xd) break;
            in_stack_000000b0 = (int *)0x0;
            in_stack_000000ac = (int *)0x12;
            in_stack_000000a8 = in_stack_00000004;
            in_stack_000000a4 = (CKeys *)0x56579a;
            core_script_cpp_CScript_editorAction_FUN_00564820();
          }
          if (uVar7 != 8) break;
          in_stack_000000b0 = (int *)0x0;
          in_stack_000000ac = (int *)&DAT_00000010;
          in_stack_000000a8 = in_stack_00000004;
          in_stack_000000a4 = (CKeys *)0x56592b;
          core_script_cpp_CScript_editorAction_FUN_00564820();
        }
      } while (((g_CharacterClassificationTable[(byte)(cVar5 + 1)] & 8U) == 0) && (uVar7 != 9));
      in_stack_000000b0 = (int *)0x0;
      in_stack_000000ac = (int *)0xf;
      in_stack_000000a8 = in_stack_00000004;
      in_stack_000000a4 = (CKeys *)0x56594d;
      core_script_cpp_CScript_editorAction_FUN_00564820();
      if (DAT_0068105c == 0) break;
      in_stack_000000b0 = (int *)0x1;
      in_stack_000000ac = (int *)&stack0x000000dc;
      in_stack_000000a8 = in_stack_00000004;
      uStack000000dd = 0;
      in_stack_000000a4 = (CKeys *)0x565971;
      cStack000000dc = cVar5;
      core_script_cpp_FUN_00566390();
      bVar2 = true;
    }
    in_stack_000000b0 = (int *)DAT_0310fd48;
    in_stack_000000ac = &in_stack_00000004->enabled;
    in_stack_000000a8 = (CEdButton *)0x565995;
    core_script_cpp_FUN_00566230();
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_031101c0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    in_stack_000000b0 = (int *)DAT_0310fd44;
    in_stack_000000ac = (int *)DAT_0310fd48;
    in_stack_000000a8 = in_stack_00000004;
    in_stack_000000a4 = (CKeys *)0x5659be;
    iVar9 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
    for (iVar6 = ~uVar7 - 1; iVar6 < iVar9; iVar6 = iVar6 + 1) {
      (&DAT_031101c0)[iVar6] = 0x20;
    }
    (&DAT_031101c0)[iVar9] = cVar5;
    if (iVar6 <= iVar9) {
      iVar6 = iVar6 + 1;
    }
    in_stack_000000b0 = (int *)(iVar9 + 1);
    in_stack_000000ac = (int *)DAT_0310fd48;
    in_stack_000000a8 = in_stack_00000004;
    (&DAT_031101c0)[iVar6] = 0;
    in_stack_000000a4 = (CKeys *)0x5659f4;
    DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
    in_stack_000000b0 = (int *)DAT_0310fd48;
    in_stack_000000ac = &in_stack_00000004->enabled;
    in_stack_000000a8 = (CEdButton *)0x565a09;
    core_script_cpp_CScript_editorPutLine_FUN_005662a0();
    bVar2 = true;
  } while( true );
}
