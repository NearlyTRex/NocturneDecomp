// Name: core_game.cpp_CGame_resetKeyState_FUN_004dbe60
// Address: 004dbe60
// Address Range: [[004dbe60, 004dc22d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004dbe60(void)

#include "nocturne.h"

/* Signature: byte core_game.cpp_CGame_resetKeyState(CGame* pGame) */

void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004dbe60(void)

{
  DWORD DVar1;
  int in_stack_00000004;
  
  DVar1 = g_JoyButtons;
  g_JoystickPresent = 2;
  wincore_winrun_cpp_getJoystickState_FUN_005f43a0();
  if ((g_JoyButtons & 1) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x202);
  }
  else if ((DVar1 & 1) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x202);
  }
  if ((g_JoyButtons & 2) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x203);
  }
  else if ((DVar1 & 2) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x203);
  }
  if ((g_JoyButtons & 4) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x204);
  }
  else if ((DVar1 & 4) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x204);
  }
  if ((g_JoyButtons & 8) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x205);
  }
  else if ((DVar1 & 8) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x205);
  }
  if ((g_JoyButtons & 0x10) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x206);
  }
  else if ((DVar1 & 0x10) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x206);
  }
  if ((g_JoyButtons & 0x20) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x207);
  }
  else if ((DVar1 & 0x20) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x207);
  }
  if ((g_JoyButtons & 0x40) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x208);
  }
  else if ((DVar1 & 0x40) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x208);
  }
  if ((g_JoyButtons & 0x80) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x209);
  }
  else if ((DVar1 & 0x80) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x209);
  }
  if ((g_JoyButtons & 0x100) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x20a);
  }
  else if ((DVar1 & 0x100) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x20a);
  }
  if ((g_JoyButtons & 0x200) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x20b);
  }
  else if ((DVar1 & 0x200) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x20b);
  }
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x251);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x252);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x253);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x254);
  if ((int)g_JoyXPos <
      *(int *)(in_stack_00000004 + 0xa4) -
      (*(int *)(in_stack_00000004 + 0xa4) - *(int *)(in_stack_00000004 + 0xac)) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x251);
  }
  if ((*(int *)(in_stack_00000004 + 0xb0) - *(int *)(in_stack_00000004 + 0xa4)) / 2 +
      *(int *)(in_stack_00000004 + 0xa4) < (int)g_JoyXPos) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x252);
  }
  if ((int)g_JoyYPos <
      *(int *)(in_stack_00000004 + 0xa8) -
      (*(int *)(in_stack_00000004 + 0xa8) - *(int *)(in_stack_00000004 + 0xb4)) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x253);
  }
  if ((*(int *)(in_stack_00000004 + 0xb8) - *(int *)(in_stack_00000004 + 0xa8)) / 2 +
      *(int *)(in_stack_00000004 + 0xa8) < (int)g_JoyYPos) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x254);
    return;
  }
  return;
}
