// Name: core_menu.cpp_SetUpGamepadControls_FUN_005104d0
// Address: 005104d0
// Address Range: [[005104d0, 005107b6]]
// Convention: unknown
// Signature: undefined core_menu.cpp_SetUpGamepadControls_FUN_005104d0()
// Cross-references:
//   core_menu.cpp_CustomKeySettings_FUN_00511890 (00511890) at 00511de2 [UNCONDITIONAL_CALL]
//   core_menu.cpp_FUN_00511840 (00511840) at 00511855 [CONDITIONAL_JUMP]
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 005147bc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_x_006365f8
//   TerminatedCString s_Center_gamepad_press_ENT_00636601
//   TerminatedCString s_Move_gamepad_in_all_dire_0063661d
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CBitFont* g_MediumFont
//   DWORD g_JoyXPos
//   DWORD g_JoyYPos
//   DWORD g_JoyButtons
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.x_center
//   undefined4 DAT_02d81b44
//   undefined4 DAT_02d81b48
//   undefined4 DAT_02d81b4c
//   undefined4 DAT_02d81b50
//   undefined4 DAT_02d81b54
//   undefined4 g_CGameInstance.game_control
//   void* g_CKeysPtr
//   CMoon g_CMoonInstance
// Function calls:
//   core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

undefined4 core_menu_cpp_SetUpGamepadControls_FUN_005104d0(void)

{
  CGame *pCVar1;
  char *pcVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  DWORD DVar4;
  DWORD DVar5;
  DWORD DVar6;
  int in_stack_00000028;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_0000005c;
  DWORD in_stack_00000070;
  CGame *pCStack_20c;
  char acStack_d8 [4];
  char acStack_d4 [188];
  int iStack_18;
  int local_14;
  
  DVar5 = 0x7fffffff;
  DVar4 = 0;
  local_14 = 0x7fffffff;
  do {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(&g_CMoonInstance);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Center gamepad, press ENTER")
    ;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,pcVar2);
    iStack_18 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_MediumFont,0x58);
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_MediumFont,pcVar2,local_14,0xf0 - iVar3 / 2,7,0);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffdf0,"%d,%d,%x",g_JoyXPos,g_JoyYPos,g_JoyButtons);
    engine_2d_c_drawText_FUN_00401fd0((char *)&pCStack_20c,0,0);
    pCStack_20c = g_CGamePtr;
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    pCStack_20c = (CGame *)0x5105c2;
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
    DVar6 = 0;
    if (iVar3 != 0) goto LAB_005105cd;
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
  } while (iVar3 == 0);
LAB_00510743:
  pCVar1 = g_CGamePtr;
  g_CGamePtr->x_center = 0;
  pCVar1->game_control = 0;
  return 0;
LAB_005105cd:
  while( true ) {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(&g_CMoonInstance);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Move gamepad in all directions, press ENTER")
    ;
    engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,pcVar2);
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_MediumFont,0x58);
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_MediumFont,pcVar2,in_stack_00000028,0xf0 - iVar3 / 2,7,0);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_d8,"%d,%d,%x");
    engine_2d_c_drawText_FUN_00401fd0(acStack_d4,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
    pCVar1 = g_CGamePtr;
    if (iVar3 != 0) {
      g_CGamePtr->x_center = in_stack_00000054;
      pCVar1->x_stick_min = DVar5;
      pCVar1->x_stick_max = DVar4;
      pCVar1->y_stick_max = DVar6;
      pCVar1->y_center = in_stack_00000058;
      pCVar1->y_stick_min = in_stack_0000005c;
      return 1;
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar3 != 0) break;
    if ((int)g_JoyXPos < (int)DVar5) {
      DVar5 = g_JoyXPos;
    }
    if ((int)DVar4 < (int)g_JoyXPos) {
      DVar4 = g_JoyXPos;
    }
    if ((int)g_JoyYPos < (int)in_stack_00000070) {
      in_stack_00000070 = g_JoyYPos;
    }
    if ((int)DVar6 < (int)g_JoyYPos) {
      DVar6 = g_JoyYPos;
    }
  }
  goto LAB_00510743;
}


