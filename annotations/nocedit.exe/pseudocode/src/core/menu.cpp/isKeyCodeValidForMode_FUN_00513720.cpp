// Name: core_menu.cpp_isKeyCodeValidForMode_FUN_00513720
// Address: 00513720
// Address Range: [[00513720, 0051385d]]
// Convention: __cdecl
// Signature: int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(int * key_code_ptr, char * description)

#include "nocturne.h"

int __cdecl core_menu_cpp_isKeyCodeValidForMode_FUN_00513720(int *key_code_ptr,char *description)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = g_CGamePtr->game_control;
  if (iVar1 == CONTROL_MODE_KEYBOARD) {
    uVar2 = *key_code_ptr;
    if (uVar2 < 0x209) {
      if (((uVar2 < 0x204) && (uVar2 < 0x201)) && (uVar2 != 0x200)) {
        return 0;
      }
    }
    else if (0x209 < uVar2) {
      if (uVar2 < 0x252) {
        if ((((0x20a < uVar2) && (0x20b < uVar2)) && (0x20c < uVar2)) && (uVar2 != 0x251)) {
          return 0;
        }
      }
      else if (((0x252 < uVar2) && (0x253 < uVar2)) &&
              ((0x254 < uVar2 && ((0x255 < uVar2 && (uVar2 != 0x256)))))) {
        return 0;
      }
    }
  }
  else {
    if (iVar1 != CONTROL_MODE_MOUSE) {
      if (iVar1 == CONTROL_MODE_GAMEPAD) {
        uVar2 = *key_code_ptr;
        if (0x20b < uVar2) {
          if (uVar2 < 0x20d) {
            return 1;
          }
          if (uVar2 < 0x255) {
            return 0;
          }
          if (uVar2 < 0x256) {
            return 1;
          }
          if (uVar2 == 0x256) {
            return 1;
          }
          return 0;
        }
        if (0x1ff < uVar2) {
          if (uVar2 < 0x201) {
            return 1;
          }
          if (uVar2 == 0x201) {
            return 1;
          }
        }
      }
      return 0;
    }
    uVar2 = *key_code_ptr;
    if (uVar2 < 0x208) {
      if (uVar2 < 0x204) {
        if (uVar2 < 0x202) {
          return 0;
        }
        return 1;
      }
    }
    else if (0x208 < uVar2) {
      if (uVar2 < 0x251) {
        if (((0x209 < uVar2) && (0x20a < uVar2)) && (uVar2 != 0x20b)) {
          return 0;
        }
      }
      else if ((((0x251 < uVar2) && (0x252 < uVar2)) && (0x253 < uVar2)) && (uVar2 != 0x254)) {
        return 0;
      }
    }
  }
  return 1;
}
