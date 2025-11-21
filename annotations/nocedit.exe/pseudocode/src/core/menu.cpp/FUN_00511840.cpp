// Name: core_menu.cpp_FUN_00511840
// Address: 00511840
// Address Range: [[00511840, 00511860]]
// Convention: unknown
// Signature: undefined core_menu.cpp_FUN_00511840()
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.x_center
//   undefined4 g_CGameInstance.game_control

#include "nocturne.h"

undefined4 core_menu_cpp_FUN_00511840(void)

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
  int iStack_14;
  
  if ((g_CGamePtr->game_control != 2) || (g_CGamePtr->x_center != 0)) {
    return 1;
  }
  DVar5 = 0x7fffffff;
  DVar4 = 0;
  iStack_14 = 0x7fffffff;
  do {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(&g_CMoonInstance);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Center gamepad, press ENTER")
    ;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,pcVar2);
    iStack_18 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_MediumFont,0x58);
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_MediumFont,pcVar2,iStack_14,0xf0 - iVar3 / 2,7,0);
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
// 00511840: MOV EAX,[0x0067b654]
//   Label: core_menu.cpp_FUN_00511840
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 00511845: CMP dword ptr [EAX + 0xbc],0x2
//   XREF to: 02d81b58 (READ)
// 0051184c: JNZ 0x0051185b
//   XREF to: 0051185b (CONDITIONAL_JUMP)
// 0051184e: CMP dword ptr [EAX + 0xa4],0x0
//   XREF to: 02d81b40 (READ)
// 00511855: JZ 0x005104d0
//   XREF to: 005104d0 (CONDITIONAL_JUMP)
// 0051185b: MOV EAX,0x1
//   Label: LAB_0051185b
// 00511860: RET