// Assembly code:
// 005104d0: PUSH EBX
//   Label: core_menu.cpp_SetUpGamepadControls_FUN_005104d0
// 005104d1: PUSH ESI
// 005104d2: PUSH EDI
// 005104d3: PUSH EBP
// 005104d4: SUB ESP,0x214
// 005104da: MOV ESI,0x7fffffff
// 005104df: XOR EBP,EBP
// 005104e1: XOR EDI,EDI
// 005104e3: MOV dword ptr [ESP + 0x210],ESI
// 005104ea: PUSH 0x2f21590
//   Label: LAB_005104ea
//   XREF to: 02f21590 (DATA)
// 005104ef: CALL core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0
//   XREF to: 0052a2c0 (UNCONDITIONAL_CALL)
// 005104f4: ADD ESP,0x4
// 005104f7: PUSH 0x636601
//   XREF to: 00636601 (DATA)
// 005104fc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00510501: ADD ESP,0x4
// 00510504: PUSH EAX
// 00510505: MOV ECX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 0051050b: PUSH ECX
// 0051050c: MOV EBX,EAX
// 0051050e: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00510513: MOV EDX,EAX
// 00510515: SAR EDX,0x1f
// 00510518: SUB EAX,EDX
// 0051051a: SAR EAX,0x1
// 0051051c: ADD ESP,0x8
// 0051051f: MOV EDX,0x140
// 00510524: PUSH 0x58
// 00510526: SUB EDX,EAX
// 00510528: MOV EAX,[0x020a5718]
//   XREF to: 020a5718 (READ)
// 0051052d: PUSH EAX
// 0051052e: MOV dword ptr [ESP + 0x208],EDX
// 00510535: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0051053a: MOV EDX,EAX
// 0051053c: SAR EDX,0x1f
// 0051053f: SUB EAX,EDX
// 00510541: SAR EAX,0x1
// 00510543: ADD ESP,0x8
// 00510546: PUSH 0x0
// 00510548: MOV EDX,0xf0
// 0051054d: PUSH 0x7
// 0051054f: SUB EDX,EAX
// 00510551: PUSH EDX
// 00510552: MOV EDX,dword ptr [ESP + 0x20c]
// 00510559: PUSH EDX
// 0051055a: PUSH EBX
// 0051055b: MOV ECX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00510561: PUSH ECX
// 00510562: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00510567: ADD ESP,0x18
// 0051056a: MOV EBX,dword ptr [0x02d05208]
//   XREF to: 02d05208 (READ)
// 00510570: PUSH EBX
// 00510571: MOV EAX,[0x02d051fc]
//   XREF to: 02d051fc (READ)
// 00510576: PUSH EAX
// 00510577: MOV EDX,dword ptr [0x02d051f8]
//   XREF to: 02d051f8 (READ)
// 0051057d: PUSH EDX
// 0051057e: PUSH 0x6365f8
//   XREF to: 006365f8 (DATA)
// 00510583: LEA EAX,[ESP + 0x10]
// 00510587: PUSH EAX
// 00510588: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051058d: ADD ESP,0x14
// 00510590: PUSH 0x0
// 00510592: PUSH 0x0
// 00510594: LEA EAX,[ESP + 0x8]
// 00510598: PUSH EAX
// 00510599: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051059e: ADD ESP,0xc
// 005105a1: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 005105a7: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 005105a8: CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   XREF to: 004dbe60 (UNCONDITIONAL_CALL)
// 005105ad: ADD ESP,0x4
// 005105b0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005105b5: PUSH 0x1c
// 005105b7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005105bc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005105bd: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005105bf: CALL dword ptr [EDX + 0x4]
// 005105c2: ADD ESP,0x8
// 005105c5: TEST EAX,EAX
// 005105c7: JZ 0x00510712
//   XREF to: 00510712 (CONDITIONAL_JUMP)
// 005105cd: PUSH 0x2f21590
//   Label: LAB_005105cd
//   XREF to: 02f21590 (DATA)
// 005105d2: CALL core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0
//   XREF to: 0052a2c0 (UNCONDITIONAL_CALL)
// 005105d7: ADD ESP,0x4
// 005105da: PUSH 0x63661d
//   XREF to: 0063661d (DATA)
// 005105df: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005105e4: ADD ESP,0x4
// 005105e7: PUSH EAX
// 005105e8: MOV EBX,EAX
// 005105ea: MOV EAX,[0x020a5718]
//   XREF to: 020a5718 (READ)
// 005105ef: PUSH EAX
// 005105f0: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 005105f5: MOV EDX,EAX
// 005105f7: SAR EDX,0x1f
// 005105fa: SUB EAX,EDX
// 005105fc: SAR EAX,0x1
// 005105fe: MOV EDX,0x140
// 00510603: ADD ESP,0x8
// 00510606: SUB EDX,EAX
// 00510608: PUSH 0x58
// 0051060a: MOV dword ptr [ESP + 0x208],EDX
// 00510611: MOV EDX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00510617: PUSH EDX
// 00510618: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0051061d: MOV EDX,EAX
// 0051061f: SAR EDX,0x1f
// 00510622: SUB EAX,EDX
// 00510624: SAR EAX,0x1
// 00510626: ADD ESP,0x8
// 00510629: PUSH 0x0
// 0051062b: MOV EDX,0xf0
// 00510630: PUSH 0x7
// 00510632: SUB EDX,EAX
// 00510634: PUSH EDX
// 00510635: MOV ECX,dword ptr [ESP + 0x210]
// 0051063c: PUSH ECX
// 0051063d: PUSH EBX
// 0051063e: MOV EBX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00510644: PUSH EBX
// 00510645: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 0051064a: ADD ESP,0x18
// 0051064d: MOV EAX,[0x02d05208]
//   XREF to: 02d05208 (READ)
// 00510652: PUSH EAX
// 00510653: MOV EDX,dword ptr [0x02d051fc]
//   XREF to: 02d051fc (READ)
// 00510659: PUSH EDX
// 0051065a: MOV ECX,dword ptr [0x02d051f8]
//   XREF to: 02d051f8 (READ)
// 00510660: PUSH ECX
// 00510661: PUSH 0x6365f8
//   XREF to: 006365f8 (DATA)
// 00510666: LEA EAX,[ESP + 0x110]
// 0051066d: PUSH EAX
// 0051066e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00510673: ADD ESP,0x14
// 00510676: PUSH 0x0
// 00510678: PUSH 0x0
// 0051067a: LEA EAX,[ESP + 0x108]
// 00510681: PUSH EAX
// 00510682: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00510687: ADD ESP,0xc
// 0051068a: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 00510690: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 00510691: CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   XREF to: 004dbe60 (UNCONDITIONAL_CALL)
// 00510696: ADD ESP,0x4
// 00510699: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0051069e: PUSH 0x1c
// 005106a0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005106a5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005106a6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005106a8: CALL dword ptr [EDX + 0x4]
// 005106ab: ADD ESP,0x8
// 005106ae: TEST EAX,EAX
// 005106b0: JNZ 0x00510769
//   XREF to: 00510769 (CONDITIONAL_JUMP)
// 005106b6: PUSH 0x1
// 005106b8: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005106be: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 005106bf: MOV EAX,dword ptr [EDX]
//   XREF to: 02dcd7d4 (READ)
// 005106c1: CALL dword ptr [EAX + 0x4]
// 005106c4: ADD ESP,0x8
// 005106c7: TEST EAX,EAX
// 005106c9: JNZ 0x00510743
//   XREF to: 00510743 (CONDITIONAL_JUMP)
// 005106cf: MOV EAX,[0x02d051f8]
//   XREF to: 02d051f8 (READ)
// 005106d4: CMP ESI,EAX
// 005106d6: JLE 0x005106da
//   XREF to: 005106da (CONDITIONAL_JUMP)
// 005106d8: MOV ESI,EAX
// 005106da: MOV EDX,dword ptr [0x02d051f8]
//   Label: LAB_005106da
//   XREF to: 02d051f8 (READ)
// 005106e0: CMP EBP,EDX
// 005106e2: JGE 0x005106e6
//   XREF to: 005106e6 (CONDITIONAL_JUMP)
// 005106e4: MOV EBP,EDX
// 005106e6: MOV ECX,dword ptr [ESP + 0x210]
//   Label: LAB_005106e6
// 005106ed: MOV EAX,[0x02d051fc]
//   XREF to: 02d051fc (READ)
// 005106f2: CMP EAX,ECX
// 005106f4: JGE 0x005106fd
//   XREF to: 005106fd (CONDITIONAL_JUMP)
// 005106f6: MOV dword ptr [ESP + 0x210],EAX
// 005106fd: MOV EBX,dword ptr [0x02d051fc]
//   Label: LAB_005106fd
//   XREF to: 02d051fc (READ)
// 00510703: CMP EDI,EBX
// 00510705: JGE 0x005105cd
//   XREF to: 005105cd (CONDITIONAL_JUMP)
// 0051070b: MOV EDI,EBX
// 0051070d: JMP 0x005105cd
//   XREF to: 005105cd (UNCONDITIONAL_JUMP)
// 00510712: PUSH 0x1
//   Label: LAB_00510712
// 00510714: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00510719: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051071a: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051071c: CALL dword ptr [EDX + 0x4]
// 0051071f: ADD ESP,0x8
// 00510722: TEST EAX,EAX
// 00510724: JNZ 0x00510743
//   XREF to: 00510743 (CONDITIONAL_JUMP)
// 00510726: MOV EAX,[0x02d051f8]
//   XREF to: 02d051f8 (READ)
// 0051072b: MOV dword ptr [ESP + 0x208],EAX
// 00510732: MOV EAX,[0x02d051fc]
//   XREF to: 02d051fc (READ)
// 00510737: MOV dword ptr [ESP + 0x20c],EAX
// 0051073e: JMP 0x005104ea
//   XREF to: 005104ea (UNCONDITIONAL_JUMP)
// 00510743: MOV EAX,[0x0067b654]
//   Label: LAB_00510743
//   XREF to: 0067b654 (READ)
// 00510748: MOV dword ptr [EAX + 0xa4],0x0
//   XREF to: 02d81b40 (WRITE)
// 00510752: MOV dword ptr [EAX + 0xbc],0x0
//   XREF to: 02d81b58 (WRITE)
// 0051075c: XOR EAX,EAX
// 0051075e: ADD ESP,0x214
// 00510764: POP EBP
// 00510765: POP EDI
// 00510766: POP ESI
// 00510767: POP EBX
// 00510768: RET
// 00510769: MOV EAX,[0x0067b654]
//   Label: LAB_00510769
//   XREF to: 0067b654 (READ)
// 0051076e: MOV EDX,dword ptr [ESP + 0x208]
// 00510775: MOV dword ptr [EAX + 0xa4],EDX
//   XREF to: 02d81b40 (WRITE)
// 0051077b: MOV dword ptr [EAX + 0xac],ESI
//   XREF to: 02d81b48 (WRITE)
// 00510781: MOV dword ptr [EAX + 0xb0],EBP
//   XREF to: 02d81b4c (WRITE)
// 00510787: MOV dword ptr [EAX + 0xb8],EDI
//   XREF to: 02d81b54 (WRITE)
// 0051078d: MOV EDX,dword ptr [ESP + 0x20c]
// 00510794: MOV dword ptr [EAX + 0xa8],EDX
//   XREF to: 02d81b44 (WRITE)
// 0051079a: MOV EDX,dword ptr [ESP + 0x210]
// 005107a1: MOV dword ptr [EAX + 0xb4],EDX
//   XREF to: 02d81b50 (WRITE)
// 005107a7: MOV EAX,0x1
// 005107ac: ADD ESP,0x214
// 005107b2: POP EBP
// 005107b3: POP EDI
// 005107b4: POP ESI
// 005107b5: POP EBX
// 005107b6: RET
