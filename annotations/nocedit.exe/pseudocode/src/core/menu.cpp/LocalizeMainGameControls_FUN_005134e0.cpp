// Name: core_menu.cpp_LocalizeMainGameControls_FUN_005134e0
// Address: 005134e0
// Address Range: [[005134e0, 00513718]]
// Convention: unknown
// Signature: undefined core_menu.cpp_LocalizeMainGameControls_FUN_005134e0()
// Cross-references:
//   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 (004d89d0) at 004d9322 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004d8910 (004d8910) at 004d892a [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fd9a2 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingCustomKeys_FUN_005138e0 (005138e0) at 00514713 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_00636e67
//   TerminatedCString s_Mouse_X_Axis_00636e6e
//   TerminatedCString s_Mouse_Y_Axis_00636e7b
//   TerminatedCString s_Mouse_B1_00636e88
//   TerminatedCString s_Mouse_B2_00636e91
//   TerminatedCString s_Mouse_B3_00636e9a
//   TerminatedCString s_Button_1_00636ea3
//   TerminatedCString s_Button_2_00636eac
//   TerminatedCString s_Button_3_00636eb5
//   TerminatedCString s_Button_4_00636ebe
//   TerminatedCString s_Button_5_00636ec7
//   TerminatedCString s_Button_6_00636ed0
//   TerminatedCString s_Button_7_00636ed9
//   TerminatedCString s_Button_8_00636ee2
//   TerminatedCString s_Button_9_00636eeb
//   TerminatedCString s_Button_10_00636ef4
//   TerminatedCString s_Gamepad_left_00636efe
//   TerminatedCString s_Gamepad_right_00636f0b
//   TerminatedCString s_Gamepad_forward_00636f19
//   TerminatedCString s_Gamepad_back_00636f29
//   undefined4 DAT_02f297a0
//   undefined4 DAT_02f297a8
//   undefined4 DAT_02f297a9
//   undefined4 DAT_02f297aa
//   undefined4 DAT_02f297ab
// Function calls:
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_winrun.cpp_getKeyName_FUN_005f3980

#include "nocturne.h"

/* Signature: undefined1 core_menu.cpp_LocalizeMainGameControls(undefined4 param_1) */

char * core_menu_cpp_LocalizeMainGameControls_FUN_005134e0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int in_stack_00000004;
  
  pcVar3 = (char *)0x0;
  if (in_stack_00000004 == 599) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("(none)");
  }
  if (in_stack_00000004 == 0x255) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse X-Axis");
  }
  if (in_stack_00000004 == 0x256) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse Y-Axis");
  }
  if (in_stack_00000004 == 0x200) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse B1");
  }
  if (in_stack_00000004 == 0x201) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse B2");
  }
  if (in_stack_00000004 == 0x20c) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse B3");
  }
  if (in_stack_00000004 == 0x202) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 1");
  }
  if (in_stack_00000004 == 0x203) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 2");
  }
  if (in_stack_00000004 == 0x204) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 3");
  }
  if (in_stack_00000004 == 0x205) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 4");
  }
  if (in_stack_00000004 == 0x206) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 5");
  }
  if (in_stack_00000004 == 0x207) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 6");
  }
  if (in_stack_00000004 == 0x208) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 7");
  }
  if (in_stack_00000004 == 0x209) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 8");
  }
  if (in_stack_00000004 == 0x20a) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 9");
  }
  if (in_stack_00000004 == 0x20b) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 10");
  }
  if (in_stack_00000004 == 0x251) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad left");
  }
  if (in_stack_00000004 == 0x252) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad right");
  }
  if (in_stack_00000004 == 0x253) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad forward");
  }
  if (in_stack_00000004 == 0x254) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad back");
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = wincore_winrun_cpp_getKeyName_FUN_005f3980(in_stack_00000004);
  }
  pcVar2 = &DAT_02f297a8 + DAT_02f297a0 * 0x100;
  pcVar4 = pcVar2;
  DAT_02f297a0 = (DAT_02f297a0 + 1) % 10;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pcVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return pcVar2;
}


