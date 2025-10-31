// Name: core_menu.cpp_CustomKeySettings_FUN_00511890
// Address: 00511890
// Address Range: [[00511890, 00511dfd]]
// Convention: unknown
// Signature: undefined core_menu.cpp_CustomKeySettings_FUN_00511890()
// Cross-references:
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512ec4 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00511864 = 00511b9c
//   TerminatedCString s_Control_Keyboard_00636a86
//   TerminatedCString s_Control_Keyboard_Mouse_00636a99
//   TerminatedCString s_Control_Gamepad_00636ab2
//   TerminatedCString s_Customize_Keys_00636ac4
//   TerminatedCString s_Always_run_ON_00636ad3
//   TerminatedCString s_Always_run_OFF_00636ae3
//   TerminatedCString s_Aiming_Auto_00636af4
//   TerminatedCString s_Aiming_Kindof_auto_00636b02
//   TerminatedCString s_Aiming_Manual_00636b17
//   TerminatedCString s_Auto_use_health_On_00636b27
//   TerminatedCString s_Auto_use_health_Off_00636b3c
//   TerminatedCString s_X_axis_sensitivity_00636b52
//   TerminatedCString s_s_5_2f_00636b68
//   TerminatedCString s_Y_axis_sensitivity_00636b6e
//   TerminatedCString s_s_5_2f_00636b84
//   TerminatedCString s_Invert_Y_Axis_ON_00636b8a
//   TerminatedCString s_Invert_Y_Axis_OFF_00636b9d
//   TerminatedCString s_Calibrate_00636bb1
//   TerminatedCString s_Control_Options_00636bbb
//   TerminatedCString s_Adjust_X_Axis_sensitivit_00636bcb
//   TerminatedCString s_Adjust_Y_Axis_sensitivit_00636be5
//   double DOUBLE_00636bff = 0.0000152587890625
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CGame g_CGameInstance
//   undefined4 DAT_02d81b30
//   undefined4 g_CGameInstance.always_run
//   undefined4 DAT_02d81b38
//   undefined4 DAT_02d81b3c
//   undefined4 g_CGameInstance.x_center
//   undefined4 g_CGameInstance.game_control
//   undefined4 DAT_02d81b60
//   undefined4 DAT_02d81b64
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   undefined4 DAT_02f21590
//   undefined4 DAT_02f27700
//   undefined4 DAT_02f27800
//   undefined4 DAT_02f27900
//   undefined4 DAT_02f27a00
//   undefined4 DAT_02f27b00
//   undefined1 DAT_02f27c00
//   undefined1 DAT_02f27c01
//   undefined1 DAT_02f27c02
//   undefined1 DAT_02f27c03
//   undefined1 DAT_02f27d00
//   undefined1 DAT_02f27d01
//   undefined1 DAT_02f27d02
//   undefined1 DAT_02f27d03
//   undefined4 DAT_02f27e00
//   undefined4 DAT_02f28000
//   undefined4 DAT_02f28004
// Function calls:
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_menu.cpp_GetGameMainMenuChoice_FUN_00510000
//   core_menu.cpp_SettingCustomKeys_FUN_005138e0
//   core_menu.cpp_SettingMouseSensitivity_FUN_005107c0
//   core_menu.cpp_SetUpGamepadControls_FUN_005104d0
//   core_moon.cpp_CMoon_FUN_00529d60
//   core_moon.cpp_CMoon_FUN_00529ed0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

/* Signature: undefined1 core_menu.cpp_CustomKeySettings() */

void core_menu_cpp_CustomKeySettings_FUN_00511890(void)

