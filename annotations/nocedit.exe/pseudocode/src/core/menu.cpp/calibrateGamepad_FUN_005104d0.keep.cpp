// Name: core_menu.cpp_calibrateGamepad_FUN_005104d0
// Address: 005104d0
// MANUAL RECONSTRUCTION
// Address Range: [[005104d0, 005107b6]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_calibrateGamepad_FUN_005104d0(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_calibrateGamepad_FUN_005104d0(void)

{
  CGame *pCVar2;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *text;
  int iVar5;
  DWORD DVar4;
  DWORD DVar5;
  DWORD DVar6;
  char local_224 [256];
  char acStack_124 [256];
  DWORD DStack_1c;
  DWORD DStack_18;
  DWORD local_14;
  CGame *pCVar1;
  
  DVar5 = 0x7fffffff;
  DVar4 = 0;
  DVar6 = 0;
  local_14 = 0x7fffffff;
  while( true ) {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(&g_CMoonInstance);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Center gamepad, press ENTER")
    ;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,pcVar2);
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_MediumFont,0x58);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_MediumFont,pcVar2,0x140 - iVar3 / 2,0xf0 - iVar4 / 2,7,0);
    _sprintf(local_224,"%d,%d,%x",(int)g_JoyXPos,(int)g_JoyYPos,(uint)g_JoyButtons);
    engine_2d_c_drawText_FUN_00401fd0(local_224,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
    if (iVar4 != 0) break;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar4 != 0) goto LAB_00510743;
    DStack_1c = g_JoyXPos;
    DStack_18 = g_JoyYPos;
  }
  while( true ) {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(&g_CMoonInstance);
    text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Move gamepad in all directions, press ENTER");
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,text);
    iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_MediumFont,0x58);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_MediumFont,text,0x140 - iVar4 / 2,0xf0 - iVar5 / 2,7,0);
    _sprintf(acStack_124,"%d,%d,%x",(int)g_JoyXPos,(int)g_JoyYPos,(uint)g_JoyButtons)
    ;
    engine_2d_c_drawText_FUN_00401fd0(acStack_124,0,0);
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
    pCVar1 = g_CGamePtr;
    if (iVar4 != 0) {
      g_CGamePtr->x_center = DStack_1c;
      pCVar1->x_stick_min = DVar5;
      pCVar1->x_stick_max = DVar4;
      pCVar1->y_stick_max = DVar6;
      pCVar1->y_center = DStack_18;
      pCVar1->y_stick_min = local_14;
      return 1;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar4 != 0) break;
    if ((int)g_JoyXPos < (int)DVar5) {
      DVar5 = g_JoyXPos;
    }
    if ((int)DVar4 < (int)g_JoyXPos) {
      DVar4 = g_JoyXPos;
    }
    if ((int)g_JoyYPos < (int)local_14) {
      local_14 = g_JoyYPos;
    }
    if ((int)DVar6 < (int)g_JoyYPos) {
      DVar6 = g_JoyYPos;
    }
  }
LAB_00510743:
  pCVar2 = g_CGamePtr;
  g_CGamePtr->x_center = 0;
  pCVar2->game_control = CONTROL_MODE_KEYBOARD;
  return 0;
}
