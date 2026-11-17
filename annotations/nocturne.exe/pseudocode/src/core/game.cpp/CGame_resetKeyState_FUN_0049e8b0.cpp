// Name: core_game.cpp_CGame_resetKeyState_FUN_0049e8b0
// Address: 0049e8b0
// Address Range: [[0049e8b0, 0049ec7d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(CGame *this_ptr)

{
  DWORD DVar1;
  
  DVar1 = g_JoyButtons;
  g_JoystickPresent = 2;
  wincore_winrun_cpp_getJoystickState_FUN_00559eb0();
  if ((g_JoyButtons & 1) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON1);
  }
  else if ((DVar1 & 1) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON1);
  }
  if ((g_JoyButtons & 2) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON2);
  }
  else if ((DVar1 & 2) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON2);
  }
  if ((g_JoyButtons & 4) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON3);
  }
  else if ((DVar1 & 4) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON3);
  }
  if ((g_JoyButtons & 8) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON4);
  }
  else if ((DVar1 & 8) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON4);
  }
  if ((g_JoyButtons & 0x10) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON5);
  }
  else if ((DVar1 & 0x10) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON5);
  }
  if ((g_JoyButtons & 0x20) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON6);
  }
  else if ((DVar1 & 0x20) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON6);
  }
  if ((g_JoyButtons & 0x40) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON7);
  }
  else if ((DVar1 & 0x40) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON7);
  }
  if ((g_JoyButtons & 0x80) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON8);
  }
  else if ((DVar1 & 0x80) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON8);
  }
  if ((g_JoyButtons & 0x100) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON9);
  }
  else if ((DVar1 & 0x100) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON9);
  }
  if ((g_JoyButtons & 0x200) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON10);
  }
  else if ((DVar1 & 0x200) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON10);
  }
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_LEFT);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_RIGHT);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_UP);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_DOWN);
  if ((int)g_JoyXPos < this_ptr->x_center - (this_ptr->x_center - this_ptr->x_stick_min) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_LEFT);
  }
  if ((this_ptr->x_stick_max - this_ptr->x_center) / 2 + this_ptr->x_center < (int)g_JoyXPos) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_RIGHT);
  }
  if ((int)g_JoyYPos < this_ptr->y_center - (this_ptr->y_center - this_ptr->y_stick_min) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_UP);
  }
  if ((this_ptr->y_stick_max - this_ptr->y_center) / 2 + this_ptr->y_center < (int)g_JoyYPos) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_DOWN);
    return;
  }
  return;
}