{
  char cVar1;
  uint uVar2;
  CGame *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  CGame *in_stack_fffffeec;
  char *pcVar10;
  undefined4 uVar11;
  double dStack_d8;
  undefined4 uStack_d4;
  
  bVar9 = 0;
  puVar6 = &DAT_02f27700;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffeec);
  iVar4 = 0;
  do {
    *(undefined **)((int)&DAT_02f28000 + iVar4) = puVar6;
    iVar4 = iVar4 + 4;
    puVar6 = puVar6 + 0x100;
  } while (iVar4 != 0x24);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_FUN_00529d60();
    core_moon_cpp_CMoon_FUN_00529ed0();
    uVar2 = g_CGamePtr->game_control;
    if (uVar2 == 0) {
LAB_00511c13:
      g_CGamePtr->game_control = 0;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Control : Keyboard");
    }
    else {
      if (uVar2 < 2) {
        pcVar10 = "Control : Keyboard/Mouse";
      }
      else {
        if (uVar2 != 2) goto LAB_00511c13;
        pcVar10 = "Control : Gamepad";
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar10);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f27700,pcVar10);
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Customize Keys");
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f27800,pcVar10);
    if (g_CGamePtr->always_run == 0) {
      pcVar10 = "Always run : OFF";
    }
    else {
      pcVar10 = "Always run : ON";
    }
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar10);
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f27900,pcVar10);
    uVar2 = g_CGamePtr->aim_mode;
    if (uVar2 == 0) {
LAB_005119ab:
      g_CGamePtr->aim_mode = 0;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Auto");
    }
    else if (uVar2 < 2) {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Kindof auto");
    }
    else {
      if (uVar2 != 2) goto LAB_005119ab;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Manual");
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f27a00,pcVar10);
    if (g_CGamePtr->auto_use_health == 0) {
      pcVar10 = "Auto use health : Off";
    }
    else {
      pcVar10 = "Auto use health : On";
    }
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar10);
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f27b00,pcVar10);
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("X-axis sensitivity : ");
    pcVar7 = &DAT_02f27c00;
    do {
      cVar1 = *pcVar10;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    crt_stdio_c_sprintf_FUN_005fdbd0
              ((char *)&stack0xffffff28,"%5.2f",
               (double)g_CGamePtr->x_mouse_sensitivity * DOUBLE_00636bff);
    pcVar7 = (char *)&uStack_d4;
    iVar4 = -1;
    pcVar10 = &DAT_02f27c00;
    do {
      pcVar8 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar10 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar1 = *pcVar7;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    dStack_d8 = (double)CONCAT44((int)((ulonglong)dStack_d8 >> 0x20),"Y-axis sensitivity : ");
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Y-axis sensitivity : ");
    pcVar7 = &stack0xffffff30;
    pcVar8 = &DAT_02f27d00;
    do {
      cVar1 = *pcVar10;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    uStack_d4 = &DAT_02f27d00;
    pcVar10 = uStack_d4;
    dStack_d8 = (double)g_CGamePtr->y_mouse_sensitivity * DOUBLE_00636bff;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff30,"%5.2f");
    iVar4 = -1;
    do {
      pcVar8 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar10 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar1 = *pcVar7;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->game_control == 1) {
      if (g_CGamePtr->invert_mouse_y_axis == 0) {
        pcVar10 = "Invert Y Axis : OFF";
      }
      else {
        pcVar10 = "Invert Y Axis : ON";
      }
LAB_00511b4c:
      dStack_d8 = (double)CONCAT44(0x511b51,uVar11);
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar10);
      dStack_d8 = (double)CONCAT44(0x511b5d,uVar11);
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f27e00,pcVar10);
    }
    else if (g_CGamePtr->game_control == 2) {
      pcVar10 = "Calibrate";
      goto LAB_00511b4c;
    }
    support_newmsg_cpp_getLocalizedString_FUN_005441f0("Control Options");
    dStack_d8 = 1.8104059911139327e-294;
    uVar5 = core_menu_cpp_GetGameMainMenuChoice_FUN_00510000();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    pCVar3 = g_CGamePtr;
    switch(uVar5) {
    case 0:
      if (DAT_02f26cac == 1) {
        iVar4 = g_CGamePtr->game_control + -1;
        g_CGamePtr->game_control = iVar4;
        if (iVar4 < 0) {
          pCVar3->game_control = 2;
        }
      }
      else {
        iVar4 = g_CGamePtr->game_control + 1;
        g_CGamePtr->game_control = iVar4;
        if (2 < iVar4) {
          pCVar3->game_control = 0;
        }
      }
      break;
    case 1:
      core_menu_cpp_SettingCustomKeys_FUN_005138e0();
      break;
    case 2:
      g_CGamePtr->always_run = (uint)(g_CGamePtr->always_run == 0);
      break;
    case 3:
      if (g_CGamePtr->aim_mode == 0) {
        g_CGamePtr->aim_mode = 2;
      }
      else {
        g_CGamePtr->aim_mode = 0;
      }
      break;
    case 4:
      g_CGamePtr->auto_use_health = (uint)(g_CGamePtr->auto_use_health == 0);
      break;
    case 5:
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Adjust X-Axis sensitivity");
      core_menu_cpp_SettingMouseSensitivity_FUN_005107c0();
      break;
    case 6:
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Adjust Y-Axis sensitivity");
      core_menu_cpp_SettingMouseSensitivity_FUN_005107c0();
      break;
    case 7:
      if (g_CGamePtr->game_control == 1) {
        g_CGamePtr->invert_mouse_y_axis = (uint)(g_CGamePtr->invert_mouse_y_axis == 0);
      }
      else if (g_CGamePtr->game_control == 2) {
        core_menu_cpp_SetUpGamepadControls_FUN_005104d0();
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if ((iVar4 != 0) &&
       (((g_CGamePtr->game_control != 2 || (g_CGamePtr->x_center != 0)) ||
        (iVar4 = core_menu_cpp_SetUpGamepadControls_FUN_005104d0(), iVar4 != 0)))) {
      return;
    }
  } while( true );
}


