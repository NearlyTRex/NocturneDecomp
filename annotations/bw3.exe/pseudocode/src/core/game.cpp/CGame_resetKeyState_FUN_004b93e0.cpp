// Name: core_game.cpp_CGame_resetKeyState_FUN_004b93e0
// Address: 004b93e0
// Address Range: [[004b93e0, 004b97ad]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004b93e0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004b93e0(CGame *this_ptr)

{
  uint uVar1;
  
  uVar1 = _DAT_01c6e260;
  _DAT_01c6e264 = 2;
  wincore_winrun_cpp_getJoystickState_FUN_00581d10();
  if ((_DAT_01c6e260 & 1) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_BUTTON1);
  }
  else if ((uVar1 & 1) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_BUTTON1);
  }
  if ((_DAT_01c6e260 & 2) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_BUTTON2);
  }
  else if ((uVar1 & 2) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_BUTTON2);
  }
  if ((_DAT_01c6e260 & 4) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_BUTTON3);
  }
  else if ((uVar1 & 4) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_BUTTON3);
  }
  if ((_DAT_01c6e260 & 8) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_BUTTON4);
  }
  else if ((uVar1 & 8) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_BUTTON4);
  }
  if ((_DAT_01c6e260 & 0x10) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_BUTTON5);
  }
  else if ((uVar1 & 0x10) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_BUTTON5);
  }
  if ((_DAT_01c6e260 & 0x20) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_BUTTON6);
  }
  else if ((uVar1 & 0x20) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_BUTTON6);
  }
  if ((_DAT_01c6e260 & 0x40) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_BUTTON7);
  }
  else if ((uVar1 & 0x40) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_BUTTON7);
  }
  if ((_DAT_01c6e260 & 0x80) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_BUTTON8);
  }
  else if ((uVar1 & 0x80) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_BUTTON8);
  }
  if ((_DAT_01c6e260 & 0x100) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_BUTTON9);
  }
  else if ((uVar1 & 0x100) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_BUTTON9);
  }
  if ((_DAT_01c6e260 & 0x200) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_BUTTON10);
  }
  else if ((uVar1 & 0x200) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_BUTTON10);
  }
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_LEFT);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_RIGHT);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_UP);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(0x01D70A78,DIJ_DOWN);
  if (_DAT_01c6e250 <
      *(int *)&this_ptr->field_0xbc -
      (*(int *)&this_ptr->field_0xbc - *(int *)&this_ptr->field_0xc4) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_LEFT);
  }
  if ((*(int *)&this_ptr->field_0xc8 - *(int *)&this_ptr->field_0xbc) / 2 +
      *(int *)&this_ptr->field_0xbc < _DAT_01c6e250) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_RIGHT);
  }
  if (_DAT_01c6e254 <
      *(int *)&this_ptr->field_0xc0 -
      (*(int *)&this_ptr->field_0xc0 - *(int *)&this_ptr->field_0xcc) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_UP);
  }
  if ((*(int *)&this_ptr->field_0xd0 - *(int *)&this_ptr->field_0xc0) / 2 +
      *(int *)&this_ptr->field_0xc0 < _DAT_01c6e254) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(0x01D70A78,DIJ_DOWN);
    return;
  }
  return;
}
