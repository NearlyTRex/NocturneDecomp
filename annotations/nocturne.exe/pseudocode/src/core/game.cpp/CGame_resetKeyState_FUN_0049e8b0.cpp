// Name: core_game.cpp_CGame_resetKeyState_FUN_0049e8b0
// Address: 0049e8b0
// Address Range: [[0049e8b0, 0049ec7d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(CGame *this_ptr)

{
  uint uVar1;
  
  uVar1 = _DAT_01c03908;
  _DAT_01c0390c = 2;
  wincore_winrun_cpp_getJoystickState_FUN_00559eb0();
  if ((_DAT_01c03908 & 1) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON1);
  }
  else if ((uVar1 & 1) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON1);
  }
  if ((_DAT_01c03908 & 2) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON2);
  }
  else if ((uVar1 & 2) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON2);
  }
  if ((_DAT_01c03908 & 4) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON3);
  }
  else if ((uVar1 & 4) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON3);
  }
  if ((_DAT_01c03908 & 8) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON4);
  }
  else if ((uVar1 & 8) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON4);
  }
  if ((_DAT_01c03908 & 0x10) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON5);
  }
  else if ((uVar1 & 0x10) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON5);
  }
  if ((_DAT_01c03908 & 0x20) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON6);
  }
  else if ((uVar1 & 0x20) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON6);
  }
  if ((_DAT_01c03908 & 0x40) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON7);
  }
  else if ((uVar1 & 0x40) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON7);
  }
  if ((_DAT_01c03908 & 0x80) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON8);
  }
  else if ((uVar1 & 0x80) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON8);
  }
  if ((_DAT_01c03908 & 0x100) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON9);
  }
  else if ((uVar1 & 0x100) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON9);
  }
  if ((_DAT_01c03908 & 0x200) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_BUTTON10);
  }
  else if ((uVar1 & 0x200) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_BUTTON10);
  }
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_LEFT);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_RIGHT);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_UP);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(g_CKeys_PTR_005bac64,DIJ_DOWN);
  if (_DAT_01c038f8 < this_ptr->x_center - (this_ptr->x_center - this_ptr->x_stick_min) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_LEFT);
  }
  if ((this_ptr->x_stick_max - this_ptr->x_center) / 2 + this_ptr->x_center < _DAT_01c038f8) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_RIGHT);
  }
  if (_DAT_01c038fc < this_ptr->y_center - (this_ptr->y_center - this_ptr->y_stick_min) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_UP);
  }
  if ((this_ptr->y_stick_max - this_ptr->y_center) / 2 + this_ptr->y_center < _DAT_01c038fc) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(g_CKeys_PTR_005bac64,DIJ_DOWN);
    return;
  }
  return;
}