// Assembly code:
// 00511890: PUSH EBX
//   Label: core_menu.cpp_CustomKeySettings_FUN_00511890
// 00511891: PUSH ESI
// 00511892: PUSH EDI
// 00511893: PUSH EBP
// 00511894: SUB ESP,0x104
// 0051189a: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005118a0: XOR EDX,EDX
// 005118a2: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 005118a3: MOV EBX,0x2f27700
//   XREF to: 02f27700 (PARAM)
// 005118a8: MOV dword ptr [ESP + 0x104],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005118af: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 005118b4: ADD ESP,0x4
// 005118b7: XOR EAX,EAX
// 005118b9: MOV dword ptr [EAX + 0x2f28000],EBX
//   Label: LAB_005118b9
//   XREF to: 02f28000 (WRITE)
//   XREF to: 02f28004 (WRITE)
//   XREF to: 02f27700 (DATA)
//   XREF to: 02f27800 (DATA)
// 005118bf: ADD EAX,0x4
// 005118c2: ADD EBX,0x100
// 005118c8: CMP EAX,0x24
// 005118cb: JNZ 0x005118b9
//   XREF to: 005118b9 (CONDITIONAL_JUMP)
// 005118cd: MOV EBX,dword ptr [0x0067b654]
//   Label: LAB_005118cd
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005118d3: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 005118d4: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 005118d9: ADD ESP,0x4
// 005118dc: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005118e1: SUB ESP,0x4
// 005118e4: MOV EDX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005118ea: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x118] (DATA)
// 005118ed: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 005118f2: CALL core_moon.cpp_CMoon_FUN_00529d60
//   XREF to: 00529d60 (UNCONDITIONAL_CALL)
// 005118f7: ADD ESP,0x8
// 005118fa: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 005118ff: CALL core_moon.cpp_CMoon_FUN_00529ed0
//   XREF to: 00529ed0 (UNCONDITIONAL_CALL)
// 00511904: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00511909: XOR EBX,EBX
// 0051190b: MOV EAX,dword ptr [EAX + 0xbc]
//   XREF to: 02d81b58 (READ)
// 00511911: ADD ESP,0x4
// 00511914: CMP EAX,0x1
// 00511917: JC 0x00511c13
//   XREF to: 00511c13 (CONDITIONAL_JUMP)
// 0051191d: JA 0x00511c0e
//   XREF to: 00511c0e (CONDITIONAL_JUMP)
// 00511923: PUSH 0x636a99
//   XREF to: 00636a99 (DATA)
// 00511928: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_00511928
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051192d: ADD ESP,0x4
// 00511930: PUSH EAX
// 00511931: PUSH 0x2f27700
//   XREF to: 02f27700 (DATA)
// 00511936: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   Label: LAB_00511936
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051193b: ADD ESP,0x8
// 0051193e: PUSH 0x636ac4
//   XREF to: 00636ac4 (DATA)
// 00511943: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511948: ADD ESP,0x4
// 0051194b: INC EBX
// 0051194c: PUSH EAX
// 0051194d: MOV EAX,EBX
// 0051194f: SHL EAX,0x8
// 00511952: ADD EAX,0x2f27700
//   XREF to: 02f27700 (DATA)
// 00511957: INC EBX
// 00511958: PUSH EAX
//   XREF to: 02f27800 (DATA)
// 00511959: MOV ESI,EBX
// 0051195b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00511960: SHL ESI,0x8
// 00511963: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00511968: INC EBX
// 00511969: ADD ESP,0x8
// 0051196c: MOV EDI,dword ptr [EAX + 0x98]
//   XREF to: 02d81b34 (READ)
// 00511972: ADD ESI,0x2f27700
//   XREF to: 02f27700 (DATA)
// 00511978: TEST EDI,EDI
// 0051197a: JZ 0x00511c40
//   XREF to: 00511c40 (CONDITIONAL_JUMP)
// 00511980: PUSH 0x636ad3
//   XREF to: 00636ad3 (DATA)
// 00511985: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_00511985
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051198a: ADD ESP,0x4
// 0051198d: PUSH EAX
// 0051198e: PUSH ESI
//   XREF to: 02f27900 (DATA)
// 0051198f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00511994: ADD ESP,0x8
// 00511997: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0051199c: MOV EAX,dword ptr [EAX + 0xc4]
//   XREF to: 02d81b60 (READ)
// 005119a2: CMP EAX,0x1
// 005119a5: JNC 0x00511c72
//   XREF to: 00511c72 (CONDITIONAL_JUMP)
// 005119ab: MOV EAX,[0x0067b654]
//   Label: LAB_005119ab
//   XREF to: 0067b654 (READ)
// 005119b0: PUSH 0x636af4
//   XREF to: 00636af4 (DATA)
// 005119b5: MOV dword ptr [EAX + 0xc4],0x0
//   XREF to: 02d81b60 (WRITE)
// 005119bf: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005119c4: ADD ESP,0x4
// 005119c7: PUSH EAX
// 005119c8: MOV EAX,EBX
// 005119ca: SHL EAX,0x8
// 005119cd: ADD EAX,0x2f27700
//   XREF to: 02f27700 (DATA)
// 005119d2: PUSH EAX
//   XREF to: 02f27a00 (DATA)
// 005119d3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   Label: LAB_005119d3
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005119d8: ADD ESP,0x8
// 005119db: INC EBX
// 005119dc: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005119e1: MOV ESI,EBX
// 005119e3: MOV EBP,dword ptr [EAX + 0xc8]
//   XREF to: 02d81b64 (READ)
// 005119e9: SHL ESI,0x8
// 005119ec: INC EBX
// 005119ed: ADD ESI,0x2f27700
//   XREF to: 02f27700 (DATA)
// 005119f3: TEST EBP,EBP
// 005119f5: JZ 0x00511c8c
//   XREF to: 00511c8c (CONDITIONAL_JUMP)
// 005119fb: PUSH 0x636b27
//   XREF to: 00636b27 (DATA)
// 00511a00: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_00511a00
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511a05: ADD ESP,0x4
// 00511a08: PUSH EAX
// 00511a09: PUSH ESI
//   XREF to: 02f27b00 (DATA)
// 00511a0a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00511a0f: ADD ESP,0x8
// 00511a12: PUSH 0x636b52
//   XREF to: 00636b52 (DATA)
// 00511a17: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511a1c: MOV EDI,EBX
// 00511a1e: ADD ESP,0x4
// 00511a21: SHL EDI,0x8
// 00511a24: MOV ESI,EAX
// 00511a26: ADD EDI,0x2f27700
//   XREF to: 02f27700 (DATA)
// 00511a2c: PUSH EDI
//   XREF to: 02f27c00 (DATA)
// 00511a2d: MOV AL,byte ptr [ESI]
//   Label: LAB_00511a2d
// 00511a2f: MOV byte ptr [EDI],AL
//   XREF to: 02f27c00 (WRITE)
//   XREF to: 02f27c02 (WRITE)
// 00511a31: CMP AL,0x0
// 00511a33: JZ 0x00511a45
//   XREF to: 00511a45 (CONDITIONAL_JUMP)
// 00511a35: MOV AL,byte ptr [ESI + 0x1]
// 00511a38: ADD ESI,0x2
// 00511a3b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f27c01 (WRITE)
//   XREF to: 02f27c03 (WRITE)
// 00511a3e: ADD EDI,0x2
// 00511a41: CMP AL,0x0
// 00511a43: JNZ 0x00511a2d
//   XREF to: 00511a2d (CONDITIONAL_JUMP)
// 00511a45: POP EDI
//   Label: LAB_00511a45
// 00511a46: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00511a4b: FILD dword ptr [EAX + 0x9c]
//   XREF to: 02d81b38 (READ)
// 00511a51: FMUL double ptr [0x00636bff]
//   XREF to: 00636bff (READ)
// 00511a57: SUB ESP,0x8
// 00511a5a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x11c] (DATA)
// 00511a5d: PUSH 0x636b68
//   XREF to: 00636b68 (DATA)
// 00511a62: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x114] (DATA)
// 00511a66: PUSH EAX
// 00511a67: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00511a6c: ADD ESP,0x10
// 00511a6f: MOV ESI,ESP
// 00511a71: PUSH EDI
//   XREF to: 02f27c00 (DATA)
// 00511a72: SUB ECX,ECX
// 00511a74: DEC ECX
// 00511a75: MOV AL,0x0
// 00511a77: SCASB.REPNE ES:EDI
//   XREF to: 02f27c00 (READ)
//   XREF to: 02f27c01 (READ)
// 00511a79: DEC EDI
// 00511a7a: MOV AL,byte ptr [ESI]
//   Label: LAB_00511a7a
//   XREF to: Stack[-0x114] (DATA)
// 00511a7c: MOV byte ptr [EDI],AL
//   XREF to: 02f27c00 (WRITE)
//   XREF to: 02f27c01 (WRITE)
//   XREF to: 02f27c02 (WRITE)
// 00511a7e: CMP AL,0x0
// 00511a80: JZ 0x00511a92
//   XREF to: 00511a92 (CONDITIONAL_JUMP)
// 00511a82: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x113] (READ)
// 00511a85: ADD ESI,0x2
// 00511a88: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f27c01 (WRITE)
//   XREF to: 02f27c02 (WRITE)
//   XREF to: 02f27c03 (WRITE)
// 00511a8b: ADD EDI,0x2
// 00511a8e: CMP AL,0x0
// 00511a90: JNZ 0x00511a7a
//   XREF to: 00511a7a (CONDITIONAL_JUMP)
// 00511a92: POP EDI
//   Label: LAB_00511a92
// 00511a93: PUSH 0x636b6e
//   XREF to: 00636b6e (DATA)
// 00511a98: INC EBX
// 00511a99: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511a9e: MOV EDI,EBX
// 00511aa0: ADD ESP,0x4
// 00511aa3: SHL EDI,0x8
// 00511aa6: MOV ESI,EAX
// 00511aa8: ADD EDI,0x2f27700
//   XREF to: 02f27700 (DATA)
// 00511aae: PUSH EDI
//   XREF to: 02f27d00 (DATA)
// 00511aaf: MOV AL,byte ptr [ESI]
//   Label: LAB_00511aaf
// 00511ab1: MOV byte ptr [EDI],AL
//   XREF to: 02f27d00 (WRITE)
//   XREF to: 02f27d02 (WRITE)
// 00511ab3: CMP AL,0x0
// 00511ab5: JZ 0x00511ac7
//   XREF to: 00511ac7 (CONDITIONAL_JUMP)
// 00511ab7: MOV AL,byte ptr [ESI + 0x1]
// 00511aba: ADD ESI,0x2
// 00511abd: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f27d01 (WRITE)
//   XREF to: 02f27d03 (WRITE)
// 00511ac0: ADD EDI,0x2
// 00511ac3: CMP AL,0x0
// 00511ac5: JNZ 0x00511aaf
//   XREF to: 00511aaf (CONDITIONAL_JUMP)
// 00511ac7: POP EDI
//   Label: LAB_00511ac7
// 00511ac8: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00511acd: FILD dword ptr [EAX + 0xa0]
//   XREF to: 02d81b3c (READ)
// 00511ad3: FMUL double ptr [0x00636bff]
//   XREF to: 00636bff (READ)
// 00511ad9: SUB ESP,0x8
// 00511adc: FSTP double ptr [ESP]
//   XREF to: Stack[-0x11c] (DATA)
// 00511adf: PUSH 0x636b84
//   XREF to: 00636b84 (DATA)
// 00511ae4: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x114] (DATA)
// 00511ae8: INC EBX
// 00511ae9: PUSH EAX
// 00511aea: MOV EBP,EBX
// 00511aec: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x114] (DATA)
// 00511af0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00511af5: ADD ESP,0x10
// 00511af8: SHL EBP,0x8
// 00511afb: PUSH EDI
//   XREF to: 02f27d00 (DATA)
// 00511afc: SUB ECX,ECX
// 00511afe: DEC ECX
// 00511aff: MOV AL,0x0
// 00511b01: SCASB.REPNE ES:EDI
//   XREF to: 02f27d00 (READ)
//   XREF to: 02f27d01 (READ)
// 00511b03: DEC EDI
// 00511b04: MOV AL,byte ptr [ESI]
//   Label: LAB_00511b04
//   XREF to: Stack[-0x114] (DATA)
// 00511b06: MOV byte ptr [EDI],AL
//   XREF to: 02f27d00 (WRITE)
//   XREF to: 02f27d01 (WRITE)
//   XREF to: 02f27d02 (WRITE)
// 00511b08: CMP AL,0x0
// 00511b0a: JZ 0x00511b1c
//   XREF to: 00511b1c (CONDITIONAL_JUMP)
// 00511b0c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x113] (READ)
// 00511b0f: ADD ESI,0x2
// 00511b12: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f27d01 (WRITE)
//   XREF to: 02f27d02 (WRITE)
//   XREF to: 02f27d03 (WRITE)
// 00511b15: ADD EDI,0x2
// 00511b18: CMP AL,0x0
// 00511b1a: JNZ 0x00511b04
//   XREF to: 00511b04 (CONDITIONAL_JUMP)
// 00511b1c: POP EDI
//   Label: LAB_00511b1c
// 00511b1d: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00511b22: ADD EBP,0x2f27700
//   XREF to: 02f27700 (DATA)
// 00511b28: MOV EDX,dword ptr [EAX + 0xbc]
//   XREF to: 02d81b58 (READ)
// 00511b2e: LEA ESI,[EBX + 0x1]
// 00511b31: CMP EDX,0x1
// 00511b34: JNZ 0x00511ca0
//   XREF to: 00511ca0 (CONDITIONAL_JUMP)
// 00511b3a: CMP dword ptr [EAX + 0x94],0x0
//   XREF to: 02d81b30 (READ)
// 00511b41: JZ 0x00511c96
//   XREF to: 00511c96 (CONDITIONAL_JUMP)
// 00511b47: PUSH 0x636b8a
//   XREF to: 00636b8a (DATA)
// 00511b4c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_00511b4c
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511b51: ADD ESP,0x4
// 00511b54: PUSH EAX
// 00511b55: PUSH EBP
//   XREF to: 02f27e00 (DATA)
// 00511b56: MOV EBX,ESI
// 00511b58: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00511b5d: ADD ESP,0x8
// 00511b60: PUSH 0x636bbb
//   Label: LAB_00511b60
//   XREF to: 00636bbb (DATA)
// 00511b65: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511b6a: ADD ESP,0x4
// 00511b6d: PUSH EAX
// 00511b6e: PUSH 0xfa
// 00511b73: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x14] (DATA)
// 00511b7a: PUSH EAX
// 00511b7b: PUSH EBX
// 00511b7c: PUSH 0x2f28000
//   XREF to: 02f28000 (DATA)
// 00511b81: CALL core_menu.cpp_GetGameMainMenuChoice_FUN_00510000
//   XREF to: 00510000 (UNCONDITIONAL_CALL)
// 00511b86: ADD ESP,0x14
// 00511b89: MOV EBX,EAX
// 00511b8b: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00511b90: CMP EBX,0x7
// 00511b93: JA 0x00511bc6
//   XREF to: 00511bc6 (CONDITIONAL_JUMP)
// 00511b95: JMP dword ptr [EBX*0x4 + 0x511864]
//   Label: switchD
//   XREF to: 00511b9c (COMPUTED_JUMP)
//   XREF to: 00511cec (COMPUTED_JUMP)
//   XREF to: 00511cf6 (COMPUTED_JUMP)
//   XREF to: 00511d16 (COMPUTED_JUMP)
//   XREF to: 00511d42 (COMPUTED_JUMP)
//   XREF to: 00511d62 (COMPUTED_JUMP)
//   XREF to: 00511d88 (COMPUTED_JUMP)
//   XREF to: 00511dae (COMPUTED_JUMP)
//   XREF to: 00511864 (DATA)
// 00511b9c: MOV EDI,dword ptr [0x02f26cac]
//   Label: caseD_0
//   XREF to: 02f26cac (READ)
// 00511ba2: CMP EDI,0x1
// 00511ba5: JNZ 0x00511cc2
//   XREF to: 00511cc2 (CONDITIONAL_JUMP)
// 00511bab: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00511bb0: MOV EBX,dword ptr [EAX + 0xbc]
//   XREF to: 02d81b58 (READ)
// 00511bb6: SUB EBX,EDI
// 00511bb8: MOV dword ptr [EAX + 0xbc],EBX
//   XREF to: 02d81b58 (WRITE)
// 00511bbe: TEST EBX,EBX
// 00511bc0: JL 0x00511cb3
//   XREF to: 00511cb3 (CONDITIONAL_JUMP)
// 00511bc6: PUSH 0x1
//   Label: default
// 00511bc8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00511bcd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00511bce: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00511bd0: CALL dword ptr [EBX + 0x4]
// 00511bd3: ADD ESP,0x8
// 00511bd6: TEST EAX,EAX
// 00511bd8: JZ 0x005118cd
//   XREF to: 005118cd (CONDITIONAL_JUMP)
// 00511bde: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 00511be3: CMP dword ptr [EAX + 0xbc],0x2
//   XREF to: 02d81b58 (READ)
// 00511bea: JNZ 0x00511bf9
//   XREF to: 00511bf9 (CONDITIONAL_JUMP)
// 00511bec: CMP dword ptr [EAX + 0xa4],0x0
//   XREF to: 02d81b40 (READ)
// 00511bf3: JZ 0x00511dec
//   XREF to: 00511dec (CONDITIONAL_JUMP)
// 00511bf9: ADD ESP,0x104
//   Label: LAB_00511bf9
// 00511bff: POP EBP
// 00511c00: POP EDI
// 00511c01: POP ESI
// 00511c02: POP EBX
// 00511c03: RET
// 00511c04: PUSH 0x636ab2
//   Label: LAB_00511c04
//   XREF to: 00636ab2 (DATA)
// 00511c09: JMP 0x00511928
//   XREF to: 00511928 (UNCONDITIONAL_JUMP)
// 00511c0e: CMP EAX,0x2
//   Label: LAB_00511c0e
// 00511c11: JZ 0x00511c04
//   XREF to: 00511c04 (CONDITIONAL_JUMP)
// 00511c13: MOV EAX,[0x0067b654]
//   Label: LAB_00511c13
//   XREF to: 0067b654 (READ)
// 00511c18: PUSH 0x636a86
//   XREF to: 00636a86 (DATA)
// 00511c1d: MOV dword ptr [EAX + 0xbc],0x0
//   XREF to: 02d81b58 (WRITE)
// 00511c27: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511c2c: ADD ESP,0x4
// 00511c2f: PUSH EAX
// 00511c30: MOV EAX,EBX
// 00511c32: SHL EAX,0x8
// 00511c35: ADD EAX,0x2f27700
//   XREF to: 02f27700 (DATA)
// 00511c3a: PUSH EAX
//   XREF to: 02f27700 (DATA)
// 00511c3b: JMP 0x00511936
//   XREF to: 00511936 (UNCONDITIONAL_JUMP)
// 00511c40: PUSH 0x636ae3
//   Label: LAB_00511c40
//   XREF to: 00636ae3 (DATA)
// 00511c45: JMP 0x00511985
//   XREF to: 00511985 (UNCONDITIONAL_JUMP)
// 00511c4a: PUSH 0x636b02
//   Label: LAB_00511c4a
//   XREF to: 00636b02 (DATA)
// 00511c4f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511c54: ADD ESP,0x4
// 00511c57: PUSH EAX
// 00511c58: PUSH ESI
//   XREF to: 02f27a00 (DATA)
// 00511c59: JMP 0x005119d3
//   XREF to: 005119d3 (UNCONDITIONAL_JUMP)
// 00511c5e: PUSH 0x636b17
//   Label: LAB_00511c5e
//   XREF to: 00636b17 (DATA)
// 00511c63: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511c68: ADD ESP,0x4
// 00511c6b: PUSH EAX
// 00511c6c: PUSH ESI
//   XREF to: 02f27a00 (DATA)
// 00511c6d: JMP 0x005119d3
//   XREF to: 005119d3 (UNCONDITIONAL_JUMP)
// 00511c72: MOV ESI,EBX
//   Label: LAB_00511c72
// 00511c74: SHL ESI,0x8
// 00511c77: ADD ESI,0x2f27700
//   XREF to: 02f27700 (DATA)
// 00511c7d: CMP EAX,0x1
// 00511c80: JBE 0x00511c4a
//   XREF to: 00511c4a (CONDITIONAL_JUMP)
// 00511c82: CMP EAX,0x2
// 00511c85: JZ 0x00511c5e
//   XREF to: 00511c5e (CONDITIONAL_JUMP)
// 00511c87: JMP 0x005119ab
//   XREF to: 005119ab (UNCONDITIONAL_JUMP)
// 00511c8c: PUSH 0x636b3c
//   Label: LAB_00511c8c
//   XREF to: 00636b3c (DATA)
// 00511c91: JMP 0x00511a00
//   XREF to: 00511a00 (UNCONDITIONAL_JUMP)
// 00511c96: PUSH 0x636b9d
//   Label: LAB_00511c96
//   XREF to: 00636b9d (DATA)
// 00511c9b: JMP 0x00511b4c
//   XREF to: 00511b4c (UNCONDITIONAL_JUMP)
// 00511ca0: CMP EDX,0x2
//   Label: LAB_00511ca0
// 00511ca3: JNZ 0x00511b60
//   XREF to: 00511b60 (CONDITIONAL_JUMP)
// 00511ca9: PUSH 0x636bb1
//   XREF to: 00636bb1 (DATA)
// 00511cae: JMP 0x00511b4c
//   XREF to: 00511b4c (UNCONDITIONAL_JUMP)
// 00511cb3: MOV dword ptr [EAX + 0xbc],0x2
//   Label: LAB_00511cb3
//   XREF to: 02d81b58 (WRITE)
// 00511cbd: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511cc2: MOV EAX,[0x0067b654]
//   Label: LAB_00511cc2
//   XREF to: 0067b654 (READ)
// 00511cc7: MOV EBX,dword ptr [EAX + 0xbc]
//   XREF to: 02d81b58 (READ)
// 00511ccd: INC EBX
// 00511cce: MOV dword ptr [EAX + 0xbc],EBX
//   XREF to: 02d81b58 (WRITE)
// 00511cd4: CMP EBX,0x2
// 00511cd7: JLE 0x00511bc6
//   XREF to: 00511bc6 (CONDITIONAL_JUMP)
// 00511cdd: MOV dword ptr [EAX + 0xbc],0x0
//   XREF to: 02d81b58 (WRITE)
// 00511ce7: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511cec: CALL core_menu.cpp_SettingCustomKeys_FUN_005138e0
//   Label: caseD_1
//   XREF to: 005138e0 (UNCONDITIONAL_CALL)
// 00511cf1: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511cf6: MOV EAX,[0x0067b654]
//   Label: caseD_2
//   XREF to: 0067b654 (READ)
// 00511cfb: CMP dword ptr [EAX + 0x98],0x0
//   XREF to: 02d81b34 (READ)
// 00511d02: SETZ BL
// 00511d05: AND EBX,0xff
// 00511d0b: MOV dword ptr [EAX + 0x98],EBX
//   XREF to: 02d81b34 (WRITE)
// 00511d11: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511d16: MOV EAX,[0x0067b654]
//   Label: caseD_3
//   XREF to: 0067b654 (READ)
// 00511d1b: CMP dword ptr [EAX + 0xc4],0x0
//   XREF to: 02d81b60 (READ)
// 00511d22: JNZ 0x00511d33
//   XREF to: 00511d33 (CONDITIONAL_JUMP)
// 00511d24: MOV dword ptr [EAX + 0xc4],0x2
//   XREF to: 02d81b60 (WRITE)
// 00511d2e: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511d33: MOV dword ptr [EAX + 0xc4],0x0
//   Label: LAB_00511d33
//   XREF to: 02d81b60 (WRITE)
// 00511d3d: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511d42: MOV EAX,[0x0067b654]
//   Label: caseD_4
//   XREF to: 0067b654 (READ)
// 00511d47: CMP dword ptr [EAX + 0xc8],0x0
//   XREF to: 02d81b64 (READ)
// 00511d4e: SETZ BL
// 00511d51: AND EBX,0xff
// 00511d57: MOV dword ptr [EAX + 0xc8],EBX
//   XREF to: 02d81b64 (WRITE)
// 00511d5d: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511d62: PUSH 0x636bcb
//   Label: caseD_5
//   XREF to: 00636bcb (DATA)
// 00511d67: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511d6c: ADD ESP,0x4
// 00511d6f: PUSH EAX
// 00511d70: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00511d75: ADD EAX,0x9c
//   XREF to: 02d81b38 (PARAM)
// 00511d7a: PUSH EAX
//   XREF to: 02d81b38 (DATA)
// 00511d7b: CALL core_menu.cpp_SettingMouseSensitivity_FUN_005107c0
//   XREF to: 005107c0 (UNCONDITIONAL_CALL)
// 00511d80: ADD ESP,0x8
// 00511d83: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511d88: PUSH 0x636be5
//   Label: caseD_6
//   XREF to: 00636be5 (DATA)
// 00511d8d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511d92: ADD ESP,0x4
// 00511d95: PUSH EAX
// 00511d96: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00511d9b: ADD EAX,0xa0
//   XREF to: 02d81b3c (PARAM)
// 00511da0: PUSH EAX
//   XREF to: 02d81b3c (DATA)
// 00511da1: CALL core_menu.cpp_SettingMouseSensitivity_FUN_005107c0
//   XREF to: 005107c0 (UNCONDITIONAL_CALL)
// 00511da6: ADD ESP,0x8
// 00511da9: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511dae: MOV EAX,[0x0067b654]
//   Label: caseD_7
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00511db3: MOV ESI,dword ptr [EAX + 0xbc]
//   XREF to: 02d81b58 (READ)
// 00511db9: CMP ESI,0x1
// 00511dbc: JNZ 0x00511dd9
//   XREF to: 00511dd9 (CONDITIONAL_JUMP)
// 00511dbe: CMP dword ptr [EAX + 0x94],0x0
//   XREF to: 02d81b30 (READ)
// 00511dc5: SETZ BL
// 00511dc8: AND EBX,0xff
// 00511dce: MOV dword ptr [EAX + 0x94],EBX
//   XREF to: 02d81b30 (WRITE)
// 00511dd4: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511dd9: CMP ESI,0x2
//   Label: LAB_00511dd9
// 00511ddc: JNZ 0x00511bc6
//   XREF to: 00511bc6 (CONDITIONAL_JUMP)
// 00511de2: CALL core_menu.cpp_SetUpGamepadControls_FUN_005104d0
//   XREF to: 005104d0 (UNCONDITIONAL_CALL)
// 00511de7: JMP 0x00511bc6
//   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
// 00511dec: CALL core_menu.cpp_SetUpGamepadControls_FUN_005104d0
//   Label: LAB_00511dec
//   XREF to: 005104d0 (UNCONDITIONAL_CALL)
// 00511df1: TEST EAX,EAX
// 00511df3: JNZ 0x00511bf9
//   XREF to: 00511bf9 (CONDITIONAL_JUMP)
// 00511df9: JMP 0x005118cd
//   XREF to: 005118cd (UNCONDITIONAL_JUMP)