// Assembly code:
// 005134e0: PUSH EBX
//   Label: core_menu.cpp_LocalizeMainGameControls_FUN_005134e0
// 005134e1: PUSH ESI
// 005134e2: PUSH EDI
// 005134e3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005134e7: XOR ESI,ESI
// 005134e9: CMP EBX,0x257
// 005134ef: JZ 0x005136f8
//   XREF to: 005136f8 (CONDITIONAL_JUMP)
// 005134f5: CMP EBX,0x255
//   Label: LAB_005134f5
// 005134fb: JNZ 0x0051350c
//   XREF to: 0051350c (CONDITIONAL_JUMP)
// 005134fd: PUSH 0x636e6e
//   XREF to: 00636e6e (DATA)
// 00513502: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513507: MOV ESI,EAX
// 00513509: ADD ESP,0x4
// 0051350c: CMP EBX,0x256
//   Label: LAB_0051350c
// 00513512: JNZ 0x00513523
//   XREF to: 00513523 (CONDITIONAL_JUMP)
// 00513514: PUSH 0x636e7b
//   XREF to: 00636e7b (DATA)
// 00513519: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051351e: MOV ESI,EAX
// 00513520: ADD ESP,0x4
// 00513523: CMP EBX,0x200
//   Label: LAB_00513523
// 00513529: JNZ 0x0051353a
//   XREF to: 0051353a (CONDITIONAL_JUMP)
// 0051352b: PUSH 0x636e88
//   XREF to: 00636e88 (DATA)
// 00513530: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513535: MOV ESI,EAX
// 00513537: ADD ESP,0x4
// 0051353a: CMP EBX,0x201
//   Label: LAB_0051353a
// 00513540: JNZ 0x00513551
//   XREF to: 00513551 (CONDITIONAL_JUMP)
// 00513542: PUSH 0x636e91
//   XREF to: 00636e91 (DATA)
// 00513547: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051354c: MOV ESI,EAX
// 0051354e: ADD ESP,0x4
// 00513551: CMP EBX,0x20c
//   Label: LAB_00513551
// 00513557: JNZ 0x00513568
//   XREF to: 00513568 (CONDITIONAL_JUMP)
// 00513559: PUSH 0x636e9a
//   XREF to: 00636e9a (DATA)
// 0051355e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513563: MOV ESI,EAX
// 00513565: ADD ESP,0x4
// 00513568: CMP EBX,0x202
//   Label: LAB_00513568
// 0051356e: JNZ 0x0051357f
//   XREF to: 0051357f (CONDITIONAL_JUMP)
// 00513570: PUSH 0x636ea3
//   XREF to: 00636ea3 (DATA)
// 00513575: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051357a: MOV ESI,EAX
// 0051357c: ADD ESP,0x4
// 0051357f: CMP EBX,0x203
//   Label: LAB_0051357f
// 00513585: JNZ 0x00513596
//   XREF to: 00513596 (CONDITIONAL_JUMP)
// 00513587: PUSH 0x636eac
//   XREF to: 00636eac (DATA)
// 0051358c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513591: MOV ESI,EAX
// 00513593: ADD ESP,0x4
// 00513596: CMP EBX,0x204
//   Label: LAB_00513596
// 0051359c: JNZ 0x005135ad
//   XREF to: 005135ad (CONDITIONAL_JUMP)
// 0051359e: PUSH 0x636eb5
//   XREF to: 00636eb5 (DATA)
// 005135a3: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005135a8: MOV ESI,EAX
// 005135aa: ADD ESP,0x4
// 005135ad: CMP EBX,0x205
//   Label: LAB_005135ad
// 005135b3: JNZ 0x005135c4
//   XREF to: 005135c4 (CONDITIONAL_JUMP)
// 005135b5: PUSH 0x636ebe
//   XREF to: 00636ebe (DATA)
// 005135ba: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005135bf: MOV ESI,EAX
// 005135c1: ADD ESP,0x4
// 005135c4: CMP EBX,0x206
//   Label: LAB_005135c4
// 005135ca: JNZ 0x005135db
//   XREF to: 005135db (CONDITIONAL_JUMP)
// 005135cc: PUSH 0x636ec7
//   XREF to: 00636ec7 (DATA)
// 005135d1: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005135d6: MOV ESI,EAX
// 005135d8: ADD ESP,0x4
// 005135db: CMP EBX,0x207
//   Label: LAB_005135db
// 005135e1: JNZ 0x005135f2
//   XREF to: 005135f2 (CONDITIONAL_JUMP)
// 005135e3: PUSH 0x636ed0
//   XREF to: 00636ed0 (DATA)
// 005135e8: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005135ed: MOV ESI,EAX
// 005135ef: ADD ESP,0x4
// 005135f2: CMP EBX,0x208
//   Label: LAB_005135f2
// 005135f8: JNZ 0x00513609
//   XREF to: 00513609 (CONDITIONAL_JUMP)
// 005135fa: PUSH 0x636ed9
//   XREF to: 00636ed9 (DATA)
// 005135ff: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513604: MOV ESI,EAX
// 00513606: ADD ESP,0x4
// 00513609: CMP EBX,0x209
//   Label: LAB_00513609
// 0051360f: JNZ 0x00513620
//   XREF to: 00513620 (CONDITIONAL_JUMP)
// 00513611: PUSH 0x636ee2
//   XREF to: 00636ee2 (DATA)
// 00513616: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051361b: MOV ESI,EAX
// 0051361d: ADD ESP,0x4
// 00513620: CMP EBX,0x20a
//   Label: LAB_00513620
// 00513626: JNZ 0x00513637
//   XREF to: 00513637 (CONDITIONAL_JUMP)
// 00513628: PUSH 0x636eeb
//   XREF to: 00636eeb (DATA)
// 0051362d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513632: MOV ESI,EAX
// 00513634: ADD ESP,0x4
// 00513637: CMP EBX,0x20b
//   Label: LAB_00513637
// 0051363d: JNZ 0x0051364e
//   XREF to: 0051364e (CONDITIONAL_JUMP)
// 0051363f: PUSH 0x636ef4
//   XREF to: 00636ef4 (DATA)
// 00513644: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513649: MOV ESI,EAX
// 0051364b: ADD ESP,0x4
// 0051364e: CMP EBX,0x251
//   Label: LAB_0051364e
// 00513654: JNZ 0x00513665
//   XREF to: 00513665 (CONDITIONAL_JUMP)
// 00513656: PUSH 0x636efe
//   XREF to: 00636efe (DATA)
// 0051365b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513660: MOV ESI,EAX
// 00513662: ADD ESP,0x4
// 00513665: CMP EBX,0x252
//   Label: LAB_00513665
// 0051366b: JNZ 0x0051367c
//   XREF to: 0051367c (CONDITIONAL_JUMP)
// 0051366d: PUSH 0x636f0b
//   XREF to: 00636f0b (DATA)
// 00513672: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513677: MOV ESI,EAX
// 00513679: ADD ESP,0x4
// 0051367c: CMP EBX,0x253
//   Label: LAB_0051367c
// 00513682: JNZ 0x00513693
//   XREF to: 00513693 (CONDITIONAL_JUMP)
// 00513684: PUSH 0x636f19
//   XREF to: 00636f19 (DATA)
// 00513689: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051368e: MOV ESI,EAX
// 00513690: ADD ESP,0x4
// 00513693: CMP EBX,0x254
//   Label: LAB_00513693
// 00513699: JNZ 0x005136aa
//   XREF to: 005136aa (CONDITIONAL_JUMP)
// 0051369b: PUSH 0x636f29
//   XREF to: 00636f29 (DATA)
// 005136a0: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005136a5: MOV ESI,EAX
// 005136a7: ADD ESP,0x4
// 005136aa: TEST ESI,ESI
//   Label: LAB_005136aa
// 005136ac: JZ 0x0051370c
//   XREF to: 0051370c (CONDITIONAL_JUMP)
// 005136ae: MOV EDX,dword ptr [0x02f297a0]
//   Label: LAB_005136ae
//   XREF to: 02f297a0 (READ)
// 005136b4: INC EDX
// 005136b5: MOV ECX,0xa
// 005136ba: MOV EAX,EDX
// 005136bc: SAR EDX,0x1f
// 005136bf: IDIV ECX
// 005136c1: MOV EBX,dword ptr [0x02f297a0]
//   XREF to: 02f297a0 (READ)
// 005136c7: SHL EBX,0x8
// 005136ca: ADD EBX,0x2f297a8
//   XREF to: 02f297a8 (DATA)
// 005136d0: MOV EDI,EBX
// 005136d2: MOV dword ptr [0x02f297a0],EDX
//   XREF to: 02f297a0 (WRITE)
// 005136d8: PUSH EDI
// 005136d9: MOV AL,byte ptr [ESI]
//   Label: LAB_005136d9
// 005136db: MOV byte ptr [EDI],AL
//   XREF to: 02f297a8 (DATA)
//   XREF to: 02f297aa (DATA)
// 005136dd: CMP AL,0x0
// 005136df: JZ 0x005136f1
//   XREF to: 005136f1 (CONDITIONAL_JUMP)
// 005136e1: MOV AL,byte ptr [ESI + 0x1]
// 005136e4: ADD ESI,0x2
// 005136e7: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f297a9 (DATA)
//   XREF to: 02f297ab (DATA)
// 005136ea: ADD EDI,0x2
// 005136ed: CMP AL,0x0
// 005136ef: JNZ 0x005136d9
//   XREF to: 005136d9 (CONDITIONAL_JUMP)
// 005136f1: POP EDI
//   Label: LAB_005136f1
// 005136f2: MOV EAX,EBX
// 005136f4: POP EDI
// 005136f5: POP ESI
// 005136f6: POP EBX
// 005136f7: RET
// 005136f8: PUSH 0x636e67
//   Label: LAB_005136f8
//   XREF to: 00636e67 (DATA)
// 005136fd: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513702: MOV ESI,EAX
// 00513704: ADD ESP,0x4
// 00513707: JMP 0x005134f5
//   XREF to: 005134f5 (UNCONDITIONAL_JUMP)
// 0051370c: PUSH EBX
//   Label: LAB_0051370c
// 0051370d: CALL wincore_winrun.cpp_getKeyName_FUN_005f3980
//   XREF to: 005f3980 (UNCONDITIONAL_CALL)
// 00513712: MOV ESI,EAX
// 00513714: ADD ESP,0x4
// 00513717: JMP 0x005136ae
//   XREF to: 005136ae (UNCONDITIONAL_JUMP)
