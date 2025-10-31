// Name: core_ground.cpp_getGroundTypeColor_FUN_004eee20
// Address: 004eee20
// Address Range: [[004eee20, 004eee78]]
// Convention: __cdecl
// Signature: uint core_ground.cpp_getGroundTypeColor_FUN_004eee20(int type)
// Globals:
//   void* switchdataD_004eede0 = 004eee31

#include "nocturne.h"

uint __cdecl core_ground_cpp_getGroundTypeColor_FUN_004eee20(int type)

{
  switch(type) {
  case 1:
    return 5;
  case 2:
  case 5:
    return 0xf8;
  case 3:
    return 2;
  case 4:
    return 0xfa;
  case 6:
    return 4;
  case 7:
    return 3;
  case 8:
    return 6;
  case 9:
  case 0xb:
    return 1;
  case 10:
    return 0xf9;
  case 0xc:
    return 0xfc;
  case 0xd:
    return 7;
  default:
    return 0xfd;
  }
}


// Assembly code:
// 004eee20: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_ground.cpp_getGroundTypeColor_FUN_004eee20
//   XREF to: Stack[0x4] (READ)
// 004eee24: DEC EAX
// 004eee25: CMP EAX,0xc
// 004eee28: JA 0x004eee73
//   XREF to: 004eee73 (CONDITIONAL_JUMP)
// 004eee2a: JMP dword ptr [EAX*0x4 + 0x4eede0]
//   Label: switchD
//   XREF to: 004eee31 (COMPUTED_JUMP)
//   XREF to: 004eee37 (COMPUTED_JUMP)
//   XREF to: 004eee3d (COMPUTED_JUMP)
//   XREF to: 004eee43 (COMPUTED_JUMP)
//   XREF to: 004eee49 (COMPUTED_JUMP)
//   XREF to: 004eee4f (COMPUTED_JUMP)
//   XREF to: 004eee55 (COMPUTED_JUMP)
//   XREF to: 004eee5b (COMPUTED_JUMP)
//   XREF to: 004eee61 (COMPUTED_JUMP)
//   XREF to: 004eee67 (COMPUTED_JUMP)
//   XREF to: 004eee6d (COMPUTED_JUMP)
//   XREF to: 004eede0 (DATA)
// 004eee31: MOV EAX,0x5
//   Label: caseD_1
// 004eee36: RET
// 004eee37: MOV EAX,0xf8
//   Label: caseD_5
// 004eee3c: RET
// 004eee3d: MOV EAX,0x2
//   Label: caseD_3
// 004eee42: RET
// 004eee43: MOV EAX,0xfa
//   Label: caseD_4
// 004eee48: RET
// 004eee49: MOV EAX,0x4
//   Label: caseD_6
// 004eee4e: RET
// 004eee4f: MOV EAX,0x3
//   Label: caseD_7
// 004eee54: RET
// 004eee55: MOV EAX,0x6
//   Label: caseD_8
// 004eee5a: RET
// 004eee5b: MOV EAX,0x1
//   Label: caseD_b
// 004eee60: RET
// 004eee61: MOV EAX,0xf9
//   Label: caseD_a
// 004eee66: RET
// 004eee67: MOV EAX,0xfc
//   Label: caseD_c
// 004eee6c: RET
// 004eee6d: MOV EAX,0x7
//   Label: caseD_d
// 004eee72: RET
// 004eee73: MOV EAX,0xfd
//   Label: default
// 004eee78: RET
