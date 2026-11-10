// Name: core_game.cpp_CGame_resetKeyState_FUN_004b7140
// Address: 004b7140
// Address Range: [[004b7140, 004b750d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004b7140(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004b7140(CGame *this_ptr)

{
  uint uVar1;
  
  uVar1 = _DAT_01c38b00;
  _DAT_01c38b04 = 2;
  wincore_winrun_cpp_getJoystickState_FUN_00590060();
  if ((_DAT_01c38b00 & 1) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_BUTTON1);
  }
  else if ((uVar1 & 1) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_BUTTON1);
  }
  if ((_DAT_01c38b00 & 2) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_BUTTON2);
  }
  else if ((uVar1 & 2) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_BUTTON2);
  }
  if ((_DAT_01c38b00 & 4) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_BUTTON3);
  }
  else if ((uVar1 & 4) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_BUTTON3);
  }
  if ((_DAT_01c38b00 & 8) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_BUTTON4);
  }
  else if ((uVar1 & 8) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_BUTTON4);
  }
  if ((_DAT_01c38b00 & 0x10) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_BUTTON5);
  }
  else if ((uVar1 & 0x10) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_BUTTON5);
  }
  if ((_DAT_01c38b00 & 0x20) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_BUTTON6);
  }
  else if ((uVar1 & 0x20) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_BUTTON6);
  }
  if ((_DAT_01c38b00 & 0x40) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_BUTTON7);
  }
  else if ((uVar1 & 0x40) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_BUTTON7);
  }
  if ((_DAT_01c38b00 & 0x80) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_BUTTON8);
  }
  else if ((uVar1 & 0x80) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_BUTTON8);
  }
  if ((_DAT_01c38b00 & 0x100) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_BUTTON9);
  }
  else if ((uVar1 & 0x100) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_BUTTON9);
  }
  if ((_DAT_01c38b00 & 0x200) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_BUTTON10);
  }
  else if ((uVar1 & 0x200) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_BUTTON10);
  }
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_LEFT);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_RIGHT);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_UP);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(0x01D02F84,DIJ_DOWN);
  if (_DAT_01c38af0 < this_ptr->x_center - (this_ptr->x_center - this_ptr->x_stick_min) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_LEFT);
  }
  if ((this_ptr->x_stick_max - this_ptr->x_center) / 2 + this_ptr->x_center < _DAT_01c38af0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_RIGHT);
  }
  if (_DAT_01c38af4 < this_ptr->y_center - (this_ptr->y_center - this_ptr->y_stick_min) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_UP);
  }
  if ((this_ptr->y_stick_max - this_ptr->y_center) / 2 + this_ptr->y_center < _DAT_01c38af4) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(0x01D02F84,DIJ_DOWN);
    return;
  }
  return;
}
