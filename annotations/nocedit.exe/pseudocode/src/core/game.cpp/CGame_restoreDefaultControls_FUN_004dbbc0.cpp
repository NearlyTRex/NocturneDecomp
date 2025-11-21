// Name: core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
// Address: 004dbbc0
// Address Range: [[004dbbc0, 004dbd77]]
// Convention: unknown
// Signature: undefined core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0()
// Cross-references:
//   core_game.cpp_CGame_ctor_FUN_004d7b40 (004d7b40) at 004d7b9f [UNCONDITIONAL_CALL]
//   core_inivar.cpp_readIniData_FUN_004fbd90 (004fbd90) at 004fc017 [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 005147a0 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: CGame* core_game.cpp_CGame_restoreDefaultControls(CGame* param_1) */

void core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x2c) = 0x150;
  *(undefined4 *)(in_stack_00000004 + 0x30) = 0x2a;
  *(undefined4 *)(in_stack_00000004 + 0x34) = 0x38;
  *(undefined4 *)(in_stack_00000004 + 0x38) = 0x2c;
  *(undefined4 *)(in_stack_00000004 + 0x3c) = 0x2d;
  *(undefined4 *)(in_stack_00000004 + 0x40) = 0x14d;
  *(undefined4 *)(in_stack_00000004 + 0x44) = 0x14b;
  *(undefined4 *)(in_stack_00000004 + 0x48) = 0x39;
  *(undefined4 *)(in_stack_00000004 + 0x4c) = 0x1c;
  *(undefined4 *)(in_stack_00000004 + 0x50) = 0x21;
  *(undefined4 *)(in_stack_00000004 + 0x54) = 0x17;
  *(undefined4 *)(in_stack_00000004 + 0x58) = 0x20;
  *(undefined4 *)(in_stack_00000004 + 0x5c) = 0x22;
  *(undefined4 *)(in_stack_00000004 + 0x60) = 0x10;
  *(undefined4 *)(in_stack_00000004 + 100) = 0x1e;
  *(undefined4 *)(in_stack_00000004 + 0x68) = 2;
  *(undefined4 *)(in_stack_00000004 + 0x6c) = 3;
  *(undefined4 *)(in_stack_00000004 + 0x70) = 4;
  *(undefined4 *)(in_stack_00000004 + 0x74) = 5;
  *(undefined4 *)(in_stack_00000004 + 0x78) = 6;
  *(undefined4 *)(in_stack_00000004 + 0x80) = 0xc;
  *(undefined4 *)(in_stack_00000004 + 0x7c) = 0xd;
  *(undefined4 *)(in_stack_00000004 + 0x84) = 0x1a;
  *(undefined4 *)(in_stack_00000004 + 0x88) = 0x1b;
  *(undefined4 *)(in_stack_00000004 + 0x8c) = 0x35;
  *(undefined4 *)(in_stack_00000004 + 0x90) = 0x29;
  *(undefined4 *)(in_stack_00000004 + 0x94) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x98) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x9c) = 0x10000;
  *(undefined4 *)(in_stack_00000004 + 0xa0) = 0x10000;
  *(undefined4 *)(in_stack_00000004 + 0xc4) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x28) = 0x148;
  if (*(int *)(in_stack_00000004 + 0xbc) == 1) {
    *(undefined4 *)(in_stack_00000004 + 0x2c) = 0x1f;
    *(undefined4 *)(in_stack_00000004 + 0x38) = 0x1e;
    *(undefined4 *)(in_stack_00000004 + 0x3c) = 0x20;
    *(undefined4 *)(in_stack_00000004 + 0x30) = 0x3a;
    *(undefined4 *)(in_stack_00000004 + 0x48) = 0x200;
    *(undefined4 *)(in_stack_00000004 + 0x60) = 0x256;
    *(undefined4 *)(in_stack_00000004 + 100) = 0x256;
    *(undefined4 *)(in_stack_00000004 + 0x44) = 0x255;
    *(undefined4 *)(in_stack_00000004 + 0x40) = 0x255;
    *(undefined4 *)(in_stack_00000004 + 0x58) = 0x12;
    *(undefined4 *)(in_stack_00000004 + 0x5c) = 0x22;
    *(undefined4 *)(in_stack_00000004 + 0x50) = 0x10;
    *(undefined4 *)(in_stack_00000004 + 0xc4) = 2;
    *(undefined4 *)(in_stack_00000004 + 0x28) = 0x11;
    if (*(int *)(in_stack_00000004 + 0xbc) != 2) {
      return;
    }
  }
  else if (*(int *)(in_stack_00000004 + 0xbc) != 2) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x58) = 0x203;
  *(undefined4 *)(in_stack_00000004 + 0x4c) = 0x204;
  *(undefined4 *)(in_stack_00000004 + 0x44) = 0x251;
  *(undefined4 *)(in_stack_00000004 + 0x40) = 0x252;
  *(undefined4 *)(in_stack_00000004 + 0x28) = 0x253;
  *(undefined4 *)(in_stack_00000004 + 0x2c) = 0x254;
  *(undefined4 *)(in_stack_00000004 + 0x48) = 0x202;
  return;
}


