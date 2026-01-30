// Name: core_script.cpp_CScript_FUN_00565130
// Address: 00565130
// Address Range: [[00565130, 00565a91]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00565130(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00565130(CScript *this_ptr)

{
  char cVar1;
  bool bVar2;
  CEdButton *pCVar3;
  int iVar4;
  CScript *pCVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  int iVar11;
  char *in_stack_0000007c;
  char *in_stack_0000008c;
  char *in_stack_00000090;
  char *in_stack_00000098;
  uint *in_stack_000000ac;
  int *in_stack_000000b0;
  uint in_stack_000000b4;
  int in_stack_000000b8;
  int in_stack_000000d0;
  uint in_stack_000000d4;
  int in_stack_000000d8;
  char in_stack_000000dc;
  char in_stack_000000dd;
  
  bVar10 = 0;
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  INT_0310fd40 = INT_0310fd40 + g_GlobalDeltaTimeInt & 0xfffff;
  core_script_cpp_CScript_FUN_00566910(this_ptr);
  core_script_cpp_CScript_FUN_005669a0(this_ptr);
  core_script_cpp_FUN_00564500();
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&CEdScrollBar_0310fd0c);
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&CEdScrollBar_0310fcd8);
  core_script_cpp_CScript_FUN_00566880(this_ptr);
  bVar2 = false;
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
  if (iVar7 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
  if (iVar7 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x50);
  if (iVar7 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x48);
  if (iVar7 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47);
  if (iVar7 != 0) {
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4f);
  if (iVar7 != 0) {
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x51);
  if (iVar7 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x49);
  if (iVar7 != 0) {
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x53);
  if (iVar7 != 0) {
    bVar2 = true;
    if (-1 < (int)DAT_0310fd4c) {
      (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    }
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x52);
  if (iVar7 != 0) {
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if (iVar7 == 0) {
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar7 == 0) {
        DAT_0068105c = (uint)(DAT_0068105c == 0);
        goto LAB_00565363;
      }
      bVar2 = true;
    }
    core_script_cpp_CScript_editorAction_FUN_00564820();
  }
LAB_00565363:
  iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar7 != 0) {
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2d);
    if (iVar7 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar7 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f);
    if (iVar7 != 0) {
      core_script_cpp_CScript_editorAction_FUN_00564820();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
  }
  iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if ((iVar7 != 0) &&
     (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x22), iVar7 != 0)) {
    in_stack_0000007c = (char *)(DAT_0310fd48 + 1);
    iVar11 = 1;
    iVar7 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(this_ptr->unk4 + 0x20));
    iVar7 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter line number",(int *)&stack0x0000007c,1,1,
                       iVar7 + 1,iVar11);
    if (iVar7 != 0) {
      DAT_0310fd48 = (int)(((CScript *)((int)in_stack_0000007c + -0x480))->unk6 + 0x1f);
      bVar2 = true;
      DAT_0310fd44 = 0;
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
  }
  iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if ((iVar7 != 0) &&
     (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21), iVar7 != 0)) {
    in_stack_0000007c = (char *)g_CKeysPtr;
    iVar11 = 1;
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar7 != 0) {
      iVar11 = -1;
    }
    in_stack_0000007c = "Find";
    iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Find",&DAT_0310fd58,100,1);
    if (iVar7 != 0) {
      in_stack_0000007c = (char *)&stack0x00000098;
      iVar7 = core_script_cpp_CScript_FUN_00566cc0
                        (this_ptr,&DAT_0310fd58,DAT_0310fd44,DAT_0310fd48,(uint *)in_stack_0000007c,
                         (int *)&stack0x0000008c,(uint *)&stack0x00000090,iVar11);
      if (iVar7 == 0) {
        in_stack_0000007c = (char *)0x56581f;
        sprintf(&DAT_0310fdc0,"Can't find %s");
      }
      else {
        in_stack_0000007c = (char *)0x56551e;
        sprintf(&DAT_0310fdc0,"Found %s");
        DAT_0310fd48 = (int)in_stack_0000008c;
        DAT_0310fd44 = (uint)in_stack_00000098;
        bVar2 = false;
        DAT_0310fd4c = (uint)in_stack_00000090;
        in_stack_000000b0 = (int *)0x1;
        DAT_0310fd50 = (int)in_stack_0000008c;
      }
    }
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3d);
  if (iVar7 != 0) {
    in_stack_00000090 = (char *)0x2a;
    in_stack_0000008c = (char *)g_CKeysPtr;
    uVar8 = 1;
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar7 != 0) {
      uVar8 = 0xffffffff;
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
      in_stack_0000007c = this_ptr->unk1;
      in_stack_00000098 = (char *)uVar8;
      iVar7 = core_script_cpp_CScript_FUN_00566cc0
                        (this_ptr,&DAT_0310fd58,uVar8 + DAT_0310fd44,DAT_0310fd48,
                         (uint *)in_stack_0000008c,(int *)in_stack_00000090,&stack0x000000b4,uVar8);
      if (iVar7 == 0) {
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
        DAT_0310fd48 = (int)in_stack_000000b0;
        DAT_0310fd44 = (uint)in_stack_000000ac;
        bVar2 = false;
        DAT_0310fd4c = in_stack_000000b4;
        DAT_0310fd50 = (int)in_stack_000000b0;
      }
    }
  }
  in_stack_00000098 = (char *)0x3e;
  in_stack_00000090 = (char *)0x56563a;
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e);
  if (iVar7 != 0) {
    in_stack_00000098 = this_ptr->unk1;
    bVar2 = true;
    core_script_cpp_CScript_FUN_00565ae0(this_ptr,DAT_0310fd44,DAT_0310fd48);
  }
  in_stack_00000098 = (char *)0x56566a;
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x40);
  if (iVar7 != 0) {
    bVar2 = true;
    core_script_cpp_CScript_FUN_00565d00(this_ptr,DAT_0310fd44,DAT_0310fd48);
  }
  iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
  if (iVar7 != 0) {
    in_stack_000000b0 = (int *)DAT_0310fd48;
    in_stack_000000ac = (uint *)DAT_0310fd44;
    core_script_cpp_CScript_FUN_00565e70(this_ptr,DAT_0310fd44,DAT_0310fd48);
  }
  pCVar3 = g_ActiveButton;
  if (this_ptr == (CScript *)g_ActiveButton) {
    if ((g_MouseButtonFlags & 1) == 0) {
      g_ActiveButton = (CEdButton *)0x0;
    }
    else {
      in_stack_000000b0 = &DAT_0310fd48;
      in_stack_000000ac = &DAT_0310fd44;
      core_script_cpp_CScript_FUN_00566c20
                ((CScript *)g_ActiveButton,g_MouseX,g_MouseY,(int *)&DAT_0310fd44,&DAT_0310fd48);
      if (g_MouseX <= INT_031141e0) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (uint *)0x0;
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      if (DAT_031141e8 <= g_MouseX) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (uint *)0x1;
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      if (g_MouseY <= INT_031141e4) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (uint *)0x2;
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      if (DAT_031141ec <= g_MouseY) {
        in_stack_000000b0 = (int *)0x0;
        in_stack_000000ac = (uint *)0x3;
        core_script_cpp_CScript_editorAction_FUN_00564820();
      }
      in_stack_000000d8 = 1;
    }
  }
  else if (g_ActiveButton == (CEdButton *)0x0) {
    if ((g_MouseButtonFlags & 1) == 0) {
      if ((g_MouseButtonFlags & 2) != 0) {
        in_stack_000000b0 = &DAT_0310fd48;
        in_stack_000000ac = &DAT_0310fd44;
        g_MouseButtonFlags = (uint)g_ActiveButton;
        iVar7 = core_script_cpp_CScript_FUN_00566c20
                          (this_ptr,g_MouseX,g_MouseY,(int *)&DAT_0310fd44,&DAT_0310fd48);
        if (iVar7 != 0) {
          in_stack_000000b0 = (int *)DAT_0310fd48;
          in_stack_000000ac = (uint *)DAT_0310fd44;
          core_script_cpp_CScript_FUN_00565aa0(this_ptr,DAT_0310fd44,DAT_0310fd48);
        }
      }
    }
    else {
      in_stack_000000b0 = &DAT_0310fd48;
      in_stack_000000ac = &DAT_0310fd44;
      iVar7 = core_script_cpp_CScript_FUN_00566c20
                        (this_ptr,g_MouseX,g_MouseY,(int *)&DAT_0310fd44,&DAT_0310fd48);
      pCVar5 = (CScript *)g_ActiveButton;
      if (iVar7 != 0) {
        in_stack_000000b0 = (int *)0x38;
        in_stack_000000ac = (uint *)g_CKeysPtr;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        pCVar5 = this_ptr;
        if (iVar7 != 0) {
          in_stack_000000b8 = DAT_0310fd48;
          in_stack_000000b4 = DAT_0310fd44;
          in_stack_000000b0 = (int *)this_ptr;
          in_stack_000000ac = (uint *)0x5658ae;
          core_script_cpp_CScript_FUN_00565ae0(this_ptr,DAT_0310fd44,DAT_0310fd48);
          g_MouseButtonFlags = (uint)pCVar3;
          pCVar5 = (CScript *)g_ActiveButton;
        }
      }
      g_ActiveButton = (CEdButton *)pCVar5;
      bVar2 = true;
    }
  }
  in_stack_000000b0 = (int *)this_ptr;
  in_stack_000000ac = (uint *)0x56576e;
  core_script_cpp_CScript_FUN_00566910(this_ptr);
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            in_stack_000000b0 = (int *)0x565776;
            iVar7 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
            if (iVar7 == 0) {
              in_stack_000000b0 = (int *)this_ptr;
              in_stack_000000ac = (uint *)0x565a1c;
              core_script_cpp_CScript_FUN_005669a0(this_ptr);
              if (bVar2) {
                in_stack_000000b0 = (int *)0x565a67;
                core_script_cpp_FUN_005644e0();
              }
              else if ((in_stack_000000d4 != DAT_0310fd44) || (in_stack_000000d0 != DAT_0310fd48)) {
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
              in_stack_000000ac = (uint *)this_ptr;
              core_script_cpp_CScript_FUN_00566800(this_ptr,in_stack_000000d0);
              in_stack_000000b0 = (int *)0x565a5a;
              core_script_cpp_FUN_00564500();
              return;
            }
            in_stack_000000b0 = (int *)0x565785;
            uVar8 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
            cVar6 = (char)uVar8;
            uVar8 = uVar8 & 0xff;
            if (uVar8 != 0xd) break;
            in_stack_000000b0 = (int *)0x0;
            in_stack_000000ac = (uint *)0x12;
            core_script_cpp_CScript_editorAction_FUN_00564820();
          }
          if (uVar8 != 8) break;
          in_stack_000000b0 = (int *)0x0;
          in_stack_000000ac = (uint *)&DAT_00000010;
          core_script_cpp_CScript_editorAction_FUN_00564820();
        }
      } while (((g_CharacterClassificationTable[(byte)(cVar6 + 1)] & 8U) == 0) && (uVar8 != 9));
      in_stack_000000b0 = (int *)0x0;
      in_stack_000000ac = (uint *)0xf;
      core_script_cpp_CScript_editorAction_FUN_00564820();
      if (DAT_0068105c == 0) break;
      in_stack_000000b0 = (int *)0x1;
      in_stack_000000ac = (uint *)&stack0x000000dc;
      in_stack_000000dd = '\0';
      in_stack_000000dc = cVar6;
      core_script_cpp_CScript_FUN_00566390(this_ptr,(char *)in_stack_000000ac,1);
      bVar2 = true;
    }
    in_stack_000000b0 = (int *)DAT_0310fd48;
    in_stack_000000ac = (uint *)this_ptr;
    core_script_cpp_CScript_FUN_00566230(this_ptr,DAT_0310fd48);
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_031101c0;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    in_stack_000000b0 = (int *)DAT_0310fd44;
    in_stack_000000ac = (uint *)DAT_0310fd48;
    iVar11 = core_script_cpp_CScript_FUN_00566a90(this_ptr,DAT_0310fd48,DAT_0310fd44);
    for (iVar7 = ~uVar8 - 1; iVar7 < iVar11; iVar7 = iVar7 + 1) {
      (&DAT_031101c0)[iVar7] = 0x20;
    }
    (&DAT_031101c0)[iVar11] = cVar6;
    iVar4 = DAT_0310fd48;
    if (iVar7 <= iVar11) {
      iVar7 = iVar7 + 1;
    }
    in_stack_000000b0 = (int *)(iVar11 + 1);
    in_stack_000000ac = (uint *)DAT_0310fd48;
    (&DAT_031101c0)[iVar7] = 0;
    DAT_0310fd44 = core_script_cpp_CScript_FUN_00566b30(this_ptr,iVar4,(uint)in_stack_000000b0);
    in_stack_000000b0 = (int *)DAT_0310fd48;
    in_stack_000000ac = (uint *)this_ptr;
    core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,DAT_0310fd48);
    bVar2 = true;
  } while( true );
}
