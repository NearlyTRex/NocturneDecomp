// Name: core_menu.cpp_checkAndCalibrateGamepad_FUN_00511840
// Address: 00511840
// Address Range: [[00511840, 00511860]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_checkAndCalibrateGamepad_FUN_00511840(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_checkAndCalibrateGamepad_FUN_00511840(void)

{
  CGame *pCVar1;
  char *pcVar2;
  int iVar3;
  int unaff_EBX;
  DWORD DVar4;
  DWORD DVar5;
  DWORD unaff_ESI;
  DWORD DVar6;
  DWORD unaff_EDI;
  DWORD in_stack_00000004;
  char acStack_11c [248];
  int iStack_24;
  int iStack_18;
  uint uStack_14;
  
  if ((g_CGamePtr->game_control != 2) || (g_CGamePtr->x_center != 0)) {
    return 1;
  }
  DVar5 = 0x7fffffff;
  DVar4 = 0;
  uStack_14 = 0x7fffffff;
  do {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(&g_CMoonInstance);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Center gamepad, press ENTER")
    ;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,pcVar2);
    iStack_24 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_MediumFont,0x58);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_MediumFont,pcVar2,iStack_24,0xf0 - iVar3 / 2,7,0);
    _sprintf
              (&stack0xfffffddc,"%d,%d,%x",g_JoyXPos,g_JoyYPos,g_JoyButtons);
    engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffddc,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
    DVar6 = 0;
    if (iVar3 != 0) goto LAB_005105cd;
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    unaff_EDI = g_JoyXPos;
    unaff_ESI = g_JoyYPos;
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
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,pcVar2);
    iStack_18 = 0x140 - iVar3 / 2;
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_MediumFont,0x58);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_MediumFont,pcVar2,iStack_18,0xf0 - iVar3 / 2,7,0);
    _sprintf(acStack_11c,"%d,%d,%x",g_JoyXPos);
    engine_2d_c_drawText_FUN_00401fd0(acStack_11c,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
    pCVar1 = g_CGamePtr;
    if (iVar3 != 0) {
      g_CGamePtr->x_center = unaff_EDI;
      pCVar1->x_stick_min = DVar5;
      pCVar1->x_stick_max = DVar4;
      pCVar1->y_stick_max = DVar6;
      pCVar1->y_center = unaff_ESI;
      pCVar1->y_stick_min = unaff_EBX;
      return 1;
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar3 != 0) break;
    if ((int)g_JoyXPos < (int)DVar5) {
      DVar5 = g_JoyXPos;
    }
    if ((int)DVar4 < (int)g_JoyXPos) {
      DVar4 = g_JoyXPos;
    }
    if ((int)g_JoyYPos < (int)in_stack_00000004) {
      in_stack_00000004 = g_JoyYPos;
    }
    if ((int)DVar6 < (int)g_JoyYPos) {
      DVar6 = g_JoyYPos;
    }
  }
  goto LAB_00510743;
}