// Assembly code:
// 004dbbc0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
//   XREF to: Stack[0x4] (READ)
// 004dbbc4: MOV dword ptr [EAX + 0x2c],0x150
// 004dbbcb: MOV dword ptr [EAX + 0x30],0x2a
// 004dbbd2: MOV dword ptr [EAX + 0x34],0x38
// 004dbbd9: MOV dword ptr [EAX + 0x38],0x2c
// 004dbbe0: MOV dword ptr [EAX + 0x3c],0x2d
// 004dbbe7: MOV dword ptr [EAX + 0x40],0x14d
// 004dbbee: MOV dword ptr [EAX + 0x44],0x14b
// 004dbbf5: MOV dword ptr [EAX + 0x48],0x39
// 004dbbfc: MOV dword ptr [EAX + 0x4c],0x1c
// 004dbc03: MOV dword ptr [EAX + 0x50],0x21
// 004dbc0a: MOV dword ptr [EAX + 0x54],0x17
// 004dbc11: MOV dword ptr [EAX + 0x58],0x20
// 004dbc18: MOV dword ptr [EAX + 0x5c],0x22
// 004dbc1f: MOV dword ptr [EAX + 0x60],0x10
// 004dbc26: MOV dword ptr [EAX + 0x64],0x1e
// 004dbc2d: MOV dword ptr [EAX + 0x68],0x2
// 004dbc34: MOV dword ptr [EAX + 0x6c],0x3
// 004dbc3b: MOV dword ptr [EAX + 0x70],0x4
// 004dbc42: MOV dword ptr [EAX + 0x74],0x5
// 004dbc49: MOV dword ptr [EAX + 0x78],0x6
// 004dbc50: MOV dword ptr [EAX + 0x80],0xc
// 004dbc5a: MOV dword ptr [EAX + 0x7c],0xd
// 004dbc61: MOV dword ptr [EAX + 0x84],0x1a
// 004dbc6b: MOV dword ptr [EAX + 0x88],0x1b
// 004dbc75: MOV dword ptr [EAX + 0x8c],0x35
// 004dbc7f: MOV dword ptr [EAX + 0x90],0x29
// 004dbc89: MOV dword ptr [EAX + 0x94],0x0
// 004dbc93: MOV dword ptr [EAX + 0x98],0x0
// 004dbc9d: MOV dword ptr [EAX + 0x9c],0x10000
// 004dbca7: MOV dword ptr [EAX + 0xa0],0x10000
// 004dbcb1: MOV dword ptr [EAX + 0xc4],0x0
// 004dbcbb: MOV EDX,dword ptr [EAX + 0xbc]
// 004dbcc1: MOV dword ptr [EAX + 0x28],0x148
// 004dbcc8: CMP EDX,0x1
// 004dbccb: JZ 0x004dbcd7
//   XREF to: 004dbcd7 (CONDITIONAL_JUMP)
// 004dbccd: CMP dword ptr [EAX + 0xbc],0x2
// 004dbcd4: JZ 0x004dbd46
//   XREF to: 004dbd46 (CONDITIONAL_JUMP)
// 004dbcd6: RET
// 004dbcd7: MOV dword ptr [EAX + 0x2c],0x1f
//   Label: LAB_004dbcd7
// 004dbcde: MOV dword ptr [EAX + 0x38],0x1e
// 004dbce5: MOV dword ptr [EAX + 0x3c],0x20
// 004dbcec: MOV dword ptr [EAX + 0x30],0x3a
// 004dbcf3: MOV dword ptr [EAX + 0x48],0x200
// 004dbcfa: MOV dword ptr [EAX + 0x60],0x256
// 004dbd01: MOV dword ptr [EAX + 0x64],0x256
// 004dbd08: MOV dword ptr [EAX + 0x44],0x255
// 004dbd0f: MOV dword ptr [EAX + 0x40],0x255
// 004dbd16: MOV dword ptr [EAX + 0x58],0x12
// 004dbd1d: MOV dword ptr [EAX + 0x5c],0x22
// 004dbd24: MOV dword ptr [EAX + 0x50],0x10
// 004dbd2b: MOV dword ptr [EAX + 0xc4],0x2
// 004dbd35: MOV dword ptr [EAX + 0x28],0x11
// 004dbd3c: CMP dword ptr [EAX + 0xbc],0x2
// 004dbd43: JZ 0x004dbd46
//   XREF to: 004dbd46 (CONDITIONAL_JUMP)
// 004dbd45: RET
// 004dbd46: MOV dword ptr [EAX + 0x58],0x203
//   Label: LAB_004dbd46
// 004dbd4d: MOV dword ptr [EAX + 0x4c],0x204
// 004dbd54: MOV dword ptr [EAX + 0x44],0x251
// 004dbd5b: MOV dword ptr [EAX + 0x40],0x252
// 004dbd62: MOV dword ptr [EAX + 0x28],0x253
// 004dbd69: MOV dword ptr [EAX + 0x2c],0x254
// 004dbd70: MOV dword ptr [EAX + 0x48],0x202
// 004dbd77: RET
