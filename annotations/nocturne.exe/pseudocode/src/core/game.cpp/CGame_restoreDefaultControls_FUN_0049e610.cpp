// Name: core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610
// Address: 0049e610
// Address Range: [[0049e610, 0049e7c7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_0049e610(int param_1)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_0049e610(int param_1)

{
  *(uint *)(param_1 + 0x2c) = 0x150;
  *(uint *)(param_1 + 0x30) = 0x2a;
  *(uint *)(param_1 + 0x34) = 0x38;
  *(uint *)(param_1 + 0x38) = 0x2c;
  *(uint *)(param_1 + 0x3c) = 0x2d;
  *(uint *)(param_1 + 0x40) = 0x14d;
  *(uint *)(param_1 + 0x44) = 0x14b;
  *(uint *)(param_1 + 0x48) = 0x39;
  *(uint *)(param_1 + 0x4c) = 0x1c;
  *(uint *)(param_1 + 0x50) = 0x21;
  *(uint *)(param_1 + 0x54) = 0x17;
  *(uint *)(param_1 + 0x58) = 0x20;
  *(uint *)(param_1 + 0x5c) = 0x22;
  *(uint *)(param_1 + 0x60) = 0x10;
  *(uint *)(param_1 + 100) = 0x1e;
  *(uint *)(param_1 + 0x68) = 2;
  *(uint *)(param_1 + 0x6c) = 3;
  *(uint *)(param_1 + 0x70) = 4;
  *(uint *)(param_1 + 0x74) = 5;
  *(uint *)(param_1 + 0x78) = 6;
  *(uint *)(param_1 + 0x80) = 0xc;
  *(uint *)(param_1 + 0x7c) = 0xd;
  *(uint *)(param_1 + 0x84) = 0x1a;
  *(uint *)(param_1 + 0x88) = 0x1b;
  *(uint *)(param_1 + 0x8c) = 0x35;
  *(uint *)(param_1 + 0x90) = 0x29;
  *(uint *)(param_1 + 0x94) = 0;
  *(uint *)(param_1 + 0x98) = 0;
  *(uint *)(param_1 + 0x9c) = 0x10000;
  *(uint *)(param_1 + 0xa0) = 0x10000;
  *(uint *)(param_1 + 0xc4) = 0;
  *(uint *)(param_1 + 0x28) = 0x148;
  if (*(int *)(param_1 + 0xbc) == 1) {
    *(uint *)(param_1 + 0x2c) = 0x1f;
    *(uint *)(param_1 + 0x38) = 0x1e;
    *(uint *)(param_1 + 0x3c) = 0x20;
    *(uint *)(param_1 + 0x30) = 0x3a;
    *(uint *)(param_1 + 0x48) = 0x200;
    *(uint *)(param_1 + 0x60) = 0x256;
    *(uint *)(param_1 + 100) = 0x256;
    *(uint *)(param_1 + 0x44) = 0x255;
    *(uint *)(param_1 + 0x40) = 0x255;
    *(uint *)(param_1 + 0x58) = 0x12;
    *(uint *)(param_1 + 0x5c) = 0x22;
    *(uint *)(param_1 + 0x50) = 0x10;
    *(uint *)(param_1 + 0xc4) = 2;
    *(uint *)(param_1 + 0x28) = 0x11;
    if (*(int *)(param_1 + 0xbc) != 2) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0xbc) != 2) {
    return;
  }
  *(uint *)(param_1 + 0x58) = 0x203;
  *(uint *)(param_1 + 0x4c) = 0x204;
  *(uint *)(param_1 + 0x44) = 0x251;
  *(uint *)(param_1 + 0x40) = 0x252;
  *(uint *)(param_1 + 0x28) = 0x253;
  *(uint *)(param_1 + 0x2c) = 0x254;
  *(uint *)(param_1 + 0x48) = 0x202;
  return;
}
